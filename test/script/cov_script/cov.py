import sys
import os
import glob
import re

codeRootDir=sys.argv[1]
buildDir=sys.argv[2]
covResultDir=sys.argv[3]

# get abs path of code root dir
absCodeRootDir=os.path.abspath(codeRootDir)

# create cov meta data dir
covMetaDataDir=os.path.join(covResultDir, "metadata")
os.system("mkdir -p %s" %(covMetaDataDir))

# create cov covage dir
covCoverageDir=os.path.join(covResultDir, "coverage")
os.system("mkdir -p %s" %(covCoverageDir))

for root, dirs, files in os.walk(buildDir):
    desDir = root.replace(buildDir, covMetaDataDir)

    if not os.path.isdir(desDir):
        print "create dir %s to save meta data" %(desDir)
        os.system("mkdir -p %s" %(desDir))

    for file in files:
        if file.endswith(".gcno") or file.endswith(".gcda"):
            filePath = os.path.join(root, file)
            os.system("cp %s %s" %(filePath, desDir))
            print "cp meta data from %s to %s" %(filePath, desDir)

# capture meta data to tracefile(and excluded dsignated line or branch)
covMetaTracefilePath=os.path.join(covResultDir, "cov_meta.info")
os.system("lcov --capture" +
        " --base-directory %s" %(covResultDir) +
        " --directory %s" %(covMetaDataDir) + 
        " --rc lcov_branch_coverage=1" +
        " --rc lcov_excl_line=LCOV_EXCL_LINE" +
        " --rc lcov_excl_br_line=LCOV_EXCL_BR_LINE" +
        " --output-file %s" %(covMetaTracefilePath))

# remove cov data from tracefile by designaged patterns
covTracefilePath=os.path.join(covCoverageDir, "cov.info")
os.system("lcov --output-file %s" %(covTracefilePath) + 
        " --rc lcov_branch_coverage=1" +
        " --remove %s */debug/*" %(covMetaTracefilePath))

# generate html cov data
covTracefileName=os.path.splitext(os.path.split(covTracefilePath)[-1])[0]
covHtmlPath=os.path.join(covCoverageDir, "COV_%s" %(covTracefileName))
os.system("genhtml " + 
        " --legend" +
        " --branch-coverage" +
        " --prefix %s" %(absCodeRootDir) +
        " --output-directory %s" %(covHtmlPath) +
        " %s" %(covTracefilePath))

print "html index.html locate at %s" %(os.path.abspath("%s/index.html" %(covHtmlPath)))

#! /bin/sh
baseDir=$(cd $(dirname $0); pwd -P)
codeRootDir="${baseDir}/../.."
buildDir="${baseDir}/../build"
covScriptDir="${baseDir}/cov_script"
covResultDir="${baseDir}/../cov_result"

${baseDir}/clean.sh

${baseDir}/build.sh

echo "rm cov result dir ${covResultDir}"
rm -rf ${covResultDir}

echo "create cov result dir ${covResultDir}"
mkdir -p ${covResultDir}

${covScriptDir}/cov.sh ${codeRootDir} ${buildDir} ${covScriptDir} ${covResultDir}
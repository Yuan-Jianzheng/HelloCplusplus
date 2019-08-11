#! /bin/sh

codeRootDir=$1
buildDir=$2
covScriptDir=$3
covResultDir=$4

python ${covScriptDir}/cov.py ${codeRootDir} ${buildDir} ${covResultDir}

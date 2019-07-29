#! /bin/sh
baseDir=$(cd $(dirname $0); pwd -P)
buildDir="${baseDir}/../build"
echo "build dir: $buildDir"
echo "clear build dir $buildDir"

if [ -d ../build ]; then
    rm -rf $buildDir
fi

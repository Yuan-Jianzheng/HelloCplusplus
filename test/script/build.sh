#! /bin/sh
baseDir=$(cd $(dirname $0); pwd -P)
buildDir="${baseDir}/../build"

if [ ! -d ${buildDir} ]; then
    echo "create build dir ${buildDir}"
    mkdir -p ${buildDir}
fi

cd ${buildDir}

cmake ..
cmake --build .

./debug.exe
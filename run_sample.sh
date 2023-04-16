#!/bin/bash

if [[ $1 -eq 1 ]]
then
    echo  "Run sample app with v1 opaque lib..."
    #TODO: change here
    LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/mnt/d/D-cpp/ABI/vendor/build:/mnt/d/D-cpp/ABI/thirdParty/v1/build" ./app/v1/build/sampleApp
else
    echo  "Run sample app with v2 opaque lib..."
    #TODO: change here
    LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/mnt/d/D-cpp/ABI/vendor/build:/mnt/d/D-cpp/ABI/thirdParty/v2/build" ./app/v2/build/sampleApp
fi
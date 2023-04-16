echo "build opaque lib v1......"
cmake -DCMAKE_BUILD_TYPE=Debug thirdParty/v1/ -B thirdParty/v1/build/
cmake --build thirdParty/v1/build/
echo "build opaque lib v1 complete"
echo "build opaque lib v2......"
cmake -DCMAKE_BUILD_TYPE=Debug thirdParty/v2/ -B thirdParty/v2/build/
cmake --build thirdParty/v2/build/
echo "build opaque lib v2 complete"
echo "build vendor lib......"
cmake -DCMAKE_BUILD_TYPE=Debug vendor/ -B vendor/build/
cmake --build vendor/build/
echo "build vendor lib complete"
echo "build sample app v1......"
cmake -DCMAKE_BUILD_TYPE=Debug app/v1/ -B app/v1/build/
cmake --build app/v1/build/
echo "build sample app v1 complete"
echo "build sample app v2......"
cmake -DCMAKE_BUILD_TYPE=Debug app/v2/ -B app/v2/build/
cmake --build app/v2/build/
echo "build sample app v2 complete"

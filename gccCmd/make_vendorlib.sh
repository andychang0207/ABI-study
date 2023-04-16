#TODO: change here
/usr/bin/c++ -fPIC -c -I/mnt/d/D-cpp/ABI/vendor/include -I/mnt/d/D-cpp/ABI/thirdParty/v2/include /mnt/d/D-cpp/ABI/vendor/src/utils.cpp
/usr/bin/c++ -shared utils.o -o libvendorlib.so
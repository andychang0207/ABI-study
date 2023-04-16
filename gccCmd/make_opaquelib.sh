#TODO: change here
/usr/bin/c++ -fPIC -c -I/mnt/d/D-cpp/ABI/thirdParty/v2/include /mnt/d/D-cpp/ABI/thirdParty/v2/src/opaque_api.cpp
/usr/bin/c++ -shared opaque_api.o -o libopaquelib.so
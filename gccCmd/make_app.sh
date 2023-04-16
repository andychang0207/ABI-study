#TODO: change here
/usr/bin/c++ -I/mnt/d/D-cpp/ABI/vendor/include -o main.o -c /mnt/d/D-cpp/ABI/app/main.cpp
/usr/bin/c++ main.o -o main libvendorlib.so libopaquelib.so
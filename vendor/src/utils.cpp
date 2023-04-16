#include<iostream>
#include "opaque_api.h"
#include "utils.h"
#define VENDOR_TRY try
#define VENDOR_CATCH catch(std::exception& e)
#define VENDOR_ERR_LOG(mes) std::cout << mes

namespace Vendor{
    bool DoSomething(){
        VENDOR_TRY{
            using namespace Opaque;
            OpaqueFoo* F;
            if(!CreateOpaqueFoo(&F)){
                VENDOR_ERR_LOG("CreateOpaqueFoo failed!") << std::endl;
            }
            if(!SetOpaqueFooX(F, 69)){
                VENDOR_ERR_LOG("SetOpaqueFooX failed!") << std::endl;
            }
            if(!SetOpaqueFooU(F, 'A')){
                VENDOR_ERR_LOG("SetOpaqueFooU failed!") << std::endl;
            }
            if(!DeleteOpaqueFoo(F)){
                VENDOR_ERR_LOG("DeleteOpaqueFoo failed!") << std::endl;
            }
            std::cout << "DoSomething successfully completed!" << std::endl;
            return true;
        }
        VENDOR_CATCH {
            VENDOR_ERR_LOG("DoSomething error cause: ") << e.what() << std::endl;
            return false;
        }
    }
}
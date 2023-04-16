#include "opaque_api.h"
#include <exception>
#include <iostream>
#define OPAQUE_TRY try
#define OPAQUE_CATCH catch(std::exception& e)
#define OPAQUE_ERR_LOG(mes) std::cout << mes
#define OPAQUE_ECHO std::cout << "This is V2." << std::endl
namespace Opaque {
typedef struct {
    int x;
    char u;
    short int b;
    } Foo;
    bool CreateOpaqueFoo(OpaqueFoo** F) {
        OPAQUE_TRY{
            OPAQUE_ECHO;
            if (F == nullptr) return false;
            *F = reinterpret_cast<OpaqueFoo*>(new Foo{});
            return true;
        }
        OPAQUE_CATCH {
            OPAQUE_ERR_LOG("CreateOpaqueFoo error cause: ") << e.what() << std::endl;
            return false;
        }
    }
    bool SetOpaqueFooX(OpaqueFoo* F, int x){
        OPAQUE_TRY{
            OPAQUE_ECHO;
            Foo* f = reinterpret_cast<Foo*>(F);
            f->x = x;
            return true;
        }
        OPAQUE_CATCH {
            OPAQUE_ERR_LOG("SetOpaqueFooX error cause: ") << e.what() << std::endl;
            return false;
        }
    }
    bool SetOpaqueFooU(OpaqueFoo* F, char u){
        OPAQUE_TRY{
            OPAQUE_ECHO;
            Foo* f = reinterpret_cast<Foo*>(F);
            f->u = u;
            return true;
        }
        OPAQUE_CATCH {
            OPAQUE_ERR_LOG("SetOpaqueFooU error cause: ") << e.what() << std::endl;
            return false;
        }
    }
    bool SetOpaqueFooB(OpaqueFoo* F, short int b){
        OPAQUE_TRY{
            OPAQUE_ECHO;
            Foo* f = reinterpret_cast<Foo*>(F);
            f->b = b;
            return true;
        }
        OPAQUE_CATCH {
            OPAQUE_ERR_LOG("SetOpaqueFooU error cause: ") << e.what() << std::endl;
            return false;
        }
    }
    bool DeleteOpaqueFoo(OpaqueFoo* F){
        OPAQUE_TRY{
            OPAQUE_ECHO;
            Foo* f = reinterpret_cast<Foo*>(F);
            delete f;
            return true;
        }
        OPAQUE_CATCH {
            OPAQUE_ERR_LOG("DeleteOpaqueFoo error cause: ") << e.what() << std::endl;
            return false;
        }
    }
    }  // namespace Opaque
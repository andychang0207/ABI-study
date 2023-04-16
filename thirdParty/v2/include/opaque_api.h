#pragma once
#define OPAQUE_INTERFACE_H
#define OPAQUE_API
#ifdef __cplusplus
extern "C" {
#endif
namespace Opaque{
    OPAQUE_API typedef struct OpaqueFoo OpaqueFoo;
    OPAQUE_API bool CreateOpaqueFoo(OpaqueFoo** F);
    OPAQUE_API bool SetOpaqueFooX(OpaqueFoo* F, int x);
    OPAQUE_API bool SetOpaqueFooU(OpaqueFoo* F, char u);
    OPAQUE_API bool SetOpaqueFooB(OpaqueFoo* F, short int b);
    OPAQUE_API bool DeleteOpaqueFoo(OpaqueFoo* F);
}
#ifdef __cplusplus
}
#endif 
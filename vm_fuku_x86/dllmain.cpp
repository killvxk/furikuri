
#include "stdafx.h"


uint8_t pcode[] = { vm_opcode_86_pure, 0x5, 0x0, 0xb8 ,0 ,0 ,0 ,0  };

int main() {

    void *ptr_code = pcode;

    __asm {
        push ptr_code
        jmp fuku_vm_entry
    }
    
    return 0;
}

/*
BOOL APIENTRY main_dll( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call) {

    case DLL_PROCESS_ATTACH: {

        break;
    }

    case DLL_THREAD_ATTACH: {

        break;
    }

    case DLL_THREAD_DETACH: {

        break;
    }

    case DLL_PROCESS_DETACH: {

        break;
    }


    default:
        break;
    }
    return TRUE;
}*/


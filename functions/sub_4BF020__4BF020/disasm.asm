0x4BF020: mov     eax, [ecx+24h]
0x4BF023: test    eax, eax
0x4BF025: jz      short loc_4BF02E
0x4BF027: mov     eax, [eax+98h]
0x4BF02D: retn
0x4BF02E: mov     ecx, [ecx+20h]; this
0x4BF031: test    ecx, ecx
0x4BF033: jz      short loc_4BF03A
0x4BF035: jmp     TESObjectCELL_GetXCoordinate
0x4BF03A: xor     eax, eax
0x4BF03C: retn

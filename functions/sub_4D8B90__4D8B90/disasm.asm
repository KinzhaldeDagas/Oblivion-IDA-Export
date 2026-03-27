0x4D8B90: mov     eax, [ecx+40h]
0x4D8B93: test    eax, eax
0x4D8B95: jz      short loc_4D8B9E
0x4D8B97: mov     ecx, eax; this
0x4D8B99: jmp     TESObjectCELL_IsInterior
0x4D8B9E: mov     eax, [ecx+18h]
0x4D8BA1: mov     edx, [eax]
0x4D8BA3: add     ecx, 18h
0x4D8BA6: call    edx
0x4D8BA8: test    eax, eax
0x4D8BAA: jz      short loc_4D8BBA
0x4D8BAC: mov     ecx, eax; this
0x4D8BAE: call    TESObjectCELL_GetWorldSpace
0x4D8BB3: test    eax, eax
0x4D8BB5: jz      short loc_4D8BBA
0x4D8BB7: xor     al, al
0x4D8BB9: retn
0x4D8BBA: mov     al, 1
0x4D8BBC: retn

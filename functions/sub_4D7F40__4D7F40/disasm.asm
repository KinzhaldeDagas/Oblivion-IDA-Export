0x4D7F40: mov     eax, ecx
0x4D7F42: mov     ecx, [eax+40h]
0x4D7F45: push    ebx
0x4D7F46: xor     bl, bl
0x4D7F48: test    ecx, ecx
0x4D7F4A: jz      short loc_4D7F52
0x4D7F4C: pop     ebx
0x4D7F4D: jmp     sub_4CA6F0
0x4D7F52: lea     ecx, [eax+18h]
0x4D7F55: mov     eax, [ecx]
0x4D7F57: mov     edx, [eax]
0x4D7F59: call    edx
0x4D7F5B: test    eax, eax
0x4D7F5D: jz      short loc_4D7F72
0x4D7F5F: mov     ecx, eax; this
0x4D7F61: call    TESObjectCELL_GetWorldSpace
0x4D7F66: test    eax, eax
0x4D7F68: jz      short loc_4D7F72
0x4D7F6A: mov     ecx, eax
0x4D7F6C: pop     ebx
0x4D7F6D: jmp     sub_4EF150
0x4D7F72: mov     al, bl
0x4D7F74: pop     ebx
0x4D7F75: retn

0x8F5D90: push    esi
0x8F5D91: mov     esi, ecx
0x8F5D93: call    sub_8F5C80
0x8F5D98: mov     eax, [esi+8]
0x8F5D9B: test    eax, eax
0x8F5D9D: jz      short loc_8F5DA7
0x8F5D9F: mov     ecx, eax
0x8F5DA1: mov     eax, [ecx]
0x8F5DA3: pop     esi
0x8F5DA4: jmp     dword ptr [eax+10h]
0x8F5DA7: pop     esi
0x8F5DA8: retn

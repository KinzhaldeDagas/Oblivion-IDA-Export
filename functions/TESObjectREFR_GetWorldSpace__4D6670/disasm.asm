0x4D6670: mov     eax, [ecx+40h]
0x4D6673: push    esi
0x4D6674: xor     esi, esi
0x4D6676: test    eax, eax
0x4D6678: jnz     short loc_4D6688
0x4D667A: mov     eax, [ecx+18h]
0x4D667D: mov     edx, [eax]
0x4D667F: add     ecx, 18h
0x4D6682: call    edx
0x4D6684: test    eax, eax
0x4D6686: jz      short loc_4D6690
0x4D6688: mov     ecx, eax; this
0x4D668A: pop     esi
0x4D668B: jmp     TESObjectCELL_GetWorldSpace
0x4D6690: mov     eax, esi
0x4D6692: pop     esi
0x4D6693: retn

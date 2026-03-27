0x4200C0: push    21h ; '!'; a2
0x4200C2: call    BaseExtraList_GetExtraData
0x4200C7: test    eax, eax
0x4200C9: jz      short loc_4200E7
0x4200CB: mov     eax, [eax+0Ch]
0x4200CE: test    eax, eax
0x4200D0: jz      short loc_4200E7
0x4200D2: mov     edx, [esp+arg_0]
0x4200D6: mov     ecx, [eax]
0x4200D8: test    ecx, ecx
0x4200DA: jz      short loc_4200E7
0x4200DC: cmp     [ecx], edx
0x4200DE: jz      short loc_4200EC
0x4200E0: mov     eax, [eax+4]
0x4200E3: test    eax, eax
0x4200E5: jnz     short loc_4200D6
0x4200E7: xor     al, al
0x4200E9: retn    4
0x4200EC: mov     al, 1
0x4200EE: retn    4

0x5E10A0: push    esi
0x5E10A1: xor     esi, esi
0x5E10A3: cmp     [ecx+58h], esi
0x5E10A6: jz      short loc_5E10C5
0x5E10A8: mov     ecx, [ecx+58h]
0x5E10AB: mov     eax, [ecx]
0x5E10AD: mov     edx, [esp+4+arg_0]
0x5E10B1: mov     eax, [eax+3B0h]
0x5E10B7: push    edx
0x5E10B8: call    eax
0x5E10BA: test    eax, eax
0x5E10BC: jz      short loc_5E10C5
0x5E10BE: mov     eax, [eax+4]
0x5E10C1: pop     esi
0x5E10C2: retn    4
0x5E10C5: mov     eax, esi
0x5E10C7: pop     esi
0x5E10C8: retn    4

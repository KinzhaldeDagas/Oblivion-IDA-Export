0x5E21D0: add     ecx, 0A4h ; '¤'
0x5E21D6: jz      short locret_5E2206
0x5E21D8: mov     eax, [esp+arg_0]
0x5E21DC: push    esi
0x5E21DD: lea     ecx, [ecx+0]
0x5E21E0: mov     esi, [ecx]
0x5E21E2: test    esi, esi
0x5E21E4: jz      short loc_5E2205
0x5E21E6: cmp     [esi+4], eax
0x5E21E9: jz      short loc_5E21F6
0x5E21EB: mov     ecx, [ecx+4]
0x5E21EE: test    ecx, ecx
0x5E21F0: jnz     short loc_5E21E0
0x5E21F2: pop     esi
0x5E21F3: retn    4
0x5E21F6: push    esi
0x5E21F7: call    BSSimpleList_Remove
0x5E21FC: push    esi
0x5E21FD: call    FormHeapFree
0x5E2202: add     esp, 4
0x5E2205: pop     esi
0x5E2206: retn    4

0x9530B0: mov     edx, [ecx+8]
0x9530B3: mov     eax, [esp+arg_4]
0x9530B7: push    esi
0x9530B8: mov     esi, [ecx+0Ch]
0x9530BB: add     edx, eax
0x9530BD: cmp     edx, esi
0x9530BF: mov     [ecx+8], edx
0x9530C2: jle     short loc_9530CB
0x9530C4: mov     [ecx+0Ch], edx
0x9530C7: pop     esi
0x9530C8: retn    8
0x9530CB: mov     [ecx+0Ch], esi
0x9530CE: pop     esi
0x9530CF: retn    8

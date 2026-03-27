0x98F825: push    0Ch
0x98F827: push    offset stru_AFFF48
0x98F82C: call    __SEH_prolog4
0x98F831: call    __getptd
0x98F836: mov     edi, eax
0x98F838: mov     eax, dword_B318B0
0x98F83D: test    [edi+70h], eax
0x98F840: jz      short loc_98F85F
0x98F842: cmp     dword ptr [edi+6Ch], 0
0x98F846: jz      short loc_98F85F
0x98F848: mov     esi, [edi+68h]

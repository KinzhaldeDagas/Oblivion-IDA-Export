0x52B080: cmp     byte ptr [ecx+1], 0
0x52B084: jz      short loc_52B094
0x52B086: mov     eax, [esp+arg_0]
0x52B08A: test    eax, eax
0x52B08C: jz      short locret_52B0B3
0x52B08E: test    byte ptr [eax+3Ch], 8
0x52B092: jz      short locret_52B0B3
0x52B094: push    esi
0x52B095: lea     esi, [ecx+4]
0x52B098: test    esi, esi
0x52B09A: mov     byte ptr [ecx+1], 1
0x52B09E: jz      short loc_52B0B2
0x52B0A0: mov     ecx, [esi]
0x52B0A2: test    ecx, ecx
0x52B0A4: mov     esi, [esi+4]
0x52B0A7: jz      short loc_52B0AE
0x52B0A9: call    sub_52ADF0
0x52B0AE: test    esi, esi
0x52B0B0: jnz     short loc_52B0A0
0x52B0B2: pop     esi
0x52B0B3: retn    4

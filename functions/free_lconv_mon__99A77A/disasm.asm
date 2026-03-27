0x99A77A: push    esi
0x99A77B: mov     esi, [esp+4+arg_0]
0x99A77F: test    esi, esi
0x99A781: jz      short loc_99A801
0x99A783: mov     eax, [esi+0Ch]
0x99A786: cmp     eax, off_B30DC0
0x99A78C: jz      short loc_99A795
0x99A78E: push    eax; Memory
0x99A78F: call    _free
0x99A794: pop     ecx
0x99A795: mov     eax, [esi+10h]
0x99A798: cmp     eax, off_B30DC4
0x99A79E: jz      short loc_99A7A7
0x99A7A0: push    eax; Memory
0x99A7A1: call    _free
0x99A7A6: pop     ecx
0x99A7A7: mov     eax, [esi+14h]
0x99A7AA: cmp     eax, off_B30DC8
0x99A7B0: jz      short loc_99A7B9
0x99A7B2: push    eax; Memory
0x99A7B3: call    _free
0x99A7B8: pop     ecx
0x99A7B9: mov     eax, [esi+18h]
0x99A7BC: cmp     eax, off_B30DCC
0x99A7C2: jz      short loc_99A7CB
0x99A7C4: push    eax; Memory
0x99A7C5: call    _free
0x99A7CA: pop     ecx
0x99A7CB: mov     eax, [esi+1Ch]
0x99A7CE: cmp     eax, off_B30DD0
0x99A7D4: jz      short loc_99A7DD
0x99A7D6: push    eax; Memory
0x99A7D7: call    _free
0x99A7DC: pop     ecx
0x99A7DD: mov     eax, [esi+20h]
0x99A7E0: cmp     eax, off_B30DD4
0x99A7E6: jz      short loc_99A7EF
0x99A7E8: push    eax; Memory
0x99A7E9: call    _free
0x99A7EE: pop     ecx
0x99A7EF: mov     esi, [esi+24h]
0x99A7F2: cmp     esi, off_B30DD8
0x99A7F8: jz      short loc_99A801
0x99A7FA: push    esi; Memory
0x99A7FB: call    _free
0x99A800: pop     ecx
0x99A801: pop     esi
0x99A802: retn

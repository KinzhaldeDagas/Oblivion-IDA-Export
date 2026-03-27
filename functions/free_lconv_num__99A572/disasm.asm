0x99A572: push    esi
0x99A573: mov     esi, [esp+4+arg_0]
0x99A577: test    esi, esi
0x99A579: jz      short loc_99A5B0
0x99A57B: mov     eax, [esi]
0x99A57D: cmp     eax, off_B30DB4
0x99A583: jz      short loc_99A58C
0x99A585: push    eax; Memory
0x99A586: call    _free
0x99A58B: pop     ecx
0x99A58C: mov     eax, [esi+4]
0x99A58F: cmp     eax, off_B30DB8
0x99A595: jz      short loc_99A59E
0x99A597: push    eax; Memory
0x99A598: call    _free
0x99A59D: pop     ecx
0x99A59E: mov     esi, [esi+8]
0x99A5A1: cmp     esi, off_B30DBC
0x99A5A7: jz      short loc_99A5B0
0x99A5A9: push    esi; Memory
0x99A5AA: call    _free
0x99A5AF: pop     ecx
0x99A5B0: pop     esi
0x99A5B1: retn

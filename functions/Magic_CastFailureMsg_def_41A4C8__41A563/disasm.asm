0x41A563: mov     eax, sMagicCastOKText; jumptable 0041A4C8 default case
0x41A568: mov     esi, [esp+arg_8]
0x41A56C: push    ecx; a3
0x41A56D: mov     [esi], ecx
0x41A56F: mov     [esi+4], cx
0x41A573: mov     [esi+6], cx
0x41A577: push    eax; a2
0x41A578: mov     ecx, esi; this
0x41A57A: call    BSStringT_Set
0x41A57F: mov     eax, esi
0x41A581: pop     esi
0x41A582: pop     ecx
0x41A583: retn    8

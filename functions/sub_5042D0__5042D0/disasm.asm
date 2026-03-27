0x5042D0: cmp     [esp+arg_8], 0
0x5042D5: fldz
0x5042D7: push    esi
0x5042D8: mov     esi, [esp+4+arg_18]
0x5042DC: fstp    qword ptr [esi]
0x5042DE: jz      short loc_5042FD
0x5042E0: mov     ecx, [esp+4+arg_14]
0x5042E4: test    ecx, ecx
0x5042E6: jz      short loc_5042FD
0x5042E8: push    40h ; '@'
0x5042EA: push    0
0x5042EC: call    sub_4FB5F0
0x5042F1: test    al, al
0x5042F3: mov     al, 1
0x5042F5: jz      short loc_5042FF
0x5042F7: fld1
0x5042F9: fstp    qword ptr [esi]
0x5042FB: pop     esi
0x5042FC: retn
0x5042FD: mov     al, 1
0x5042FF: pop     esi
0x504300: retn

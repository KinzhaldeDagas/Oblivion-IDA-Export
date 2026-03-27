0x504560: cmp     [esp+arg_8], 0
0x504565: fldz
0x504567: push    esi
0x504568: mov     esi, [esp+4+arg_18]
0x50456C: fstp    qword ptr [esi]
0x50456E: jz      short loc_504590
0x504570: mov     ecx, [esp+4+arg_14]
0x504574: test    ecx, ecx
0x504576: jz      short loc_504590
0x504578: push    1000h
0x50457D: push    0
0x50457F: call    sub_4FB5F0
0x504584: test    al, al
0x504586: mov     al, 1
0x504588: jz      short loc_504592
0x50458A: fld1
0x50458C: fstp    qword ptr [esi]
0x50458E: pop     esi
0x50458F: retn
0x504590: mov     al, 1
0x504592: pop     esi
0x504593: retn

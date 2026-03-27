0x5045A0: cmp     [esp+arg_8], 0
0x5045A5: fldz
0x5045A7: push    esi
0x5045A8: mov     esi, [esp+4+arg_18]
0x5045AC: fstp    qword ptr [esi]
0x5045AE: jz      short loc_5045D0
0x5045B0: mov     ecx, [esp+4+arg_14]
0x5045B4: test    ecx, ecx
0x5045B6: jz      short loc_5045D0
0x5045B8: push    80000000h
0x5045BD: push    0
0x5045BF: call    sub_4FB5F0
0x5045C4: test    al, al
0x5045C6: mov     al, 1
0x5045C8: jz      short loc_5045D2
0x5045CA: fld1
0x5045CC: fstp    qword ptr [esi]
0x5045CE: pop     esi
0x5045CF: retn
0x5045D0: mov     al, 1
0x5045D2: pop     esi
0x5045D3: retn

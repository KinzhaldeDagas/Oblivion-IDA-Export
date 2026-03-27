0x50439D: test    edi, edi; jumptable 00504375 default case
0x50439F: fldz
0x5043A1: push    esi
0x5043A2: mov     esi, [esp+4+arg_28]
0x5043A6: fstp    qword ptr [esi]
0x5043A8: jz      short loc_5043C3
0x5043AA: test    ebx, ebx
0x5043AC: jz      short loc_5043C3
0x5043AE: mov     ecx, [esp+4+arg_8]
0x5043B2: push    eax
0x5043B3: push    ecx
0x5043B4: mov     ecx, ebx
0x5043B6: call    sub_4FB5F0
0x5043BB: test    al, al
0x5043BD: jz      short loc_5043C3
0x5043BF: fld1
0x5043C1: fstp    qword ptr [esi]
0x5043C3: pop     esi
0x5043C4: pop     edi
0x5043C5: mov     al, 1
0x5043C7: pop     ebx
0x5043C8: add     esp, 8
0x5043CB: retn

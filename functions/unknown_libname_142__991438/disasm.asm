0x991438: push    eax
0x991439: mov     eax, [esp+4+arg_4]
0x99143D: and     eax, 7FF00000h
0x991442: cmp     eax, 7FF00000h
0x991447: jz      short loc_99147C
0x991449: fnstsw  ax
0x99144B: and     eax, 3800h
0x991450: jz      short loc_99145F
0x991452: fld     qword ptr [esp+8]
0x991456: call    unknown_libname_136
0x99145B: pop     eax
0x99145C: retn    8
0x99145F: fxch    st(1)
0x991461: sub     esp, 0Ch
0x991464: fstp    [esp+10h+var_10]
0x991467: fld     qword ptr [esp+14h]
0x99146B: call    unknown_libname_136
0x991470: fld     [esp+10h+var_10]
0x991473: fxch    st(1)
0x991475: add     esp, 0Ch
0x991478: pop     eax
0x991479: retn    8
0x99147C: fdivr   qword ptr [esp+8]
0x991480: pop     eax
0x991481: retn    8

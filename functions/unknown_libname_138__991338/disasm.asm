0x991338: push    eax
0x991339: mov     eax, [esp+4+arg_4]
0x99133D: and     eax, 7FF00000h
0x991342: cmp     eax, 7FF00000h
0x991347: jz      short loc_99137C
0x991349: fnstsw  ax
0x99134B: and     eax, 3800h
0x991350: jz      short loc_99135F
0x991352: fld     qword ptr [esp+8]
0x991356: call    unknown_libname_135
0x99135B: pop     eax
0x99135C: retn    8
0x99135F: fxch    st(1)
0x991361: sub     esp, 0Ch
0x991364: fstp    [esp+10h+var_10]
0x991367: fld     qword ptr [esp+14h]
0x99136B: call    unknown_libname_135
0x991370: fld     [esp+10h+var_10]
0x991373: fxch    st(1)
0x991375: add     esp, 0Ch
0x991378: pop     eax
0x991379: retn    8
0x99137C: fdiv    qword ptr [esp+8]
0x991380: pop     eax
0x991381: retn    8

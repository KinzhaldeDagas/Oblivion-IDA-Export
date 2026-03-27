0x9913EC: push    eax
0x9913ED: mov     eax, [esp+4+arg_0]
0x9913F1: and     eax, 7F800000h
0x9913F6: cmp     eax, 7F800000h
0x9913FB: jz      short loc_991430
0x9913FD: fnstsw  ax
0x9913FF: and     eax, 3800h
0x991404: jz      short loc_991413
0x991406: fld     [esp+4+arg_0]
0x99140A: call    unknown_libname_136
0x99140F: pop     eax
0x991410: retn    4
0x991413: fxch    st(1)
0x991415: sub     esp, 0Ch
0x991418: fstp    [esp+10h+var_10]
0x99141B: fld     [esp+10h+arg_0]
0x99141F: call    unknown_libname_136
0x991424: fld     [esp+10h+var_10]
0x991427: fxch    st(1)
0x991429: add     esp, 0Ch
0x99142C: pop     eax
0x99142D: retn    4
0x991430: fdivr   [esp+4+arg_0]
0x991434: pop     eax
0x991435: retn    4

0x9912EC: push    eax
0x9912ED: mov     eax, [esp+4+arg_0]
0x9912F1: and     eax, 7F800000h
0x9912F6: cmp     eax, 7F800000h
0x9912FB: jz      short loc_991330
0x9912FD: fnstsw  ax
0x9912FF: and     eax, 3800h
0x991304: jz      short loc_991313
0x991306: fld     [esp+4+arg_0]
0x99130A: call    unknown_libname_135
0x99130F: pop     eax
0x991310: retn    4
0x991313: fxch    st(1)
0x991315: sub     esp, 0Ch
0x991318: fstp    [esp+10h+var_10]
0x99131B: fld     [esp+10h+arg_0]
0x99131F: call    unknown_libname_135
0x991324: fld     [esp+10h+var_10]
0x991327: fxch    st(1)
0x991329: add     esp, 0Ch
0x99132C: pop     eax
0x99132D: retn    4
0x991330: fdiv    [esp+4+arg_0]
0x991334: pop     eax
0x991335: retn    4

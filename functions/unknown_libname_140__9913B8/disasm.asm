0x9913B8: push    eax
0x9913B9: fnstsw  ax
0x9913BB: and     eax, 3800h
0x9913C0: jz      short loc_9913CF
0x9913C2: fild    [esp+4+arg_0]
0x9913C6: call    unknown_libname_135
0x9913CB: pop     eax
0x9913CC: retn    4
0x9913CF: fxch    st(1)
0x9913D1: sub     esp, 0Ch
0x9913D4: fstp    [esp+10h+var_10]
0x9913D7: fild    [esp+10h+arg_0]
0x9913DB: call    unknown_libname_135
0x9913E0: fld     [esp+10h+var_10]
0x9913E3: fxch    st(1)
0x9913E5: add     esp, 0Ch
0x9913E8: pop     eax
0x9913E9: retn    4

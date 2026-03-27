0x9914B8: push    eax
0x9914B9: fnstsw  ax
0x9914BB: and     eax, 3800h
0x9914C0: jz      short loc_9914CF
0x9914C2: fild    [esp+4+arg_0]
0x9914C6: call    unknown_libname_136
0x9914CB: pop     eax
0x9914CC: retn    4
0x9914CF: fxch    st(1)
0x9914D1: sub     esp, 0Ch
0x9914D4: fstp    [esp+10h+var_10]
0x9914D7: fild    [esp+10h+arg_0]
0x9914DB: call    unknown_libname_136
0x9914E0: fld     [esp+10h+var_10]
0x9914E3: fxch    st(1)
0x9914E5: add     esp, 0Ch
0x9914E8: pop     eax
0x9914E9: retn    4

0x991484: push    eax
0x991485: fnstsw  ax
0x991487: and     eax, 3800h
0x99148C: jz      short loc_99149B
0x99148E: fild    [esp+4+arg_0]
0x991492: call    unknown_libname_136
0x991497: pop     eax
0x991498: retn    4
0x99149B: fxch    st(1)
0x99149D: sub     esp, 0Ch
0x9914A0: fstp    [esp+10h+var_10]
0x9914A3: fild    [esp+10h+arg_0]
0x9914A7: call    unknown_libname_136
0x9914AC: fld     [esp+10h+var_10]
0x9914AF: fxch    st(1)
0x9914B1: add     esp, 0Ch
0x9914B4: pop     eax
0x9914B5: retn    4

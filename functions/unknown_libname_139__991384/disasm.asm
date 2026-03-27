0x991384: push    eax
0x991385: fnstsw  ax
0x991387: and     eax, 3800h
0x99138C: jz      short loc_99139B
0x99138E: fild    [esp+4+arg_0]
0x991392: call    unknown_libname_135
0x991397: pop     eax
0x991398: retn    4
0x99139B: fxch    st(1)
0x99139D: sub     esp, 0Ch
0x9913A0: fstp    [esp+10h+var_10]
0x9913A3: fild    [esp+10h+arg_0]
0x9913A7: call    unknown_libname_135
0x9913AC: fld     [esp+10h+var_10]
0x9913AF: fxch    st(1)
0x9913B1: add     esp, 0Ch
0x9913B4: pop     eax
0x9913B5: retn    4

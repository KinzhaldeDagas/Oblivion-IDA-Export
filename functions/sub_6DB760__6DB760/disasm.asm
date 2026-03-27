0x6DB760: mov     ecx, [ecx+1Ch]
0x6DB763: test    ecx, ecx
0x6DB765: jz      short locret_6DB77E
0x6DB767: fld     [esp+arg_4]
0x6DB76B: sub     esp, 8
0x6DB76E: fstp    [esp+8+var_4]; float
0x6DB772: fld     [esp+8+arg_0]
0x6DB776: fstp    [esp+8+var_8]; float
0x6DB779: call    sub_6E3400
0x6DB77E: retn    8

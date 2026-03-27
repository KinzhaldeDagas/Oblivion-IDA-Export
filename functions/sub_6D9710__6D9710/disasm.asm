0x6D9710: mov     ecx, [ecx+1Ch]
0x6D9713: test    ecx, ecx
0x6D9715: jz      short locret_6D972E
0x6D9717: fld     [esp+arg_4]
0x6D971B: sub     esp, 8
0x6D971E: fstp    [esp+8+var_4]; float
0x6D9722: fld     [esp+8+arg_0]
0x6D9726: fstp    [esp+8+var_8]; float
0x6D9729: call    sub_6D8CB0
0x6D972E: retn    8

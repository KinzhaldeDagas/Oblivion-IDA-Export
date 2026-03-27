0x6DA490: mov     ecx, [ecx+18h]
0x6DA493: test    ecx, ecx
0x6DA495: jz      short locret_6DA4AE
0x6DA497: fld     [esp+arg_4]
0x6DA49B: sub     esp, 8
0x6DA49E: fstp    [esp+8+var_4]; float
0x6DA4A2: fld     [esp+8+arg_0]
0x6DA4A6: fstp    [esp+8+var_8]; float
0x6DA4A9: call    sub_6D8CB0
0x6DA4AE: retn    8

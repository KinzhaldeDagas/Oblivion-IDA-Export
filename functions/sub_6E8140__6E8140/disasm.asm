0x6E8140: mov     ecx, [ecx+10h]
0x6E8143: test    ecx, ecx
0x6E8145: jz      short locret_6E815E
0x6E8147: fld     [esp+arg_4]
0x6E814B: sub     esp, 8
0x6E814E: fstp    [esp+8+var_4]; float
0x6E8152: fld     [esp+8+arg_0]
0x6E8156: fstp    [esp+8+var_8]; float
0x6E8159: call    sub_6E8700
0x6E815E: retn    8

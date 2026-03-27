0x6D5FB0: mov     ecx, [ecx+2Ch]
0x6D5FB3: test    ecx, ecx
0x6D5FB5: jz      short locret_6D5FCE
0x6D5FB7: fld     [esp+arg_4]
0x6D5FBB: sub     esp, 8
0x6D5FBE: fstp    [esp+8+var_4]; float
0x6D5FC2: fld     [esp+8+arg_0]
0x6D5FC6: fstp    [esp+8+var_8]; float
0x6D5FC9: call    sub_6E1B00
0x6D5FCE: retn    8

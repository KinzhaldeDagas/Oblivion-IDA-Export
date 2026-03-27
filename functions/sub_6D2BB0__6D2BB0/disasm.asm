0x6D2BB0: mov     ecx, [ecx+10h]
0x6D2BB3: test    ecx, ecx
0x6D2BB5: jz      short locret_6D2BCE
0x6D2BB7: fld     [esp+arg_4]
0x6D2BBB: sub     esp, 8
0x6D2BBE: fstp    [esp+8+var_4]; float
0x6D2BC2: fld     [esp+8+arg_0]
0x6D2BC6: fstp    [esp+8+var_8]; float
0x6D2BC9: call    sub_6E3400
0x6D2BCE: retn    8

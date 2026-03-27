0x6E3AF0: mov     ecx, [ecx+1Ch]
0x6E3AF3: test    ecx, ecx
0x6E3AF5: jz      short locret_6E3B0E
0x6E3AF7: fld     [esp+arg_4]
0x6E3AFB: sub     esp, 8
0x6E3AFE: fstp    [esp+8+var_4]; float
0x6E3B02: fld     [esp+8+arg_0]
0x6E3B06: fstp    [esp+8+var_8]; float
0x6E3B09: call    sub_6E44E0
0x6E3B0E: retn    8

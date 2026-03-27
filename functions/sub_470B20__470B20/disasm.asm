0x470B20: mov     eax, [esp+arg_14]
0x470B24: fld     [esp+arg_10]
0x470B28: mov     ecx, dword ptr [esp+arg_8]
0x470B2C: mov     edx, [esp+arg_4]
0x470B30: push    0; int
0x470B32: push    eax; int
0x470B33: sub     esp, 8
0x470B36: fstp    [esp+10h+var_C]; float
0x470B3A: fld     [esp+10h+arg_C]
0x470B3E: fstp    [esp+10h+var_10]; float
0x470B41: push    ecx; char
0x470B42: mov     ecx, [esp+14h+arg_0]
0x470B46: push    edx; int
0x470B47: call    sub_6C9BA0
0x470B4C: retn    18h

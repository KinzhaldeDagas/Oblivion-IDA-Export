0x470420: test    [esp+arg_0], 8
0x470425: jz      short locret_470438
0x470427: add     ecx, 4
0x47042A: push    4; Size
0x47042C: push    ecx; Src
0x47042D: mov     ecx, ds:0B33B00h
0x470433: call    SaveLoad_SaveData
0x470438: retn    4

0x470CE0: mov     eax, [esp+sequence]; Returns zero for null; otherwise returns BSAnimGroupSequence end time (+0x30) minus start time (+0x2C).
0x470CE4: test    eax, eax
0x470CE6: jnz     short loc_470CEB
0x470CE8: fldz
0x470CEA: retn
0x470CEB: fld     dword ptr [eax+30h]
0x470CEE: fsub    dword ptr [eax+2Ch]
0x470CF1: fstp    [esp+sequence]
0x470CF5: fld     [esp+sequence]
0x470CF9: retn

0x470CE0: mov     eax, [esp+arg_0]
0x470CE4: test    eax, eax
0x470CE6: jnz     short loc_470CEB
0x470CE8: fldz
0x470CEA: retn
0x470CEB: fld     dword ptr [eax+30h]
0x470CEE: fsub    dword ptr [eax+2Ch]
0x470CF1: fstp    [esp+arg_0]
0x470CF5: fld     [esp+arg_0]
0x470CF9: retn

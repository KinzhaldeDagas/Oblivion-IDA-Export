0x470AB0: mov     eax, ecx
0x470AB2: mov     ecx, ds:0B24260h
0x470AB8: mov     [eax], ecx
0x470ABA: mov     edx, ds:0B24264h
0x470AC0: mov     [eax+4], edx
0x470AC3: mov     ecx, ds:0B24268h
0x470AC9: mov     [eax+8], ecx
0x470ACC: mov     edx, ds:0B3CBA4h
0x470AD2: mov     [eax+0Ch], edx
0x470AD5: mov     ecx, ds:0B3CBA8h
0x470ADB: mov     [eax+10h], ecx
0x470ADE: mov     edx, ds:0B3CBACh
0x470AE4: mov     [eax+14h], edx
0x470AE7: mov     ecx, ds:0B3CBB0h
0x470AED: mov     [eax+18h], ecx
0x470AF0: fld     dword ptr ds:0A79E10h
0x470AF6: fstp    dword ptr [eax+1Ch]
0x470AF9: retn

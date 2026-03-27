0x470780: push    ecx
0x470781: mov     ecx, ds:0B33B00h
0x470787: push    2; Size
0x470789: lea     eax, [esp+8+Dst]
0x47078D: push    eax; Dst
0x47078E: call    SaveLoad_LoadData
0x470793: mov     eax, [esp+4+Dst]
0x470796: test    ax, ax
0x470799: jz      short loc_4707AC
0x47079B: mov     ecx, [esp+4+arg_0]
0x47079F: push    eax
0x4707A0: push    ecx
0x4707A1: mov     ecx, ds:0B33B00h
0x4707A7: call    sub_458E50
0x4707AC: pop     ecx
0x4707AD: retn

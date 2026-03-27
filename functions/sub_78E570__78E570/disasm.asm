0x78E570: fldz
0x78E572: mov     eax, ecx
0x78E574: mov     ecx, [esp+arg_0]
0x78E578: fst     dword ptr [eax+10h]
0x78E57B: cmp     ecx, 5
0x78E57E: fst     dword ptr [eax+0Ch]
0x78E581: fst     dword ptr [eax+8]
0x78E584: fst     dword ptr [eax+4]
0x78E587: fstp    dword ptr [eax]
0x78E589: jle     short loc_78E590
0x78E58B: mov     ecx, 5
0x78E590: mov     [eax+14h], ecx
0x78E593: retn    4

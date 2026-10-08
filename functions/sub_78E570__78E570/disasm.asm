0x78E570: fldz; Oblivion stVec(size) constructor: zeros all five float slots, clamps only sizes greater than 5 down to 5, and stores the resulting logical size. Exact body corroborated by RT4.1 Vec.cpp.
0x78E572: mov     eax, ecx
0x78E574: mov     ecx, [esp+size]
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

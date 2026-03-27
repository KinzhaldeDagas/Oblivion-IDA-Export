0x6DC770: mov     eax, [ecx+48h]
0x6DC773: test    eax, eax
0x6DC775: mov     edx, [esp+arg_4]
0x6DC779: jz      short loc_6DC79E
0x6DC77B: mov     ecx, [eax+8]
0x6DC77E: mov     [edx], ecx
0x6DC780: mov     ecx, [eax+10h]
0x6DC783: mov     edx, [esp+arg_8]
0x6DC787: mov     [edx], ecx
0x6DC789: mov     cl, [eax+14h]
0x6DC78C: mov     edx, [esp+arg_C]
0x6DC790: mov     [edx], cl
0x6DC792: mov     eax, [eax+0Ch]
0x6DC795: mov     ecx, [esp+arg_0]
0x6DC799: mov     [ecx], eax
0x6DC79B: retn    10h
0x6DC79E: mov     eax, [esp+arg_8]
0x6DC7A2: mov     ecx, [esp+arg_0]
0x6DC7A6: mov     dword ptr [edx], 0
0x6DC7AC: mov     edx, [esp+arg_C]
0x6DC7B0: mov     dword ptr [eax], 0
0x6DC7B6: mov     dword ptr [ecx], 0
0x6DC7BC: mov     byte ptr [edx], 0
0x6DC7BF: retn    10h

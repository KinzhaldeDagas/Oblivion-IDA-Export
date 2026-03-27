0x589640: push    esi
0x589641: mov     esi, ecx
0x589643: mov     eax, [esi]
0x589645: mov     edx, [eax+4]
0x589648: call    edx
0x58964A: mov     ecx, [esp+4+arg_4]
0x58964E: mov     edx, [ecx]
0x589650: mov     ecx, [esp+4+arg_0]
0x589654: mov     [eax+8], edx
0x589657: mov     [eax], ecx
0x589659: mov     edx, [ecx+4]
0x58965C: mov     [eax+4], edx
0x58965F: mov     edx, [ecx+4]
0x589662: test    edx, edx
0x589664: jz      short loc_589673
0x589666: mov     [edx], eax
0x589668: mov     [ecx+4], eax
0x58966B: add     dword ptr [esi+0Ch], 1
0x58966F: pop     esi
0x589670: retn    8
0x589673: mov     [esi+4], eax
0x589676: mov     [ecx+4], eax
0x589679: add     dword ptr [esi+0Ch], 1
0x58967D: pop     esi
0x58967E: retn    8

0x8CDC60: mov     eax, [esp+arg_0]
0x8CDC64: xor     ecx, ecx
0x8CDC66: cmp     eax, ecx
0x8CDC68: jz      short locret_8CDCAB
0x8CDC6A: mov     word ptr [eax+6], 1
0x8CDC70: mov     [eax+28h], ecx
0x8CDC73: mov     [eax+38h], ecx
0x8CDC76: mov     [eax+3Ch], ecx
0x8CDC79: mov     edx, 80000000h
0x8CDC7E: mov     [eax+40h], edx
0x8CDC81: mov     [eax+50h], ecx
0x8CDC84: mov     [eax+54h], ecx
0x8CDC87: mov     [eax+58h], edx
0x8CDC8A: mov     [eax+5Ch], ecx
0x8CDC8D: mov     [eax+60h], ecx
0x8CDC90: mov     [eax+64h], edx
0x8CDC93: mov     dword ptr [eax], offset off_A99BF0
0x8CDC99: mov     [eax+90h], ecx
0x8CDC9F: mov     [eax+94h], ecx
0x8CDCA5: mov     [eax+98h], edx
0x8CDCAB: retn

0x90FA00: mov     eax, [esp+arg_0]
0x90FA04: xor     ecx, ecx
0x90FA06: cmp     eax, ecx
0x90FA08: jz      short locret_90FA4B
0x90FA0A: mov     word ptr [eax+6], 1
0x90FA10: mov     [eax+28h], ecx
0x90FA13: mov     [eax+38h], ecx
0x90FA16: mov     [eax+3Ch], ecx
0x90FA19: mov     edx, 80000000h
0x90FA1E: mov     [eax+40h], edx
0x90FA21: mov     [eax+50h], ecx
0x90FA24: mov     [eax+54h], ecx
0x90FA27: mov     [eax+58h], edx
0x90FA2A: mov     [eax+5Ch], ecx
0x90FA2D: mov     [eax+60h], ecx
0x90FA30: mov     [eax+64h], edx
0x90FA33: mov     dword ptr [eax], offset off_A9CAB8
0x90FA39: mov     [eax+120h], ecx
0x90FA3F: mov     [eax+124h], ecx
0x90FA45: mov     [eax+128h], edx
0x90FA4B: retn

0x6D5150: mov     eax, [ecx+50h]
0x6D5153: test    eax, eax
0x6D5155: jz      short loc_6D5178
0x6D5157: mov     ecx, [eax+20h]
0x6D515A: mov     edx, [esp+arg_0]
0x6D515E: mov     [edx], ecx
0x6D5160: mov     ecx, [eax+28h]
0x6D5163: mov     edx, [esp+arg_4]
0x6D5167: mov     [edx], ecx
0x6D5169: mov     cl, [eax+4Ah]
0x6D516C: mov     edx, [esp+arg_8]
0x6D5170: mov     [edx], cl
0x6D5172: mov     eax, [eax+24h]
0x6D5175: retn    0Ch
0x6D5178: mov     eax, [esp+arg_0]
0x6D517C: mov     ecx, [esp+arg_4]
0x6D5180: mov     edx, [esp+arg_8]
0x6D5184: mov     dword ptr [eax], 0
0x6D518A: mov     dword ptr [ecx], 0
0x6D5190: mov     byte ptr [edx], 0
0x6D5193: xor     eax, eax
0x6D5195: retn    0Ch

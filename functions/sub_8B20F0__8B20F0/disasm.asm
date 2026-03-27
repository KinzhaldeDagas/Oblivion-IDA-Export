0x8B20F0: mov     eax, [ecx+10h]
0x8B20F3: push    esi
0x8B20F4: lea     esi, [ecx+8]
0x8B20F7: mov     ecx, [esi+4]
0x8B20FA: and     eax, 3FFFFFFFh
0x8B20FF: cmp     ecx, eax
0x8B2101: jnz     short loc_8B210E
0x8B2103: push    10h
0x8B2105: push    esi
0x8B2106: call    sub_8A6EE0
0x8B210B: add     esp, 8
0x8B210E: mov     ecx, [esi+4]
0x8B2111: mov     edx, [esi]
0x8B2113: mov     eax, ecx
0x8B2115: shl     eax, 4
0x8B2118: add     eax, edx
0x8B211A: inc     ecx
0x8B211B: mov     [esi+4], ecx
0x8B211E: mov     esi, [esp+4+arg_0]
0x8B2122: mov     edx, [esi+0Ch]
0x8B2125: test    edx, edx
0x8B2127: mov     ecx, esi
0x8B2129: jz      short loc_8B2139
0x8B212B: jmp     short loc_8B2130
0x8B212D: align 10h
0x8B2130: mov     ecx, edx
0x8B2132: mov     edx, [ecx+0Ch]
0x8B2135: test    edx, edx
0x8B2137: jnz     short loc_8B2130
0x8B2139: mov     [eax], ecx
0x8B213B: mov     ecx, [esi+4]
0x8B213E: mov     esi, [esp+4+arg_4]
0x8B2142: mov     [eax+4], ecx
0x8B2145: mov     edx, [esi+0Ch]
0x8B2148: test    edx, edx
0x8B214A: mov     ecx, esi
0x8B214C: jz      short loc_8B2159
0x8B214E: mov     edi, edi
0x8B2150: mov     ecx, edx
0x8B2152: mov     edx, [ecx+0Ch]
0x8B2155: test    edx, edx
0x8B2157: jnz     short loc_8B2150
0x8B2159: mov     [eax+8], ecx
0x8B215C: mov     edx, [esi+4]
0x8B215F: mov     [eax+0Ch], edx
0x8B2162: pop     esi
0x8B2163: retn    8

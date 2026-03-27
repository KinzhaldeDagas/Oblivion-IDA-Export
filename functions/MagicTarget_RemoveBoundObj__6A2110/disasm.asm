0x6A2110: push    edi
0x6A2111: mov     edi, [esp+4+arg_0]
0x6A2115: test    edi, edi
0x6A2117: jz      short loc_6A215A
0x6A2119: mov     eax, [ecx]
0x6A211B: mov     edx, [eax+8]
0x6A211E: push    esi
0x6A211F: call    edx
0x6A2121: mov     esi, eax
0x6A2123: test    esi, esi
0x6A2125: jz      short loc_6A2159
0x6A2127: push    ebx
0x6A2128: mov     ebx, [esp+0Ch+arg_4]
0x6A212C: lea     esp, [esp+0]
0x6A2130: mov     eax, [esi+4]
0x6A2133: test    eax, eax
0x6A2135: jnz     short loc_6A213B
0x6A2137: cmp     [esi], eax
0x6A2139: jz      short loc_6A2158
0x6A213B: mov     ecx, [esi]
0x6A213D: test    ecx, ecx
0x6A213F: mov     esi, eax
0x6A2141: jz      short loc_6A2154
0x6A2143: cmp     byte ptr [ecx+11h], 0
0x6A2147: jnz     short loc_6A2154
0x6A2149: cmp     [ecx+30h], edi
0x6A214C: jnz     short loc_6A2154
0x6A214E: push    ebx
0x6A214F: call    ActiveEffect_Base_Remove
0x6A2154: test    esi, esi
0x6A2156: jnz     short loc_6A2130
0x6A2158: pop     ebx
0x6A2159: pop     esi
0x6A215A: pop     edi
0x6A215B: retn    8

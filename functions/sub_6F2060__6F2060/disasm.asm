0x6F2060: push    ebp
0x6F2061: mov     ebp, esp
0x6F2063: push    0FFFFFFFFh
0x6F2065: push    offset SEH_6F2060
0x6F206A: mov     eax, large fs:0
0x6F2070: push    eax
0x6F2071: sub     esp, 14h
0x6F2074: push    ebx
0x6F2075: push    esi
0x6F2076: push    edi
0x6F2077: mov     eax, ds:0B30AACh
0x6F207C: xor     eax, ebp
0x6F207E: push    eax
0x6F207F: lea     eax, [ebp+var_C]
0x6F2082: mov     large fs:0, eax
0x6F2088: mov     [ebp+var_10], esp
0x6F208B: mov     esi, ecx
0x6F208D: mov     eax, [ebp+arg_C]
0x6F2090: fld     dword ptr [eax]
0x6F2092: mov     ecx, [esi+4]
0x6F2095: test    ecx, ecx
0x6F2097: fstp    [ebp+var_20]
0x6F209A: fld     dword ptr [eax+4]
0x6F209D: fstp    [ebp+var_1C]
0x6F20A0: jnz     short loc_6F20A6
0x6F20A2: xor     eax, eax
0x6F20A4: jmp     short loc_6F20AE
0x6F20A6: mov     eax, [esi+0Ch]
0x6F20A9: sub     eax, ecx
0x6F20AB: sar     eax, 3
0x6F20AE: mov     edx, [ebp+arg_8]
0x6F20B1: test    edx, edx
0x6F20B3: jz      loc_6F22A2
0x6F20B9: test    ecx, ecx
0x6F20BB: jnz     short loc_6F20C1
0x6F20BD: xor     edi, edi
0x6F20BF: jmp     short loc_6F20C9
0x6F20C1: mov     edi, [esi+8]
0x6F20C4: sub     edi, ecx
0x6F20C6: sar     edi, 3
0x6F20C9: or      ebx, 0FFFFFFFFh
0x6F20CC: sub     ebx, edi
0x6F20CE: cmp     ebx, edx
0x6F20D0: jnb     short loc_6F20D7
0x6F20D2: call    sub_790B90
0x6F20D7: test    ecx, ecx
0x6F20D9: jnz     short loc_6F20DF
0x6F20DB: xor     edi, edi
0x6F20DD: jmp     short loc_6F20E7
0x6F20DF: mov     edi, [esi+8]
0x6F20E2: sub     edi, ecx
0x6F20E4: sar     edi, 3
0x6F20E7: add     edi, edx
0x6F20E9: cmp     eax, edi
0x6F20EB: jnb     loc_6F21EF
0x6F20F1: mov     edi, eax
0x6F20F3: shr     edi, 1
0x6F20F5: or      ebx, 0FFFFFFFFh
0x6F20F8: sub     ebx, edi
0x6F20FA: cmp     ebx, eax
0x6F20FC: jnb     short loc_6F2102
0x6F20FE: xor     eax, eax
0x6F2100: jmp     short loc_6F2104
0x6F2102: add     eax, edi
0x6F2104: test    ecx, ecx
0x6F2106: jnz     short loc_6F210C
0x6F2108: xor     edi, edi
0x6F210A: jmp     short loc_6F2114
0x6F210C: mov     edi, [esi+8]
0x6F210F: sub     edi, ecx
0x6F2111: sar     edi, 3
0x6F2114: add     edi, edx
0x6F2116: cmp     eax, edi
0x6F2118: jnb     short loc_6F212C
0x6F211A: test    ecx, ecx
0x6F211C: jnz     short loc_6F2122
0x6F211E: xor     eax, eax
0x6F2120: jmp     short loc_6F212A
0x6F2122: mov     eax, [esi+8]
0x6F2125: sub     eax, ecx
0x6F2127: sar     eax, 3
0x6F212A: add     eax, edx
0x6F212C: add     eax, eax
0x6F212E: add     eax, eax
0x6F2130: add     eax, eax
0x6F2132: push    eax; Size
0x6F2133: mov     [ebp+var_14], eax
0x6F2136: call    FormHeapAlloc
0x6F213B: mov     edx, [ebp+arg_8]
0x6F213E: mov     ebx, [ebp+arg_4]
0x6F2141: mov     byte ptr [ebp+arg_C], 0
0x6F2145: mov     ecx, [ebp+arg_C]
0x6F2148: push    ecx
0x6F2149: push    edx
0x6F214A: mov     edi, eax
0x6F214C: mov     eax, [esi+4]
0x6F214F: push    esi
0x6F2150: push    edi
0x6F2151: push    ebx
0x6F2152: push    eax
0x6F2153: mov     [ebp+var_18], edi
0x6F2156: mov     [ebp+var_4], 0
0x6F215D: call    sub_6F11E0
0x6F2162: mov     edx, [ebp+arg_8]
0x6F2165: add     esp, 1Ch
0x6F2168: lea     ecx, [ebp+var_20]
0x6F216B: push    ecx
0x6F216C: push    edx
0x6F216D: push    eax
0x6F216E: mov     ecx, esi
0x6F2170: call    sub_6F1400
0x6F2175: mov     ecx, [esi+8]
0x6F2178: mov     byte ptr [ebp+arg_C], 0
0x6F217C: mov     edx, [ebp+arg_C]
0x6F217F: push    edx
0x6F2180: mov     edx, [ebp+arg_8]
0x6F2183: push    edx
0x6F2184: push    esi
0x6F2185: push    eax
0x6F2186: push    ecx
0x6F2187: push    ebx
0x6F2188: call    sub_6F11E0
0x6F218D: mov     ecx, [esi+4]
0x6F2190: add     esp, 18h
0x6F2193: test    ecx, ecx
0x6F2195: jnz     short loc_6F219B
0x6F2197: xor     eax, eax
0x6F2199: jmp     short loc_6F21A3
0x6F219B: mov     eax, [esi+8]
0x6F219E: sub     eax, ecx
0x6F21A0: sar     eax, 3
0x6F21A3: mov     ebx, [ebp+arg_8]
0x6F21A6: add     ebx, eax
0x6F21A8: test    ecx, ecx
0x6F21AA: jz      short loc_6F21B5
0x6F21AC: push    ecx
0x6F21AD: call    FormHeapFree
0x6F21B2: add     esp, 4
0x6F21B5: mov     eax, [ebp+var_14]
0x6F21B8: add     eax, edi
0x6F21BA: lea     ecx, [edi+ebx*8]
0x6F21BD: mov     [esi+0Ch], eax
0x6F21C0: mov     [esi+8], ecx
0x6F21C3: mov     [esi+4], edi
0x6F21C6: mov     ecx, [ebp+var_C]
0x6F21C9: mov     large fs:0, ecx
0x6F21D0: pop     ecx
0x6F21D1: pop     edi
0x6F21D2: pop     esi
0x6F21D3: pop     ebx
0x6F21D4: mov     esp, ebp
0x6F21D6: pop     ebp
0x6F21D7: retn    10h
0x6F21DA: mov     edx, [ebp+var_18]
0x6F21DD: push    edx
0x6F21DE: call    FormHeapFree
0x6F21E3: add     esp, 4
0x6F21E6: push    0
0x6F21E8: push    0
0x6F21EA: call    ThrowException??
0x6F21EF: mov     ebx, [esi+8]
0x6F21F2: mov     edi, [ebp+arg_4]
0x6F21F5: mov     eax, ebx
0x6F21F7: sub     eax, edi
0x6F21F9: sar     eax, 3
0x6F21FC: cmp     eax, edx
0x6F21FE: jnb     short loc_6F2266
0x6F2200: lea     eax, ds:0[edx*8]
0x6F2207: mov     [ebp+arg_C], eax
0x6F220A: add     eax, edi
0x6F220C: push    eax
0x6F220D: push    ebx
0x6F220E: push    edi
0x6F220F: mov     ecx, esi
0x6F2211: call    sub_6F1600
0x6F2216: mov     eax, [esi+8]
0x6F2219: mov     edx, eax
0x6F221B: lea     ecx, [ebp+var_20]
0x6F221E: push    ecx
0x6F221F: mov     ecx, [ebp+arg_8]
0x6F2222: sub     edx, edi
0x6F2224: sar     edx, 3
0x6F2227: sub     ecx, edx
0x6F2229: push    ecx
0x6F222A: push    eax
0x6F222B: mov     ecx, esi
0x6F222D: mov     [ebp+var_4], 2
0x6F2234: call    sub_6F1400
0x6F2239: mov     eax, [ebp+arg_C]
0x6F223C: add     [esi+8], eax
0x6F223F: mov     esi, [esi+8]
0x6F2242: lea     ecx, [ebp+var_20]
0x6F2245: push    ecx
0x6F2246: sub     esi, eax
0x6F2248: push    esi
0x6F2249: push    edi
0x6F224A: call    sub_7A86F0
0x6F224F: add     esp, 0Ch
0x6F2252: mov     ecx, [ebp+var_C]
0x6F2255: mov     large fs:0, ecx
0x6F225C: pop     ecx
0x6F225D: pop     edi
0x6F225E: pop     esi
0x6F225F: pop     ebx
0x6F2260: mov     esp, ebp
0x6F2262: pop     ebp
0x6F2263: retn    10h
0x6F2266: lea     ecx, ds:0[edx*8]
0x6F226D: push    ebx
0x6F226E: mov     eax, ebx
0x6F2270: sub     eax, ecx
0x6F2272: push    ebx
0x6F2273: mov     [ebp+arg_C], ecx
0x6F2276: push    eax
0x6F2277: mov     ecx, esi
0x6F2279: mov     [ebp+arg_8], eax
0x6F227C: call    sub_6F1600
0x6F2281: mov     edx, [ebp+arg_8]
0x6F2284: push    ebx
0x6F2285: push    edx
0x6F2286: push    edi
0x6F2287: mov     [esi+8], eax
0x6F228A: call    sub_7A8750
0x6F228F: mov     ecx, [ebp+arg_C]
0x6F2292: lea     eax, [ebp+var_20]
0x6F2295: push    eax
0x6F2296: add     ecx, edi
0x6F2298: push    ecx
0x6F2299: push    edi
0x6F229A: call    sub_7A86F0
0x6F229F: add     esp, 18h
0x6F22A2: mov     ecx, [ebp+var_C]
0x6F22A5: mov     large fs:0, ecx
0x6F22AC: pop     ecx
0x6F22AD: pop     edi
0x6F22AE: pop     esi
0x6F22AF: pop     ebx
0x6F22B0: mov     esp, ebp
0x6F22B2: pop     ebp
0x6F22B3: retn    10h

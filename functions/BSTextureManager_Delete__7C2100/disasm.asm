0x7C2100: push    0FFFFFFFFh
0x7C2102: push    offset BSTextureManager_Delete_SEH
0x7C2107: mov     eax, large fs:0
0x7C210D: push    eax
0x7C210E: sub     esp, 8
0x7C2111: push    ebx
0x7C2112: push    ebp
0x7C2113: push    esi
0x7C2114: push    edi
0x7C2115: mov     eax, ds:0B30AACh
0x7C211A: xor     eax, esp
0x7C211C: push    eax
0x7C211D: lea     eax, [esp+28h+var_C]
0x7C2121: mov     large fs:0, eax
0x7C2127: mov     esi, ecx
0x7C2129: mov     [esp+28h+var_10], esi
0x7C212D: mov     eax, [esi+3Ch]
0x7C2130: xor     ebx, ebx
0x7C2132: cmp     eax, ebx
0x7C2134: mov     [esp+28h+var_4], 5
0x7C213C: jz      short loc_7C2176
0x7C213E: lea     ebp, [esi+30h]
0x7C2141: lea     eax, [esp+28h+var_14]
0x7C2145: push    eax
0x7C2146: mov     ecx, ebp
0x7C2148: call    sub_7C1740
0x7C214D: mov     edi, [esp+28h+var_14]
0x7C2151: cmp     edi, ebx
0x7C2153: jz      short loc_7C2171
0x7C2155: lea     ecx, [edi+4]
0x7C2158: push    ecx; lpAddend
0x7C2159: call    dword ptr ds:0A2807Ch
0x7C215F: test    eax, eax
0x7C2161: jnz     short loc_7C2171
0x7C2163: cmp     edi, ebx
0x7C2165: jz      short loc_7C2171
0x7C2167: mov     edx, [edi]
0x7C2169: mov     eax, [edx]
0x7C216B: push    1
0x7C216D: mov     ecx, edi
0x7C216F: call    eax
0x7C2171: cmp     [esi+3Ch], ebx
0x7C2174: jnz     short loc_7C2141
0x7C2176: cmp     [esi+2Ch], ebx
0x7C2179: jz      short loc_7C21B5
0x7C217B: lea     ebp, [esi+20h]
0x7C217E: mov     edi, edi
0x7C2180: lea     ecx, [esp+28h+var_14]
0x7C2184: push    ecx
0x7C2185: mov     ecx, ebp
0x7C2187: call    sub_7C1740
0x7C218C: mov     edi, [esp+28h+var_14]
0x7C2190: cmp     edi, ebx
0x7C2192: jz      short loc_7C21B0
0x7C2194: lea     edx, [edi+4]
0x7C2197: push    edx; lpAddend
0x7C2198: call    dword ptr ds:0A2807Ch
0x7C219E: test    eax, eax
0x7C21A0: jnz     short loc_7C21B0
0x7C21A2: cmp     edi, ebx
0x7C21A4: jz      short loc_7C21B0
0x7C21A6: mov     eax, [edi]
0x7C21A8: mov     edx, [eax]
0x7C21AA: push    1
0x7C21AC: mov     ecx, edi
0x7C21AE: call    edx
0x7C21B0: cmp     [esi+2Ch], ebx
0x7C21B3: jnz     short loc_7C2180
0x7C21B5: mov     eax, [esi+1Ch]
0x7C21B8: cmp     eax, ebx
0x7C21BA: jz      loc_7C224E
0x7C21C0: lea     edi, [esi+10h]
0x7C21C3: mov     eax, [esi+14h]
0x7C21C6: mov     ebx, [eax+8]
0x7C21C9: mov     ebp, [ebx]
0x7C21CB: test    ebp, ebp
0x7C21CD: jz      short loc_7C21F2
0x7C21CF: lea     ecx, [ebp+4]
0x7C21D2: push    ecx; lpAddend
0x7C21D3: call    dword ptr ds:0A2807Ch
0x7C21D9: test    eax, eax
0x7C21DB: jnz     short loc_7C21EC
0x7C21DD: test    ebp, ebp
0x7C21DF: jz      short loc_7C21EC
0x7C21E1: mov     edx, [ebp+0]
0x7C21E4: mov     eax, [edx]
0x7C21E6: push    1
0x7C21E8: mov     ecx, ebp
0x7C21EA: call    eax
0x7C21EC: mov     dword ptr [ebx], 0
0x7C21F2: mov     ecx, [edi+4]
0x7C21F5: mov     eax, [ecx]
0x7C21F7: xor     edx, edx
0x7C21F9: cmp     eax, edx
0x7C21FB: mov     [edi+4], eax
0x7C21FE: jz      short loc_7C2205
0x7C2200: mov     [eax+4], edx
0x7C2203: jmp     short loc_7C2208
0x7C2205: mov     [edi+8], edx
0x7C2208: mov     edx, [edi]
0x7C220A: mov     eax, [edx+8]
0x7C220D: push    ecx
0x7C220E: mov     ecx, edi
0x7C2210: call    eax
0x7C2212: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7C2216: mov     ebp, [ebx]
0x7C2218: test    ebp, ebp
0x7C221A: jz      short loc_7C2239
0x7C221C: lea     ecx, [ebp+4]
0x7C221F: push    ecx; lpAddend
0x7C2220: call    dword ptr ds:0A2807Ch
0x7C2226: test    eax, eax
0x7C2228: jnz     short loc_7C2239
0x7C222A: test    ebp, ebp
0x7C222C: jz      short loc_7C2239
0x7C222E: mov     edx, [ebp+0]
0x7C2231: mov     eax, [edx]
0x7C2233: push    1
0x7C2235: mov     ecx, ebp
0x7C2237: call    eax
0x7C2239: push    ebx
0x7C223A: call    FormHeapFree
0x7C223F: add     esp, 4
0x7C2242: cmp     dword ptr [esi+1Ch], 0
0x7C2246: jnz     loc_7C21C3
0x7C224C: xor     ebx, ebx
0x7C224E: cmp     [esi+0Ch], ebx
0x7C2251: jz      loc_7C22D6
0x7C2257: mov     ecx, [esi+4]
0x7C225A: mov     ebp, [ecx+8]
0x7C225D: mov     edi, [ebp+0]
0x7C2260: cmp     edi, ebx
0x7C2262: jz      short loc_7C2283
0x7C2264: lea     edx, [edi+4]
0x7C2267: push    edx; lpAddend
0x7C2268: call    dword ptr ds:0A2807Ch
0x7C226E: test    eax, eax
0x7C2270: jnz     short loc_7C2280
0x7C2272: cmp     edi, ebx
0x7C2274: jz      short loc_7C2280
0x7C2276: mov     eax, [edi]
0x7C2278: mov     edx, [eax]
0x7C227A: push    1
0x7C227C: mov     ecx, edi
0x7C227E: call    edx
0x7C2280: mov     [ebp+0], ebx
0x7C2283: mov     ecx, [esi+4]
0x7C2286: mov     eax, [ecx]
0x7C2288: cmp     eax, ebx
0x7C228A: mov     [esi+4], eax
0x7C228D: jz      short loc_7C2294
0x7C228F: mov     [eax+4], ebx
0x7C2292: jmp     short loc_7C2297
0x7C2294: mov     [esi+8], ebx
0x7C2297: mov     eax, [esi]
0x7C2299: mov     edx, [eax+8]
0x7C229C: push    ecx
0x7C229D: mov     ecx, esi
0x7C229F: call    edx
0x7C22A1: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7C22A5: mov     edi, [ebp+0]
0x7C22A8: cmp     edi, ebx
0x7C22AA: jz      short loc_7C22C8
0x7C22AC: lea     eax, [edi+4]
0x7C22AF: push    eax; lpAddend
0x7C22B0: call    dword ptr ds:0A2807Ch
0x7C22B6: test    eax, eax
0x7C22B8: jnz     short loc_7C22C8
0x7C22BA: cmp     edi, ebx
0x7C22BC: jz      short loc_7C22C8
0x7C22BE: mov     edx, [edi]
0x7C22C0: mov     eax, [edx]
0x7C22C2: push    1
0x7C22C4: mov     ecx, edi
0x7C22C6: call    eax
0x7C22C8: push    ebp
0x7C22C9: call    FormHeapFree
0x7C22CE: add     esp, 4
0x7C22D1: cmp     [esi+0Ch], ebx
0x7C22D4: jnz     short loc_7C2257
0x7C22D6: mov     edi, [esi+40h]
0x7C22D9: cmp     edi, ebx
0x7C22DB: mov     ebp, ds:0A2807Ch
0x7C22E1: jz      short loc_7C22FE
0x7C22E3: lea     ecx, [edi+4]
0x7C22E6: push    ecx; lpAddend
0x7C22E7: call    ebp ; InterlockedDecrement
0x7C22E9: test    eax, eax
0x7C22EB: jnz     short loc_7C22FB
0x7C22ED: cmp     edi, ebx
0x7C22EF: jz      short loc_7C22FB
0x7C22F1: mov     edx, [edi]
0x7C22F3: mov     eax, [edx]
0x7C22F5: push    1
0x7C22F7: mov     ecx, edi
0x7C22F9: call    eax
0x7C22FB: mov     [esi+40h], ebx
0x7C22FE: mov     edi, [esi+44h]
0x7C2301: cmp     edi, ebx
0x7C2303: jz      short loc_7C2320
0x7C2305: lea     ecx, [edi+4]
0x7C2308: push    ecx; lpAddend
0x7C2309: call    ebp ; InterlockedDecrement
0x7C230B: test    eax, eax
0x7C230D: jnz     short loc_7C231D
0x7C230F: cmp     edi, ebx
0x7C2311: jz      short loc_7C231D
0x7C2313: mov     edx, [edi]
0x7C2315: mov     eax, [edx]
0x7C2317: push    1
0x7C2319: mov     ecx, edi
0x7C231B: call    eax
0x7C231D: mov     [esi+44h], ebx
0x7C2320: mov     edi, [esi+44h]
0x7C2323: cmp     edi, ebx
0x7C2325: mov     byte ptr [esp+28h+var_4], 4
0x7C232A: jz      short loc_7C2344
0x7C232C: lea     ecx, [edi+4]
0x7C232F: push    ecx; lpAddend
0x7C2330: call    ebp ; InterlockedDecrement
0x7C2332: test    eax, eax
0x7C2334: jnz     short loc_7C2344
0x7C2336: cmp     edi, ebx
0x7C2338: jz      short loc_7C2344
0x7C233A: mov     edx, [edi]
0x7C233C: mov     eax, [edx]
0x7C233E: push    1
0x7C2340: mov     ecx, edi
0x7C2342: call    eax
0x7C2344: mov     edi, [esi+40h]
0x7C2347: cmp     edi, ebx
0x7C2349: mov     byte ptr [esp+28h+var_4], 3
0x7C234E: jz      short loc_7C2368
0x7C2350: lea     ecx, [edi+4]
0x7C2353: push    ecx; lpAddend
0x7C2354: call    ebp ; InterlockedDecrement
0x7C2356: test    eax, eax
0x7C2358: jnz     short loc_7C2368
0x7C235A: cmp     edi, ebx
0x7C235C: jz      short loc_7C2368
0x7C235E: mov     edx, [edi]
0x7C2360: mov     eax, [edx]
0x7C2362: push    1
0x7C2364: mov     ecx, edi
0x7C2366: call    eax
0x7C2368: lea     ecx, [esi+30h]
0x7C236B: mov     byte ptr [esp+28h+var_4], 2
0x7C2370: call    ??1?$NiTPointerList@V?$NiPointer@VBSRenderedTexture@@@@@@UAE@XZ
0x7C2375: lea     ecx, [esi+20h]
0x7C2378: mov     byte ptr [esp+28h+var_4], 1
0x7C237D: call    ??1?$NiTPointerList@V?$NiPointer@VBSRenderedTexture@@@@@@UAE@XZ
0x7C2382: lea     ecx, [esi+10h]
0x7C2385: mov     byte ptr [esp+28h+var_4], 0
0x7C238A: call    ??1?$NiTPointerList@PAURenderedTextureData@BSTextureManager@@@@UAE@XZ
0x7C238F: mov     ecx, esi
0x7C2391: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7C2399: call    ??1?$NiTPointerList@PAURenderedTextureData@BSTextureManager@@@@UAE@XZ
0x7C239E: mov     ecx, dword ptr [esp+28h+var_C]
0x7C23A2: mov     large fs:0, ecx
0x7C23A9: pop     ecx
0x7C23AA: pop     edi
0x7C23AB: pop     esi
0x7C23AC: pop     ebp
0x7C23AD: pop     ebx
0x7C23AE: add     esp, 14h
0x7C23B1: retn

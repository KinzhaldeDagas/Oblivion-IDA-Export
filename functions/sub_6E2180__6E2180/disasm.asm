0x6E2180: sub     esp, 0Ch
0x6E2183: push    ebx
0x6E2184: push    ebp
0x6E2185: push    esi
0x6E2186: mov     esi, [esp+18h+a2]
0x6E218A: push    edi
0x6E218B: push    esi; a2
0x6E218C: mov     [esp+20h+var_C], ecx
0x6E2190: call    sub_7008A0
0x6E2195: mov     eax, [esi+21Ch]
0x6E219B: push    1
0x6E219D: lea     ecx, [esp+20h+var_8]
0x6E21A1: push    ecx
0x6E21A2: mov     ebp, 4
0x6E21A7: push    ebp
0x6E21A8: lea     edx, [esp+28h+a2]
0x6E21AC: push    edx
0x6E21AD: push    eax
0x6E21AE: mov     eax, [eax+4]
0x6E21B1: mov     [esp+30h+var_8], ebp
0x6E21B5: call    eax
0x6E21B7: add     esp, 14h
0x6E21BA: cmp     [esp+1Ch+a2], 0
0x6E21BF: jbe     short loc_6E2240
0x6E21C1: mov     eax, [esi+21Ch]
0x6E21C7: push    1
0x6E21C9: lea     ecx, [esp+20h+var_8]
0x6E21CD: push    ecx
0x6E21CE: push    ebp
0x6E21CF: lea     edx, [esp+28h+var_4]
0x6E21D3: push    edx
0x6E21D4: push    eax
0x6E21D5: mov     eax, [eax+4]
0x6E21D8: mov     [esp+30h+var_8], ebp
0x6E21DC: call    eax
0x6E21DE: mov     edi, [esp+30h+var_4]
0x6E21E2: mov     edx, [esp+30h+a2]
0x6E21E6: mov     cl, ds:byte_B3D3F4[edi]
0x6E21EC: mov     eax, ds:0B3D0B8h[edi*4]
0x6E21F3: push    edx
0x6E21F4: push    esi
0x6E21F5: mov     byte ptr [esp+38h+var_4], cl
0x6E21F9: call    eax ; dword_B3D0B8
0x6E21FB: mov     ecx, [esp+38h+a2]
0x6E21FF: mov     edx, ds:0B3D440h[edi*4]
0x6E2206: mov     ebx, eax
0x6E2208: mov     eax, [esp+38h+var_4]
0x6E220C: push    eax
0x6E220D: push    ecx
0x6E220E: push    ebx
0x6E220F: call    edx ; dword_B3D440
0x6E2211: mov     eax, 0FFFFh
0x6E2216: add     esp, 28h
0x6E2219: cmp     [esp+1Ch+a2], eax
0x6E221D: jbe     short loc_6E2230
0x6E221F: push    offset aTransformDataL; "Transform data loading has more than 65"...
0x6E2224: mov     [esp+20h+a2], eax
0x6E2228: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6E222D: add     esp, 4
0x6E2230: mov     eax, [esp+1Ch+a2]
0x6E2234: mov     ecx, [esp+1Ch+var_C]
0x6E2238: push    edi
0x6E2239: push    eax
0x6E223A: push    ebx
0x6E223B: call    sub_6E1E90
0x6E2240: mov     eax, [esi+21Ch]
0x6E2246: push    1
0x6E2248: lea     ecx, [esp+20h+var_4]
0x6E224C: push    ecx
0x6E224D: push    ebp
0x6E224E: lea     edx, [esp+28h+a2]
0x6E2252: push    edx
0x6E2253: push    eax
0x6E2254: mov     eax, [eax+4]
0x6E2257: mov     [esp+30h+var_4], ebp
0x6E225B: call    eax
0x6E225D: add     esp, 14h
0x6E2260: cmp     [esp+1Ch+a2], 0
0x6E2265: jbe     short loc_6E22E6
0x6E2267: mov     eax, [esi+21Ch]
0x6E226D: push    1
0x6E226F: lea     ecx, [esp+20h+var_4]
0x6E2273: push    ecx
0x6E2274: push    ebp
0x6E2275: lea     edx, [esp+28h+var_8]
0x6E2279: push    edx
0x6E227A: push    eax
0x6E227B: mov     eax, [eax+4]
0x6E227E: mov     [esp+30h+var_4], ebp
0x6E2282: call    eax
0x6E2284: mov     edx, [esp+30h+a2]
0x6E2288: mov     edi, [esp+30h+var_8]
0x6E228C: mov     cl, ds:byte_B3D3EE[edi]
0x6E2292: mov     eax, ds:0B3D0A0h[edi*4]
0x6E2299: push    edx
0x6E229A: push    esi
0x6E229B: mov     byte ptr [esp+38h+var_4], cl
0x6E229F: call    eax ; dword_B3D0A0
0x6E22A1: mov     ecx, [esp+38h+a2]
0x6E22A5: mov     edx, ds:0B3D428h[edi*4]
0x6E22AC: mov     ebx, eax
0x6E22AE: mov     eax, [esp+38h+var_4]
0x6E22B2: push    eax
0x6E22B3: push    ecx
0x6E22B4: push    ebx
0x6E22B5: call    edx
0x6E22B7: mov     eax, 0FFFFh
0x6E22BC: add     esp, 28h
0x6E22BF: cmp     [esp+1Ch+a2], eax
0x6E22C3: jbe     short loc_6E22D6
0x6E22C5: push    offset aTransformDat_0; "Transform data loading has more than 65"...
0x6E22CA: mov     [esp+20h+a2], eax
0x6E22CE: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6E22D3: add     esp, 4
0x6E22D6: mov     eax, [esp+1Ch+a2]
0x6E22DA: mov     ecx, [esp+1Ch+var_C]
0x6E22DE: push    edi
0x6E22DF: push    eax
0x6E22E0: push    ebx
0x6E22E1: call    sub_6E1F00
0x6E22E6: mov     eax, [esi+21Ch]
0x6E22EC: push    1
0x6E22EE: lea     ecx, [esp+20h+var_4]
0x6E22F2: push    ecx
0x6E22F3: push    ebp
0x6E22F4: lea     edx, [esp+28h+a2]
0x6E22F8: push    edx
0x6E22F9: push    eax
0x6E22FA: mov     eax, [eax+4]
0x6E22FD: mov     [esp+30h+var_4], ebp
0x6E2301: call    eax
0x6E2303: add     esp, 14h
0x6E2306: cmp     [esp+1Ch+a2], 0
0x6E230B: jbe     short loc_6E238C
0x6E230D: mov     eax, [esi+21Ch]
0x6E2313: push    1
0x6E2315: lea     ecx, [esp+20h+var_4]
0x6E2319: push    ecx
0x6E231A: push    ebp
0x6E231B: lea     edx, [esp+28h+var_8]
0x6E231F: push    edx
0x6E2320: push    eax
0x6E2321: mov     eax, [eax+4]
0x6E2324: mov     [esp+30h+var_4], ebp
0x6E2328: call    eax
0x6E232A: mov     edx, [esp+30h+a2]
0x6E232E: mov     edi, [esp+30h+var_8]
0x6E2332: mov     cl, ds:byte_B3D3E8[edi]
0x6E2338: mov     eax, ds:0B3D088h[edi*4]
0x6E233F: push    edx
0x6E2340: push    esi
0x6E2341: mov     byte ptr [esp+38h+var_4], cl
0x6E2345: call    eax ; dword_B3D088
0x6E2347: mov     ecx, [esp+38h+a2]
0x6E234B: mov     edx, ds:0B3D410h[edi*4]
0x6E2352: mov     esi, eax
0x6E2354: mov     eax, [esp+38h+var_4]
0x6E2358: push    eax
0x6E2359: push    ecx
0x6E235A: push    esi
0x6E235B: call    edx ; dword_B3D410
0x6E235D: mov     eax, 0FFFFh
0x6E2362: add     esp, 28h
0x6E2365: cmp     [esp+1Ch+a2], eax
0x6E2369: jbe     short loc_6E237C
0x6E236B: push    offset aTransformDat_1; "Transform data loading has more than 65"...
0x6E2370: mov     [esp+20h+a2], eax
0x6E2374: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6E2379: add     esp, 4
0x6E237C: mov     eax, [esp+1Ch+a2]
0x6E2380: mov     ecx, [esp+1Ch+var_C]
0x6E2384: push    edi
0x6E2385: push    eax
0x6E2386: push    esi
0x6E2387: call    sub_6E1F60
0x6E238C: pop     edi
0x6E238D: pop     esi
0x6E238E: pop     ebp
0x6E238F: pop     ebx
0x6E2390: add     esp, 0Ch
0x6E2393: retn    4

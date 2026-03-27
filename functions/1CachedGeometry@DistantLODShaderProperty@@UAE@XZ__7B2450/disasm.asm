0x7B2450: push    0FFFFFFFFh
0x7B2452: push    offset ??1CachedGeometry@DistantLODShaderProperty@@UAE@XZ_SEH
0x7B2457: mov     eax, large fs:0
0x7B245D: push    eax
0x7B245E: push    ecx
0x7B245F: push    ebx
0x7B2460: push    esi
0x7B2461: push    edi
0x7B2462: mov     eax, ds:0B30AACh
0x7B2467: xor     eax, esp
0x7B2469: push    eax
0x7B246A: lea     eax, [esp+20h+var_C]
0x7B246E: mov     large fs:0, eax
0x7B2474: mov     edi, ecx
0x7B2476: mov     [esp+20h+var_10], edi
0x7B247A: mov     esi, [edi+24h]
0x7B247D: test    esi, esi
0x7B247F: mov     ebx, ds:0A2807Ch
0x7B2485: mov     [esp+20h+var_4], 4
0x7B248D: jz      short loc_7B24A7
0x7B248F: lea     eax, [esi+4]
0x7B2492: push    eax; lpAddend
0x7B2493: call    ebx ; InterlockedDecrement
0x7B2495: test    eax, eax
0x7B2497: jnz     short loc_7B24A7
0x7B2499: test    esi, esi
0x7B249B: jz      short loc_7B24A7
0x7B249D: mov     edx, [esi]
0x7B249F: mov     eax, [edx]
0x7B24A1: push    1
0x7B24A3: mov     ecx, esi
0x7B24A5: call    eax
0x7B24A7: mov     esi, [edi+20h]
0x7B24AA: test    esi, esi
0x7B24AC: mov     byte ptr [esp+20h+var_4], 3
0x7B24B1: jz      short loc_7B24CB
0x7B24B3: lea     ecx, [esi+4]
0x7B24B6: push    ecx; lpAddend
0x7B24B7: call    ebx ; InterlockedDecrement
0x7B24B9: test    eax, eax
0x7B24BB: jnz     short loc_7B24CB
0x7B24BD: test    esi, esi
0x7B24BF: jz      short loc_7B24CB
0x7B24C1: mov     edx, [esi]
0x7B24C3: mov     eax, [edx]
0x7B24C5: push    1
0x7B24C7: mov     ecx, esi
0x7B24C9: call    eax
0x7B24CB: mov     esi, [edi+1Ch]
0x7B24CE: test    esi, esi
0x7B24D0: mov     byte ptr [esp+20h+var_4], 2
0x7B24D5: jz      short loc_7B24EF
0x7B24D7: lea     ecx, [esi+4]
0x7B24DA: push    ecx; lpAddend
0x7B24DB: call    ebx ; InterlockedDecrement
0x7B24DD: test    eax, eax
0x7B24DF: jnz     short loc_7B24EF
0x7B24E1: test    esi, esi
0x7B24E3: jz      short loc_7B24EF
0x7B24E5: mov     edx, [esi]
0x7B24E7: mov     eax, [edx]
0x7B24E9: push    1
0x7B24EB: mov     ecx, esi
0x7B24ED: call    eax
0x7B24EF: mov     esi, [edi+18h]
0x7B24F2: test    esi, esi
0x7B24F4: mov     byte ptr [esp+20h+var_4], 1
0x7B24F9: jz      short loc_7B2513
0x7B24FB: lea     ecx, [esi+4]
0x7B24FE: push    ecx; lpAddend
0x7B24FF: call    ebx ; InterlockedDecrement
0x7B2501: test    eax, eax
0x7B2503: jnz     short loc_7B2513
0x7B2505: test    esi, esi
0x7B2507: jz      short loc_7B2513
0x7B2509: mov     edx, [esi]
0x7B250B: mov     eax, [edx]
0x7B250D: push    1
0x7B250F: mov     ecx, esi
0x7B2511: call    eax
0x7B2513: mov     esi, [edi+8]
0x7B2516: test    esi, esi
0x7B2518: mov     byte ptr [esp+20h+var_4], 0
0x7B251D: jz      short loc_7B2537
0x7B251F: lea     ecx, [esi+4]
0x7B2522: push    ecx; lpAddend
0x7B2523: call    ebx ; InterlockedDecrement
0x7B2525: test    eax, eax
0x7B2527: jnz     short loc_7B2537
0x7B2529: test    esi, esi
0x7B252B: jz      short loc_7B2537
0x7B252D: mov     edx, [esi]
0x7B252F: mov     eax, [edx]
0x7B2531: push    1
0x7B2533: mov     ecx, esi
0x7B2535: call    eax
0x7B2537: push    offset NiRefObject_objcount; lpAddend
0x7B253C: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7B2542: call    ebx ; InterlockedDecrement
0x7B2544: mov     ecx, dword ptr [esp+20h+var_C]
0x7B2548: mov     large fs:0, ecx
0x7B254F: pop     ecx
0x7B2550: pop     edi
0x7B2551: pop     esi
0x7B2552: pop     ebx
0x7B2553: add     esp, 10h
0x7B2556: retn

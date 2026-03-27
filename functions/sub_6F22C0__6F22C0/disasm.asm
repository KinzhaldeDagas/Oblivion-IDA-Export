0x6F22C0: push    ebp
0x6F22C1: mov     ebp, esp
0x6F22C3: push    0FFFFFFFFh
0x6F22C5: push    offset SEH_6F22C0
0x6F22CA: mov     eax, large fs:0
0x6F22D0: push    eax
0x6F22D1: sub     esp, 8
0x6F22D4: push    ebx
0x6F22D5: push    esi
0x6F22D6: push    edi
0x6F22D7: mov     eax, ds:0B30AACh
0x6F22DC: xor     eax, ebp
0x6F22DE: push    eax
0x6F22DF: lea     eax, [ebp+var_C]
0x6F22E2: mov     large fs:0, eax
0x6F22E8: mov     [ebp+var_10], esp
0x6F22EB: mov     esi, ecx
0x6F22ED: mov     [ebp+var_14], esi
0x6F22F0: mov     ebx, [ebp+arg_0]
0x6F22F3: mov     eax, [ebx+4]
0x6F22F6: xor     edi, edi
0x6F22F8: cmp     eax, edi
0x6F22FA: jnz     short loc_6F2300
0x6F22FC: xor     eax, eax
0x6F22FE: jmp     short loc_6F2315
0x6F2300: mov     ecx, [ebx+8]
0x6F2303: sub     ecx, eax
0x6F2305: mov     eax, 2AAAAAABh
0x6F230A: imul    ecx
0x6F230C: sar     edx, 1
0x6F230E: mov     eax, edx
0x6F2310: shr     eax, 1Fh
0x6F2313: add     eax, edx
0x6F2315: cmp     eax, edi
0x6F2317: mov     [esi+4], edi
0x6F231A: mov     [esi+8], edi
0x6F231D: mov     [esi+0Ch], edi
0x6F2320: jz      short loc_6F238C
0x6F2322: cmp     eax, 0FFFFFFFFh
0x6F2325: jbe     short loc_6F232C
0x6F2327: call    sub_790B90
0x6F232C: lea     edi, [eax+eax*2]
0x6F232F: add     edi, edi
0x6F2331: add     edi, edi
0x6F2333: push    edi; Size
0x6F2334: call    FormHeapAlloc
0x6F2339: add     edi, eax
0x6F233B: mov     [esi+4], eax
0x6F233E: mov     [esi+8], eax
0x6F2341: mov     [esi+0Ch], edi
0x6F2344: mov     edi, [ebx+8]
0x6F2347: add     esp, 4
0x6F234A: cmp     [ebx+4], edi
0x6F234D: mov     [ebp+var_4], 0
0x6F2354: jbe     short loc_6F235B
0x6F2356: call    __invalid_parameter_noinfo
0x6F235B: mov     ecx, [ebx+4]
0x6F235E: cmp     ecx, [ebx+8]
0x6F2361: mov     [ebp+arg_0], ecx
0x6F2364: jbe     short loc_6F236E
0x6F2366: call    __invalid_parameter_noinfo
0x6F236B: mov     ecx, [ebp+arg_0]
0x6F236E: mov     eax, [esi+4]
0x6F2371: mov     byte ptr [ebp+arg_0], 0
0x6F2375: mov     edx, [ebp+arg_0]
0x6F2378: push    edx
0x6F2379: mov     edx, [ebp+arg_0]
0x6F237C: push    edx
0x6F237D: push    esi
0x6F237E: push    eax
0x6F237F: push    edi
0x6F2380: push    ecx
0x6F2381: call    sub_6F11A0
0x6F2386: add     esp, 18h
0x6F2389: mov     [esi+8], eax
0x6F238C: mov     eax, esi
0x6F238E: mov     ecx, [ebp+var_C]
0x6F2391: mov     large fs:0, ecx
0x6F2398: pop     ecx
0x6F2399: pop     edi
0x6F239A: pop     esi
0x6F239B: pop     ebx
0x6F239C: mov     esp, ebp
0x6F239E: pop     ebp
0x6F239F: retn    4
0x6F23A2: mov     ecx, [ebp+var_14]; void *
0x6F23A5: call    sub_794EB0
0x6F23AA: push    0
0x6F23AC: push    0
0x6F23AE: call    ThrowException??

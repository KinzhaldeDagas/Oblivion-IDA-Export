0x5B22E0: push    0FFFFFFFFh
0x5B22E2: push    offset SEH_787830
0x5B22E7: mov     eax, large fs:0
0x5B22ED: push    eax
0x5B22EE: push    ebx
0x5B22EF: push    esi
0x5B22F0: push    edi
0x5B22F1: mov     eax, ds:0B30AACh
0x5B22F6: xor     eax, esp
0x5B22F8: push    eax
0x5B22F9: lea     eax, [esp+1Ch+var_C]
0x5B22FD: mov     large fs:0, eax
0x5B2303: mov     ebx, [esp+1Ch+arg_0]
0x5B2307: test    ebx, ebx
0x5B2309: jz      sub_5B2416
0x5B230F: cmp     dword ptr [ecx+4], 0
0x5B2313: lea     esi, [ecx+4]
0x5B2316: mov     edi, ecx
0x5B2318: jz      short loc_5B2337
0x5B231A: lea     ebx, [ebx+0]
0x5B2320: mov     ecx, [edi]
0x5B2322: push    ebx
0x5B2323: call    ActvEffListEntry_CompareName
0x5B2328: test    al, al
0x5B232A: jnz     short loc_5B239E
0x5B232C: mov     edi, [esi]
0x5B232E: cmp     dword ptr [edi+4], 0
0x5B2332: lea     esi, [edi+4]
0x5B2335: jnz     short loc_5B2320
0x5B2337: mov     ecx, [edi]
0x5B2339: test    ecx, ecx
0x5B233B: jz      loc_5B23FA
0x5B2341: push    ebx
0x5B2342: call    ActvEffListEntry_CompareName
0x5B2347: test    al, al
0x5B2349: jnz     short loc_5B239E
0x5B234B: push    8; Size
0x5B234D: call    FormHeapAlloc
0x5B2352: mov     esi, eax
0x5B2354: add     esp, 4
0x5B2357: mov     [esp+1Ch+arg_0], esi
0x5B235B: test    esi, esi
0x5B235D: mov     [esp+1Ch+var_4], 0
0x5B2365: jz      short loc_5B23E0
0x5B2367: push    8; Size
0x5B2369: call    FormHeapAlloc
0x5B236E: add     esp, 4
0x5B2371: test    eax, eax
0x5B2373: jz      short loc_5B23C1
0x5B2375: push    ebx
0x5B2376: mov     ecx, eax
0x5B2378: call    sub_5B2190
0x5B237D: mov     [esi], eax
0x5B237F: mov     dword ptr [esi+4], 0
0x5B2386: mov     [edi+4], esi
0x5B2389: mov     ecx, [esp+1Ch+var_C]
0x5B238D: mov     large fs:0, ecx
0x5B2394: pop     ecx
0x5B2395: pop     edi
0x5B2396: pop     esi
0x5B2397: pop     ebx
0x5B2398: add     esp, 0Ch
0x5B239B: retn    4
0x5B239E: mov     edi, [edi]
0x5B23A0: push    ebx
0x5B23A1: call    sub_5B2140
0x5B23A6: add     esp, 4
0x5B23A9: add     [edi+4], eax
0x5B23AC: mov     ecx, [esp+1Ch+var_C]
0x5B23B0: mov     large fs:0, ecx
0x5B23B7: pop     ecx
0x5B23B8: pop     edi
0x5B23B9: pop     esi
0x5B23BA: pop     ebx
0x5B23BB: add     esp, 0Ch
0x5B23BE: retn    4
0x5B23C1: xor     eax, eax
0x5B23C3: mov     [esi], eax
0x5B23C5: mov     [esi+4], eax
0x5B23C8: mov     [edi+4], esi
0x5B23CB: mov     ecx, [esp+1Ch+var_C]
0x5B23CF: mov     large fs:0, ecx
0x5B23D6: pop     ecx
0x5B23D7: pop     edi
0x5B23D8: pop     esi
0x5B23D9: pop     ebx
0x5B23DA: add     esp, 0Ch
0x5B23DD: retn    4
0x5B23E0: xor     esi, esi
0x5B23E2: mov     [edi+4], esi
0x5B23E5: mov     ecx, [esp+1Ch+var_C]
0x5B23E9: mov     large fs:0, ecx
0x5B23F0: pop     ecx
0x5B23F1: pop     edi
0x5B23F2: pop     esi
0x5B23F3: pop     ebx
0x5B23F4: add     esp, 0Ch
0x5B23F7: retn    4
0x5B23FA: push    8; Size
0x5B23FC: call    FormHeapAlloc
0x5B2401: add     esp, 4
0x5B2404: test    eax, eax
0x5B2406: jz      short loc_5B2412
0x5B2408: push    ebx
0x5B2409: mov     ecx, eax
0x5B240B: call    sub_5B2190
0x5B2410: jmp     short loc_5B2414
0x5B2412: xor     eax, eax
0x5B2414: mov     [edi], eax

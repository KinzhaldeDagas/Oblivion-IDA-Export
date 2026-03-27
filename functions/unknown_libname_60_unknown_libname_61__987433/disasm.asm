0x987433: mov     eax, esi
0x987435: sub     eax, ebx
0x987437: xor     edx, edx
0x987439: div     ebp
0x98743B: add     eax, 1
0x98743E: cmp     eax, 8
0x987441: ja      short loc_987480
0x987443: mov     eax, [esp+arg_11C]
0x98744A: push    eax
0x98744B: push    ebp
0x98744C: push    esi
0x98744D: push    ebx
0x98744E: call    _shortsort
0x987453: add     esp, 10h
0x987456: mov     eax, [esp+arg_18]
0x98745A: sub     eax, 1
0x98745D: mov     [esp+arg_18], eax
0x987461: js      loc_98762C
0x987467: mov     edx, [esp+eax*4+arg_1C]
0x98746B: mov     eax, [esp+eax*4+arg_94]
0x987472: mov     [esp+arg_C], edx
0x987476: mov     [esp+arg_10], eax
0x98747A: mov     esi, eax
0x98747C: mov     ebx, edx
0x98747E: jmp     short unknown_libname_60___unknown_libname_61
0x987480: shr     eax, 1
0x987482: imul    eax, ebp
0x987485: add     eax, ebx
0x987487: mov     edi, eax
0x987489: push    edi
0x98748A: push    ebx
0x98748B: call    [esp+8+arg_11C]
0x987492: add     esp, 8
0x987495: test    eax, eax
0x987497: jle     short loc_9874A4
0x987499: mov     edx, ebp
0x98749B: mov     ecx, edi
0x98749D: mov     eax, ebx
0x98749F: call    _swap
0x9874A4: push    esi
0x9874A5: push    ebx
0x9874A6: call    [esp+8+arg_11C]
0x9874AD: add     esp, 8
0x9874B0: test    eax, eax
0x9874B2: jle     short loc_9874BF
0x9874B4: mov     edx, ebp
0x9874B6: mov     ecx, esi
0x9874B8: mov     eax, ebx
0x9874BA: call    _swap
0x9874BF: push    esi
0x9874C0: push    edi
0x9874C1: call    [esp+8+arg_11C]
0x9874C8: add     esp, 8
0x9874CB: test    eax, eax
0x9874CD: jle     short loc_9874E0
0x9874CF: mov     edx, ebp
0x9874D1: mov     ecx, esi
0x9874D3: mov     eax, edi
0x9874D5: call    _swap
0x9874DA: lea     ebx, [ebx+0]
0x9874E0: cmp     edi, ebx
0x9874E2: jbe     short loc_987500
0x9874E4: add     ebx, ebp
0x9874E6: cmp     ebx, edi
0x9874E8: jnb     short loc_987500
0x9874EA: push    edi
0x9874EB: push    ebx
0x9874EC: call    [esp+8+arg_11C]
0x9874F3: add     esp, 8
0x9874F6: test    eax, eax
0x9874F8: jle     short loc_9874E4
0x9874FA: cmp     edi, ebx
0x9874FC: ja      short loc_987518
0x9874FE: mov     edi, edi
0x987500: add     ebx, ebp
0x987502: cmp     ebx, [esp+arg_10]
0x987506: ja      short loc_987518
0x987508: push    edi
0x987509: push    ebx
0x98750A: call    [esp+8+arg_11C]
0x987511: add     esp, 8
0x987514: test    eax, eax
0x987516: jle     short loc_987500
0x987518: sub     esi, ebp
0x98751A: cmp     esi, edi
0x98751C: jbe     short loc_98752E
0x98751E: push    edi
0x98751F: push    esi
0x987520: call    [esp+8+arg_11C]
0x987527: add     esp, 8
0x98752A: test    eax, eax
0x98752C: jg      short loc_987518
0x98752E: cmp     ebx, esi
0x987530: ja      short loc_987575
0x987532: mov     ecx, ebp
0x987534: mov     eax, esi
0x987536: jz      short loc_987566
0x987538: mov     ebp, ebx
0x98753A: sub     ebp, esi
0x98753C: lea     esp, [esp+0]
0x987540: movzx   edx, byte ptr [eax+ebp]
0x987544: mov     [esp+arg_17], dl
0x987548: movzx   edx, byte ptr [eax]
0x98754B: mov     [eax+ebp], dl
0x98754E: movzx   edx, [esp+arg_17]
0x987553: sub     ecx, 1
0x987556: mov     [eax], dl
0x987558: add     eax, 1
0x98755B: test    ecx, ecx
0x98755D: jnz     short loc_987540
0x98755F: mov     ebp, [esp+arg_118]
0x987566: cmp     edi, esi
0x987568: jnz     loc_9874E0
0x98756E: mov     edi, ebx
0x987570: jmp     loc_9874E0
0x987575: add     esi, ebp
0x987577: cmp     edi, esi
0x987579: jnb     short loc_9875A0
0x98757B: jmp     short loc_987580
0x98757D: align 10h
0x987580: sub     esi, ebp
0x987582: cmp     esi, edi
0x987584: jbe     short loc_9875A0
0x987586: push    edi
0x987587: push    esi
0x987588: call    [esp+8+arg_11C]
0x98758F: add     esp, 8
0x987592: test    eax, eax
0x987594: jz      short loc_987580
0x987596: cmp     edi, esi
0x987598: jb      short loc_9875BA
0x98759A: lea     ebx, [ebx+0]
0x9875A0: mov     eax, [esp+arg_C]
0x9875A4: sub     esi, ebp
0x9875A6: cmp     esi, eax
0x9875A8: jbe     short loc_9875BE
0x9875AA: push    edi
0x9875AB: push    esi
0x9875AC: call    [esp+8+arg_11C]
0x9875B3: add     esp, 8
0x9875B6: test    eax, eax
0x9875B8: jz      short loc_9875A0
0x9875BA: mov     eax, [esp+arg_C]
0x9875BE: mov     edx, [esp+arg_10]
0x9875C2: mov     ecx, edx
0x9875C4: mov     edi, esi
0x9875C6: sub     ecx, ebx
0x9875C8: sub     edi, eax
0x9875CA: cmp     edi, ecx
0x9875CC: jl      short loc_9875FD
0x9875CE: cmp     eax, esi
0x9875D0: jnb     short loc_9875E8
0x9875D2: mov     ecx, [esp+arg_18]
0x9875D6: mov     [esp+ecx*4+arg_1C], eax
0x9875DA: mov     [esp+ecx*4+arg_94], esi
0x9875E1: add     ecx, 1
0x9875E4: mov     [esp+arg_18], ecx
0x9875E8: cmp     ebx, edx
0x9875EA: jnb     loc_987456
0x9875F0: mov     esi, [esp+arg_10]
0x9875F4: mov     [esp+arg_C], ebx
0x9875F8: jmp     unknown_libname_60___unknown_libname_61
0x9875FD: cmp     ebx, edx
0x9875FF: jnb     short loc_987617
0x987601: mov     ecx, [esp+arg_18]
0x987605: mov     [esp+ecx*4+arg_1C], ebx
0x987609: mov     [esp+ecx*4+arg_94], edx
0x987610: add     ecx, 1
0x987613: mov     [esp+arg_18], ecx
0x987617: cmp     eax, esi
0x987619: jnb     loc_987456
0x98761F: mov     ebx, [esp+arg_C]
0x987623: mov     [esp+arg_10], esi
0x987627: jmp     unknown_libname_60___unknown_libname_61
0x98762C: pop     edi
0x98762D: pop     ebp
0x98762E: pop     esi
0x98762F: pop     ebx
0x987630: add     esp, 100h
0x987636: retn

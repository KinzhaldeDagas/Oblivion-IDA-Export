0x98B69E: push    ebp
0x98B69F: mov     ebp, esp
0x98B6A1: sub     esp, 2Ch
0x98B6A4: mov     ecx, [ebp+arg_4]
0x98B6A7: push    ebx
0x98B6A8: mov     ebx, [ebp+arg_10]
0x98B6AB: mov     eax, [ebx+4]
0x98B6AE: cmp     eax, 80h ; '€'
0x98B6B3: push    esi
0x98B6B4: push    edi; struct _s_ESTypeList *
0x98B6B5: mov     [ebp+var_1], 0
0x98B6B9: jg      short loc_98B6C1
0x98B6BB: movsx   ecx, byte ptr [ecx+8]
0x98B6BF: jmp     short loc_98B6C4
0x98B6C1: mov     ecx, [ecx+8]
0x98B6C4: cmp     ecx, 0FFFFFFFFh
0x98B6C7: mov     [ebp+var_8], ecx
0x98B6CA: jl      short loc_98B6D0
0x98B6CC: cmp     ecx, eax
0x98B6CE: jl      short loc_98B6D5
0x98B6D0: call    ?_inconsistency@@YAXXZ
0x98B6D5: mov     esi, [ebp+arg_0]
0x98B6D8: mov     edi, 0E06D7363h
0x98B6DD: cmp     [esi], edi
0x98B6DF: jnz     loc_98B9B0
0x98B6E5: cmp     dword ptr [esi+10h], 3
0x98B6E9: mov     ebx, 19930520h
0x98B6EE: jnz     loc_98B81D
0x98B6F4: mov     eax, [esi+14h]
0x98B6F7: cmp     eax, ebx
0x98B6F9: jz      short loc_98B70D
0x98B6FB: cmp     eax, 19930521h
0x98B700: jz      short loc_98B70D
0x98B702: cmp     eax, 19930522h
0x98B707: jnz     loc_98B81D
0x98B70D: cmp     dword ptr [esi+1Ch], 0
0x98B711: jnz     loc_98B81D
0x98B717: call    __getptd
0x98B71C: cmp     dword ptr [eax+88h], 0
0x98B723: jz      loc_98B9EF
0x98B729: call    __getptd
0x98B72E: mov     esi, [eax+88h]
0x98B734: mov     [ebp+arg_0], esi
0x98B737: call    __getptd
0x98B73C: mov     eax, [eax+8Ch]
0x98B742: push    1
0x98B744: push    esi
0x98B745: mov     [ebp+arg_8], eax
0x98B748: call    unknown_libname_193
0x98B74D: test    eax, eax
0x98B74F: pop     ecx
0x98B750: pop     ecx
0x98B751: jnz     short loc_98B758
0x98B753: call    ?_inconsistency@@YAXXZ
0x98B758: cmp     [esi], edi
0x98B75A: jnz     short loc_98B782
0x98B75C: cmp     dword ptr [esi+10h], 3
0x98B760: jnz     short loc_98B782
0x98B762: mov     eax, [esi+14h]
0x98B765: cmp     eax, ebx
0x98B767: jz      short loc_98B777
0x98B769: cmp     eax, 19930521h
0x98B76E: jz      short loc_98B777
0x98B770: cmp     eax, 19930522h
0x98B775: jnz     short loc_98B782
0x98B777: cmp     dword ptr [esi+1Ch], 0
0x98B77B: jnz     short loc_98B782
0x98B77D: call    ?_inconsistency@@YAXXZ
0x98B782: call    __getptd
0x98B787: cmp     dword ptr [eax+94h], 0
0x98B78E: jz      loc_98B81D
0x98B794: call    __getptd
0x98B799: mov     edi, [eax+94h]
0x98B79F: call    __getptd
0x98B7A4: push    [ebp+arg_0]; struct EHExceptionRecord *
0x98B7A7: xor     esi, esi
0x98B7A9: mov     [eax+94h], esi
0x98B7AF: call    ?IsInExceptionSpec@@YAEPAUEHExceptionRecord@@PBU_s_ESTypeList@@@Z
0x98B7B4: test    al, al
0x98B7B6: pop     ecx
0x98B7B7: jnz     short unknown_libname_83___unknown_libname_84
0x98B7B9: xor     ebx, ebx
0x98B7BB: cmp     [edi], ebx
0x98B7BD: jle     short loc_98B7DC
0x98B7BF: mov     eax, [edi+4]
0x98B7C2: mov     ecx, [ebx+eax+4]
0x98B7C6: push    offset ??_R0?AVbad_exception@std@@@8
0x98B7CB: call    unknown_libname_12
0x98B7D0: test    al, al
0x98B7D2: jnz     short loc_98B7E1
0x98B7D4: inc     esi
0x98B7D5: add     ebx, 10h
0x98B7D8: cmp     esi, [edi]
0x98B7DA: jl      short loc_98B7BF
0x98B7DC: jmp     ?terminate@@YAXXZ
0x98B7E1: push    1
0x98B7E3: push    [ebp+arg_0]
0x98B7E6: call    ___DestructExceptionObject
0x98B7EB: pop     ecx
0x98B7EC: pop     ecx
0x98B7ED: lea     eax, [ebp+arg_0]
0x98B7F0: push    eax; char **
0x98B7F1: lea     ecx, [ebp+var_2C]; this
0x98B7F4: mov     [ebp+arg_0], offset aBadException
0x98B7FB: call    ??0exception@std@@QAE@ABQBD@Z
0x98B800: push    offset __TI2?AVbad_exception@std@@; throw info for 'class std::bad_exception'
0x98B805: lea     eax, [ebp+var_2C]
0x98B808: push    eax
0x98B809: mov     [ebp+var_2C], offset ??_7bad_exception@std@@6B@
0x98B810: call    ThrowException??

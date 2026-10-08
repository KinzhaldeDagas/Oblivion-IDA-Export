0x9895F3: push    ebp
0x9895F4: mov     ebp, esp
0x9895F6: sub     esp, 14h
0x9895F9: mov     eax, ___security_cookie
0x9895FE: xor     eax, ebp
0x989600: mov     [ebp+var_4], eax
0x989603: push    ebx
0x989604: push    esi
0x989605: xor     ebx, ebx
0x989607: cmp     dword_BA9E00+8, ebx
0x98960D: push    edi
0x98960E: mov     esi, ecx
0x989610: jnz     short loc_98964A
0x989612: push    ebx; cchDest
0x989613: push    ebx; lpDestStr
0x989614: xor     edi, edi
0x989616: inc     edi
0x989617: push    edi; cchSrc
0x989618: push    offset SrcStr; lpSrcStr
0x98961D: push    100h; dwMapFlags
0x989622: push    ebx; Locale
0x989623: call    ds:LCMapStringW
0x989629: test    eax, eax
0x98962B: jz      short loc_989635
0x98962D: mov     dword_BA9E00+8, edi
0x989633: jmp     short loc_98964A
0x989635: call    ds:GetLastError
0x98963B: cmp     eax, 78h ; 'x'
0x98963E: jnz     short loc_98964A
0x989640: mov     dword_BA9E00+8, 2
0x98964A: cmp     [ebp+cchSrc], ebx
0x98964D: jle     short loc_989671
0x98964F: mov     ecx, [ebp+cchSrc]
0x989652: mov     eax, [ebp+arg_8]
0x989655: dec     ecx
0x989656: cmp     [eax], bl
0x989658: jz      short loc_989662
0x98965A: inc     eax
0x98965B: cmp     ecx, ebx
0x98965D: jnz     short loc_989655
0x98965F: or      ecx, 0FFFFFFFFh
0x989662: mov     eax, [ebp+cchSrc]
0x989665: sub     eax, ecx
0x989667: dec     eax
0x989668: cmp     eax, [ebp+cchSrc]
0x98966B: jge     short loc_98966E
0x98966D: inc     eax
0x98966E: mov     [ebp+cchSrc], eax
0x989671: mov     eax, dword_BA9E00+8
0x989676: cmp     eax, 2
0x989679: jz      loc_98982A
0x98967F: cmp     eax, ebx
0x98982A: cmp     [ebp+Locale], ebx
0x98982D: mov     [ebp+lpSrcStr], ebx
0x989830: mov     [ebp+var_10], ebx
0x989833: jnz     short loc_98983D
0x989835: mov     eax, [esi]
0x989837: mov     eax, [eax+14h]
0x98983A: mov     [ebp+Locale], eax
0x98983D: cmp     [ebp+CodePage], ebx
0x989840: jnz     short loc_98984A
0x989842: mov     eax, [esi]
0x989844: mov     eax, [eax+4]
0x989847: mov     [ebp+CodePage], eax
0x98984A: push    [ebp+Locale]; Locale
0x98984D: call    ___ansicp
0x989852: cmp     eax, 0FFFFFFFFh
0x989855: pop     ecx
0x989856: mov     [ebp+var_14], eax
0x989859: jnz     short loc_989862
0x98985B: xor     eax, eax
0x98985D: jmp     loc_989983
0x989862: cmp     eax, [ebp+CodePage]
0x989865: jz      loc_989946
0x98986B: push    ebx; int
0x98986C: push    ebx; int
0x98986D: lea     ecx, [ebp+cchSrc]
0x989870: push    ecx; int
0x989871: push    [ebp+arg_8]; int
0x989874: push    eax; UINT
0x989875: push    [ebp+CodePage]; CodePage
0x989878: call    ___convertcp
0x98987D: add     esp, 18h
0x989880: cmp     eax, ebx
0x989882: mov     [ebp+lpSrcStr], eax
0x989885: jz      short loc_98985B
0x989887: mov     esi, ds:LCMapStringA
0x98988D: push    ebx; cchDest
0x98988E: push    ebx; lpDestStr
0x98988F: push    [ebp+cchSrc]; cchSrc
0x989892: push    eax; lpSrcStr
0x989893: push    [ebp+dwMapFlags]; dwMapFlags
0x989896: push    [ebp+Locale]; Locale
0x989899: call    esi ; LCMapStringA
0x98989B: cmp     eax, ebx
0x98989D: mov     [ebp+cchDest], eax
0x9898A0: jnz     short loc_9898A9
0x9898A2: xor     esi, esi
0x9898A4: jmp     loc_989960
0x9898A9: jle     short loc_9898E8
0x9898AB: cmp     eax, 0FFFFFFE0h
0x9898AE: ja      short loc_9898E8
0x9898B0: add     eax, 8
0x9898B3: cmp     eax, 400h
0x9898B8: ja      short loc_9898D0
0x9898BA: call    __alloca?
0x9898BF: mov     edi, esp
0x9898C1: cmp     edi, ebx
0x9898C3: jz      short loc_9898A2
0x9898C5: mov     dword ptr [edi], 0CCCCh
0x9898CB: add     edi, 8
0x9898CE: jmp     short loc_9898EA
0x9898D0: push    eax; Size
0x9898D1: call    _malloc
0x9898D6: cmp     eax, ebx
0x9898D8: pop     ecx
0x9898D9: jz      short loc_9898E4
0x9898DB: mov     dword ptr [eax], 0DDDDh
0x9898E1: add     eax, 8
0x9898E4: mov     edi, eax
0x9898E6: jmp     short loc_9898EA
0x9898E8: xor     edi, edi
0x9898EA: cmp     edi, ebx
0x9898EC: jz      short loc_9898A2
0x9898EE: push    [ebp+cchDest]
0x9898F1: push    ebx
0x9898F2: push    edi
0x9898F3: call    __memset
0x9898F8: add     esp, 0Ch
0x9898FB: push    [ebp+cchDest]; cchDest
0x9898FE: push    edi; lpDestStr
0x9898FF: push    [ebp+cchSrc]; cchSrc
0x989902: push    [ebp+lpSrcStr]; lpSrcStr
0x989905: push    [ebp+dwMapFlags]; dwMapFlags
0x989908: push    [ebp+Locale]; Locale
0x98990B: call    esi ; LCMapStringA
0x98990D: cmp     eax, ebx
0x98990F: mov     [ebp+cchDest], eax
0x989912: jnz     short loc_989918
0x989914: xor     esi, esi
0x989916: jmp     short unknown_libname_67___unknown_libname_69
0x989918: push    [ebp+arg_14]; int
0x98991B: lea     eax, [ebp+cchDest]
0x98991E: push    [ebp+arg_10]; int
0x989921: push    eax; int
0x989922: push    edi; int
0x989923: push    [ebp+CodePage]; UINT
0x989926: push    [ebp+var_14]; CodePage
0x989929: call    ___convertcp
0x98992E: mov     esi, eax
0x989930: mov     [ebp+var_10], esi
0x989933: add     esp, 18h
0x989936: neg     esi
0x989938: sbb     esi, esi
0x98993A: and     esi, [ebp+cchDest]

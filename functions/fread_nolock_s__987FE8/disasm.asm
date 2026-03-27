0x987FE8: push    ebp
0x987FE9: mov     ebp, esp
0x987FEB: sub     esp, 10h
0x987FEE: mov     eax, [ebp+DstBuf]
0x987FF1: push    ebx
0x987FF2: push    esi
0x987FF3: push    edi; MaxCount
0x987FF4: mov     edi, [ebp+ElementSize]
0x987FF7: test    edi, edi
0x987FF9: mov     [ebp+Dst], eax
0x987FFC: mov     eax, [ebp+DstSize]
0x987FFF: mov     [ebp+var_4], eax
0x988002: jz      loc_988138
0x988008: cmp     [ebp+Count], 0
0x98800C: jz      loc_988138
0x988012: imul    edi, [ebp+Count]
0x988016: mov     esi, [ebp+File]
0x988019: test    word ptr [esi+0Ch], 10Ch
0x98801F: mov     [ebp+var_10], edi
0x988022: mov     ebx, edi
0x988024: jz      short loc_98802E
0x988026: mov     eax, [esi+18h]
0x988029: mov     [ebp+var_C], eax
0x98802C: jmp     short loc_988035
0x98802E: mov     [ebp+var_C], 1000h
0x988035: test    edi, edi
0x988037: jz      loc_988104
0x98803D: test    word ptr [esi+0Ch], 10Ch
0x988043: jz      short loc_988086
0x988045: mov     eax, [esi+4]
0x988048: test    eax, eax
0x98804A: jz      short loc_988086
0x98804C: jl      loc_988169
0x988052: cmp     ebx, eax
0x988054: mov     edi, ebx
0x988056: jb      short loc_98805A
0x988058: mov     edi, eax
0x98805A: cmp     edi, [ebp+var_4]
0x98805D: ja      loc_988109
0x988063: push    edi; Src
0x988064: push    dword ptr [esi]; Src
0x988066: push    [ebp+var_4]; DstSize
0x988069: push    [ebp+Dst]; Dst
0x98806C: call    _memcpy_s
0x988071: sub     [esi+4], edi
0x988074: add     [esi], edi
0x988076: add     [ebp+Dst], edi
0x988079: sub     ebx, edi
0x98807B: add     esp, 10h
0x98807E: sub     [ebp+var_4], edi
0x988081: mov     edi, [ebp+var_10]
0x988084: jmp     short loc_9880FC
0x988086: cmp     ebx, [ebp+var_C]
0x988089: jb      short loc_9880D4
0x98808B: cmp     [ebp+var_C], 0
0x98808F: mov     eax, ebx
0x988091: jz      short loc_98809C
0x988093: xor     edx, edx
0x988095: div     [ebp+var_C]
0x988098: mov     eax, ebx
0x98809A: sub     eax, edx
0x98809C: cmp     eax, [ebp+var_4]
0x98809F: ja      loc_98813F
0x9880A5: push    eax; unsigned int
0x9880A6: push    [ebp+Dst]; void *
0x9880A9: push    esi; File
0x9880AA: call    __fileno
0x9880AF: pop     ecx
0x9880B0: push    eax; int
0x9880B1: call    __read
0x9880B6: add     esp, 0Ch
0x9880B9: test    eax, eax
0x9880BB: jz      loc_988178
0x9880C1: cmp     eax, 0FFFFFFFFh
0x9880C4: jz      loc_988169
0x9880CA: add     [ebp+Dst], eax
0x9880CD: sub     ebx, eax
0x9880CF: sub     [ebp+var_4], eax
0x9880D2: jmp     short loc_9880FC
0x9880D4: push    esi; File
0x9880D5: call    __filbuf
0x9880DA: cmp     eax, 0FFFFFFFFh
0x9880DD: pop     ecx
0x9880DE: jz      loc_98816D
0x9880E4: cmp     [ebp+var_4], 0
0x9880E8: jz      short loc_98813F
0x9880EA: mov     ecx, [ebp+Dst]
0x9880ED: inc     [ebp+Dst]
0x9880F0: mov     [ecx], al
0x9880F2: mov     eax, [esi+18h]
0x9880F5: dec     ebx
0x9880F6: dec     [ebp+var_4]
0x9880F9: mov     [ebp+var_C], eax
0x9880FC: test    ebx, ebx
0x9880FE: jnz     loc_98803D
0x988104: mov     eax, [ebp+Count]
0x988107: jmp     short loc_98813A
0x988109: xor     esi, esi
0x98810B: cmp     [ebp+DstSize], 0FFFFFFFFh
0x98810F: jz      short loc_988120
0x988111: push    [ebp+DstSize]
0x988114: push    esi
0x988115: push    [ebp+DstBuf]
0x988118: call    __memset
0x98811D: add     esp, 0Ch
0x988120: call    __errno
0x988125: push    esi
0x988126: push    esi
0x988127: push    esi
0x988128: push    esi
0x988129: mov     dword ptr [eax], 22h ; '"'
0x98812F: push    esi
0x988130: call    __invalid_parameter
0x988135: add     esp, 14h
0x988138: xor     eax, eax
0x98813A: pop     edi
0x98813B: pop     esi
0x98813C: pop     ebx
0x98813D: leave
0x98813E: retn
0x98813F: cmp     [ebp+DstSize], 0FFFFFFFFh
0x988143: jz      short loc_988155
0x988145: push    [ebp+DstSize]
0x988148: push    0
0x98814A: push    [ebp+DstBuf]
0x98814D: call    __memset
0x988152: add     esp, 0Ch
0x988155: call    __errno
0x98815A: mov     dword ptr [eax], 22h ; '"'
0x988160: xor     eax, eax
0x988162: push    eax
0x988163: push    eax
0x988164: push    eax
0x988165: push    eax
0x988166: push    eax
0x988167: jmp     short loc_988130
0x988169: or      dword ptr [esi+0Ch], 20h
0x98816D: mov     eax, edi
0x98816F: sub     eax, ebx
0x988171: xor     edx, edx
0x988173: div     [ebp+ElementSize]
0x988176: jmp     short loc_98813A
0x988178: or      dword ptr [esi+0Ch], 10h
0x98817C: jmp     short loc_98816D

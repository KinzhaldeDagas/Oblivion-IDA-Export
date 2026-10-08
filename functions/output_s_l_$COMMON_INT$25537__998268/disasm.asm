0x998268: mov     ecx, [ebp-18h]
0x99826B: test    cx, cx
0x99826E: jns     loc_9983B5
0x998274: add     edi, esi
0x998276: mov     eax, [edi-8]
0x998279: mov     edx, [edi-4]
0x99827C: jmp     loc_9983EA
0x9983B5: test    cx, 1000h
0x9983BA: jnz     loc_998274
0x9983C0: add     edi, 4
0x9983C3: test    cl, 20h
0x9983C6: jz      short loc_9983DD
0x9983C8: test    cl, 40h
0x9983CB: mov     [ebp-2Ch], edi
0x9983CE: jz      short loc_9983D6
0x9983D0: movsx   eax, word ptr [edi-4]
0x9983D4: jmp     short loc_9983DA
0x9983D6: movzx   eax, word ptr [edi-4]
0x9983DA: cdq
0x9983DB: jmp     short loc_9983ED
0x9983DD: test    cl, 40h
0x9983E0: mov     eax, [edi-4]
0x9983E3: jz      short loc_9983E8
0x9983E5: cdq
0x9983E6: jmp     short loc_9983EA
0x9983E8: xor     edx, edx
0x9983EA: mov     [ebp-2Ch], edi
0x9983ED: test    cl, 40h
0x9983F0: jz      short loc_99840A
0x9983F2: test    edx, edx
0x9983F4: jg      short loc_99840A
0x9983F6: jl      short loc_9983FC
0x9983F8: test    eax, eax
0x9983FA: jnb     short loc_99840A
0x9983FC: neg     eax
0x9983FE: adc     edx, 0
0x998401: neg     edx
0x998403: or      dword ptr [ebp-18h], 100h
0x99840A: test    word ptr [ebp-18h], 9000h
0x998410: mov     ebx, edx
0x998412: mov     edi, eax
0x998414: jnz     short loc_998418
0x998416: xor     ebx, ebx
0x998418: cmp     dword ptr [ebp-20h], 0
0x99841C: jge     short loc_998427
0x99841E: mov     dword ptr [ebp-20h], 1
0x998425: jmp     short loc_998438
0x998427: and     dword ptr [ebp-18h], 0FFFFFFF7h
0x99842B: mov     eax, 200h
0x998430: cmp     [ebp-20h], eax
0x998433: jle     short loc_998438
0x998435: mov     [ebp-20h], eax
0x998438: mov     eax, edi
0x99843A: or      eax, ebx
0x99843C: jnz     short loc_998442
0x99843E: and     dword ptr [ebp-3Ch], 0
0x998442: lea     esi, [ebp+1EBh]
0x998448: mov     eax, [ebp-20h]
0x99844B: dec     dword ptr [ebp-20h]
0x99844E: test    eax, eax
0x998450: jg      short loc_998458
0x998452: mov     eax, edi
0x998454: or      eax, ebx
0x998456: jz      short loc_99847C
0x998458: mov     eax, [ebp-28h]
0x99845B: cdq
0x99845C: push    edx
0x99845D: push    eax
0x99845E: push    ebx
0x99845F: push    edi
0x998460: call    __aulldvrm
0x998465: add     ecx, 30h ; '0'
0x998468: cmp     ecx, 39h ; '9'
0x99846B: mov     [ebp-6Ch], ebx
0x99846E: mov     edi, eax
0x998470: mov     ebx, edx
0x998472: jle     short loc_998477
0x998474: add     ecx, [ebp-64h]
0x998477: mov     [esi], cl
0x998479: dec     esi
0x99847A: jmp     short loc_998448
0x99847C: lea     eax, [ebp+1EBh]
0x998482: sub     eax, esi
0x998484: inc     esi
0x998485: test    word ptr [ebp-18h], 200h
0x99848B: mov     [ebp-28h], eax
0x99848E: mov     [ebp-24h], esi
0x998491: jz      short loc_9984E0
0x998493: test    eax, eax
0x998495: jz      short loc_99849E
0x998497: mov     ecx, esi
0x998499: cmp     byte ptr [ecx], 30h ; '0'
0x99849C: jz      short loc_9984E0
0x99849E: dec     dword ptr [ebp-24h]
0x9984A1: mov     ecx, [ebp-24h]
0x9984A4: mov     byte ptr [ecx], 30h ; '0'
0x9984A7: inc     eax
0x9984A8: jmp     short loc_9984DD
0x9984DD: mov     [ebp+1F8h+SizeConverted], eax
0x9984E0: cmp     [ebp+1F8h+var_260], 0
0x9984E4: jnz     loc_9985E5
0x9984EA: mov     eax, [ebp+1F8h+var_210]
0x9984ED: test    al, 40h
0x9984EF: jz      short loc_998516
0x9984F1: test    ax, 100h
0x9984F5: jz      short loc_9984FD
0x9984F7: mov     [ebp+1F8h+var_230], 2Dh ; '-'
0x9984FB: jmp     short loc_99850F
0x9984FD: test    al, 1
0x9984FF: jz      short loc_998507
0x998501: mov     [ebp+1F8h+var_230], 2Bh ; '+'
0x998505: jmp     short loc_99850F
0x998507: test    al, 2
0x998509: jz      short loc_998516
0x99850B: mov     [ebp+1F8h+var_230], 20h ; ' '
0x99850F: mov     [ebp+1F8h+var_234], 1
0x998516: mov     ebx, [ebp+1F8h+var_238]
0x998519: sub     ebx, [ebp+1F8h+SizeConverted]
0x99851C: sub     ebx, [ebp+1F8h+var_234]
0x99851F: test    byte ptr [ebp+1F8h+var_210], 0Ch
0x998523: jnz     short loc_998536
0x998525: push    [ebp+1F8h+File]; File
0x998528: lea     eax, [ebp+1F8h+var_22C]
0x99852B: push    ebx; int
0x99852C: push    20h ; ' '; char
0x99852E: call    _write_multi_char
0x998533: add     esp, 0Ch
0x998536: push    [ebp+1F8h+var_234]
0x998539: mov     edi, [ebp+1F8h+File]
0x99853C: lea     eax, [ebp+1F8h+var_22C]
0x99853F: lea     ecx, [ebp+1F8h+var_230]
0x998542: call    _write_string
0x998547: test    byte ptr [ebp+1F8h+var_210], 8
0x99854B: pop     ecx
0x99854C: jz      short loc_998563
0x99854E: test    byte ptr [ebp+1F8h+var_210], 4
0x998552: jnz     short loc_998563
0x998554: push    edi; File
0x998555: push    ebx; int
0x998556: push    30h ; '0'; char
0x998558: lea     eax, [ebp+1F8h+var_22C]
0x99855B: call    _write_multi_char
0x998560: add     esp, 0Ch
0x998563: cmp     [ebp+1F8h+var_23C], 0
0x998567: mov     eax, [ebp+1F8h+SizeConverted]
0x99856A: jz      short loc_9985BD
0x99856C: test    eax, eax
0x99856E: jle     short loc_9985BD
0x998570: mov     esi, [ebp+1F8h+var_21C]
0x998573: mov     [ebp+1F8h+var_264], eax
0x998576: movzx   eax, word ptr [esi]
0x998579: dec     [ebp+1F8h+var_264]
0x99857C: push    eax; WCh
0x99857D: push    6; SizeInBytes
0x99857F: lea     eax, [ebp+1F8h+var_C]
0x998585: push    eax; MbCh
0x998586: lea     eax, [ebp+1F8h+var_270]
0x998589: inc     esi
0x99858A: push    eax; SizeConverted
0x99858B: inc     esi
0x99858C: call    _wctomb_s
0x998591: add     esp, 10h
0x998594: test    eax, eax
0x998596: jnz     short loc_9985B7
0x998598: cmp     [ebp+1F8h+var_270], eax
0x99859B: jz      short loc_9985B7
0x99859D: push    [ebp+1F8h+var_270]
0x9985A0: lea     eax, [ebp+1F8h+var_22C]
0x9985A3: lea     ecx, [ebp+1F8h+var_C]
0x9985A9: call    _write_string
0x9985AE: cmp     [ebp+1F8h+var_264], 0
0x9985B2: pop     ecx
0x9985B3: jnz     short loc_998576
0x9985B5: jmp     short loc_9985CA
0x9985B7: or      [ebp+1F8h+var_22C], 0FFFFFFFFh
0x9985BB: jmp     short loc_9985CA
0x9985BD: mov     ecx, [ebp+1F8h+var_21C]
0x9985C0: push    eax
0x9985C1: lea     eax, [ebp+1F8h+var_22C]
0x9985C4: call    _write_string
0x9985C9: pop     ecx
0x9985CA: cmp     [ebp+1F8h+var_22C], 0
0x9985CE: jl      short loc_9985E5
0x9985D0: test    byte ptr [ebp+1F8h+var_210], 4
0x9985D4: jz      short loc_9985E5
0x9985D6: push    edi; File
0x9985D7: push    ebx; int
0x9985D8: push    20h ; ' '; char
0x9985DA: lea     eax, [ebp+1F8h+var_22C]
0x9985DD: call    _write_multi_char
0x9985E2: add     esp, 0Ch
0x9985E5: cmp     [ebp+1F8h+Memory], 0
0x9985E9: jz      short __output_s_l___def_997E7D
0x9985EB: push    [ebp+1F8h+Memory]; Memory
0x9985EE: call    _free
0x9985F3: and     [ebp+1F8h+Memory], 0
0x9985F7: pop     ecx

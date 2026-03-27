0x98DFD8: push    esi
0x98DFD9: mov     esi, [esp+4+File]
0x98DFDD: push    esi; File
0x98DFDE: call    __fileno
0x98DFE3: push    eax; int
0x98DFE4: call    __isatty
0x98DFE9: test    eax, eax
0x98DFEB: pop     ecx
0x98DFEC: pop     ecx
0x98DFED: jz      short loc_98E06A
0x98DFEF: call    sub_98BAF0
0x98DFF4: add     eax, 20h ; ' '
0x98DFF7: cmp     esi, eax
0x98DFF9: jnz     short loc_98DFFF
0x98DFFB: xor     eax, eax
0x98DFFD: jmp     short loc_98E00E
0x98DFFF: call    sub_98BAF0
0x98E004: add     eax, 40h ; '@'
0x98E007: cmp     esi, eax
0x98E009: jnz     short loc_98E06A
0x98E00B: xor     eax, eax
0x98E00D: inc     eax
0x98E00E: inc     dword_BA9E14
0x98E014: test    word ptr [esi+0Ch], 10Ch
0x98E01A: jnz     short loc_98E06A
0x98E01C: push    ebx
0x98E01D: push    edi
0x98E01E: lea     edi, ds:0BAA5FCh[eax*4]
0x98E025: cmp     dword ptr [edi], 0
0x98E028: mov     ebx, 1000h
0x98E02D: jnz     short loc_98E04F
0x98E02F: push    ebx
0x98E030: call    unknown_libname_72
0x98E035: test    eax, eax
0x98E037: pop     ecx
0x98E038: mov     [edi], eax
0x98E03A: jnz     short loc_98E04F
0x98E03C: lea     eax, [esi+14h]
0x98E03F: push    2
0x98E041: mov     [esi+8], eax
0x98E044: mov     [esi], eax
0x98E046: pop     eax
0x98E047: mov     [esi+18h], eax
0x98E04A: mov     [esi+4], eax
0x98E04D: jmp     short loc_98E05C
0x98E04F: mov     edi, [edi]
0x98E051: mov     [esi+8], edi
0x98E054: mov     [esi], edi
0x98E056: mov     [esi+18h], ebx
0x98E059: mov     [esi+4], ebx
0x98E05C: or      dword ptr [esi+0Ch], 1102h
0x98E063: pop     edi
0x98E064: xor     eax, eax
0x98E066: pop     ebx
0x98E067: inc     eax
0x98E068: pop     esi
0x98E069: retn
0x98E06A: xor     eax, eax
0x98E06C: pop     esi
0x98E06D: retn

0x7F3130: mov     eax, [esp+arg_0]
0x7F3134: test    eax, eax
0x7F3136: push    esi
0x7F3137: mov     esi, ecx
0x7F3139: jle     loc_7F3217
0x7F313F: push    ebx
0x7F3140: push    ebp
0x7F3141: push    edi
0x7F3142: mov     [esp+10h+arg_0], eax
0x7F3146: mov     ebx, 1
0x7F314B: jmp     short loc_7F3150
0x7F314D: align 10h
0x7F3150: add     [esi+88h], ebx
0x7F3156: mov     eax, [esi+88h]
0x7F315C: mov     ecx, [esi+14Ch]
0x7F3162: cmp     eax, ecx
0x7F3164: jl      short loc_7F3170
0x7F3166: mov     dword ptr [esi+88h], 0
0x7F3170: mov     edi, [esi+88h]
0x7F3176: mov     eax, [esi+84h]
0x7F317C: cmp     edi, eax
0x7F317E: jnz     short loc_7F3195
0x7F3180: add     eax, 1
0x7F3183: cmp     eax, ecx
0x7F3185: mov     [esi+84h], eax
0x7F318B: jl      short loc_7F3195
0x7F318D: sub     eax, ecx
0x7F318F: mov     [esi+84h], eax
0x7F3195: cmp     [esi+84h], edi
0x7F319B: setnle  al
0x7F319E: xor     ebp, ebp
0x7F31A0: cmp     [esi+134h], ebp
0x7F31A6: mov     [esi+180h], al
0x7F31AC: jle     short loc_7F320A
0x7F31AE: mov     edi, edi
0x7F31B0: test    edi, edi
0x7F31B2: jnz     short loc_7F31CB
0x7F31B4: cmp     byte ptr [esi+180h], 0
0x7F31BB: jz      short loc_7F31C7
0x7F31BD: mov     edx, [esi+14Ch]
0x7F31C3: sub     edx, ebx
0x7F31C5: jmp     short loc_7F31CE
0x7F31C7: xor     edx, edx
0x7F31C9: jmp     short loc_7F31CE
0x7F31CB: lea     edx, [edi-1]
0x7F31CE: mov     ecx, [esi+80h]
0x7F31D4: cmp     edi, ecx
0x7F31D6: jge     short loc_7F31F1
0x7F31D8: cmp     byte ptr [esi+180h], 0
0x7F31DF: jz      short loc_7F31ED
0x7F31E1: mov     eax, [esi+14Ch]
0x7F31E7: sub     eax, ecx
0x7F31E9: add     eax, edi
0x7F31EB: jmp     short loc_7F31F5
0x7F31ED: xor     eax, eax
0x7F31EF: jmp     short loc_7F31F5
0x7F31F1: mov     eax, edi
0x7F31F3: sub     eax, ecx
0x7F31F5: push    eax
0x7F31F6: push    edx
0x7F31F7: push    edi
0x7F31F8: push    ebp
0x7F31F9: mov     ecx, esi
0x7F31FB: call    sub_7F2C00
0x7F3200: add     ebp, ebx
0x7F3202: cmp     ebp, [esi+134h]
0x7F3208: jl      short loc_7F31B0
0x7F320A: sub     [esp+10h+arg_0], ebx
0x7F320E: jnz     loc_7F3150
0x7F3214: pop     edi
0x7F3215: pop     ebp
0x7F3216: pop     ebx
0x7F3217: pop     esi
0x7F3218: retn    4

0x9833BB: push    ebp
0x9833BC: mov     ebp, esp
0x9833BE: sub     esp, 20h
0x9833C1: push    ebx
0x9833C2: xor     ebx, ebx
0x9833C4: cmp     [ebp+Format], ebx
0x9833C7: jnz     short loc_9833E6
0x9833C9: call    __errno
0x9833CE: push    ebx
0x9833CF: push    ebx
0x9833D0: push    ebx
0x9833D1: push    ebx
0x9833D2: push    ebx
0x9833D3: mov     dword ptr [eax], 16h
0x9833D9: call    __invalid_parameter
0x9833DE: add     esp, 14h
0x9833E1: or      eax, 0FFFFFFFFh
0x9833E4: jmp     short loc_983465
0x9833E6: mov     ecx, [ebp+Count]
0x9833E9: cmp     ecx, ebx
0x9833EB: push    esi
0x9833EC: mov     esi, [ebp+Dest]
0x9833EF: jz      short loc_983412
0x9833F1: cmp     esi, ebx
0x9833F3: jnz     short loc_983412
0x9833F5: call    __errno
0x9833FA: push    ebx
0x9833FB: push    ebx
0x9833FC: push    ebx
0x9833FD: push    ebx
0x9833FE: push    ebx
0x9833FF: mov     dword ptr [eax], 16h
0x983405: call    __invalid_parameter
0x98340A: add     esp, 14h
0x98340D: or      eax, 0FFFFFFFFh
0x983410: jmp     short loc_983464
0x983412: mov     eax, 7FFFFFFFh
0x983417: cmp     ecx, eax
0x983419: mov     [ebp+File._cnt], eax
0x98341C: ja      short loc_983421
0x98341E: mov     [ebp+File._cnt], ecx
0x983421: push    edi
0x983422: lea     eax, [ebp+arg_C]
0x983425: push    eax; int
0x983426: push    ebx; struct localeinfo_struct *
0x983427: push    [ebp+Format]; int
0x98342A: lea     eax, [ebp+File]
0x98342D: push    eax; int
0x98342E: mov     [ebp+File._flag], 42h ; 'B'
0x983435: mov     [ebp+File._base], esi
0x983438: mov     [ebp+File._ptr], esi
0x98343B: call    __output_l
0x983440: add     esp, 10h
0x983443: cmp     esi, ebx
0x983445: mov     edi, eax
0x983447: jz      short loc_983463
0x983449: dec     [ebp+File._cnt]
0x98344C: js      short loc_983455
0x98344E: mov     eax, [ebp+File._ptr]
0x983451: mov     [eax], bl
0x983453: jmp     short loc_983461
0x983455: lea     eax, [ebp+File]
0x983458: push    eax; File
0x983459: push    ebx; Ch
0x98345A: call    __flsbuf
0x98345F: pop     ecx
0x983460: pop     ecx
0x983461: mov     eax, edi
0x983463: pop     edi
0x983464: pop     esi
0x983465: pop     ebx
0x983466: leave
0x983467: retn

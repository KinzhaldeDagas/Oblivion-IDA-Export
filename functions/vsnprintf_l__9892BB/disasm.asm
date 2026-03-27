0x9892BB: push    ebp
0x9892BC: mov     ebp, esp
0x9892BE: sub     esp, 20h
0x9892C1: push    ebx
0x9892C2: xor     ebx, ebx
0x9892C4: cmp     [ebp+Format], ebx
0x9892C7: jnz     short loc_9892E9
0x9892C9: call    __errno
0x9892CE: push    ebx
0x9892CF: push    ebx
0x9892D0: push    ebx
0x9892D1: push    ebx
0x9892D2: push    ebx
0x9892D3: mov     dword ptr [eax], 16h
0x9892D9: call    __invalid_parameter
0x9892DE: add     esp, 14h
0x9892E1: or      eax, 0FFFFFFFFh
0x9892E4: jmp     loc_989369
0x9892E9: mov     ecx, [ebp+MaxCount]
0x9892EC: cmp     ecx, ebx
0x9892EE: push    esi
0x9892EF: mov     esi, [ebp+DstBuf]
0x9892F2: jz      short loc_989315
0x9892F4: cmp     esi, ebx
0x9892F6: jnz     short loc_989315
0x9892F8: call    __errno
0x9892FD: push    ebx
0x9892FE: push    ebx
0x9892FF: push    ebx
0x989300: push    ebx
0x989301: push    ebx
0x989302: mov     dword ptr [eax], 16h
0x989308: call    __invalid_parameter
0x98930D: add     esp, 14h
0x989310: or      eax, 0FFFFFFFFh
0x989313: jmp     short loc_989368
0x989315: mov     eax, 7FFFFFFFh
0x98931A: cmp     ecx, eax
0x98931C: mov     [ebp+File._cnt], eax
0x98931F: ja      short loc_989324
0x989321: mov     [ebp+File._cnt], ecx
0x989324: push    edi
0x989325: push    [ebp+ArgList]; int
0x989328: lea     eax, [ebp+File]
0x98932B: push    [ebp+Locale]; struct localeinfo_struct *
0x98932E: mov     [ebp+File._flag], 42h ; 'B'
0x989335: push    [ebp+Format]; int
0x989338: mov     [ebp+File._base], esi
0x98933B: push    eax; int
0x98933C: mov     [ebp+File._ptr], esi
0x98933F: call    __output_l
0x989344: add     esp, 10h
0x989347: cmp     esi, ebx
0x989349: mov     edi, eax
0x98934B: jz      short loc_989367
0x98934D: dec     [ebp+File._cnt]
0x989350: js      short loc_989359
0x989352: mov     eax, [ebp+File._ptr]
0x989355: mov     [eax], bl
0x989357: jmp     short loc_989365
0x989359: lea     eax, [ebp+File]
0x98935C: push    eax; File
0x98935D: push    ebx; Ch
0x98935E: call    __flsbuf
0x989363: pop     ecx
0x989364: pop     ecx
0x989365: mov     eax, edi
0x989367: pop     edi
0x989368: pop     esi
0x989369: pop     ebx
0x98936A: leave
0x98936B: retn

0x9827A4: push    ebp
0x9827A5: mov     ebp, esp
0x9827A7: sub     esp, 20h
0x9827AA: push    ebx
0x9827AB: xor     ebx, ebx
0x9827AD: cmp     [ebp+Format], ebx
0x9827B0: jnz     short loc_9827CF
0x9827B2: call    __errno
0x9827B7: push    ebx
0x9827B8: push    ebx
0x9827B9: push    ebx
0x9827BA: push    ebx
0x9827BB: push    ebx
0x9827BC: mov     dword ptr [eax], 16h
0x9827C2: call    __invalid_parameter
0x9827C7: add     esp, 14h
0x9827CA: or      eax, 0FFFFFFFFh
0x9827CD: jmp     short __vsprintf_l___Done
0x9827CF: mov     eax, [ebp+DstBuf]
0x9827D2: cmp     eax, ebx
0x9827D4: jz      short loc_9827B2
0x9827D6: push    esi
0x9827D7: push    [ebp+ArgList]; int
0x9827DA: mov     [ebp+File._base], eax
0x9827DD: push    [ebp+arg_8]; struct localeinfo_struct *
0x9827E0: mov     [ebp+File._ptr], eax
0x9827E3: push    [ebp+Format]; int
0x9827E6: lea     eax, [ebp+File]
0x9827E9: push    eax; int
0x9827EA: mov     [ebp+File._cnt], 7FFFFFFFh
0x9827F1: mov     [ebp+File._flag], 42h ; 'B'
0x9827F8: call    __output_l
0x9827FD: add     esp, 10h
0x982800: dec     [ebp+File._cnt]
0x982803: mov     esi, eax
0x982805: js      short loc_98280E
0x982807: mov     eax, [ebp+File._ptr]
0x98280A: mov     [eax], bl
0x98280C: jmp     short loc_98281A
0x98280E: lea     eax, [ebp+File]
0x982811: push    eax; File
0x982812: push    ebx; Ch
0x982813: call    __flsbuf
0x982818: pop     ecx
0x982819: pop     ecx
0x98281A: mov     eax, esi
0x98281C: pop     esi

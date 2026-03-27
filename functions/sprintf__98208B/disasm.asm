0x98208B: push    ebp
0x98208C: mov     ebp, esp
0x98208E: sub     esp, 20h
0x982091: push    ebx
0x982092: xor     ebx, ebx
0x982094: cmp     [ebp+arg_4], ebx
0x982097: jnz     short loc_9820B6
0x982099: call    __errno
0x98209E: push    ebx
0x98209F: push    ebx
0x9820A0: push    ebx
0x9820A1: push    ebx
0x9820A2: push    ebx
0x9820A3: mov     dword ptr [eax], 16h
0x9820A9: call    __invalid_parameter
0x9820AE: add     esp, 14h
0x9820B1: or      eax, 0FFFFFFFFh
0x9820B4: jmp     short loc_982103
0x9820B6: mov     eax, [ebp+arg_0]
0x9820B9: cmp     eax, ebx
0x9820BB: jz      short loc_982099
0x9820BD: push    esi
0x9820BE: mov     [ebp+File._base], eax
0x9820C1: mov     [ebp+File._ptr], eax
0x9820C4: lea     eax, [ebp+arg_8]
0x9820C7: push    eax; int
0x9820C8: push    ebx; struct localeinfo_struct *
0x9820C9: push    [ebp+arg_4]; int
0x9820CC: lea     eax, [ebp+File]
0x9820CF: push    eax; int
0x9820D0: mov     [ebp+File._cnt], 7FFFFFFFh
0x9820D7: mov     [ebp+File._flag], 42h ; 'B'
0x9820DE: call    __output_l
0x9820E3: add     esp, 10h
0x9820E6: dec     [ebp+File._cnt]
0x9820E9: mov     esi, eax
0x9820EB: js      short loc_9820F4
0x9820ED: mov     eax, [ebp+File._ptr]
0x9820F0: mov     [eax], bl
0x9820F2: jmp     short loc_982100
0x9820F4: lea     eax, [ebp+File]
0x9820F7: push    eax; File
0x9820F8: push    ebx; Ch
0x9820F9: call    __flsbuf
0x9820FE: pop     ecx
0x9820FF: pop     ecx
0x982100: mov     eax, esi
0x982102: pop     esi
0x982103: pop     ebx
0x982104: leave
0x982105: retn

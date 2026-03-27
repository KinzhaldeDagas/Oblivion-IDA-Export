0x981FC6: push    0Ch
0x981FC8: push    offset stru_AFF940
0x981FCD: call    __SEH_prolog4
0x981FD2: xor     eax, eax
0x981FD4: xor     esi, esi
0x981FD6: cmp     [ebp+Format], esi
0x981FD9: setnz   al
0x981FDC: cmp     eax, esi
0x981FDE: jnz     short loc_981FFD
0x981FE0: call    __errno
0x981FE5: mov     dword ptr [eax], 16h
0x981FEB: push    esi
0x981FEC: push    esi
0x981FED: push    esi
0x981FEE: push    esi
0x981FEF: push    esi
0x981FF0: call    __invalid_parameter
0x981FF5: add     esp, 14h
0x981FF8: or      eax, 0FFFFFFFFh
0x981FFB: jmp     short loc_98205C
0x981FFD: call    sub_98BAF0
0x982002: push    20h ; ' '
0x982004: pop     ebx
0x982005: add     eax, ebx
0x982007: push    eax
0x982008: push    1
0x98200A: call    __lock_file2
0x98200F: pop     ecx
0x982010: pop     ecx
0x982011: mov     [ebp+ms_exc.registration.TryLevel], esi
0x982014: call    sub_98BAF0
0x982019: add     eax, ebx
0x98201B: push    eax; File
0x98201C: call    __stbuf
0x982021: pop     ecx
0x982022: mov     edi, eax
0x982024: lea     eax, [ebp+arg_4]
0x982027: push    eax; int
0x982028: push    esi; struct localeinfo_struct *
0x982029: push    [ebp+Format]; int
0x98202C: call    sub_98BAF0
0x982031: add     eax, ebx
0x982033: push    eax; int
0x982034: call    __output_l
0x982039: mov     [ebp+var_1C], eax
0x98203C: call    sub_98BAF0
0x982041: add     eax, ebx
0x982043: push    eax; File
0x982044: push    edi; int
0x982045: call    __ftbuf
0x98204A: add     esp, 18h
0x98204D: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x982054: call    loc_982062
0x982059: mov     eax, [ebp+var_1C]
0x98205C: call    __SEH_epilog4
0x982061: retn
0x982062: call    sub_98BAF0
0x982067: add     eax, 20h ; ' '
0x98206A: push    eax
0x98206B: push    1
0x98206D: call    __unlock_file2
0x982072: pop     ecx
0x982073: pop     ecx
0x982074: retn

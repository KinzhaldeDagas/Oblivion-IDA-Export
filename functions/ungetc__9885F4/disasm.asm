0x9885F4: push    0Ch
0x9885F6: push    offset stru_AFFB80
0x9885FB: call    __SEH_prolog4
0x988600: xor     eax, eax
0x988602: xor     esi, esi
0x988604: cmp     [ebp+File], esi
0x988607: setnz   al
0x98860A: cmp     eax, esi
0x98860C: jnz     short loc_98862B
0x98860E: call    __errno
0x988613: mov     dword ptr [eax], 16h
0x988619: push    esi
0x98861A: push    esi
0x98861B: push    esi
0x98861C: push    esi
0x98861D: push    esi
0x98861E: call    __invalid_parameter
0x988623: add     esp, 14h
0x988626: or      eax, 0FFFFFFFFh
0x988629: jmp     short loc_988656
0x98862B: push    [ebp+File]
0x98862E: call    __lock_file
0x988633: pop     ecx
0x988634: mov     [ebp+ms_exc.registration.TryLevel], esi
0x988637: push    [ebp+File]; File
0x98863A: push    [ebp+arg_0]; Ch
0x98863D: call    __ungetc_nolock
0x988642: pop     ecx
0x988643: pop     ecx
0x988644: mov     [ebp+var_1C], eax
0x988647: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98864E: call    _ungetc___$LN8_3

0x984801: push    0Ch
0x984803: push    offset stru_AFFA38
0x984808: call    __SEH_prolog4
0x98480D: xor     eax, eax
0x98480F: xor     esi, esi
0x984811: cmp     [ebp+File], esi
0x984814: setnz   al
0x984817: cmp     eax, esi
0x984819: jnz     short loc_984838
0x98481B: call    __errno
0x984820: mov     dword ptr [eax], 16h
0x984826: push    esi
0x984827: push    esi
0x984828: push    esi
0x984829: push    esi
0x98482A: push    esi
0x98482B: call    __invalid_parameter
0x984830: add     esp, 14h
0x984833: or      eax, 0FFFFFFFFh
0x984836: jmp     short loc_984876
0x984838: mov     edi, [ebp+Origin]
0x98483B: cmp     edi, esi
0x98483D: jz      short loc_984849
0x98483F: cmp     edi, 1
0x984842: jz      short loc_984849
0x984844: cmp     edi, 2
0x984847: jnz     short loc_98481B
0x984849: push    [ebp+File]
0x98484C: call    __lock_file
0x984851: pop     ecx
0x984852: mov     [ebp+ms_exc.registration.TryLevel], esi
0x984855: push    edi; Origin
0x984856: push    [ebp+Offset]; Offset
0x984859: push    [ebp+File]; File
0x98485C: call    __fseek_nolock
0x984861: add     esp, 0Ch
0x984864: mov     [ebp+var_1C], eax
0x984867: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98486E: call    _fseek___$LN11_2

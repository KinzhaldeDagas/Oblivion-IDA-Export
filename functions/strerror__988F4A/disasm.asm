0x988F4A: push    ebx
0x988F4B: push    esi
0x988F4C: call    __getptd_noexit
0x988F51: mov     esi, eax
0x988F53: xor     ebx, ebx
0x988F55: cmp     esi, ebx
0x988F57: jnz     short loc_988F60
0x988F59: mov     eax, offset aVisualCCrtNotE
0x988F5E: jmp     short loc_988FAE
0x988F60: cmp     [esi+24h], ebx
0x988F63: push    edi
0x988F64: mov     edi, 86h ; '†'
0x988F69: jnz     short loc_988F83
0x988F6B: push    1
0x988F6D: push    edi
0x988F6E: call    unknown_libname_74
0x988F73: cmp     eax, ebx
0x988F75: pop     ecx
0x988F76: pop     ecx
0x988F77: mov     [esi+24h], eax
0x988F7A: jnz     short loc_988F83
0x988F7C: mov     eax, offset aVisualCCrtNotE
0x988F81: jmp     short loc_988FAD
0x988F83: push    [esp+0Ch+Src]; Src
0x988F87: mov     esi, [esi+24h]
0x988F8A: call    __get_sys_err_msg
0x988F8F: push    eax; Src
0x988F90: push    edi; SizeInBytes
0x988F91: push    esi; Dst
0x988F92: call    _strcpy_s
0x988F97: add     esp, 10h
0x988F9A: test    eax, eax
0x988F9C: jz      short loc_988FAB
0x988F9E: push    ebx
0x988F9F: push    ebx
0x988FA0: push    ebx
0x988FA1: push    ebx
0x988FA2: push    ebx
0x988FA3: call    __invoke_watson
0x988FA8: add     esp, 14h
0x988FAB: mov     eax, esi
0x988FAD: pop     edi
0x988FAE: pop     esi
0x988FAF: pop     ebx
0x988FB0: retn

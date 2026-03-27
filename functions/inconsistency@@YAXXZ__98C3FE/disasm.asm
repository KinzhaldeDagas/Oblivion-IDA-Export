0x98C3FE: push    8
0x98C400: push    offset stru_AFFE28
0x98C405: call    __SEH_prolog4
0x98C40A: push    dword_BA9E28
0x98C410: call    __decode_pointer
0x98C415: pop     ecx
0x98C416: test    eax, eax
0x98C418: jz      short loc_98C430
0x98C41A: and     [ebp+ms_exc.registration.TryLevel], 0
0x98C41E: call    eax
0x98C420: jmp     short loc_98C429
0x98C422: xor     eax, eax
0x98C424: inc     eax
0x98C425: retn
0x98C426: mov     esp, [ebp+ms_exc.old_esp]
0x98C429: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98C430: jmp     ?terminate@@YAXXZ

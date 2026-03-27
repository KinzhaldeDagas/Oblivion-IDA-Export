0x6F7460: push    esi
0x6F7461: mov     esi, ecx
0x6F7463: cmp     dword ptr [esi+4Ch], 0
0x6F7467: jz      short loc_6F748C
0x6F7469: mov     eax, [esi]
0x6F746B: mov     edx, [eax+4]
0x6F746E: push    0FFFFFFFFh
0x6F7470: call    edx
0x6F7472: cmp     eax, 0FFFFFFFFh
0x6F7475: jz      short loc_6F748C
0x6F7477: mov     eax, [esi+4Ch]
0x6F747A: push    eax; File
0x6F747B: call    _fflush
0x6F7480: add     esp, 4
0x6F7483: test    eax, eax
0x6F7485: jge     short loc_6F748C
0x6F7487: or      eax, 0FFFFFFFFh
0x6F748A: pop     esi
0x6F748B: retn
0x6F748C: xor     eax, eax
0x6F748E: pop     esi
0x6F748F: retn

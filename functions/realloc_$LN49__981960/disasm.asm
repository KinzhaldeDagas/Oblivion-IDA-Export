0x981960: cmp     dword ptr [ebp-20h], 0
0x981964: jnz     short loc_981997
0x981966: test    esi, esi
0x981968: jnz     short loc_98196B
0x98196A: inc     esi
0x98196B: add     esi, 0Fh
0x98196E: and     esi, 0FFFFFFF0h
0x981971: mov     [ebp+0Ch], esi
0x981974: push    esi; dwBytes
0x981975: push    ebx; lpMem
0x981976: push    0; dwFlags
0x981978: push    dword ptr ds:0BAA2ACh; hHeap
0x98197E: call    dword ptr ds:0A2819Ch
0x981984: mov     edi, eax
0x981986: jmp     short loc_98199A
0x981997: mov     edi, [ebp-1Ch]
0x98199A: test    edi, edi
0x98199C: jnz     loc_981A61
0x9819A2: cmp     ds:0BAA5C8h, edi
0x9819A8: jz      short loc_9819D6
0x9819AA: push    esi
0x9819AB: call    __callnewh
0x9819B0: pop     ecx
0x9819B1: test    eax, eax
0x9819B3: jnz     loc_98188B
0x9819B9: call    __errno
0x9819BE: cmp     [ebp-20h], edi
0x9819C1: jnz     short loc_981A2F
0x9819C3: mov     esi, eax
0x9819C5: call    dword ptr ds:0A281ECh
0x9819CB: push    eax
0x9819CC: call    __get_errno_from_oserr
0x9819D1: pop     ecx
0x9819D2: mov     [esi], eax
0x9819D4: jmp     short loc_981A35
0x9819D6: test    edi, edi
0x9819D8: jnz     loc_981A61
0x9819DE: call    __errno
0x9819E3: cmp     [ebp-20h], edi
0x9819E6: jz      short loc_981A50
0x9819E8: mov     dword ptr [eax], 0Ch
0x9819EE: jmp     short loc_981A61
0x981A50: mov     esi, eax
0x981A52: call    dword ptr ds:0A281ECh
0x981A58: push    eax
0x981A59: call    __get_errno_from_oserr
0x981A5E: mov     [esi], eax
0x981A60: pop     ecx
0x981A61: mov     eax, edi
0x981A63: jmp     short loc_981A37

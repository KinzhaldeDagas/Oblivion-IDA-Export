0x98E09D: test    byte ptr [edi+0Ch], 40h
0x98E0A1: push    ebx
0x98E0A2: push    esi
0x98E0A3: mov     esi, eax
0x98E0A5: mov     ebx, ecx
0x98E0A7: jz      short loc_98E0DD
0x98E0A9: cmp     dword ptr [edi+8], 0
0x98E0AD: jnz     short loc_98E0DD
0x98E0AF: mov     eax, [esp+8+arg_0]
0x98E0B3: add     [esi], eax
0x98E0B5: jmp     short loc_98E0E4
0x98E0B7: mov     al, [ebx]
0x98E0B9: dec     [esp+8+arg_0]
0x98E0BD: mov     ecx, edi; File
0x98E0BF: call    _write_char
0x98E0C4: inc     ebx
0x98E0C5: cmp     dword ptr [esi], 0FFFFFFFFh
0x98E0C8: jnz     short loc_98E0DD
0x98E0CA: call    __errno
0x98E0CF: cmp     dword ptr [eax], 2Ah ; '*'
0x98E0D2: jnz     short loc_98E0E4
0x98E0D4: mov     ecx, edi; File
0x98E0D6: mov     al, 3Fh ; '?'
0x98E0D8: call    _write_char
0x98E0DD: cmp     [esp+8+arg_0], 0
0x98E0E2: jg      short loc_98E0B7
0x98E0E4: pop     esi
0x98E0E5: pop     ebx
0x98E0E6: retn

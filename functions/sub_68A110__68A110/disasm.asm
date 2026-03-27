0x68A110: push    ebx
0x68A111: push    esi
0x68A112: mov     esi, ecx
0x68A114: mov     ecx, [esi+4]
0x68A117: xor     bl, bl
0x68A119: test    ecx, ecx
0x68A11B: jz      short loc_68A12F
0x68A11D: call    ?status@DName@@QBE?AW4DNameStatus@@XZ; DName::status(void)
0x68A122: cmp     eax, 1
0x68A125: jnz     short loc_68A12F
0x68A127: cmp     dword ptr [esi+8], 0
0x68A12B: mov     al, al
0x68A12D: jnz     short loc_68A131
0x68A12F: mov     al, bl
0x68A131: pop     esi
0x68A132: pop     ebx
0x68A133: retn

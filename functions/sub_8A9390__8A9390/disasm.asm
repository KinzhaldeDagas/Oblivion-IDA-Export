0x8A9390: mov     eax, [esp+arg_0]
0x8A9394: test    eax, eax
0x8A9396: push    esi
0x8A9397: push    edi
0x8A9398: mov     edi, ecx
0x8A939A: jz      short loc_8A93A1
0x8A939C: mov     esi, [eax+0Ch]
0x8A939F: jmp     short loc_8A93A3
0x8A93A1: xor     esi, esi
0x8A93A3: test    esi, esi
0x8A93A5: jz      short loc_8A93D4
0x8A93A7: mov     eax, [esi]
0x8A93A9: mov     edx, [eax+4]
0x8A93AC: mov     ecx, esi
0x8A93AE: call    edx
0x8A93B0: test    eax, eax
0x8A93B2: jz      short loc_8A93C2
0x8A93B4: cmp     eax, offset dword_BA7D84
0x8A93B9: jz      short loc_8A93DB
0x8A93BB: mov     eax, [eax+4]
0x8A93BE: test    eax, eax
0x8A93C0: jnz     short loc_8A93B4
0x8A93C2: xor     al, al
0x8A93C4: neg     al
0x8A93C6: sbb     eax, eax
0x8A93C8: and     eax, esi
0x8A93CA: jz      short loc_8A93D4
0x8A93CC: mov     ecx, [eax+18h]
0x8A93CF: test    [edi+4], ecx
0x8A93D2: jnz     short loc_8A93D6
0x8A93D4: xor     eax, eax
0x8A93D6: pop     edi
0x8A93D7: pop     esi
0x8A93D8: retn    4
0x8A93DB: mov     al, 1
0x8A93DD: jmp     short loc_8A93C4

0x68A1B0: push    ebx
0x68A1B1: push    esi
0x68A1B2: lea     esi, [ecx+4]
0x68A1B5: xor     ebx, ebx
0x68A1B7: test    esi, esi
0x68A1B9: jz      short loc_68A1DE
0x68A1BB: push    edi
0x68A1BC: lea     esp, [esp+0]
0x68A1C0: cmp     [esi+4], ebx
0x68A1C3: jnz     short loc_68A1C9
0x68A1C5: cmp     [esi], ebx
0x68A1C7: jz      short loc_68A1DD
0x68A1C9: mov     edi, [esi]
0x68A1CB: mov     ecx, edi
0x68A1CD: call    sub_68B0E0
0x68A1D2: test    al, al
0x68A1D4: jnz     short loc_68A1E3
0x68A1D6: mov     esi, [esi+4]
0x68A1D9: test    esi, esi
0x68A1DB: jnz     short loc_68A1C0
0x68A1DD: pop     edi
0x68A1DE: pop     esi
0x68A1DF: mov     eax, ebx
0x68A1E1: pop     ebx
0x68A1E2: retn
0x68A1E3: mov     ecx, edi
0x68A1E5: pop     edi
0x68A1E6: pop     esi
0x68A1E7: pop     ebx
0x68A1E8: jmp     sub_68B0F0

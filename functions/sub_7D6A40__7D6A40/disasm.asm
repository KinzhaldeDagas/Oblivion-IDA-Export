0x7D6A40: push    esi
0x7D6A41: push    edi
0x7D6A42: mov     edi, ecx
0x7D6A44: mov     esi, [edi+144h]
0x7D6A4A: test    esi, esi
0x7D6A4C: jz      short loc_7D6A67
0x7D6A4E: mov     edi, edi
0x7D6A50: lea     eax, [esi+8]
0x7D6A53: mov     eax, [eax]
0x7D6A55: test    eax, eax
0x7D6A57: mov     esi, [esi]
0x7D6A59: jz      short loc_7D6A63
0x7D6A5B: push    eax
0x7D6A5C: mov     ecx, edi
0x7D6A5E: call    sub_7D6940
0x7D6A63: test    esi, esi
0x7D6A65: jnz     short loc_7D6A50
0x7D6A67: mov     dword ptr [edi+144h], 0
0x7D6A71: pop     edi
0x7D6A72: pop     esi
0x7D6A73: retn

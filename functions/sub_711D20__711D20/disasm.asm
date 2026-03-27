0x711D20: push    esi
0x711D21: push    edi
0x711D22: mov     edi, [esp+8+a2]
0x711D26: push    edi; a2
0x711D27: mov     esi, ecx
0x711D29: call    sub_700670
0x711D2E: test    al, al
0x711D30: jnz     short loc_711D39
0x711D32: pop     edi
0x711D33: xor     al, al
0x711D35: pop     esi
0x711D36: retn    4
0x711D39: mov     eax, [esi+8]
0x711D3C: test    eax, eax
0x711D3E: jz      short loc_711D48
0x711D40: test    edi, edi
0x711D42: jz      short loc_711D32
0x711D44: test    eax, eax
0x711D46: jnz     short loc_711D4C
0x711D48: test    edi, edi
0x711D4A: jnz     short loc_711D32
0x711D4C: pop     edi
0x711D4D: mov     al, 1
0x711D4F: pop     esi
0x711D50: retn    4

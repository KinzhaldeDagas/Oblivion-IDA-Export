0x47CC80: push    esi
0x47CC81: mov     esi, [ecx+0Ch]
0x47CC84: test    esi, esi
0x47CC86: jz      short loc_47CCB4
0x47CC88: mov     eax, [esi]
0x47CC8A: mov     edx, [eax+4]
0x47CC8D: mov     ecx, esi
0x47CC8F: call    edx
0x47CC91: test    eax, eax
0x47CC93: jz      short loc_47CCA3
0x47CC95: cmp     eax, offset dword_B3CD7C
0x47CC9A: jz      short loc_47CCB8
0x47CC9C: mov     eax, [eax+4]
0x47CC9F: test    eax, eax
0x47CCA1: jnz     short loc_47CC95
0x47CCA3: xor     al, al
0x47CCA5: neg     al
0x47CCA7: sbb     eax, eax
0x47CCA9: and     eax, esi
0x47CCAB: jnz     short loc_47CCBC
0x47CCAD: mov     esi, [esi+34h]
0x47CCB0: test    esi, esi
0x47CCB2: jnz     short loc_47CC88
0x47CCB4: pop     esi
0x47CCB5: retn    4
0x47CCB8: mov     al, 1
0x47CCBA: jmp     short loc_47CCA5
0x47CCBC: pop     esi
0x47CCBD: mov     ecx, eax
0x47CCBF: jmp     sub_47CBD0

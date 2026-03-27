0x68AE20: push    esi
0x68AE21: push    edi
0x68AE22: mov     edi, ecx
0x68AE24: lea     eax, [edi+4]
0x68AE27: test    eax, eax
0x68AE29: jz      short loc_68AE45
0x68AE2B: jmp     short loc_68AE30
0x68AE2D: align 10h
0x68AE30: mov     ecx, [eax+4]
0x68AE33: test    ecx, ecx
0x68AE35: jnz     short loc_68AE3F
0x68AE37: cmp     [eax], ecx
0x68AE39: jz      short loc_68AE68
0x68AE3B: test    ecx, ecx
0x68AE3D: jz      short loc_68AE68
0x68AE3F: mov     eax, ecx
0x68AE41: test    eax, eax
0x68AE43: jnz     short loc_68AE30
0x68AE45: xor     esi, esi
0x68AE47: test    esi, esi
0x68AE49: jz      short loc_68AE6C
0x68AE4B: mov     ecx, esi
0x68AE4D: call    ?status@DName@@QBE?AW4DNameStatus@@XZ; DName::status(void)
0x68AE52: cmp     eax, 1
0x68AE55: jnz     short loc_68AE6C
0x68AE57: mov     eax, [esp+8+arg_0]
0x68AE5B: push    eax
0x68AE5C: mov     ecx, esi
0x68AE5E: call    sub_68B200
0x68AE63: pop     edi
0x68AE64: pop     esi
0x68AE65: retn    4
0x68AE68: mov     esi, [eax]
0x68AE6A: jmp     short loc_68AE47
0x68AE6C: mov     ecx, [esp+8+arg_0]
0x68AE70: push    ecx
0x68AE71: mov     ecx, edi
0x68AE73: call    sub_68A280
0x68AE78: pop     edi
0x68AE79: pop     esi
0x68AE7A: retn    4

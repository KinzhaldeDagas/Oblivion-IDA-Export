0x89FD10: push    esi
0x89FD11: push    edi
0x89FD12: mov     edi, [esp+8+arg_0]
0x89FD16: push    edi
0x89FD17: mov     esi, ecx
0x89FD19: call    sub_89D8E0
0x89FD1E: test    esi, esi
0x89FD20: jz      short loc_89FD2E
0x89FD22: mov     eax, [esi+8]
0x89FD25: test    eax, eax
0x89FD27: jz      short loc_89FD2E
0x89FD29: mov     eax, [eax+18h]
0x89FD2C: jmp     short loc_89FD30
0x89FD2E: xor     eax, eax
0x89FD30: test    esi, esi
0x89FD32: mov     [edi+4], eax
0x89FD35: jz      short loc_89FD49
0x89FD37: mov     esi, [esi+8]
0x89FD3A: test    esi, esi
0x89FD3C: jz      short loc_89FD49
0x89FD3E: mov     esi, [esi+1Ch]
0x89FD41: mov     [edi+8], esi
0x89FD44: pop     edi
0x89FD45: pop     esi
0x89FD46: retn    4
0x89FD49: xor     eax, eax
0x89FD4B: mov     [edi+8], eax
0x89FD4E: pop     edi
0x89FD4F: pop     esi
0x89FD50: retn    4

0x89FE10: push    esi
0x89FE11: push    edi
0x89FE12: mov     edi, [esp+8+arg_0]
0x89FE16: push    edi
0x89FE17: mov     esi, ecx
0x89FE19: call    sub_89D6F0
0x89FE1E: test    al, al
0x89FE20: jz      short loc_89FE80
0x89FE22: test    esi, esi
0x89FE24: jz      short loc_89FE32
0x89FE26: mov     eax, [esi+8]
0x89FE29: test    eax, eax
0x89FE2B: jz      short loc_89FE32
0x89FE2D: mov     ecx, [eax+18h]
0x89FE30: jmp     short loc_89FE34
0x89FE32: xor     ecx, ecx
0x89FE34: test    edi, edi
0x89FE36: jz      short loc_89FE44
0x89FE38: mov     eax, [edi+8]
0x89FE3B: test    eax, eax
0x89FE3D: jz      short loc_89FE44
0x89FE3F: mov     eax, [eax+18h]
0x89FE42: jmp     short loc_89FE46
0x89FE44: xor     eax, eax
0x89FE46: cmp     ecx, eax
0x89FE48: setz    al
0x89FE4B: test    al, al
0x89FE4D: jz      short loc_89FE80
0x89FE4F: test    esi, esi
0x89FE51: jz      short loc_89FE5F
0x89FE53: mov     esi, [esi+8]
0x89FE56: test    esi, esi
0x89FE58: jz      short loc_89FE5F
0x89FE5A: mov     esi, [esi+1Ch]
0x89FE5D: jmp     short loc_89FE61
0x89FE5F: xor     esi, esi
0x89FE61: test    edi, edi
0x89FE63: jz      short loc_89FE79
0x89FE65: mov     eax, [edi+8]
0x89FE68: test    eax, eax
0x89FE6A: jz      short loc_89FE79
0x89FE6C: mov     eax, [eax+1Ch]
0x89FE6F: cmp     esi, eax
0x89FE71: pop     edi
0x89FE72: setz    al
0x89FE75: pop     esi
0x89FE76: retn    4
0x89FE79: xor     eax, eax
0x89FE7B: cmp     esi, eax
0x89FE7D: setz    al
0x89FE80: pop     edi
0x89FE81: pop     esi
0x89FE82: retn    4

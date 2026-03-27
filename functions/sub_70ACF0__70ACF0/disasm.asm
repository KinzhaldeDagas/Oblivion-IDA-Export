0x70ACF0: push    ebx
0x70ACF1: mov     ebx, [esp+4+arg_0]
0x70ACF5: push    edi
0x70ACF6: push    ebx
0x70ACF7: mov     edi, ecx
0x70ACF9: call    sub_707AF0
0x70ACFE: test    al, al
0x70AD00: jnz     short loc_70AD07
0x70AD02: pop     edi
0x70AD03: pop     ebx
0x70AD04: retn    4
0x70AD07: movzx   eax, word ptr [edi+0B6h]
0x70AD0E: push    esi
0x70AD0F: xor     esi, esi
0x70AD11: test    eax, eax
0x70AD13: jbe     short loc_70AD3C
0x70AD15: cmp     eax, esi
0x70AD17: jbe     short loc_70AD2E
0x70AD19: mov     eax, [edi+0B0h]
0x70AD1F: mov     ecx, [eax+esi*4]
0x70AD22: test    ecx, ecx
0x70AD24: jz      short loc_70AD2E
0x70AD26: mov     edx, [ecx]
0x70AD28: mov     eax, [edx+24h]
0x70AD2B: push    ebx
0x70AD2C: call    eax
0x70AD2E: movzx   eax, word ptr [edi+0B6h]
0x70AD35: add     esi, 1
0x70AD38: cmp     eax, esi
0x70AD3A: ja      short loc_70AD19
0x70AD3C: mov     esi, [edi+0C0h]
0x70AD42: test    esi, esi
0x70AD44: jz      short loc_70AD5E
0x70AD46: mov     ecx, [esi+8]
0x70AD49: test    ecx, ecx
0x70AD4B: lea     eax, [esi+8]
0x70AD4E: mov     esi, [esi]
0x70AD50: jz      short loc_70AD5A
0x70AD52: mov     edx, [ecx]
0x70AD54: mov     eax, [edx+24h]
0x70AD57: push    ebx
0x70AD58: call    eax
0x70AD5A: test    esi, esi
0x70AD5C: jnz     short loc_70AD46
0x70AD5E: pop     esi
0x70AD5F: pop     edi
0x70AD60: mov     al, 1
0x70AD62: pop     ebx
0x70AD63: retn    4

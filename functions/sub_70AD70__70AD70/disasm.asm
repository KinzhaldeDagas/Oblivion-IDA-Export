0x70AD70: push    ebx
0x70AD71: mov     ebx, [esp+4+arg_0]
0x70AD75: push    edi
0x70AD76: push    ebx
0x70AD77: mov     edi, ecx
0x70AD79: call    sub_707B50
0x70AD7E: test    al, al
0x70AD80: jnz     short loc_70AD87
0x70AD82: pop     edi
0x70AD83: pop     ebx
0x70AD84: retn    4
0x70AD87: movzx   eax, word ptr [ebx+0B6h]
0x70AD8E: push    ebp
0x70AD8F: movzx   ebp, word ptr [edi+0B6h]
0x70AD96: cmp     ebp, eax
0x70AD98: jz      short loc_70ADA2
0x70AD9A: pop     ebp
0x70AD9B: pop     edi
0x70AD9C: xor     al, al
0x70AD9E: pop     ebx
0x70AD9F: retn    4
0x70ADA2: push    esi
0x70ADA3: xor     esi, esi
0x70ADA5: test    ebp, ebp
0x70ADA7: jbe     short loc_70ADFB
0x70ADA9: lea     esp, [esp+0]
0x70ADB0: movzx   ecx, word ptr [edi+0B6h]
0x70ADB7: cmp     ecx, esi
0x70ADB9: ja      short loc_70ADBF
0x70ADBB: xor     ecx, ecx
0x70ADBD: jmp     short loc_70ADC8
0x70ADBF: mov     edx, [edi+0B0h]
0x70ADC5: mov     ecx, [edx+esi*4]
0x70ADC8: movzx   eax, word ptr [ebx+0B6h]
0x70ADCF: cmp     eax, esi
0x70ADD1: ja      short loc_70ADD7
0x70ADD3: xor     eax, eax
0x70ADD5: jmp     short loc_70ADE0
0x70ADD7: mov     edx, [ebx+0B0h]
0x70ADDD: mov     eax, [edx+esi*4]
0x70ADE0: test    ecx, ecx
0x70ADE2: jz      short loc_70AE50
0x70ADE4: test    eax, eax
0x70ADE6: jz      short loc_70AE54
0x70ADE8: mov     edx, [ecx]
0x70ADEA: push    eax
0x70ADEB: mov     eax, [edx+2Ch]
0x70ADEE: call    eax
0x70ADF0: test    al, al
0x70ADF2: jz      short loc_70AE54
0x70ADF4: add     esi, 1
0x70ADF7: cmp     esi, ebp
0x70ADF9: jb      short loc_70ADB0
0x70ADFB: mov     eax, [edi+0C8h]
0x70AE01: cmp     eax, [ebx+0C8h]
0x70AE07: jnz     short loc_70AE54
0x70AE09: test    eax, eax
0x70AE0B: jbe     short loc_70AE47
0x70AE0D: mov     esi, [edi+0C0h]
0x70AE13: test    esi, esi
0x70AE15: mov     edi, [ebx+0C0h]
0x70AE1B: jz      short loc_70AE47
0x70AE1D: lea     ecx, [ecx+0]
0x70AE20: mov     ecx, [esi+8]
0x70AE23: test    ecx, ecx
0x70AE25: lea     eax, [esi+8]
0x70AE28: mov     esi, [esi]
0x70AE2A: lea     eax, [edi+8]
0x70AE2D: mov     edi, [edi]
0x70AE2F: mov     eax, [eax]
0x70AE31: jz      short loc_70AE5D
0x70AE33: test    eax, eax
0x70AE35: jz      short loc_70AE54
0x70AE37: mov     edx, [ecx]
0x70AE39: push    eax
0x70AE3A: mov     eax, [edx+2Ch]
0x70AE3D: call    eax
0x70AE3F: test    al, al
0x70AE41: jz      short loc_70AE54
0x70AE43: test    esi, esi
0x70AE45: jnz     short loc_70AE20
0x70AE47: pop     esi
0x70AE48: pop     ebp
0x70AE49: pop     edi
0x70AE4A: mov     al, 1
0x70AE4C: pop     ebx
0x70AE4D: retn    4
0x70AE50: test    eax, eax
0x70AE52: jz      short loc_70ADF4
0x70AE54: pop     esi
0x70AE55: pop     ebp
0x70AE56: pop     edi
0x70AE57: xor     al, al
0x70AE59: pop     ebx
0x70AE5A: retn    4
0x70AE5D: test    eax, eax
0x70AE5F: jnz     short loc_70AE54
0x70AE61: jmp     short loc_70AE43

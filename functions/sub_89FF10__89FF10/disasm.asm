0x89FF10: push    ebx
0x89FF11: push    esi
0x89FF12: mov     esi, ecx
0x89FF14: mov     eax, [esi]
0x89FF16: mov     edx, [eax+58h]
0x89FF19: push    edi
0x89FF1A: xor     bl, bl
0x89FF1C: call    edx
0x89FF1E: test    eax, eax
0x89FF20: jz      short loc_89FF2A
0x89FF22: mov     edi, [eax+2B0h]
0x89FF28: jmp     short loc_89FF2C
0x89FF2A: xor     edi, edi
0x89FF2C: test    edi, edi
0x89FF2E: jz      short loc_89FF6F
0x89FF30: push    ebp
0x89FF31: mov     ecx, esi
0x89FF33: call    sub_89D9C0
0x89FF38: mov     bl, al
0x89FF3A: mov     eax, [esi+8]
0x89FF3D: test    eax, eax
0x89FF3F: jz      short loc_89FF46
0x89FF41: mov     ebp, [eax+1Ch]
0x89FF44: jmp     short loc_89FF48
0x89FF46: xor     ebp, ebp
0x89FF48: mov     eax, [edi]
0x89FF4A: mov     edx, [eax+58h]
0x89FF4D: mov     ecx, edi
0x89FF4F: call    edx
0x89FF51: test    eax, eax
0x89FF53: jz      short loc_89FF5A
0x89FF55: mov     eax, [eax+34h]
0x89FF58: jmp     short loc_89FF5C
0x89FF5A: xor     eax, eax
0x89FF5C: cmp     ebp, eax
0x89FF5E: pop     ebp
0x89FF5F: jnz     short loc_89FF6F
0x89FF61: mov     ecx, [esi+8]
0x89FF64: test    ecx, ecx
0x89FF66: jz      short loc_89FF6F
0x89FF68: push    0
0x89FF6A: call    sub_8E7C20
0x89FF6F: pop     edi
0x89FF70: pop     esi
0x89FF71: mov     al, bl
0x89FF73: pop     ebx
0x89FF74: retn

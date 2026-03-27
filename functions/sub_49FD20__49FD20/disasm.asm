0x49FD20: push    ebx
0x49FD21: push    ebp
0x49FD22: push    esi
0x49FD23: push    edi
0x49FD24: mov     esi, ecx
0x49FD26: xor     edi, edi
0x49FD28: cmp     [esi+0Ch], edi
0x49FD2B: jbe     short loc_49FD6B
0x49FD2D: mov     ebp, [esp+10h+Str2]
0x49FD31: xor     ebx, ebx
0x49FD33: mov     eax, [esi+18h]
0x49FD36: movzx   ecx, word ptr [eax+ebx+4]
0x49FD3B: add     eax, ebx
0x49FD3D: cmp     cx, ds:0A79928h
0x49FD44: jz      short loc_49FD50
0x49FD46: mov     edx, [eax]
0x49FD48: movzx   eax, cx
0x49FD4B: add     eax, [edx+8]
0x49FD4E: jmp     short loc_49FD52
0x49FD50: xor     eax, eax
0x49FD52: push    ebp; Str2
0x49FD53: push    eax; Str1
0x49FD54: call    __strcmp
0x49FD59: add     esp, 8
0x49FD5C: test    eax, eax
0x49FD5E: jz      short loc_49FD74
0x49FD60: add     edi, 1
0x49FD63: add     ebx, 10h
0x49FD66: cmp     edi, [esi+0Ch]
0x49FD69: jb      short loc_49FD33
0x49FD6B: pop     edi
0x49FD6C: pop     esi
0x49FD6D: pop     ebp
0x49FD6E: xor     al, al
0x49FD70: pop     ebx
0x49FD71: retn    4
0x49FD74: mov     eax, [esi+14h]
0x49FD77: shl     edi, 4
0x49FD7A: mov     al, [edi+eax+0Dh]
0x49FD7E: pop     edi
0x49FD7F: pop     esi
0x49FD80: pop     ebp
0x49FD81: pop     ebx
0x49FD82: retn    4

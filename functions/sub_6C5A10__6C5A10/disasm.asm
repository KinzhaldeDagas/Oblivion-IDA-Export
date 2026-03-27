0x6C5A10: push    ebx
0x6C5A11: mov     ebx, [esp+4+arg_0]
0x6C5A15: push    ebp
0x6C5A16: mov     ebp, [esp+8+arg_4]
0x6C5A1A: push    esi
0x6C5A1B: push    edi
0x6C5A1C: push    ebp
0x6C5A1D: push    ebx
0x6C5A1E: mov     esi, ecx
0x6C5A20: call    sub_715D80
0x6C5A25: mov     al, [esi+6Ch]
0x6C5A28: xor     edi, edi
0x6C5A2A: mov     [ebx+6Ch], al
0x6C5A2D: cmp     [esi+46h], di
0x6C5A31: jbe     short loc_6C5A5C
0x6C5A33: mov     ecx, [esi+40h]
0x6C5A36: mov     ecx, [ecx+edi*4]
0x6C5A39: test    ecx, ecx
0x6C5A3B: jz      short loc_6C5A51
0x6C5A3D: mov     edx, [ecx]
0x6C5A3F: mov     eax, [edx+18h]
0x6C5A42: push    ebp
0x6C5A43: call    eax
0x6C5A45: push    0
0x6C5A47: push    0
0x6C5A49: push    eax
0x6C5A4A: mov     ecx, ebx
0x6C5A4C: call    sub_6C5760
0x6C5A51: movzx   ecx, word ptr [esi+46h]
0x6C5A55: add     edi, 1
0x6C5A58: cmp     edi, ecx
0x6C5A5A: jb      short loc_6C5A33
0x6C5A5C: mov     ecx, [esi+7Ch]
0x6C5A5F: test    ecx, ecx
0x6C5A61: jz      short loc_6C5AA5
0x6C5A63: mov     edx, [ecx]
0x6C5A65: mov     eax, [edx+18h]
0x6C5A68: push    ebp
0x6C5A69: call    eax
0x6C5A6B: mov     esi, [ebx+7Ch]
0x6C5A6E: mov     edi, eax
0x6C5A70: cmp     esi, edi
0x6C5A72: jz      short loc_6C5AA5
0x6C5A74: test    esi, esi
0x6C5A76: jz      short loc_6C5A94
0x6C5A78: lea     ecx, [esi+4]
0x6C5A7B: push    ecx; lpAddend
0x6C5A7C: call    dword ptr ds:0A2807Ch
0x6C5A82: test    eax, eax
0x6C5A84: jnz     short loc_6C5A94
0x6C5A86: test    esi, esi
0x6C5A88: jz      short loc_6C5A94
0x6C5A8A: mov     edx, [esi]
0x6C5A8C: mov     eax, [edx]
0x6C5A8E: push    1
0x6C5A90: mov     ecx, esi
0x6C5A92: call    eax
0x6C5A94: test    edi, edi
0x6C5A96: mov     [ebx+7Ch], edi
0x6C5A99: jz      short loc_6C5AA5
0x6C5A9B: add     edi, 4
0x6C5A9E: push    edi; lpAddend
0x6C5A9F: call    dword ptr ds:0A28078h
0x6C5AA5: pop     edi
0x6C5AA6: pop     esi
0x6C5AA7: pop     ebp
0x6C5AA8: pop     ebx
0x6C5AA9: retn    8

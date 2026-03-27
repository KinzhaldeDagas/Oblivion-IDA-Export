0x401A30: push    ebx
0x401A31: push    esi
0x401A32: mov     esi, [esp+8+arg_0]
0x401A36: test    esi, esi
0x401A38: mov     ebx, ecx
0x401A3A: jz      short loc_401A60
0x401A3C: push    edi
0x401A3D: lea     ecx, [ecx+0]
0x401A40: mov     edi, [esi]
0x401A42: test    edi, edi
0x401A44: jz      short loc_401A70
0x401A46: mov     eax, [edi+4]
0x401A49: shr     eax, 1Eh
0x401A4C: test    al, 1
0x401A4E: jz      short loc_401A70
0x401A50: push    esi
0x401A51: push    edi
0x401A52: mov     ecx, ebx
0x401A54: call    sub_4018F0
0x401A59: test    edi, edi
0x401A5B: mov     esi, edi
0x401A5D: jnz     short loc_401A40
0x401A5F: pop     edi
0x401A60: mov     ecx, ebx
0x401A62: call    sub_4019A0
0x401A67: pop     esi
0x401A68: pop     ebx
0x401A69: retn    4
0x401A6C: align 10h
0x401A70: cmp     esi, [ebx+24h]
0x401A73: jz      short loc_401A5F
0x401A75: mov     ecx, [esi+4]
0x401A78: and     ecx, 0FFFFFFFh
0x401A7E: mov     edx, [ecx+esi+0Ch]
0x401A82: lea     eax, [ecx+esi]
0x401A85: shr     edx, 1Eh
0x401A88: test    dl, 1
0x401A8B: jz      short loc_401A5F
0x401A8D: add     eax, 8
0x401A90: push    eax
0x401A91: push    esi
0x401A92: mov     ecx, ebx
0x401A94: call    sub_4018F0
0x401A99: jmp     short loc_401A70

0x6E3E10: push    esi
0x6E3E11: push    edi
0x6E3E12: mov     edi, [esp+8+arg_0]
0x6E3E16: push    edi
0x6E3E17: mov     esi, ecx
0x6E3E19: call    sub_6EC2E0
0x6E3E1E: test    al, al
0x6E3E20: jnz     short loc_6E3E29
0x6E3E22: pop     edi
0x6E3E23: xor     al, al
0x6E3E25: pop     esi
0x6E3E26: retn    4
0x6E3E29: lea     eax, [edi+0Ch]
0x6E3E2C: push    eax
0x6E3E2D: lea     ecx, [esi+0Ch]
0x6E3E30: call    sub_632310
0x6E3E35: test    al, al
0x6E3E37: jnz     short loc_6E3E22
0x6E3E39: mov     ecx, [esi+1Ch]
0x6E3E3C: test    ecx, ecx
0x6E3E3E: jz      short loc_6E3E4A
0x6E3E40: cmp     dword ptr [edi+1Ch], 0
0x6E3E44: jz      short loc_6E3E22
0x6E3E46: test    ecx, ecx
0x6E3E48: jnz     short loc_6E3E54
0x6E3E4A: cmp     dword ptr [edi+1Ch], 0
0x6E3E4E: jnz     short loc_6E3E22
0x6E3E50: test    ecx, ecx
0x6E3E52: jz      short loc_6E3E63
0x6E3E54: mov     edi, [edi+1Ch]
0x6E3E57: mov     edx, [ecx]
0x6E3E59: mov     eax, [edx+2Ch]
0x6E3E5C: push    edi
0x6E3E5D: call    eax
0x6E3E5F: test    al, al
0x6E3E61: jz      short loc_6E3E22
0x6E3E63: pop     edi
0x6E3E64: mov     al, 1
0x6E3E66: pop     esi
0x6E3E67: retn    4

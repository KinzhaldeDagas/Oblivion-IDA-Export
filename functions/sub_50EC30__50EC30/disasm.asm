0x50EC30: push    ebx
0x50EC31: mov     ebx, [esp+4+Str2]
0x50EC35: test    ebx, ebx
0x50EC37: jnz     short loc_50EC3F
0x50EC39: xor     al, al
0x50EC3B: pop     ebx
0x50EC3C: retn    8
0x50EC3F: push    esi
0x50EC40: lea     esi, [ecx+10Ch]
0x50EC46: test    esi, esi
0x50EC48: push    edi
0x50EC49: jz      short loc_50EC75
0x50EC4B: jmp     short loc_50EC50
0x50EC4D: align 10h
0x50EC50: cmp     dword ptr [esi+4], 0
0x50EC54: jnz     short loc_50EC5B
0x50EC56: cmp     dword ptr [esi], 0
0x50EC59: jz      short loc_50EC75
0x50EC5B: mov     edi, [esi]
0x50EC5D: mov     eax, [edi+4]
0x50EC60: push    ebx; Str2
0x50EC61: push    eax; Str1
0x50EC62: call    __strcmp
0x50EC67: add     esp, 8
0x50EC6A: test    eax, eax
0x50EC6C: jz      short loc_50EC7D
0x50EC6E: mov     esi, [esi+4]
0x50EC71: test    esi, esi
0x50EC73: jnz     short loc_50EC50
0x50EC75: pop     edi
0x50EC76: pop     esi
0x50EC77: xor     al, al
0x50EC79: pop     ebx
0x50EC7A: retn    8
0x50EC7D: mov     eax, [esp+0Ch+arg_4]
0x50EC81: mov     [eax], edi
0x50EC83: pop     edi
0x50EC84: pop     esi
0x50EC85: mov     al, 1
0x50EC87: pop     ebx
0x50EC88: retn    8

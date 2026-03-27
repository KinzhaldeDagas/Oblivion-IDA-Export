0x447C50: push    ebx
0x447C51: mov     ebx, [esp+4+Str1]
0x447C55: test    ebx, ebx
0x447C57: push    esi
0x447C58: push    edi
0x447C59: lea     esi, [ecx+8C8h]
0x447C5F: jz      short loc_447C83
0x447C61: test    esi, esi
0x447C63: jz      short loc_447C83
0x447C65: mov     edi, [esi]
0x447C67: test    edi, edi
0x447C69: jz      short loc_447C83
0x447C6B: lea     eax, [edi+1Ch]
0x447C6E: push    eax; Str2
0x447C6F: push    ebx; Str1
0x447C70: call    __strcmp
0x447C75: add     esp, 8
0x447C78: test    eax, eax
0x447C7A: jz      short loc_447C8B
0x447C7C: mov     esi, [esi+4]
0x447C7F: test    esi, esi
0x447C81: jnz     short loc_447C65
0x447C83: pop     edi
0x447C84: pop     esi
0x447C85: xor     eax, eax
0x447C87: pop     ebx
0x447C88: retn    4
0x447C8B: mov     eax, edi
0x447C8D: pop     edi
0x447C8E: pop     esi
0x447C8F: pop     ebx
0x447C90: retn    4

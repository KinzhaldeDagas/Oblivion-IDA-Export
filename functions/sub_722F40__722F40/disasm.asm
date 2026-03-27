0x722F40: push    ebx
0x722F41: push    esi
0x722F42: mov     ebx, ecx
0x722F44: mov     esi, [ebx+0Ch]
0x722F47: test    esi, esi
0x722F49: push    edi
0x722F4A: mov     edi, 4000h
0x722F4F: jz      short loc_722F6C
0x722F51: mov     eax, [esi]
0x722F53: mov     edx, [eax+60h]
0x722F56: mov     ecx, esi
0x722F58: call    edx
0x722F5A: test    al, al
0x722F5C: jnz     short loc_722F67
0x722F5E: mov     esi, [esi+34h]
0x722F61: test    esi, esi
0x722F63: jnz     short loc_722F51
0x722F65: jmp     short loc_722F6C
0x722F67: mov     edi, 8000h
0x722F6C: mov     eax, [ebx+0B8h]
0x722F72: test    eax, eax
0x722F74: jz      short loc_722FA3
0x722F76: cmp     [esp+0Ch+arg_0], 0
0x722F7B: jz      short loc_722F83
0x722F7D: cmp     dword ptr [eax+0Ch], 0
0x722F81: jmp     short loc_722F9C
0x722F83: cmp     dword ptr [eax+0Ch], 0
0x722F87: jz      short loc_722F9E
0x722F89: mov     ecx, ds:0B3F928h
0x722F8F: test    ecx, ecx
0x722F91: jz      short loc_722FA3
0x722F93: mov     eax, [ecx]
0x722F95: mov     edx, [eax+54h]
0x722F98: call    edx
0x722F9A: test    al, 2
0x722F9C: jnz     short loc_722FA3
0x722F9E: mov     edi, 8000h
0x722FA3: mov     eax, [ebx+0B4h]
0x722FA9: mov     cx, [eax+2Eh]
0x722FAD: and     cx, 0FFFh
0x722FB2: or      cx, di
0x722FB5: pop     edi
0x722FB6: pop     esi
0x722FB7: mov     [eax+2Eh], cx
0x722FBB: pop     ebx
0x722FBC: retn    4

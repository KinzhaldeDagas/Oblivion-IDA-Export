0x628C50: mov     eax, [esp+arg_8]
0x628C54: push    esi
0x628C55: push    edi
0x628C56: mov     edi, [esp+8+arg_4]
0x628C5A: push    eax
0x628C5B: mov     esi, ecx
0x628C5D: mov     ecx, [esp+0Ch+arg_0]
0x628C61: push    edi
0x628C62: push    ecx
0x628C63: mov     ecx, esi
0x628C65: call    MiddleProcess_ModAViCur
0x628C6A: cmp     edi, 0Bh
0x628C6D: jz      short loc_628C83
0x628C6F: cmp     edi, 30h ; '0'
0x628C72: jnz     short loc_628C8F
0x628C74: pop     edi
0x628C75: mov     dword ptr [esi+298h], 0FFFFFFFFh
0x628C7F: pop     esi
0x628C80: retn    0Ch
0x628C83: fld     dword ptr ds:0A30634h
0x628C89: fstp    dword ptr [esi+294h]
0x628C8F: pop     edi
0x628C90: pop     esi
0x628C91: retn    0Ch

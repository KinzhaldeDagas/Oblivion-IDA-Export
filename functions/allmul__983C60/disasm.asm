0x983C60: mov     eax, [esp+arg_4]
0x983C64: mov     ecx, [esp+arg_C]
0x983C68: or      ecx, eax
0x983C6A: mov     ecx, [esp+arg_8]
0x983C6E: jnz     short hard
0x983C70: mov     eax, [esp+arg_0]
0x983C74: mul     ecx
0x983C76: retn    10h
0x983C79: push    ebx
0x983C7A: mul     ecx
0x983C7C: mov     ebx, eax
0x983C7E: mov     eax, [esp+4+arg_0]
0x983C82: mul     [esp+4+arg_C]
0x983C86: add     ebx, eax
0x983C88: mov     eax, [esp+4+arg_0]
0x983C8C: mul     ecx
0x983C8E: add     edx, ebx
0x983C90: pop     ebx
0x983C91: retn    10h

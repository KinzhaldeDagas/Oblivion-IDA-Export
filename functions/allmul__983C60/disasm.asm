0x983C60: mov     eax, dword ptr [esp+arg_0+4]
0x983C64: mov     ecx, dword ptr [esp+arg_8+4]
0x983C68: or      ecx, eax
0x983C6A: mov     ecx, dword ptr [esp+arg_8]
0x983C6E: jnz     short hard
0x983C70: mov     eax, dword ptr [esp+arg_0]
0x983C74: mul     ecx
0x983C76: retn    10h
0x983C79: push    ebx
0x983C7A: mul     ecx
0x983C7C: mov     ebx, eax
0x983C7E: mov     eax, dword ptr [esp+4+arg_0]
0x983C82: mul     dword ptr [esp+4+arg_8+4]
0x983C86: add     ebx, eax
0x983C88: mov     eax, dword ptr [esp+4+arg_0]
0x983C8C: mul     ecx
0x983C8E: add     edx, ebx
0x983C90: pop     ebx
0x983C91: retn    10h

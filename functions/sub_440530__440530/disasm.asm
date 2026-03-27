0x440530: mov     eax, [esp+arg_0]
0x440534: cmp     [ecx+53h], al
0x440537: jz      short locret_440557
0x440539: mov     [ecx+53h], al
0x44053C: cmp     dword ptr ds:0B33A98h, 0
0x440543: jz      short locret_440557
0x440545: cmp     dword ptr [ecx+34h], 0
0x440549: jnz     short locret_440557
0x44054B: mov     ecx, [ecx+8]
0x44054E: mov     [esp+arg_0], eax
0x440552: jmp     sub_4824C0
0x440557: retn    4

0x984F7A: cmp     dword ptr ds:0BA9E10h, 0
0x984F81: jnz     short loc_984F95
0x984F83: mov     eax, [esp+C]
0x984F87: mov     ecx, ds:0B31988h
0x984F8D: movzx   eax, byte ptr [ecx+eax*2]
0x984F91: and     eax, 1
0x984F94: retn
0x984F95: push    0; Locale
0x984F97: push    [esp+4+C]; C
0x984F9B: call    __isupper_l
0x984FA0: pop     ecx
0x984FA1: pop     ecx
0x984FA2: retn

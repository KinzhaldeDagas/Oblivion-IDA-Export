0x4F0D70: mov     eax, [esp+arg_0]
0x4F0D74: cmp     al, 30h ; '0'
0x4F0D76: jnz     short loc_4F0D7D
0x4F0D78: mov     al, 1
0x4F0D7A: retn    4
0x4F0D7D: cmp     al, 37h ; '7'
0x4F0D7F: jz      short loc_4F0D78
0x4F0D81: cmp     al, 38h ; '8'
0x4F0D83: jz      short loc_4F0D78
0x4F0D85: push    eax
0x4F0D86: call    sub_4CA010
0x4F0D8B: add     esp, 4
0x4F0D8E: retn    4

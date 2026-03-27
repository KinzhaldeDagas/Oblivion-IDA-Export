0x992EE9: mov     al, [esp+arg_0]
0x992EED: test    al, 20h
0x992EEF: jz      short loc_992EF5
0x992EF1: push    5
0x992EF3: jmp     short loc_992F0B
0x992EF5: test    al, 8
0x992EF7: jz      short loc_992EFD
0x992EF9: xor     eax, eax
0x992EFB: inc     eax
0x992EFC: retn
0x992EFD: test    al, 4
0x992EFF: jz      short loc_992F05
0x992F01: push    2
0x992F03: jmp     short loc_992F0B
0x992F05: test    al, 1
0x992F07: jz      short loc_992F0D
0x992F09: push    3
0x992F0B: pop     eax
0x992F0C: retn
0x992F0D: movzx   eax, al
0x992F10: and     eax, 2
0x992F13: add     eax, eax
0x992F15: retn

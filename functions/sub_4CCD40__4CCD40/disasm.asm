0x4CCD40: mov     al, [esp+arg_0]
0x4CCD44: cmp     al, 31h ; '1'
0x4CCD46: jb      short loc_4CCD55
0x4CCD48: cmp     al, 34h ; '4'
0x4CCD4A: jbe     short loc_4CCD50
0x4CCD4C: cmp     al, 36h ; '6'
0x4CCD4E: jnz     short loc_4CCD55
0x4CCD50: mov     al, 1
0x4CCD52: retn    4
0x4CCD55: xor     al, al
0x4CCD57: retn    4

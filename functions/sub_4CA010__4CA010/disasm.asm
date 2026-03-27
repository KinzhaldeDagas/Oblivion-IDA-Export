0x4CA010: mov     al, [esp+arg_0]
0x4CA014: cmp     al, 31h ; '1'
0x4CA016: jb      short loc_4CA023
0x4CA018: cmp     al, 34h ; '4'
0x4CA01A: jbe     short loc_4CA020
0x4CA01C: cmp     al, 36h ; '6'
0x4CA01E: jnz     short loc_4CA023
0x4CA020: mov     al, 1
0x4CA022: retn
0x4CA023: xor     al, al
0x4CA025: retn

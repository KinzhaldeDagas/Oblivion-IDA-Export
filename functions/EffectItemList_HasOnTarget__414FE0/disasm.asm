0x414FE0: cmp     dword ptr [ecx+8], 0
0x414FE4: jnz     short loc_414FEF
0x414FE6: cmp     dword ptr [ecx+4], 0
0x414FEA: jnz     short loc_414FEF
0x414FEC: xor     al, al
0x414FEE: retn
0x414FEF: xor     al, al
0x414FF1: test    ecx, ecx
0x414FF3: jz      short locret_415022
0x414FF5: test    al, al
0x414FF7: jnz     short locret_415022
0x414FF9: mov     edx, [ecx+4]
0x414FFC: test    edx, edx
0x414FFE: jz      short loc_415016
0x415000: cmp     dword ptr [edx+10h], 2
0x415004: jnz     short loc_415016
0x415006: mov     edx, [edx+1Ch]
0x415009: mov     edx, [edx+58h]
0x41500C: shr     edx, 16h
0x41500F: test    dl, 1
0x415012: jnz     short loc_415016
0x415014: mov     al, 1
0x415016: mov     ecx, [ecx+8]
0x415019: test    ecx, ecx
0x41501B: jz      short locret_415022
0x41501D: add     ecx, 0FFFFFFFCh
0x415020: jnz     short loc_414FF5
0x415022: retn

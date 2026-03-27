0x415080: cmp     dword ptr [ecx+8], 0
0x415084: jnz     short loc_41508F
0x415086: cmp     dword ptr [ecx+4], 0
0x41508A: jnz     short loc_41508F
0x41508C: xor     al, al
0x41508E: retn
0x41508F: xor     al, al
0x415091: test    ecx, ecx
0x415093: jz      short locret_4150C2
0x415095: test    al, al
0x415097: jnz     short locret_4150C2
0x415099: mov     edx, [ecx+4]
0x41509C: test    edx, edx
0x41509E: jz      short loc_4150B6
0x4150A0: cmp     dword ptr [edx+10h], 0
0x4150A4: jnz     short loc_4150B6
0x4150A6: mov     edx, [edx+1Ch]
0x4150A9: mov     edx, [edx+58h]
0x4150AC: shr     edx, 16h
0x4150AF: test    dl, 1
0x4150B2: jnz     short loc_4150B6
0x4150B4: mov     al, 1
0x4150B6: mov     ecx, [ecx+8]
0x4150B9: test    ecx, ecx
0x4150BB: jz      short locret_4150C2
0x4150BD: add     ecx, 0FFFFFFFCh
0x4150C0: jnz     short loc_415095
0x4150C2: retn

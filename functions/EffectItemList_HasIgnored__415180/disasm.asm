0x415180: xor     al, al
0x415182: cmp     dword ptr [ecx+8], 0
0x415186: jnz     short loc_41518F
0x415188: cmp     dword ptr [ecx+4], 0
0x41518C: jnz     short loc_41518F
0x41518E: retn
0x41518F: test    ecx, ecx
0x415191: jz      short locret_4151BA
0x415193: test    al, al
0x415195: jnz     short locret_4151BA
0x415197: mov     edx, [ecx+4]
0x41519A: test    edx, edx
0x41519C: jz      short loc_4151AE
0x41519E: mov     edx, [edx+1Ch]
0x4151A1: mov     edx, [edx+58h]
0x4151A4: shr     edx, 16h
0x4151A7: test    dl, 1
0x4151AA: jz      short loc_4151AE
0x4151AC: mov     al, 1
0x4151AE: mov     ecx, [ecx+8]
0x4151B1: test    ecx, ecx
0x4151B3: jz      short locret_4151BA
0x4151B5: add     ecx, 0FFFFFFFCh
0x4151B8: jnz     short loc_415193
0x4151BA: retn

0x69E300: cmp     dword ptr [ecx+18h], 0
0x69E304: jnz     short loc_69E315
0x69E306: cmp     dword ptr [ecx+1Ch], 0
0x69E30A: jz      short loc_69E315
0x69E30C: cmp     dword ptr [ecx+2Ch], 0
0x69E310: jz      short loc_69E315
0x69E312: mov     al, 1
0x69E314: retn
0x69E315: xor     al, al
0x69E317: retn

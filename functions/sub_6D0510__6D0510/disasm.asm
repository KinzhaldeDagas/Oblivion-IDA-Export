0x6D0510: mov     al, [ecx+8]
0x6D0513: shr     al, 5
0x6D0516: test    al, 1
0x6D0518: jnz     short locret_6D0522
0x6D051A: fldz
0x6D051C: fst     dword ptr [ecx+14h]
0x6D051F: fstp    dword ptr [ecx+18h]
0x6D0522: retn

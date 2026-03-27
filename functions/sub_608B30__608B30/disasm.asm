0x608B30: mov     eax, [ecx+364h]
0x608B36: test    eax, eax
0x608B38: jz      short loc_608B53
0x608B3A: mov     eax, [eax+8]
0x608B3D: test    eax, eax
0x608B3F: jz      short loc_608B4D
0x608B41: add     eax, 14h
0x608B44: jz      short loc_608B4D
0x608B46: mov     eax, [eax+1Ch]
0x608B49: shr     eax, 10h
0x608B4C: retn
0x608B4D: xor     eax, eax
0x608B4F: shr     eax, 10h
0x608B52: retn
0x608B53: xor     eax, eax
0x608B55: retn

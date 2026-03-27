0x6B8560: lea     eax, [ecx+0Ch]
0x6B8563: test    eax, eax
0x6B8565: mov     [ecx+1Ch], eax
0x6B8568: jz      short loc_6B8575
0x6B856A: cmp     dword ptr [eax], 0
0x6B856D: jz      short loc_6B8575
0x6B856F: mov     eax, 1
0x6B8574: retn
0x6B8575: xor     eax, eax
0x6B8577: retn

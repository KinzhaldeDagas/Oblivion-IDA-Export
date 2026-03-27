0x8F5B20: mov     eax, [ecx+10h]
0x8F5B23: push    esi
0x8F5B24: mov     esi, [ecx+18h]
0x8F5B27: mov     [ecx+1Ch], eax
0x8F5B2A: mov     eax, [esp+4+arg_0]
0x8F5B2E: xor     edx, edx
0x8F5B30: cmp     eax, esi
0x8F5B32: setnle  dl
0x8F5B35: mov     [ecx+20h], eax
0x8F5B38: pop     esi
0x8F5B39: mov     eax, edx
0x8F5B3B: retn    4

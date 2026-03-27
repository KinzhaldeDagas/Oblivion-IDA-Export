0x6D6A40: cmp     byte ptr [ecx+1Ch], 0
0x6D6A44: mov     edx, [esp+arg_0]
0x6D6A48: jnz     short loc_6D6A78
0x6D6A4A: fld     dword ptr [ecx]
0x6D6A4C: fld     dword ptr [edx]
0x6D6A4E: fucompp
0x6D6A50: fnstsw  ax
0x6D6A52: test    ah, 44h
0x6D6A55: jp      short loc_6D6A78
0x6D6A57: fld     dword ptr [ecx+4]
0x6D6A5A: fld     dword ptr [edx+4]
0x6D6A5D: fucompp
0x6D6A5F: fnstsw  ax
0x6D6A61: test    ah, 44h
0x6D6A64: jp      short loc_6D6A78
0x6D6A66: xor     eax, eax
0x6D6A68: mov     [ecx+1Ch], al
0x6D6A6B: mov     eax, [edx]
0x6D6A6D: mov     [ecx], eax
0x6D6A6F: mov     edx, [edx+4]
0x6D6A72: mov     [ecx+4], edx
0x6D6A75: retn    4
0x6D6A78: mov     eax, 1
0x6D6A7D: mov     [ecx+1Ch], al
0x6D6A80: mov     eax, [edx]
0x6D6A82: mov     [ecx], eax
0x6D6A84: mov     edx, [edx+4]
0x6D6A87: mov     [ecx+4], edx
0x6D6A8A: retn    4

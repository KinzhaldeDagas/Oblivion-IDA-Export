0x6D5A40: fld     dword ptr [ecx]
0x6D5A42: mov     edx, [esp+arg_0]
0x6D5A46: fld     dword ptr [edx]
0x6D5A48: fucompp
0x6D5A4A: fnstsw  ax
0x6D5A4C: test    ah, 44h
0x6D5A4F: jp      short loc_6D5A83
0x6D5A51: fld     dword ptr [ecx+4]
0x6D5A54: fld     dword ptr [edx+4]
0x6D5A57: fucompp
0x6D5A59: fnstsw  ax
0x6D5A5B: test    ah, 44h
0x6D5A5E: jp      short loc_6D5A83
0x6D5A60: fld     dword ptr [ecx+8]
0x6D5A63: fld     dword ptr [edx+8]
0x6D5A66: fucompp
0x6D5A68: fnstsw  ax
0x6D5A6A: test    ah, 44h
0x6D5A6D: jp      short loc_6D5A83
0x6D5A6F: fld     dword ptr [ecx+0Ch]
0x6D5A72: fld     dword ptr [edx+0Ch]
0x6D5A75: fucompp
0x6D5A77: fnstsw  ax
0x6D5A79: test    ah, 44h
0x6D5A7C: jp      short loc_6D5A83
0x6D5A7E: xor     eax, eax
0x6D5A80: retn    4
0x6D5A83: mov     eax, 1
0x6D5A88: retn    4

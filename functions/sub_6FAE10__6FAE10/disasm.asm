0x6FAE10: fld     dword ptr [ecx]
0x6FAE12: mov     edx, [esp+arg_0]
0x6FAE16: fld     dword ptr [edx]
0x6FAE18: fucompp
0x6FAE1A: fnstsw  ax
0x6FAE1C: test    ah, 44h
0x6FAE1F: jp      short loc_6FAE59
0x6FAE21: fld     dword ptr [ecx+4]
0x6FAE24: fld     dword ptr [edx+4]
0x6FAE27: fucompp
0x6FAE29: fnstsw  ax
0x6FAE2B: test    ah, 44h
0x6FAE2E: jp      short loc_6FAE59
0x6FAE30: fld     dword ptr [ecx+8]
0x6FAE33: fld     dword ptr [edx+8]
0x6FAE36: fucompp
0x6FAE38: fnstsw  ax
0x6FAE3A: test    ah, 44h
0x6FAE3D: jp      short loc_6FAE59
0x6FAE3F: mov     al, [ecx+0Eh]
0x6FAE42: cmp     al, [edx+0Eh]
0x6FAE45: jnz     short loc_6FAE59
0x6FAE47: mov     cx, [ecx+0Ch]
0x6FAE4B: cmp     cx, [edx+0Ch]
0x6FAE4F: jnz     short loc_6FAE59
0x6FAE51: mov     eax, 1
0x6FAE56: retn    4
0x6FAE59: xor     eax, eax
0x6FAE5B: retn    4

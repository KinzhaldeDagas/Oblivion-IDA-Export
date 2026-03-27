0x70FF20: fld     dword ptr [ecx]
0x70FF22: mov     edx, [esp+arg_0]
0x70FF26: fld     dword ptr [edx]
0x70FF28: fucompp
0x70FF2A: fnstsw  ax
0x70FF2C: test    ah, 44h
0x70FF2F: jp      loc_70FFB5
0x70FF35: fld     dword ptr [ecx+4]
0x70FF38: fld     dword ptr [edx+4]
0x70FF3B: fucompp
0x70FF3D: fnstsw  ax
0x70FF3F: test    ah, 44h
0x70FF42: jp      short loc_70FFB5
0x70FF44: fld     dword ptr [ecx+8]
0x70FF47: fld     dword ptr [edx+8]
0x70FF4A: fucompp
0x70FF4C: fnstsw  ax
0x70FF4E: test    ah, 44h
0x70FF51: jp      short loc_70FFB5
0x70FF53: fld     dword ptr [ecx+0Ch]
0x70FF56: fld     dword ptr [edx+0Ch]
0x70FF59: fucompp
0x70FF5B: fnstsw  ax
0x70FF5D: test    ah, 44h
0x70FF60: jp      short loc_70FFB5
0x70FF62: fld     dword ptr [ecx+10h]
0x70FF65: fld     dword ptr [edx+10h]
0x70FF68: fucompp
0x70FF6A: fnstsw  ax
0x70FF6C: test    ah, 44h
0x70FF6F: jp      short loc_70FFB5
0x70FF71: fld     dword ptr [ecx+14h]
0x70FF74: fld     dword ptr [edx+14h]
0x70FF77: fucompp
0x70FF79: fnstsw  ax
0x70FF7B: test    ah, 44h
0x70FF7E: jp      short loc_70FFB5
0x70FF80: fld     dword ptr [ecx+18h]
0x70FF83: fld     dword ptr [edx+18h]
0x70FF86: fucompp
0x70FF88: fnstsw  ax
0x70FF8A: test    ah, 44h
0x70FF8D: jp      short loc_70FFB5
0x70FF8F: fld     dword ptr [ecx+1Ch]
0x70FF92: fld     dword ptr [edx+1Ch]
0x70FF95: fucompp
0x70FF97: fnstsw  ax
0x70FF99: test    ah, 44h
0x70FF9C: jp      short loc_70FFB5
0x70FF9E: fld     dword ptr [ecx+20h]
0x70FFA1: fld     dword ptr [edx+20h]
0x70FFA4: fucompp
0x70FFA6: fnstsw  ax
0x70FFA8: test    ah, 44h
0x70FFAB: jp      short loc_70FFB5
0x70FFAD: mov     eax, 1
0x70FFB2: retn    4
0x70FFB5: xor     eax, eax
0x70FFB7: retn    4

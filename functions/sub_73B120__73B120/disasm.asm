0x73B120: mov     edx, [esp+arg_0]
0x73B124: test    edx, edx
0x73B126: jz      short loc_73B169
0x73B128: fld     dword ptr [ecx+0Ch]
0x73B12B: fld     dword ptr [edx+0Ch]
0x73B12E: fucompp
0x73B130: fnstsw  ax
0x73B132: test    ah, 44h
0x73B135: jp      short loc_73B169
0x73B137: fld     dword ptr [ecx+10h]
0x73B13A: fld     dword ptr [edx+10h]
0x73B13D: fucompp
0x73B13F: fnstsw  ax
0x73B141: test    ah, 44h
0x73B144: jp      short loc_73B169
0x73B146: fld     dword ptr [ecx+14h]
0x73B149: fld     dword ptr [edx+14h]
0x73B14C: fucompp
0x73B14E: fnstsw  ax
0x73B150: test    ah, 44h
0x73B153: jp      short loc_73B169
0x73B155: fld     dword ptr [ecx+18h]
0x73B158: fld     dword ptr [edx+18h]
0x73B15B: fucompp
0x73B15D: fnstsw  ax
0x73B15F: test    ah, 44h
0x73B162: jp      short loc_73B169
0x73B164: mov     al, 1
0x73B166: retn    4
0x73B169: xor     al, al
0x73B16B: retn    4

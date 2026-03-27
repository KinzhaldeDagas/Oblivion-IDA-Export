0x957420: mov     eax, [esp+arg_0]
0x957424: test    eax, eax
0x957426: jz      short locret_957448
0x957428: mov     dl, [eax+4]
0x95742B: test    dl, dl
0x95742D: jz      short loc_95743D
0x95742F: mov     edx, [ecx+18h]
0x957432: mov     [eax], edx
0x957434: mov     [ecx+18h], eax
0x957437: inc     dword ptr [ecx+1Ch]
0x95743A: retn    4
0x95743D: mov     edx, [ecx+10h]
0x957440: mov     [eax], edx
0x957442: mov     [ecx+10h], eax
0x957445: inc     dword ptr [ecx+14h]
0x957448: retn    4

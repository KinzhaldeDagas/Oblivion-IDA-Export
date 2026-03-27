0x54AF70: mov     eax, [esp+arg_0]
0x54AF74: sub     eax, 0
0x54AF77: jz      short loc_54AF9F
0x54AF79: sub     eax, 2
0x54AF7C: jz      short loc_54AF95
0x54AF7E: sub     eax, 1
0x54AF81: jz      short loc_54AF88
0x54AF83: mov     al, 1
0x54AF85: retn    4
0x54AF88: cmp     dword ptr [ecx+120h], 0
0x54AF8F: setz    al
0x54AF92: retn    4
0x54AF95: cmp     dword ptr [ecx+68h], 0
0x54AF99: setz    al
0x54AF9C: retn    4
0x54AF9F: cmp     dword ptr [ecx+0C4h], 0
0x54AFA6: setz    al
0x54AFA9: retn    4

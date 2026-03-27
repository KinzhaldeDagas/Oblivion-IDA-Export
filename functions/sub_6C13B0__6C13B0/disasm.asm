0x6C13B0: xor     eax, eax
0x6C13B2: cmp     ds:0B3C754h, al
0x6C13B8: jz      short loc_6C13BB
0x6C13BA: retn
0x6C13BB: mov     ds:0B3D154h, eax
0x6C13C0: mov     ds:0B3D274h, eax
0x6C13C5: mov     ds:0B3D68Ch, eax
0x6C13CA: mov     byte ptr ds:0B3C754h, 1
0x6C13D1: mov     dword ptr ds:0B3D0C4h, offset sub_6C12C0
0x6C13DB: mov     dword ptr ds:0B3D5FCh, offset sub_6C1380
0x6C13E5: mov     dword ptr ds:0B3D56Ch, offset sub_6C0B80
0x6C13EF: mov     dword ptr ds:0B3D394h, offset sub_6C0F40
0x6C13F9: mov     dword ptr ds:0B3D304h, offset sub_6C0FE0
0x6C1403: mov     byte ptr ds:0B3D3F7h, 40h ; '@'
0x6C140A: mov     dword ptr ds:0B3D034h, offset sub_6C0BF0
0x6C1414: mov     dword ptr ds:0B3D4DCh, offset sub_6C0B00
0x6C141E: mov     dword ptr ds:0B3D44Ch, offset sub_6C0EC0
0x6C1428: mov     dword ptr ds:0B3D1E4h, offset sub_6C1010
0x6C1432: mov     eax, 1
0x6C1437: retn

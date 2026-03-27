0x6C1F00: xor     eax, eax
0x6C1F02: cmp     ds:0B3C80Ch, al
0x6C1F08: jz      short loc_6C1F0B
0x6C1F0A: retn
0x6C1F0B: mov     ds:0B3D1A4h, eax
0x6C1F10: mov     ds:0B3D2C4h, eax
0x6C1F15: mov     ds:0B3D6DCh, eax
0x6C1F1A: mov     byte ptr ds:0B3C80Ch, 1
0x6C1F21: mov     dword ptr ds:0B3D114h, offset sub_6C1E10
0x6C1F2B: mov     dword ptr ds:0B3D64Ch, offset sub_6C1ED0
0x6C1F35: mov     dword ptr ds:0B3D5BCh, offset sub_6C1C80
0x6C1F3F: mov     dword ptr ds:0B3D3E4h, offset sub_6BF0B0
0x6C1F49: mov     dword ptr ds:0B3D354h, offset sub_6BF150
0x6C1F53: mov     byte ptr ds:0B3D40Bh, 8
0x6C1F5A: mov     dword ptr ds:0B3D084h, offset sub_6C1C60
0x6C1F64: mov     dword ptr ds:0B3D52Ch, offset sub_6C1C50
0x6C1F6E: mov     dword ptr ds:0B3D49Ch, offset ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6C1F78: mov     dword ptr ds:0B3D234h, offset sub_6C1CA0
0x6C1F82: mov     eax, 1
0x6C1F87: retn

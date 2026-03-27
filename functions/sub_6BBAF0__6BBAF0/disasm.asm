0x6BBAF0: xor     eax, eax
0x6BBAF2: cmp     ds:0B3C27Dh, al
0x6BBAF8: jz      short loc_6BBAFB
0x6BBAFA: retn
0x6BBAFB: mov     ds:0B3D120h, eax
0x6BBB00: mov     ds:0B3D240h, eax
0x6BBB05: mov     ds:0B3D658h, eax
0x6BBB0A: mov     byte ptr ds:0B3C27Dh, 1
0x6BBB11: mov     dword ptr ds:0B3D090h, offset sub_6BB960
0x6BBB1B: mov     dword ptr ds:0B3D5C8h, offset sub_6BBA80
0x6BBB25: mov     dword ptr ds:0B3D538h, offset sub_6BB710
0x6BBB2F: mov     dword ptr ds:0B3D360h, offset sub_6BF4D0
0x6BBB39: mov     dword ptr ds:0B3D2D0h, offset sub_6BF570
0x6BBB43: mov     byte ptr ds:0B3D3EAh, 10h
0x6BBB4A: mov     dword ptr ds:0B3D000h, offset sub_6BB6B0
0x6BBB54: mov     dword ptr ds:0B3D4A8h, offset sub_6BB660
0x6BBB5E: mov     dword ptr ds:0B3D418h, offset ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x6BBB68: mov     dword ptr ds:0B3D1B0h, offset sub_6BB730
0x6BBB72: mov     eax, 1
0x6BBB77: retn

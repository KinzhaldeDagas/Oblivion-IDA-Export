0x6BEC50: xor     eax, eax
0x6BEC52: cmp     ds:0B3C52Ch, al
0x6BEC58: jz      short loc_6BEC5B
0x6BEC5A: retn
0x6BEC5B: mov     ds:0B3D158h, eax
0x6BEC60: mov     ds:0B3D278h, eax
0x6BEC65: mov     ds:0B3D690h, eax
0x6BEC6A: mov     byte ptr ds:0B3C52Ch, 1
0x6BEC71: mov     dword ptr ds:0B3D0C8h, offset sub_6BEB60
0x6BEC7B: mov     dword ptr ds:0B3D600h, offset sub_6BEC20
0x6BEC85: mov     dword ptr ds:0B3D570h, offset sub_6BE6B0
0x6BEC8F: mov     dword ptr ds:0B3D398h, offset sub_6BE770
0x6BEC99: mov     dword ptr ds:0B3D308h, offset sub_6BE810
0x6BECA3: mov     byte ptr ds:0B3D3F8h, 48h ; 'H'
0x6BECAA: mov     dword ptr ds:0B3D038h, offset sub_6BE4D0
0x6BECB4: mov     dword ptr ds:0B3D4E0h, offset sub_6BE5E0
0x6BECBE: mov     dword ptr ds:0B3D450h, offset sub_6BE840
0x6BECC8: mov     dword ptr ds:0B3D1E8h, offset sub_6BE880
0x6BECD2: mov     eax, 1
0x6BECD7: retn

0x6C1BC0: xor     eax, eax
0x6C1BC2: cmp     ds:0B3C7B0h, al
0x6C1BC8: jz      short loc_6C1BCB
0x6C1BCA: retn
0x6C1BCB: mov     ds:0B3D124h, eax
0x6C1BD0: mov     ds:0B3D244h, eax
0x6C1BD5: mov     ds:0B3D65Ch, eax
0x6C1BDA: mov     byte ptr ds:0B3C7B0h, 1
0x6C1BE1: mov     dword ptr ds:0B3D094h, offset sub_6C1AD0
0x6C1BEB: mov     dword ptr ds:0B3D5CCh, offset sub_6C1B90
0x6C1BF5: mov     dword ptr ds:0B3D53Ch, offset sub_6C1510
0x6C1BFF: mov     dword ptr ds:0B3D364h, offset sub_6C1740
0x6C1C09: mov     dword ptr ds:0B3D2D4h, offset sub_6C17E0
0x6C1C13: mov     byte ptr ds:0B3D3EBh, 1Ch
0x6C1C1A: mov     dword ptr ds:0B3D004h, offset sub_6C14C0
0x6C1C24: mov     dword ptr ds:0B3D4ACh, offset sub_6C1440
0x6C1C2E: mov     dword ptr ds:0B3D41Ch, offset sub_6C1650
0x6C1C38: mov     dword ptr ds:0B3D1B4h, offset sub_6C1810
0x6C1C42: mov     eax, 1
0x6C1C47: retn

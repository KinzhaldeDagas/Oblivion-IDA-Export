0x6BDB00: xor     eax, eax
0x6BDB02: cmp     ds:0B3C40Ch, al
0x6BDB08: jz      short loc_6BDB0B
0x6BDB0A: retn
0x6BDB0B: mov     ds:0B3D150h, eax
0x6BDB10: mov     ds:0B3D270h, eax
0x6BDB15: mov     ds:0B3D688h, eax
0x6BDB1A: mov     byte ptr ds:0B3C40Ch, 1
0x6BDB21: mov     dword ptr ds:0B3D0C0h, offset sub_6BDA10
0x6BDB2B: mov     dword ptr ds:0B3D5F8h, offset sub_6BDAD0
0x6BDB35: mov     dword ptr ds:0B3D568h, offset sub_6BD610
0x6BDB3F: mov     dword ptr ds:0B3D390h, offset sub_6BD790
0x6BDB49: mov     dword ptr ds:0B3D300h, offset sub_6BD830
0x6BDB53: mov     byte ptr ds:0B3D3F6h, 24h ; '$'
0x6BDB5A: mov     dword ptr ds:0B3D030h, offset sub_6BD660
0x6BDB64: mov     dword ptr ds:0B3D4D8h, offset sub_6BD5E0
0x6BDB6E: mov     dword ptr ds:0B3D448h, offset sub_6BD6B0
0x6BDB78: mov     dword ptr ds:0B3D1E0h, offset sub_6BD860
0x6BDB82: mov     eax, 1
0x6BDB87: retn

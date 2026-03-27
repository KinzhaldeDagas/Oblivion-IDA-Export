0x6BEFD0: xor     eax, eax
0x6BEFD2: cmp     ds:0B3C588h, al
0x6BEFD8: jz      short loc_6BEFDB
0x6BEFDA: retn
0x6BEFDB: mov     ds:0B3D164h, eax
0x6BEFE0: mov     ds:0B3D284h, eax
0x6BEFE5: mov     ds:0B3D69Ch, eax
0x6BEFEA: mov     ds:0B3D45Ch, eax
0x6BEFEF: mov     byte ptr ds:0B3C588h, 1
0x6BEFF6: mov     dword ptr ds:0B3D0D4h, offset sub_6C2270
0x6BF000: mov     dword ptr ds:0B3D60Ch, offset sub_6BEFA0
0x6BF00A: mov     dword ptr ds:0B3D57Ch, offset sub_6C29E0
0x6BF014: mov     dword ptr ds:0B3D3A4h, offset sub_6C2000
0x6BF01E: mov     dword ptr ds:0B3D314h, offset sub_6C20A0
0x6BF028: mov     byte ptr ds:0B3D3FBh, 14h
0x6BF02F: mov     dword ptr ds:0B3D044h, offset sub_6BECE0
0x6BF039: mov     dword ptr ds:0B3D4ECh, offset sub_6C1FB0
0x6BF043: mov     dword ptr ds:0B3D1F4h, offset sub_6BEE00
0x6BF04D: mov     eax, 1
0x6BF052: retn

0x6BF880: cmp     byte ptr ds:0B3C640h, 0
0x6BF887: jz      short loc_6BF88C
0x6BF889: xor     eax, eax
0x6BF88B: retn
0x6BF88C: push    1
0x6BF88E: push    1
0x6BF890: mov     byte ptr ds:0B3C640h, 1
0x6BF897: mov     dword ptr ds:0B3D0A4h, offset sub_6BF730
0x6BF8A1: mov     dword ptr ds:0B3D5DCh, offset sub_6BF7F0
0x6BF8AB: mov     dword ptr ds:0B3D54Ch, offset sub_6C26E0
0x6BF8B5: mov     dword ptr ds:0B3D374h, offset sub_6BF4D0
0x6BF8BF: mov     dword ptr ds:0B3D2E4h, offset sub_6BF570
0x6BF8C9: mov     byte ptr ds:0B3D3EFh, 10h
0x6BF8D0: call    sub_6BF820
0x6BF8D5: add     esp, 8
0x6BF8D8: mov     eax, 1
0x6BF8DD: retn

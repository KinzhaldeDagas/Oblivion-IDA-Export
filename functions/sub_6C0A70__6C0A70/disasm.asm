0x6C0A70: cmp     byte ptr ds:0B3C6F8h, 0
0x6C0A77: jz      short loc_6C0A7C
0x6C0A79: xor     eax, eax
0x6C0A7B: retn
0x6C0A7C: push    3
0x6C0A7E: push    1
0x6C0A80: mov     byte ptr ds:0B3C6F8h, 1
0x6C0A87: mov     dword ptr ds:0B3D0ACh, offset sub_6C0980
0x6C0A91: mov     dword ptr ds:0B3D5E4h, offset sub_6C0A40
0x6C0A9B: mov     dword ptr ds:0B3D554h, offset sub_6BFC50
0x6C0AA5: mov     dword ptr ds:0B3D37Ch, offset sub_6C05B0
0x6C0AAF: mov     dword ptr ds:0B3D2ECh, offset sub_6C0650
0x6C0AB9: mov     byte ptr ds:0B3D3F1h, 4Ch ; 'L'
0x6C0AC0: call    sub_6C0820
0x6C0AC5: add     esp, 8
0x6C0AC8: mov     eax, 1
0x6C0ACD: retn

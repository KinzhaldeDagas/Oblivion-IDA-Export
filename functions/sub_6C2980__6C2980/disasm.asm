0x6C2980: cmp     byte ptr ds:0B3C920h, 0
0x6C2987: jz      short loc_6C298C
0x6C2989: xor     eax, eax
0x6C298B: retn
0x6C298C: push    5
0x6C298E: push    1
0x6C2990: mov     byte ptr ds:0B3C920h, 1
0x6C2997: mov     dword ptr ds:0B3D0B4h, offset sub_6BF730
0x6C29A1: mov     dword ptr ds:0B3D5ECh, offset sub_6BF7F0
0x6C29AB: mov     dword ptr ds:0B3D55Ch, offset sub_6C26E0
0x6C29B5: mov     dword ptr ds:0B3D384h, offset sub_6BF4D0
0x6C29BF: mov     dword ptr ds:0B3D2F4h, offset sub_6BF570
0x6C29C9: mov     byte ptr ds:0B3D3F3h, 10h
0x6C29D0: call    sub_6C2920
0x6C29D5: add     esp, 8
0x6C29D8: mov     eax, 1
0x6C29DD: retn

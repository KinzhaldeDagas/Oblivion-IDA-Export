0x597A60: mov     al, [ecx]
0x597A62: mov     dl, al
0x597A64: shr     dl, 7
0x597A67: not     dl
0x597A69: test    dl, 1
0x597A6C: jz      short loc_597A73
0x597A6E: or      al, 80h
0x597A70: mov     [ecx], al
0x597A72: retn
0x597A73: and     al, 7Fh
0x597A75: mov     [ecx], al
0x597A77: retn

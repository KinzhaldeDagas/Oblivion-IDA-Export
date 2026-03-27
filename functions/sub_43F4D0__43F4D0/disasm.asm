0x43F4D0: cmp     byte ptr ds:0B07050h, 0
0x43F4D7: jz      short loc_43F4E8
0x43F4D9: cmp     byte ptr ds:0B42F3Eh, 0
0x43F4E0: jz      short loc_43F4E8
0x43F4E2: mov     eax, 1
0x43F4E7: retn
0x43F4E8: xor     eax, eax
0x43F4EA: retn

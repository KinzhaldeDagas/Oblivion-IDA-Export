0x477ED0: cmp     byte ptr ds:0B120DCh, 0
0x477ED7: jz      short loc_477EE8
0x477ED9: cmp     byte ptr ds:0B120B4h, 0
0x477EE0: jz      short loc_477EE8
0x477EE2: mov     eax, 1
0x477EE7: retn
0x477EE8: xor     eax, eax
0x477EEA: retn

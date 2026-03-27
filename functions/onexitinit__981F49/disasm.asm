0x981F49: push    esi
0x981F4A: push    4
0x981F4C: push    20h ; ' '
0x981F4E: call    unknown_libname_74
0x981F53: mov     esi, eax
0x981F55: push    esi
0x981F56: call    __encode_pointer
0x981F5B: add     esp, 0Ch
0x981F5E: test    esi, esi
0x981F60: mov     ds:0BABC10h, eax
0x981F65: mov     ds:0BABC0Ch, eax
0x981F6A: jnz     short loc_981F71
0x981F6C: push    18h
0x981F6E: pop     eax
0x981F6F: pop     esi
0x981F70: retn
0x981F71: and     dword ptr [esi], 0
0x981F74: xor     eax, eax
0x981F76: pop     esi
0x981F77: retn

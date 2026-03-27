0x98D79B: push    dword_BAA5C4
0x98D7A1: call    __decode_pointer
0x98D7A6: test    eax, eax
0x98D7A8: pop     ecx
0x98D7A9: jz      short loc_98D7BA
0x98D7AB: push    [esp+arg_0]
0x98D7AF: call    eax
0x98D7B1: test    eax, eax
0x98D7B3: pop     ecx
0x98D7B4: jz      short loc_98D7BA
0x98D7B6: xor     eax, eax
0x98D7B8: inc     eax
0x98D7B9: retn
0x98D7BA: xor     eax, eax
0x98D7BC: retn

0x98FE04: test    edi, edi
0x98FE06: push    esi
0x98FE07: mov     esi, eax
0x98FE09: jz      short loc_98FE1F
0x98FE0B: push    esi; Str
0x98FE0C: call    _strlen
0x98FE11: inc     eax
0x98FE12: push    eax
0x98FE13: push    esi
0x98FE14: add     esi, edi
0x98FE16: push    esi
0x98FE17: call    unknown_libname_16
0x98FE1C: add     esp, 10h
0x98FE1F: pop     esi
0x98FE20: retn

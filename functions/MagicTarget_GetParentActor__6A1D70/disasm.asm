0x6A1D70: push    esi
0x6A1D71: mov     esi, ecx
0x6A1D73: mov     eax, [esi]
0x6A1D75: mov     edx, [eax+0Ch]
0x6A1D78: call    edx
0x6A1D7A: test    al, al
0x6A1D7C: jz      short loc_6A1D83
0x6A1D7E: lea     eax, [esi-68h]
0x6A1D81: pop     esi
0x6A1D82: retn
0x6A1D83: xor     eax, eax
0x6A1D85: pop     esi
0x6A1D86: retn

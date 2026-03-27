0x676D30: push    esi
0x676D31: add     ecx, 68h ; 'h'; this
0x676D34: call    sub_7616D0
0x676D39: mov     esi, eax
0x676D3B: test    esi, esi
0x676D3D: jz      short loc_676D8A
0x676D3F: push    edi
0x676D40: mov     ecx, [esi]
0x676D42: test    ecx, ecx
0x676D44: jz      short loc_676D89
0x676D46: mov     eax, [ecx]
0x676D48: mov     edx, [eax+190h]
0x676D4E: xor     edi, edi
0x676D50: call    edx
0x676D52: test    al, al
0x676D54: jz      short loc_676D58
0x676D56: mov     edi, [esi]
0x676D58: test    edi, edi
0x676D5A: mov     esi, [esi+4]
0x676D5D: jz      short loc_676D85
0x676D5F: mov     ecx, edi
0x676D61: call    sub_5E6B40
0x676D66: test    al, al
0x676D68: jz      short loc_676D85
0x676D6A: mov     ecx, edi
0x676D6C: call    sub_5EAE10
0x676D71: cmp     eax, ds:0B333C4h
0x676D77: jz      short loc_676D85
0x676D79: mov     eax, [edi]
0x676D7B: mov     edx, [eax+30Ch]
0x676D81: mov     ecx, edi
0x676D83: call    edx
0x676D85: test    esi, esi
0x676D87: jnz     short loc_676D40
0x676D89: pop     edi
0x676D8A: pop     esi
0x676D8B: retn

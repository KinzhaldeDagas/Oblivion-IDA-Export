0x56CD60: cmp     byte ptr ds:0B3A690h, 0
0x56CD67: push    esi
0x56CD68: push    edi
0x56CD69: mov     edi, ecx
0x56CD6B: jz      short loc_56CD9D
0x56CD6D: call    sub_56BB90
0x56CD72: mov     esi, eax
0x56CD74: test    esi, esi
0x56CD76: jz      short loc_56CD9D
0x56CD78: push    edi; a2
0x56CD79: mov     ecx, esi; this
0x56CD7B: call    sub_478300
0x56CD80: mov     ecx, ds:0B3F940h
0x56CD86: mov     eax, [ecx]
0x56CD88: mov     edx, [eax+4Ch]
0x56CD8B: push    1
0x56CD8D: push    esi
0x56CD8E: call    edx
0x56CD90: test    al, al
0x56CD92: jnz     short loc_56CDA8
0x56CD94: mov     eax, [esi]
0x56CD96: mov     edx, [eax+54h]
0x56CD99: mov     ecx, esi
0x56CD9B: call    edx
0x56CD9D: mov     eax, [edi]
0x56CD9F: mov     edx, [eax+4Ch]
0x56CDA2: mov     ecx, edi
0x56CDA4: pop     edi
0x56CDA5: pop     esi
0x56CDA6: jmp     edx
0x56CDA8: pop     edi
0x56CDA9: pop     esi
0x56CDAA: retn

0x5EA640: push    ebx
0x5EA641: push    esi
0x5EA642: mov     esi, ecx
0x5EA644: mov     eax, [esi]
0x5EA646: mov     edx, [eax+170h]
0x5EA64C: xor     bl, bl
0x5EA64E: call    edx
0x5EA650: cmp     byte ptr [eax+4], 23h ; '#'
0x5EA654: jz      short loc_5EA663
0x5EA656: mov     ecx, esi
0x5EA658: call    sub_5E1E90
0x5EA65D: test    al, al
0x5EA65F: jz      short loc_5EA663
0x5EA661: mov     bl, 1
0x5EA663: mov     eax, [esi]
0x5EA665: mov     edx, [eax+284h]
0x5EA66B: push    37h ; '7'
0x5EA66D: mov     ecx, esi
0x5EA66F: call    edx
0x5EA671: test    eax, eax
0x5EA673: mov     al, 1
0x5EA675: jnz     short loc_5EA679
0x5EA677: mov     al, bl
0x5EA679: pop     esi
0x5EA67A: pop     ebx
0x5EA67B: retn

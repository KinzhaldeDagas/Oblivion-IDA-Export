0x8C6630: push    esi
0x8C6631: push    edi
0x8C6632: mov     edi, [esp+8+arg_0]
0x8C6636: push    edi
0x8C6637: mov     esi, ecx
0x8C6639: call    sub_8A2650
0x8C663E: test    al, al
0x8C6640: jz      short loc_8C6673
0x8C6642: test    esi, esi
0x8C6644: jz      short loc_8C6652
0x8C6646: mov     esi, [esi+8]
0x8C6649: test    esi, esi
0x8C664B: jz      short loc_8C6652
0x8C664D: mov     esi, [esi+30h]
0x8C6650: jmp     short loc_8C6654
0x8C6652: xor     esi, esi
0x8C6654: test    edi, edi
0x8C6656: jz      short loc_8C666C
0x8C6658: mov     eax, [edi+8]
0x8C665B: test    eax, eax
0x8C665D: jz      short loc_8C666C
0x8C665F: mov     eax, [eax+30h]
0x8C6662: cmp     esi, eax
0x8C6664: pop     edi
0x8C6665: setz    al
0x8C6668: pop     esi
0x8C6669: retn    4
0x8C666C: xor     eax, eax
0x8C666E: cmp     esi, eax
0x8C6670: setz    al
0x8C6673: pop     edi
0x8C6674: pop     esi
0x8C6675: retn    4

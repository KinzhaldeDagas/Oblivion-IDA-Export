0x8910F0: push    esi
0x8910F1: mov     esi, [ecx+364h]
0x8910F7: test    esi, esi
0x8910F9: jz      short loc_891121
0x8910FB: push    edi
0x8910FC: mov     edi, [esp+8+arg_0]
0x891100: push    edi
0x891101: mov     ecx, esi
0x891103: call    sub_890A10
0x891108: test    al, al
0x89110A: jnz     short loc_891120
0x89110C: mov     ecx, [esi+8]
0x89110F: test    ecx, ecx
0x891111: mov     eax, [esp+8+arg_4]
0x891115: cdq
0x891116: jz      short loc_891120
0x891118: push    edx
0x891119: push    eax
0x89111A: push    edi
0x89111B: call    sub_8BC750
0x891120: pop     edi
0x891121: pop     esi
0x891122: retn    8

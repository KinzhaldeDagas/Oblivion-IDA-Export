0x8C5750: push    esi
0x8C5751: push    edi
0x8C5752: mov     edi, [esp+8+arg_0]
0x8C5756: push    edi
0x8C5757: mov     esi, ecx
0x8C5759: call    sub_8A2650
0x8C575E: test    al, al
0x8C5760: jz      short loc_8C578D
0x8C5762: test    edi, edi
0x8C5764: jz      short loc_8C576B
0x8C5766: mov     edi, [edi+8]
0x8C5769: jmp     short loc_8C576D
0x8C576B: xor     edi, edi
0x8C576D: test    esi, esi
0x8C576F: jz      short loc_8C5782
0x8C5771: mov     esi, [esi+8]
0x8C5774: mov     eax, [esi+10h]
0x8C5777: cmp     eax, [edi+10h]
0x8C577A: pop     edi
0x8C577B: setz    al
0x8C577E: pop     esi
0x8C577F: retn    4
0x8C5782: xor     esi, esi
0x8C5784: mov     eax, [esi+10h]
0x8C5787: cmp     eax, [edi+10h]
0x8C578A: setz    al
0x8C578D: pop     edi
0x8C578E: pop     esi
0x8C578F: retn    4

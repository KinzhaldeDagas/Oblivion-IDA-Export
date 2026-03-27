0x8A2650: push    esi
0x8A2651: push    edi
0x8A2652: mov     edi, [esp+8+arg_0]
0x8A2656: push    edi
0x8A2657: mov     esi, ecx
0x8A2659: call    sub_89D6F0
0x8A265E: test    al, al
0x8A2660: jz      short loc_8A266B
0x8A2662: mov     eax, [edi+10h]
0x8A2665: cmp     eax, [esi+10h]
0x8A2668: setz    al
0x8A266B: pop     edi
0x8A266C: pop     esi
0x8A266D: retn    4

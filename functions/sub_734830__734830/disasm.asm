0x734830: xor     edx, edx
0x734832: cmp     [ecx+10Eh], dx
0x734839: jbe     short locret_734865
0x73483B: push    esi
0x73483C: mov     esi, [esp+4+arg_0]
0x734840: push    edi
0x734841: mov     edi, [esp+8+arg_4]
0x734845: mov     al, [esi]
0x734847: sub     al, [ecx+104h]
0x73484D: add     edx, 1
0x734850: mov     [edi], al
0x734852: movzx   eax, word ptr [ecx+10Eh]
0x734859: add     esi, 1
0x73485C: add     edi, 1
0x73485F: cmp     edx, eax
0x734861: jb      short loc_734845
0x734863: pop     edi
0x734864: pop     esi
0x734865: retn    8

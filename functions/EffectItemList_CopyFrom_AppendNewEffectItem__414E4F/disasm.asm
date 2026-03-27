0x414E4F: cmp     [esi], ebx
0x414E51: jz      short loc_414E72
0x414E53: push    8; Size
0x414E55: call    FormHeapAlloc
0x414E5A: add     esp, 4
0x414E5D: cmp     eax, ebx
0x414E5F: jz      short loc_414E6B
0x414E61: mov     [eax], edi
0x414E63: mov     [eax+4], ebx
0x414E66: mov     [esi+4], eax
0x414E69: jmp     short EffectItemList_CopyFrom___UpdateHostileCount
0x414E6B: xor     eax, eax
0x414E6D: mov     [esi+4], eax
0x414E70: jmp     short EffectItemList_CopyFrom___UpdateHostileCount
0x414E72: mov     [esi], edi

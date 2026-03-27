0x6D5730: push    ebx
0x6D5731: push    esi
0x6D5732: mov     esi, [esp+8+arg_0]
0x6D5736: push    edi
0x6D5737: push    esi
0x6D5738: mov     edi, ecx
0x6D573A: call    sub_715E70
0x6D573F: mov     ecx, esi
0x6D5741: call    sub_7124A0
0x6D5746: mov     esi, [edi+50h]
0x6D5749: mov     ebx, eax
0x6D574B: cmp     esi, ebx
0x6D574D: jz      short loc_6D5780
0x6D574F: test    esi, esi
0x6D5751: jz      short loc_6D576F
0x6D5753: lea     eax, [esi+4]
0x6D5756: push    eax; lpAddend
0x6D5757: call    dword ptr ds:0A2807Ch
0x6D575D: test    eax, eax
0x6D575F: jnz     short loc_6D576F
0x6D5761: test    esi, esi
0x6D5763: jz      short loc_6D576F
0x6D5765: mov     edx, [esi]
0x6D5767: mov     eax, [edx]
0x6D5769: push    1
0x6D576B: mov     ecx, esi
0x6D576D: call    eax
0x6D576F: test    ebx, ebx
0x6D5771: mov     [edi+50h], ebx
0x6D5774: jz      short loc_6D5780
0x6D5776: add     ebx, 4
0x6D5779: push    ebx; lpAddend
0x6D577A: call    dword ptr ds:0A28078h
0x6D5780: pop     edi
0x6D5781: pop     esi
0x6D5782: pop     ebx
0x6D5783: retn    4

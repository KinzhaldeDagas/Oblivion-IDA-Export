0x499360: push    ebx
0x499361: push    esi
0x499362: mov     ebx, ecx
0x499364: mov     esi, [ebx+110h]
0x49936A: push    edi
0x49936B: mov     edi, [esp+0Ch+arg_0]
0x49936F: cmp     esi, edi
0x499371: jz      short loc_4993A7
0x499373: test    esi, esi
0x499375: jz      short loc_499393
0x499377: lea     eax, [esi+4]
0x49937A: push    eax; lpAddend
0x49937B: call    dword ptr ds:0A2807Ch
0x499381: test    eax, eax
0x499383: jnz     short loc_499393
0x499385: test    esi, esi
0x499387: jz      short loc_499393
0x499389: mov     edx, [esi]
0x49938B: mov     eax, [edx]
0x49938D: push    1
0x49938F: mov     ecx, esi
0x499391: call    eax
0x499393: test    edi, edi
0x499395: mov     [ebx+110h], edi
0x49939B: jz      short loc_4993A7
0x49939D: add     edi, 4
0x4993A0: push    edi; lpAddend
0x4993A1: call    dword ptr ds:0A28078h
0x4993A7: pop     edi
0x4993A8: pop     esi
0x4993A9: pop     ebx
0x4993AA: retn    4

0x75D850: push    ebx
0x75D851: push    esi
0x75D852: mov     esi, [esp+8+arg_0]
0x75D856: push    edi
0x75D857: push    esi
0x75D858: mov     edi, ecx
0x75D85A: call    sub_71FDC0
0x75D85F: mov     ecx, esi
0x75D861: call    sub_7124A0
0x75D866: mov     esi, [edi+68h]
0x75D869: mov     ebx, eax
0x75D86B: cmp     esi, ebx
0x75D86D: jz      short loc_75D8A0
0x75D86F: test    esi, esi
0x75D871: jz      short loc_75D88F
0x75D873: lea     eax, [esi+4]
0x75D876: push    eax; lpAddend
0x75D877: call    dword ptr ds:0A2807Ch
0x75D87D: test    eax, eax
0x75D87F: jnz     short loc_75D88F
0x75D881: test    esi, esi
0x75D883: jz      short loc_75D88F
0x75D885: mov     edx, [esi]
0x75D887: mov     eax, [edx]
0x75D889: push    1
0x75D88B: mov     ecx, esi
0x75D88D: call    eax
0x75D88F: test    ebx, ebx
0x75D891: mov     [edi+68h], ebx
0x75D894: jz      short loc_75D8A0
0x75D896: add     ebx, 4
0x75D899: push    ebx; lpAddend
0x75D89A: call    dword ptr ds:0A28078h
0x75D8A0: pop     edi
0x75D8A1: pop     esi
0x75D8A2: pop     ebx
0x75D8A3: retn    4

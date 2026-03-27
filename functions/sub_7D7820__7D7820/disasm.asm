0x7D7820: mov     eax, [ecx+0C4h]
0x7D7826: mov     ecx, [esp+arg_0]
0x7D782A: push    ebx
0x7D782B: mov     ebx, [esp+4+arg_4]
0x7D782F: push    esi
0x7D7830: mov     esi, [eax+ecx*4]
0x7D7833: cmp     esi, ebx
0x7D7835: push    edi
0x7D7836: lea     edi, [eax+ecx*4]
0x7D7839: jz      short loc_7D786B
0x7D783B: test    esi, esi
0x7D783D: jz      short loc_7D785B
0x7D783F: lea     edx, [esi+4]
0x7D7842: push    edx; lpAddend
0x7D7843: call    dword ptr ds:0A2807Ch
0x7D7849: test    eax, eax
0x7D784B: jnz     short loc_7D785B
0x7D784D: test    esi, esi
0x7D784F: jz      short loc_7D785B
0x7D7851: mov     eax, [esi]
0x7D7853: mov     edx, [eax]
0x7D7855: push    1
0x7D7857: mov     ecx, esi
0x7D7859: call    edx
0x7D785B: test    ebx, ebx
0x7D785D: mov     [edi], ebx
0x7D785F: jz      short loc_7D786B
0x7D7861: add     ebx, 4
0x7D7864: push    ebx; lpAddend
0x7D7865: call    dword ptr ds:0A28078h
0x7D786B: pop     edi
0x7D786C: pop     esi
0x7D786D: pop     ebx
0x7D786E: retn    8

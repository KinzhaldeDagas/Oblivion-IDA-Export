0x7D7730: mov     eax, [ecx+0BCh]
0x7D7736: mov     ecx, [esp+arg_0]
0x7D773A: push    ebx
0x7D773B: mov     ebx, [esp+4+arg_4]
0x7D773F: push    esi
0x7D7740: mov     esi, [eax+ecx*4]
0x7D7743: cmp     esi, ebx
0x7D7745: push    edi
0x7D7746: lea     edi, [eax+ecx*4]
0x7D7749: jz      short loc_7D777B
0x7D774B: test    esi, esi
0x7D774D: jz      short loc_7D776B
0x7D774F: lea     edx, [esi+4]
0x7D7752: push    edx; lpAddend
0x7D7753: call    dword ptr ds:0A2807Ch
0x7D7759: test    eax, eax
0x7D775B: jnz     short loc_7D776B
0x7D775D: test    esi, esi
0x7D775F: jz      short loc_7D776B
0x7D7761: mov     eax, [esi]
0x7D7763: mov     edx, [eax]
0x7D7765: push    1
0x7D7767: mov     ecx, esi
0x7D7769: call    edx
0x7D776B: test    ebx, ebx
0x7D776D: mov     [edi], ebx
0x7D776F: jz      short loc_7D777B
0x7D7771: add     ebx, 4
0x7D7774: push    ebx; lpAddend
0x7D7775: call    dword ptr ds:0A28078h
0x7D777B: pop     edi
0x7D777C: pop     esi
0x7D777D: pop     ebx
0x7D777E: retn    8

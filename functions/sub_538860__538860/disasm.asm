0x538860: mov     eax, [esp+arg_0]
0x538864: test    eax, eax
0x538866: push    esi
0x538867: push    edi
0x538868: mov     edi, ecx
0x53886A: jz      short loc_538871
0x53886C: mov     esi, [eax+0Ch]
0x53886F: jmp     short loc_538873
0x538871: xor     esi, esi
0x538873: test    esi, esi
0x538875: jz      short loc_5388BD
0x538877: mov     eax, [esi]
0x538879: mov     edx, [eax+4]
0x53887C: mov     ecx, esi
0x53887E: call    edx
0x538880: test    eax, eax
0x538882: jz      short loc_538892
0x538884: cmp     eax, offset dword_BA7D84
0x538889: jz      short loc_5388C2
0x53888B: mov     eax, [eax+4]
0x53888E: test    eax, eax
0x538890: jnz     short loc_538884
0x538892: xor     al, al
0x538894: neg     al
0x538896: sbb     eax, eax
0x538898: and     eax, esi
0x53889A: jz      short loc_5388BD
0x53889C: cmp     dword ptr [eax+4], 0
0x5388A0: lea     ecx, [eax+4]
0x5388A3: jbe     short loc_5388BD
0x5388A5: push    ecx
0x5388A6: mov     edx, esp
0x5388A8: mov     [esp+0Ch+arg_0], esp
0x5388AC: push    ecx; lpAddend
0x5388AD: mov     [edx], eax
0x5388AF: call    dword ptr ds:0A28078h
0x5388B5: lea     ecx, [edi+0Ch]
0x5388B8: call    sub_67A760
0x5388BD: pop     edi
0x5388BE: pop     esi
0x5388BF: retn    4
0x5388C2: mov     al, 1
0x5388C4: jmp     short loc_538894

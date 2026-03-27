0x9263E0: sub     esp, 8
0x9263E3: push    ebx
0x9263E4: push    esi
0x9263E5: mov     esi, ecx
0x9263E7: mov     ebx, [esi+10h]
0x9263EA: cmp     [esi+8], ebx
0x9263ED: jnz     loc_926488
0x9263F3: mov     eax, [esi+4]
0x9263F6: xor     ecx, ecx
0x9263F8: push    ebp
0x9263F9: cmp     eax, [esi]
0x9263FB: setnz   cl
0x9263FE: push    edi
0x9263FF: dec     ecx
0x926400: and     ecx, eax
0x926402: test    ebx, ebx
0x926404: mov     edi, ecx
0x926406: jnz     short loc_92640C
0x926408: push    8
0x92640A: jmp     short loc_926431
0x92640C: lea     eax, [edi+ebx*2]
0x92640F: lea     eax, [eax+eax*2]
0x926412: shl     eax, 2
0x926415: mov     ecx, 1
0x92641A: cmp     eax, ecx
0x92641C: jbe     short loc_926426
0x92641E: mov     edi, edi
0x926420: shl     ecx, 1
0x926422: cmp     eax, ecx
0x926424: ja      short loc_926420
0x926426: mov     eax, 0AAAAAAABh
0x92642B: mul     ecx
0x92642D: shr     edx, 3
0x926430: push    edx
0x926431: mov     ecx, esi
0x926433: call    sub_926320
0x926438: xor     eax, eax
0x92643A: test    edi, edi
0x92643C: jz      short loc_92647F
0x92643E: test    edi, edi
0x926440: jle     short loc_92647F
0x926442: lea     eax, [ebx+ebx*2]
0x926445: xor     edx, edx
0x926447: shl     eax, 2
0x92644A: mov     [esp+18h+var_8], edi
0x92644E: mov     [esp+18h+var_4], edi
0x926452: mov     ecx, [esi+0Ch]
0x926455: lea     edi, [edx+ecx]
0x926458: mov     ebp, [edi]
0x92645A: add     ecx, eax
0x92645C: mov     [ecx], ebp
0x92645E: mov     ebp, [edi+4]
0x926461: mov     [ecx+4], ebp
0x926464: mov     edi, [edi+8]
0x926467: mov     [ecx+8], edi
0x92646A: mov     ecx, [esp+18h+var_8]
0x92646E: add     edx, 0Ch
0x926471: add     eax, 0Ch
0x926474: dec     ecx
0x926475: mov     [esp+18h+var_8], ecx
0x926479: jnz     short loc_926452
0x92647B: mov     eax, [esp+18h+var_4]
0x92647F: add     eax, ebx
0x926481: pop     edi
0x926482: mov     [esi+4], eax
0x926485: pop     ebp
0x926486: jmp     short loc_926494
0x926488: cmp     [esi+4], ebx
0x92648B: jnz     short loc_926494
0x92648D: mov     dword ptr [esi+4], 0
0x926494: mov     eax, [esi+4]
0x926497: lea     edx, [eax+eax*2]
0x92649A: mov     eax, [esi+0Ch]
0x92649D: lea     ecx, [eax+edx*4]
0x9264A0: mov     edx, [esp+10h+arg_0]
0x9264A4: mov     eax, [edx]
0x9264A6: mov     [ecx], eax
0x9264A8: mov     eax, [edx+4]
0x9264AB: mov     [ecx+4], eax
0x9264AE: mov     edx, [edx+8]
0x9264B1: mov     [ecx+8], edx
0x9264B4: mov     ecx, [esi+4]
0x9264B7: mov     eax, [esi+8]
0x9264BA: inc     ecx
0x9264BB: inc     eax
0x9264BC: mov     [esi+4], ecx
0x9264BF: mov     [esi+8], eax
0x9264C2: pop     esi
0x9264C3: pop     ebx
0x9264C4: add     esp, 8
0x9264C7: retn    4

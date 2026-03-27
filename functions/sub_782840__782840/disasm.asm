0x782840: push    ebx
0x782841: mov     ebx, [esp+4+arg_0]
0x782845: push    esi
0x782846: mov     esi, ecx
0x782848: cmp     [esi+24h], ebx
0x78284B: jnb     short loc_782854
0x78284D: pop     esi
0x78284E: xor     eax, eax
0x782850: pop     ebx
0x782851: retn    4
0x782854: push    edi
0x782855: mov     edi, ds:0B428D4h
0x78285B: test    edi, edi
0x78285D: jnz     short loc_78286A
0x78285F: call    sub_7827A0
0x782864: mov     edi, ds:0B428D4h
0x78286A: mov     ecx, [edi+18h]
0x78286D: test    ecx, ecx
0x78286F: lea     eax, [edi+18h]
0x782872: mov     ds:0B428D4h, ecx
0x782878: jz      short loc_782881
0x78287A: mov     dword ptr [ecx+1Ch], 0
0x782881: mov     dword ptr [eax], 0
0x782887: mov     dword ptr [edi+1Ch], 0
0x78288E: mov     [edi+4], esi
0x782891: mov     eax, [esi+8]
0x782894: mov     [edi+8], eax
0x782897: mov     ecx, [esi+20h]
0x78289A: mov     [edi+0Ch], ecx
0x78289D: mov     [edi+14h], ebx
0x7828A0: add     [esi+20h], ebx
0x7828A3: sub     [esi+24h], ebx
0x7828A6: sub     [esi+28h], ebx
0x7828A9: lea     edx, [esp+0Ch+arg_0]
0x7828AD: push    edx
0x7828AE: lea     ecx, [esi+2Ch]
0x7828B1: mov     [esp+10h+arg_0], edi
0x7828B5: call    sub_4BACA0
0x7828BA: mov     [edi], eax
0x7828BC: mov     eax, edi
0x7828BE: pop     edi
0x7828BF: pop     esi
0x7828C0: pop     ebx
0x7828C1: retn    4

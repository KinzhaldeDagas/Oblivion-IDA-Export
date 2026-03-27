0x96D870: push    esi
0x96D871: mov     esi, ecx
0x96D873: mov     ecx, [esi+34h]
0x96D876: test    ecx, ecx
0x96D878: jz      short loc_96D882
0x96D87A: mov     eax, [ecx]
0x96D87C: mov     edx, [eax]
0x96D87E: push    1
0x96D880: call    edx
0x96D882: mov     dword ptr [esi+34h], 0
0x96D889: pop     esi
0x96D88A: retn

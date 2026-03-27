0x98D860: mov     eax, [esp+arg_0]
0x98D864: mov     ecx, [eax+3Ch]
0x98D867: add     ecx, eax
0x98D869: movzx   eax, word ptr [ecx+14h]
0x98D86D: push    ebx
0x98D86E: push    esi
0x98D86F: movzx   esi, word ptr [ecx+6]
0x98D873: xor     edx, edx
0x98D875: test    esi, esi
0x98D877: push    edi
0x98D878: lea     eax, [eax+ecx+18h]
0x98D87C: jbe     short loc_98D89C
0x98D87E: mov     edi, [esp+0Ch+arg_4]
0x98D882: mov     ecx, [eax+0Ch]
0x98D885: cmp     edi, ecx
0x98D887: jb      short loc_98D892
0x98D889: mov     ebx, [eax+8]
0x98D88C: add     ebx, ecx
0x98D88E: cmp     edi, ebx
0x98D890: jb      short loc_98D89E
0x98D892: add     edx, 1
0x98D895: add     eax, 28h ; '('
0x98D898: cmp     edx, esi
0x98D89A: jb      short loc_98D882
0x98D89C: xor     eax, eax
0x98D89E: pop     edi
0x98D89F: pop     esi
0x98D8A0: pop     ebx
0x98D8A1: retn

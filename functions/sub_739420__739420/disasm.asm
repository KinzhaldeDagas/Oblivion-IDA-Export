0x739420: push    ebx
0x739421: mov     ebx, [esp+4+arg_0]
0x739425: push    esi
0x739426: push    edi
0x739427: push    ebx
0x739428: mov     esi, ecx
0x73942A: call    sub_707AB0
0x73942F: xor     edi, edi
0x739431: cmp     [esi+12Eh], di
0x739438: jbe     short loc_739463
0x73943A: lea     ebx, [ebx+0]
0x739440: mov     eax, [esi+128h]
0x739446: mov     ecx, [eax+edi*4]
0x739449: test    ecx, ecx
0x73944B: jz      short loc_739455
0x73944D: mov     edx, [ecx]
0x73944F: mov     eax, [edx+38h]
0x739452: push    ebx
0x739453: call    eax
0x739455: movzx   ecx, word ptr [esi+12Eh]
0x73945C: add     edi, 1
0x73945F: cmp     edi, ecx
0x739461: jb      short loc_739440
0x739463: xor     edi, edi
0x739465: cmp     [esi+13Eh], di
0x73946C: jbe     short loc_739493
0x73946E: mov     edi, edi
0x739470: mov     edx, [esi+138h]
0x739476: mov     ecx, [edx+edi*4]
0x739479: test    ecx, ecx
0x73947B: jz      short loc_739485
0x73947D: mov     eax, [ecx]
0x73947F: mov     edx, [eax+38h]
0x739482: push    ebx
0x739483: call    edx
0x739485: movzx   eax, word ptr [esi+13Eh]
0x73948C: add     edi, 1
0x73948F: cmp     edi, eax
0x739491: jb      short loc_739470
0x739493: pop     edi
0x739494: pop     esi
0x739495: pop     ebx
0x739496: retn    4

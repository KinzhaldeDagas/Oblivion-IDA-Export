0x9567C0: push    ebx
0x9567C1: push    esi
0x9567C2: mov     esi, ecx
0x9567C4: mov     ebx, [esi+0Ch]
0x9567C7: mov     eax, [esi+8]
0x9567CA: mov     ecx, [esi+10h]
0x9567CD: sub     eax, ebx
0x9567CF: mov     ebx, [esp+8+arg_4]
0x9567D3: mov     [eax+ecx-1], bl
0x9567D7: mov     edx, [esi+0Ch]
0x9567DA: mov     ecx, [esi+8]
0x9567DD: inc     edx
0x9567DE: mov     eax, edx
0x9567E0: cmp     eax, ecx
0x9567E2: mov     [esi+0Ch], edx
0x9567E5: jl      short loc_9567EE
0x9567E7: mov     ecx, esi
0x9567E9: call    sub_9564D0
0x9567EE: mov     ecx, [esi+0Ch]
0x9567F1: mov     eax, [esi+8]
0x9567F4: sub     eax, ecx
0x9567F6: mov     ecx, [esi+10h]
0x9567F9: mov     edx, ebx
0x9567FB: shr     edx, 8
0x9567FE: mov     [eax+ecx-1], dl
0x956802: mov     edx, [esi+0Ch]
0x956805: mov     ecx, [esi+8]
0x956808: inc     edx
0x956809: mov     eax, edx
0x95680B: cmp     eax, ecx
0x95680D: mov     [esi+0Ch], edx
0x956810: jl      short loc_956819
0x956812: mov     ecx, esi
0x956814: call    sub_9564D0
0x956819: mov     ecx, [esi+0Ch]
0x95681C: mov     eax, [esi+8]
0x95681F: sub     eax, ecx
0x956821: mov     ecx, [esi+10h]
0x956824: mov     edx, ebx
0x956826: shr     edx, 10h
0x956829: mov     [eax+ecx-1], dl
0x95682D: mov     edx, [esi+0Ch]
0x956830: mov     ecx, [esi+8]
0x956833: inc     edx
0x956834: mov     eax, edx
0x956836: cmp     eax, ecx
0x956838: mov     [esi+0Ch], edx
0x95683B: jl      short loc_956844
0x95683D: mov     ecx, esi
0x95683F: call    sub_9564D0
0x956844: mov     eax, [esi+0Ch]
0x956847: mov     edx, [esi+8]
0x95684A: sub     edx, eax
0x95684C: mov     eax, [esi+10h]
0x95684F: shr     ebx, 18h
0x956852: mov     [edx+eax-1], bl
0x956856: mov     edx, [esi+0Ch]
0x956859: mov     ecx, [esi+8]
0x95685C: inc     edx
0x95685D: mov     eax, edx
0x95685F: cmp     eax, ecx
0x956861: mov     [esi+0Ch], edx
0x956864: jl      short loc_95686D
0x956866: mov     ecx, esi
0x956868: call    sub_9564D0
0x95686D: mov     ebx, [esi+0Ch]
0x956870: mov     ecx, [esi+8]
0x956873: mov     edx, [esi+10h]
0x956876: mov     al, [esp+8+arg_0]
0x95687A: sub     ecx, ebx
0x95687C: mov     [ecx+edx-1], al
0x956880: mov     edx, [esi+0Ch]
0x956883: mov     ecx, [esi+8]
0x956886: inc     edx
0x956887: mov     eax, edx
0x956889: cmp     eax, ecx
0x95688B: mov     [esi+0Ch], edx
0x95688E: jl      short loc_956897
0x956890: mov     ecx, esi
0x956892: call    sub_9564D0
0x956897: pop     esi
0x956898: pop     ebx
0x956899: retn    8

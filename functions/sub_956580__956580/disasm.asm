0x956580: mov     dl, [esp+arg_4]
0x956584: push    esi
0x956585: mov     esi, ecx
0x956587: mov     ecx, [esi+0Ch]
0x95658A: mov     eax, [esi+8]
0x95658D: sub     eax, ecx
0x95658F: mov     ecx, [esi+10h]
0x956592: mov     [eax+ecx-1], dl
0x956596: mov     edx, [esi+0Ch]
0x956599: mov     ecx, [esi+8]
0x95659C: inc     edx
0x95659D: mov     eax, edx
0x95659F: cmp     eax, ecx
0x9565A1: mov     [esi+0Ch], edx
0x9565A4: jl      short loc_9565AD
0x9565A6: mov     ecx, esi
0x9565A8: call    sub_9564D0
0x9565AD: mov     ecx, [esi+0Ch]
0x9565B0: mov     eax, [esi+8]
0x9565B3: mov     dl, [esp+4+arg_0]
0x9565B7: sub     eax, ecx
0x9565B9: mov     ecx, [esi+10h]
0x9565BC: mov     [eax+ecx-1], dl
0x9565C0: mov     edx, [esi+0Ch]
0x9565C3: mov     ecx, [esi+8]
0x9565C6: inc     edx
0x9565C7: mov     eax, edx
0x9565C9: cmp     eax, ecx
0x9565CB: mov     [esi+0Ch], edx
0x9565CE: jl      short loc_9565D7
0x9565D0: mov     ecx, esi
0x9565D2: call    sub_9564D0
0x9565D7: pop     esi
0x9565D8: retn    8

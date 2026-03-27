0x8CB820: mov     ecx, [esp+arg_4]
0x8CB824: mov     al, [ecx+29h]
0x8CB827: push    esi
0x8CB828: push    edi
0x8CB829: movzx   edi, word ptr [ecx+20h]
0x8CB82D: test    al, al
0x8CB82F: mov     eax, [esp+8+arg_0]
0x8CB833: jnz     short loc_8CB858
0x8CB835: mov     edx, [eax+44h]
0x8CB838: mov     esi, [eax+48h]
0x8CB83B: mov     esi, [edx+esi*4-4]
0x8CB83F: mov     [edx+edi*4], esi
0x8CB842: mov     dx, [ecx+20h]
0x8CB846: mov     edi, [eax+44h]
0x8CB849: movzx   esi, dx
0x8CB84C: mov     esi, [edi+esi*4]
0x8CB84F: mov     [esi+20h], dx
0x8CB853: dec     dword ptr [eax+48h]
0x8CB856: jmp     short loc_8CB879
0x8CB858: mov     edx, [eax+38h]
0x8CB85B: mov     esi, [eax+3Ch]
0x8CB85E: mov     esi, [edx+esi*4-4]
0x8CB862: mov     [edx+edi*4], esi
0x8CB865: mov     dx, [ecx+20h]
0x8CB869: mov     edi, [eax+38h]
0x8CB86C: movzx   esi, dx
0x8CB86F: mov     esi, [edi+esi*4]
0x8CB872: mov     [esi+20h], dx
0x8CB876: dec     dword ptr [eax+3Ch]
0x8CB879: mov     dx, [ecx+22h]
0x8CB87D: cmp     dx, 0FFFFh
0x8CB882: pop     edi
0x8CB883: pop     esi
0x8CB884: jz      short locret_8CB899
0x8CB886: mov     eax, [eax+50h]
0x8CB889: movzx   edx, dx
0x8CB88C: mov     dword ptr [eax+edx*4], 0
0x8CB893: mov     word ptr [ecx+22h], 0FFFFh
0x8CB899: retn

0x699CB7: test    eax, eax
0x699CB9: jz      short MagicCaster_GetFormID___Return_0
0x699CBB: mov     edx, [eax+0Ch]
0x699CBE: lea     esi, [eax+0Ch]
0x699CC1: mov     eax, [edx+20h]
0x699CC4: mov     ecx, esi
0x699CC6: call    eax
0x699CC8: test    eax, eax
0x699CCA: jz      short MagicCaster_GetFormID___Return_0
0x699CCC: mov     edx, [esi]
0x699CCE: mov     eax, [edx+20h]
0x699CD1: mov     ecx, esi
0x699CD3: call    eax
0x699CD5: mov     eax, [eax+0Ch]
0x699CD8: pop     edi
0x699CD9: pop     esi
0x699CDA: retn

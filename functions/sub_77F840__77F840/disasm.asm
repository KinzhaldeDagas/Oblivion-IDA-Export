0x77F840: mov     eax, [esp+arg_0]
0x77F844: test    eax, eax
0x77F846: push    esi
0x77F847: mov     esi, ecx
0x77F849: mov     [esi+0FFCh], eax
0x77F84F: jz      short loc_77F881
0x77F851: push    edi
0x77F852: mov     edi, [eax+280h]
0x77F858: mov     eax, [esi+0FF8h]
0x77F85E: test    eax, eax
0x77F860: jz      short loc_77F86A
0x77F862: mov     ecx, [eax]
0x77F864: mov     edx, [ecx+8]
0x77F867: push    eax
0x77F868: call    edx
0x77F86A: test    edi, edi
0x77F86C: mov     [esi+0FF8h], edi
0x77F872: jz      short loc_77F87C
0x77F874: mov     eax, [edi]
0x77F876: mov     ecx, [eax+4]
0x77F879: push    edi
0x77F87A: call    ecx
0x77F87C: pop     edi
0x77F87D: pop     esi
0x77F87E: retn    4
0x77F881: mov     eax, [esi+0FF8h]
0x77F887: test    eax, eax
0x77F889: jz      short loc_77F893
0x77F88B: mov     edx, [eax]
0x77F88D: push    eax
0x77F88E: mov     eax, [edx+8]
0x77F891: call    eax
0x77F893: mov     dword ptr [esi+0FF8h], 0
0x77F89D: pop     esi
0x77F89E: retn    4

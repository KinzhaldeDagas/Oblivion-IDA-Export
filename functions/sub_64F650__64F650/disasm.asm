0x64F650: push    esi
0x64F651: push    edi
0x64F652: mov     edi, ecx
0x64F654: mov     eax, [edi]
0x64F656: mov     edx, [eax+184h]
0x64F65C: call    edx
0x64F65E: mov     esi, eax
0x64F660: test    esi, esi
0x64F662: jz      short loc_64F695
0x64F664: mov     ecx, [esi+28h]
0x64F667: test    ecx, ecx
0x64F669: jz      short loc_64F695
0x64F66B: call    sub_569E60
0x64F670: test    eax, eax
0x64F672: jz      short loc_64F695
0x64F674: mov     ecx, [esi+28h]
0x64F677: call    sub_569E60
0x64F67C: mov     ecx, [eax+8]
0x64F67F: shr     ecx, 5
0x64F682: test    cl, 1
0x64F685: jnz     short loc_64F695
0x64F687: mov     ecx, [edi+2Ch]
0x64F68A: test    ecx, ecx
0x64F68C: jz      short loc_64F695
0x64F68E: cmp     eax, ecx
0x64F690: jz      short loc_64F695
0x64F692: mov     [edi+2Ch], eax
0x64F695: pop     edi
0x64F696: pop     esi
0x64F697: retn

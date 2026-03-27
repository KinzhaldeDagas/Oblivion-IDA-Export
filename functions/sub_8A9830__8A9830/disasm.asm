0x8A9830: push    esi
0x8A9831: push    edi
0x8A9832: mov     edi, ecx
0x8A9834: mov     ecx, [edi+50h]
0x8A9837: mov     dword ptr [edi], offset off_A97A98
0x8A983D: mov     eax, [ecx]
0x8A983F: mov     esi, ecx
0x8A9841: call    dword ptr [eax+8]
0x8A9844: cmp     eax, 6
0x8A9847: jnz     short loc_8A986B
0x8A9849: mov     ecx, [esi+0F0h]
0x8A984F: test    ecx, ecx
0x8A9851: jz      short loc_8A986B
0x8A9853: cmp     word ptr [ecx+4], 0
0x8A9858: jz      short loc_8A986B
0x8A985A: dec     word ptr [ecx+6]
0x8A985E: cmp     word ptr [ecx+6], 0
0x8A9863: jnz     short loc_8A986B
0x8A9865: mov     edx, [ecx]
0x8A9867: push    1
0x8A9869: call    dword ptr [edx]
0x8A986B: mov     ecx, [edi+50h]
0x8A986E: mov     eax, [ecx]
0x8A9870: call    dword ptr [eax+8]
0x8A9873: cmp     eax, 7
0x8A9876: jnz     short loc_8A989A
0x8A9878: mov     ecx, [esi+0F0h]
0x8A987E: test    ecx, ecx
0x8A9880: jz      short loc_8A989A
0x8A9882: cmp     word ptr [ecx+4], 0
0x8A9887: jz      short loc_8A989A
0x8A9889: dec     word ptr [ecx+6]
0x8A988D: cmp     word ptr [ecx+6], 0
0x8A9892: jnz     short loc_8A989A
0x8A9894: mov     edx, [ecx]
0x8A9896: push    1
0x8A9898: call    dword ptr [edx]
0x8A989A: cmp     word ptr [esi+4], 0
0x8A989F: jz      short loc_8A98B4
0x8A98A1: dec     word ptr [esi+6]
0x8A98A5: cmp     word ptr [esi+6], 0
0x8A98AA: jnz     short loc_8A98B4
0x8A98AC: mov     eax, [esi]
0x8A98AE: push    1
0x8A98B0: mov     ecx, esi
0x8A98B2: call    dword ptr [eax]
0x8A98B4: mov     ecx, edi
0x8A98B6: pop     edi
0x8A98B7: pop     esi
0x8A98B8: jmp     sub_8A6900

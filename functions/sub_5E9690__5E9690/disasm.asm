0x5E9690: push    esi
0x5E9691: mov     esi, ecx
0x5E9693: mov     ecx, [esi+58h]
0x5E9696: test    ecx, ecx
0x5E9698: jz      short loc_5E96D5
0x5E969A: mov     eax, [ecx]
0x5E969C: mov     edx, [eax+104h]
0x5E96A2: push    0
0x5E96A4: push    0
0x5E96A6: call    edx
0x5E96A8: mov     ecx, [esi+58h]
0x5E96AB: mov     eax, [ecx]
0x5E96AD: mov     edx, [eax+10Ch]
0x5E96B3: push    0
0x5E96B5: call    edx
0x5E96B7: mov     ecx, [esi+58h]
0x5E96BA: mov     eax, [ecx]
0x5E96BC: mov     edx, [eax+108h]
0x5E96C2: push    0
0x5E96C4: call    edx
0x5E96C6: mov     ecx, [esi+58h]
0x5E96C9: mov     eax, [ecx]
0x5E96CB: mov     edx, [eax+110h]
0x5E96D1: push    0
0x5E96D3: call    edx
0x5E96D5: pop     esi
0x5E96D6: retn

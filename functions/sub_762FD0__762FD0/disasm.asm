0x762FD0: mov     eax, [ecx+614h]
0x762FD6: push    edi
0x762FD7: xor     edi, edi
0x762FD9: cmp     eax, edi
0x762FDB: jz      short loc_762FF8
0x762FDD: push    esi
0x762FDE: mov     edi, edi
0x762FE0: mov     edx, [eax+0Ch]
0x762FE3: cmp     edx, edi
0x762FE5: mov     esi, ds:0B42164h
0x762FEB: mov     ds:0B42164h, eax
0x762FF0: mov     [eax+0Ch], esi
0x762FF3: mov     eax, edx
0x762FF5: jnz     short loc_762FE0
0x762FF7: pop     esi
0x762FF8: mov     [ecx+618h], edi
0x762FFE: mov     [ecx+614h], edi
0x763004: pop     edi
0x763005: retn

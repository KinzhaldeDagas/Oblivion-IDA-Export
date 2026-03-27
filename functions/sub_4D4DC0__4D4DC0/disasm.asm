0x4D4DC0: push    edi
0x4D4DC1: mov     edi, ecx
0x4D4DC3: test    byte ptr [edi+24h], 1
0x4D4DC7: lea     ecx, [edi+28h]
0x4D4DCA: jz      short loc_4D4DE4
0x4D4DCC: call    sub_424180
0x4D4DD1: test    eax, eax
0x4D4DD3: jz      short loc_4D4E2A
0x4D4DD5: push    0
0x4D4DD7: mov     ecx, eax
0x4D4DD9: mov     byte ptr [eax+19h], 0
0x4D4DDD: call    sub_88B680
0x4D4DE2: pop     edi
0x4D4DE3: retn
0x4D4DE4: call    sub_41F950
0x4D4DE9: test    eax, eax
0x4D4DEB: jz      short loc_4D4DF4
0x4D4DED: mov     ecx, eax
0x4D4DEF: call    sub_532EF0
0x4D4DF4: push    esi
0x4D4DF5: push    edi; a2
0x4D4DF6: mov     ecx, offset stru_B35C80; this
0x4D4DFB: call    sub_496EA0
0x4D4E00: lea     esi, [edi+48h]
0x4D4E03: test    esi, esi
0x4D4E05: jz      short loc_4D4E1E
0x4D4E07: mov     ecx, [esi]
0x4D4E09: test    ecx, ecx
0x4D4E0B: mov     esi, [esi+4]
0x4D4E0E: jz      short loc_4D4E1A
0x4D4E10: mov     eax, [ecx]
0x4D4E12: mov     edx, [eax+144h]
0x4D4E18: call    edx
0x4D4E1A: test    esi, esi
0x4D4E1C: jnz     short loc_4D4E07
0x4D4E1E: push    edi; a2
0x4D4E1F: mov     ecx, offset stru_B35C80; this
0x4D4E24: call    sub_496F50
0x4D4E29: pop     esi
0x4D4E2A: pop     edi
0x4D4E2B: retn

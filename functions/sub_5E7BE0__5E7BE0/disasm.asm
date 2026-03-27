0x5E7BE0: add     ecx, 44h ; 'D'
0x5E7BE3: call    GetExtraDataFollower
0x5E7BE8: test    eax, eax
0x5E7BEA: jz      short locret_5E7C2E
0x5E7BEC: push    edi
0x5E7BED: mov     edi, [eax+0Ch]
0x5E7BF0: test    edi, edi
0x5E7BF2: jz      short loc_5E7C2D
0x5E7BF4: push    esi
0x5E7BF5: mov     esi, [edi]
0x5E7BF7: test    esi, esi
0x5E7BF9: jz      short loc_5E7C2C
0x5E7BFB: mov     ecx, [esi+58h]
0x5E7BFE: test    ecx, ecx
0x5E7C00: jz      short loc_5E7C25
0x5E7C02: mov     eax, [ecx]
0x5E7C04: mov     edx, [eax+184h]
0x5E7C0A: call    edx
0x5E7C0C: test    eax, eax
0x5E7C0E: jz      short loc_5E7C25
0x5E7C10: cmp     byte ptr [eax+20h], 7
0x5E7C14: jnz     short loc_5E7C25
0x5E7C16: mov     ecx, [esi+58h]
0x5E7C19: mov     eax, [ecx]
0x5E7C1B: mov     edx, [eax+17Ch]
0x5E7C21: push    0
0x5E7C23: call    edx
0x5E7C25: mov     edi, [edi+4]
0x5E7C28: test    edi, edi
0x5E7C2A: jnz     short loc_5E7BF5
0x5E7C2C: pop     esi
0x5E7C2D: pop     edi
0x5E7C2E: retn

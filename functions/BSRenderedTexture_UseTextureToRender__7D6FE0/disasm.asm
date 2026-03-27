0x7D6FE0: push    esi
0x7D6FE1: mov     esi, ecx
0x7D6FE3: test    esi, esi
0x7D6FE5: jnz     short loc_7D6FEB
0x7D6FE7: xor     eax, eax
0x7D6FE9: pop     esi
0x7D6FEA: retn
0x7D6FEB: mov     ecx, [esi+20h]
0x7D6FEE: test    ecx, ecx
0x7D6FF0: jz      short loc_7D700E
0x7D6FF2: mov     eax, [ecx]
0x7D6FF4: mov     edx, [eax+4]
0x7D6FF7: call    edx
0x7D6FF9: test    eax, eax
0x7D6FFB: jz      short loc_7D700E
0x7D6FFD: lea     ecx, [ecx+0]
0x7D7000: cmp     eax, offset unk_BAA880
0x7D7005: jz      short loc_7D7013
0x7D7007: mov     eax, [eax+4]
0x7D700A: test    eax, eax
0x7D700C: jnz     short loc_7D7000
0x7D700E: mov     eax, [esi+8]
0x7D7011: pop     esi
0x7D7012: retn
0x7D7013: mov     eax, [esi+20h]
0x7D7016: push    eax
0x7D7017: push    offset unk_BAA880
0x7D701C: call    NiRTTI_Cast
0x7D7021: mov     eax, [eax+40h]
0x7D7024: mov     eax, [esi+eax*4+8]
0x7D7028: add     esp, 8
0x7D702B: pop     esi
0x7D702C: retn

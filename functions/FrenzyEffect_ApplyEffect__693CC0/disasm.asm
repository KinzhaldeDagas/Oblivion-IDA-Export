0x693CC0: push    esi
0x693CC1: push    edi
0x693CC2: mov     esi, ecx
0x693CC4: call    ValueModifierEffect_Apply
0x693CC9: mov     ecx, [esi+20h]; this
0x693CCC: test    ecx, ecx
0x693CCE: jz      short loc_693CD9
0x693CD0: call    MagicTarget_GetParentActor
0x693CD5: mov     edi, eax
0x693CD7: jmp     short loc_693CDB
0x693CD9: xor     edi, edi
0x693CDB: mov     ecx, [esi+24h]; this
0x693CDE: test    ecx, ecx
0x693CE0: jz      short loc_693CE9
0x693CE2: call    MagicCaster_GetParentActor
0x693CE7: jmp     short loc_693CEB
0x693CE9: xor     eax, eax
0x693CEB: test    edi, edi
0x693CED: jz      short loc_693D09
0x693CEF: test    eax, eax
0x693CF1: jz      short loc_693D09
0x693CF3: mov     eax, [edi]
0x693CF5: mov     edx, [eax+334h]
0x693CFB: push    1
0x693CFD: mov     ecx, edi
0x693CFF: call    edx
0x693D01: test    al, al
0x693D03: jz      short loc_693D09
0x693D05: mov     byte ptr [esi+3Ch], 1
0x693D09: pop     edi
0x693D0A: pop     esi
0x693D0B: retn

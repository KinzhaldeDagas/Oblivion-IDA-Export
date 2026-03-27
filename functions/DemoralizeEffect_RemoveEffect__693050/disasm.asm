0x693050: push    edi
0x693051: mov     edi, ecx
0x693053: cmp     byte ptr [edi+38h], 0
0x693057: jz      loc_6930E3
0x69305D: mov     ecx, [edi+20h]; this
0x693060: test    ecx, ecx
0x693062: push    esi
0x693063: jz      short loc_69306E
0x693065: call    MagicTarget_GetParentActor
0x69306A: mov     esi, eax
0x69306C: jmp     short loc_693070
0x69306E: xor     esi, esi
0x693070: mov     ecx, [edi+24h]; this
0x693073: test    ecx, ecx
0x693075: jz      short loc_693080
0x693077: call    MagicCaster_GetParentActor
0x69307C: mov     edi, eax
0x69307E: jmp     short loc_693082
0x693080: xor     edi, edi
0x693082: test    esi, esi
0x693084: jz      short loc_6930E2
0x693086: mov     eax, [esi]
0x693088: mov     edx, [eax+334h]
0x69308E: push    1
0x693090: mov     ecx, esi
0x693092: call    edx
0x693094: test    al, al
0x693096: mov     ecx, esi
0x693098: jz      short loc_6930CF
0x69309A: mov     eax, [esi]
0x69309C: mov     edx, [eax+340h]
0x6930A2: push    edi
0x6930A3: call    edx
0x6930A5: test    edi, edi
0x6930A7: jz      short loc_6930E2
0x6930A9: mov     ecx, [esi+58h]
0x6930AC: test    ecx, ecx
0x6930AE: jz      short loc_6930E2
0x6930B0: mov     eax, [ecx]
0x6930B2: mov     edx, [eax+228h]
0x6930B8: push    1
0x6930BA: push    0
0x6930BC: push    0
0x6930BE: push    0
0x6930C0: push    0
0x6930C2: push    0
0x6930C4: push    0
0x6930C6: push    0
0x6930C8: push    edi
0x6930C9: push    esi
0x6930CA: call    edx
0x6930CC: pop     esi
0x6930CD: pop     edi
0x6930CE: retn
0x6930CF: push    0
0x6930D1: call    sub_5E6CD0
0x6930D6: test    al, al
0x6930D8: jz      short loc_6930E2
0x6930DA: push    edi; int
0x6930DB: mov     ecx, esi; int
0x6930DD: call    sub_5EFF30
0x6930E2: pop     esi
0x6930E3: pop     edi
0x6930E4: retn

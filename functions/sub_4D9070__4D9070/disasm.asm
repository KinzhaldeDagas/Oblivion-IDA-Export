0x4D9070: push    esi
0x4D9071: mov     esi, ecx
0x4D9073: push    edi
0x4D9074: lea     edi, [esi+44h]
0x4D9077: mov     ecx, edi; this
0x4D9079: call    sub_41E690
0x4D907E: test    eax, eax
0x4D9080: jz      short loc_4D9090
0x4D9082: mov     eax, [esi]
0x4D9084: mov     edx, [eax+40h]
0x4D9087: push    40h ; '@'
0x4D9089: mov     ecx, esi
0x4D908B: call    edx
0x4D908D: pop     edi
0x4D908E: pop     esi
0x4D908F: retn
0x4D9090: mov     ecx, edi; this
0x4D9092: call    ExtraDataList_GetTeleport
0x4D9097: mov     esi, eax
0x4D9099: test    esi, esi
0x4D909B: jz      short loc_4D90CD
0x4D909D: mov     ecx, esi
0x4D909F: call    sub_42B410
0x4D90A4: test    eax, eax
0x4D90A6: jz      short loc_4D90CD
0x4D90A8: mov     ecx, esi
0x4D90AA: call    sub_42B410
0x4D90AF: lea     ecx, [eax+44h]; this
0x4D90B2: call    sub_41E690
0x4D90B7: test    eax, eax
0x4D90B9: jz      short loc_4D90CD
0x4D90BB: mov     ecx, esi
0x4D90BD: call    sub_42B410
0x4D90C2: mov     edx, [eax]
0x4D90C4: mov     ecx, eax
0x4D90C6: mov     eax, [edx+40h]
0x4D90C9: push    40h ; '@'
0x4D90CB: call    eax
0x4D90CD: pop     edi
0x4D90CE: pop     esi
0x4D90CF: retn

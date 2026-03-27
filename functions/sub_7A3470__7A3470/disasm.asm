0x7A3470: push    esi
0x7A3471: mov     esi, ecx
0x7A3473: push    edi
0x7A3474: mov     edi, [esp+8+arg_0]
0x7A3478: mov     al, [edi]
0x7A347A: mov     [esi], al
0x7A347C: mov     ecx, [edi+4]
0x7A347F: mov     [esi+4], ecx
0x7A3482: mov     edx, [edi+8]
0x7A3485: mov     [esi+8], edx
0x7A3488: mov     eax, [edi+0Ch]
0x7A348B: push    0FFFFFFFFh
0x7A348D: push    0
0x7A348F: lea     ecx, [edi+14h]
0x7A3492: mov     [esi+0Ch], eax
0x7A3495: fld     dword ptr [edi+10h]
0x7A3498: push    ecx
0x7A3499: fstp    dword ptr [esi+10h]
0x7A349C: lea     ecx, [esi+14h]
0x7A349F: call    sub_414420
0x7A34A4: mov     edx, [edi+30h]
0x7A34A7: mov     [esi+30h], edx
0x7A34AA: mov     eax, [edi+34h]
0x7A34AD: mov     [esi+34h], eax
0x7A34B0: mov     ecx, [edi+38h]
0x7A34B3: mov     [esi+38h], ecx
0x7A34B6: mov     edx, [edi+3Ch]
0x7A34B9: mov     [esi+3Ch], edx
0x7A34BC: mov     eax, [edi+40h]
0x7A34BF: mov     [esi+40h], eax
0x7A34C2: mov     ecx, [edi+44h]
0x7A34C5: lea     eax, [edi+48h]
0x7A34C8: mov     [esi+44h], ecx
0x7A34CB: mov     edx, [eax]
0x7A34CD: mov     [esi+48h], edx
0x7A34D0: mov     ecx, [eax+4]
0x7A34D3: mov     [esi+4Ch], ecx
0x7A34D6: mov     edx, [eax+8]
0x7A34D9: pop     edi
0x7A34DA: mov     [esi+50h], edx
0x7A34DD: mov     eax, esi
0x7A34DF: pop     esi
0x7A34E0: retn    4

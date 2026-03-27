0x7A2850: push    esi
0x7A2851: push    edi
0x7A2852: mov     edi, [esp+8+arg_0]
0x7A2856: mov     al, [edi]
0x7A2858: mov     esi, ecx
0x7A285A: mov     [esi], al
0x7A285C: mov     ecx, [edi+4]
0x7A285F: mov     [esi+4], ecx
0x7A2862: mov     edx, [edi+8]
0x7A2865: mov     [esi+8], edx
0x7A2868: mov     eax, [edi+0Ch]
0x7A286B: mov     [esi+0Ch], eax
0x7A286E: fld     dword ptr [edi+10h]
0x7A2871: xor     eax, eax
0x7A2873: fstp    dword ptr [esi+10h]
0x7A2876: push    0FFFFFFFFh
0x7A2878: lea     ecx, [esi+14h]
0x7A287B: push    eax
0x7A287C: lea     edx, [edi+14h]
0x7A287F: mov     dword ptr [ecx+18h], 0Fh
0x7A2886: mov     [ecx+14h], eax
0x7A2889: push    edx
0x7A288A: mov     [ecx+4], al
0x7A288D: call    sub_414420
0x7A2892: mov     eax, [edi+30h]
0x7A2895: mov     [esi+30h], eax
0x7A2898: mov     ecx, [edi+34h]
0x7A289B: mov     [esi+34h], ecx
0x7A289E: mov     edx, [edi+38h]
0x7A28A1: mov     [esi+38h], edx
0x7A28A4: mov     eax, [edi+3Ch]
0x7A28A7: mov     [esi+3Ch], eax
0x7A28AA: mov     ecx, [edi+40h]
0x7A28AD: mov     [esi+40h], ecx
0x7A28B0: mov     edx, [edi+44h]
0x7A28B3: lea     eax, [edi+48h]
0x7A28B6: mov     [esi+44h], edx
0x7A28B9: mov     ecx, [eax]
0x7A28BB: mov     [esi+48h], ecx
0x7A28BE: mov     edx, [eax+4]
0x7A28C1: mov     [esi+4Ch], edx
0x7A28C4: mov     eax, [eax+8]
0x7A28C7: mov     [esi+50h], eax
0x7A28CA: pop     edi
0x7A28CB: mov     eax, esi
0x7A28CD: pop     esi
0x7A28CE: retn    4

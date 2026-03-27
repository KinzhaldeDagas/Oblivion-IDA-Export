0x8823F0: push    0FFFFFFFFh
0x8823F2: push    offset ??1HairShaderProperty@@UAE@XZ_SEH
0x8823F7: mov     eax, large fs:0
0x8823FD: push    eax
0x8823FE: push    ecx
0x8823FF: push    ebx
0x882400: push    ebp
0x882401: push    esi
0x882402: push    edi
0x882403: mov     eax, ds:0B30AACh
0x882408: xor     eax, esp
0x88240A: push    eax
0x88240B: lea     eax, [esp+24h+var_C]
0x88240F: mov     large fs:0, eax
0x882415: mov     esi, ecx
0x882417: mov     [esp+24h+var_10], esi
0x88241B: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x882420: xor     ebx, ebx
0x882422: mov     dword ptr [esi], offset ??_7HairShaderProperty@@6B@; const HairShaderProperty::`vftable'
0x882428: mov     [esp+24h+var_4], ebx
0x88242C: mov     [esi+0F0h], ebx
0x882432: mov     [esi+0F4h], ebx
0x882438: fldz
0x88243A: fst     dword ptr [esi+128h]
0x882440: fst     dword ptr [esi+12Ch]
0x882446: fst     dword ptr [esi+130h]
0x88244C: fst     dword ptr [esi+134h]
0x882452: fst     dword ptr [esi+138h]
0x882458: fst     dword ptr [esi+13Ch]
0x88245E: fst     dword ptr [esi+140h]
0x882464: fst     dword ptr [esi+144h]
0x88246A: fst     dword ptr [esi+148h]
0x882470: fst     dword ptr [esi+14Ch]
0x882476: fst     dword ptr [esi+150h]
0x88247C: fst     dword ptr [esi+154h]
0x882482: fst     dword ptr [esi+158h]
0x882488: fst     dword ptr [esi+15Ch]
0x88248E: fst     dword ptr [esi+160h]
0x882494: fst     dword ptr [esi+164h]
0x88249A: mov     [esi+168h], ebx
0x8824A0: mov     [esi+16Ch], ebx
0x8824A6: mov     edi, [esi+168h]
0x8824AC: cmp     edi, ebx
0x8824AE: mov     ebp, ds:0A2807Ch
0x8824B4: mov     byte ptr [esp+24h+var_4], 4
0x8824B9: jz      short loc_8824DD
0x8824BB: lea     eax, [edi+4]
0x8824BE: fstp    st
0x8824C0: push    eax; lpAddend
0x8824C1: call    ebp ; InterlockedDecrement
0x8824C3: test    eax, eax
0x8824C5: jnz     short loc_8824D5
0x8824C7: cmp     edi, ebx
0x8824C9: jz      short loc_8824D5
0x8824CB: mov     edx, [edi]
0x8824CD: mov     eax, [edx]
0x8824CF: push    1
0x8824D1: mov     ecx, edi
0x8824D3: call    eax
0x8824D5: fldz
0x8824D7: mov     [esi+168h], ebx
0x8824DD: mov     edi, [esi+0F0h]
0x8824E3: cmp     edi, ebx
0x8824E5: jz      short loc_882509
0x8824E7: lea     ecx, [edi+4]
0x8824EA: fstp    st
0x8824EC: push    ecx; lpAddend
0x8824ED: call    ebp ; InterlockedDecrement
0x8824EF: test    eax, eax
0x8824F1: jnz     short loc_882501
0x8824F3: cmp     edi, ebx
0x8824F5: jz      short loc_882501
0x8824F7: mov     edx, [edi]
0x8824F9: mov     eax, [edx]
0x8824FB: push    1
0x8824FD: mov     ecx, edi
0x8824FF: call    eax
0x882501: fldz
0x882503: mov     [esi+0F0h], ebx
0x882509: mov     edi, [esi+0F4h]
0x88250F: cmp     edi, ebx
0x882511: jz      short loc_882535
0x882513: lea     ecx, [edi+4]
0x882516: fstp    st
0x882518: push    ecx; lpAddend
0x882519: call    ebp ; InterlockedDecrement
0x88251B: test    eax, eax
0x88251D: jnz     short loc_88252D
0x88251F: cmp     edi, ebx
0x882521: jz      short loc_88252D
0x882523: mov     edx, [edi]
0x882525: mov     eax, [edx]
0x882527: push    1
0x882529: mov     ecx, edi
0x88252B: call    eax
0x88252D: fldz
0x88252F: mov     [esi+0F4h], ebx
0x882535: mov     ecx, ds:0B3F9A8h
0x88253B: mov     [esi+0F8h], ecx
0x882541: mov     edx, ds:0B3F9ACh
0x882547: mov     [esi+0FCh], edx
0x88254D: mov     eax, ds:0B3F9B0h
0x882552: mov     [esi+100h], eax
0x882558: fst     dword ptr [esi+11Ch]
0x88255E: mov     ecx, ds:0B3F9A8h
0x882564: mov     [esi+104h], ecx
0x88256A: mov     edx, ds:0B3F9ACh
0x882570: mov     [esi+108h], edx
0x882576: mov     eax, ds:0B3F9B0h
0x88257B: mov     [esi+10Ch], eax
0x882581: fst     dword ptr [esi+120h]
0x882587: mov     ecx, ds:0B3F9A8h
0x88258D: mov     [esi+110h], ecx
0x882593: mov     edx, ds:0B3F9ACh
0x882599: mov     [esi+114h], edx
0x88259F: mov     eax, ds:0B3F9B0h
0x8825A4: mov     [esi+118h], eax
0x8825AA: fstp    dword ptr [esi+124h]
0x8825B0: mov     eax, esi
0x8825B2: mov     ecx, dword ptr [esp+24h+var_C]
0x8825B6: mov     large fs:0, ecx
0x8825BD: pop     ecx
0x8825BE: pop     edi
0x8825BF: pop     esi
0x8825C0: pop     ebp
0x8825C1: pop     ebx
0x8825C2: add     esp, 10h
0x8825C5: retn

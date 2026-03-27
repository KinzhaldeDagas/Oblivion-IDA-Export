0x7604D0: push    ecx
0x7604D1: push    ebx
0x7604D2: push    esi
0x7604D3: mov     esi, ecx
0x7604D5: xor     ebx, ebx
0x7604D7: cmp     [esi+5Dh], bl
0x7604DA: jnz     short loc_7604E8
0x7604DC: mov     eax, [esi]
0x7604DE: mov     edx, [eax]
0x7604E0: push    1
0x7604E2: call    edx
0x7604E4: pop     esi
0x7604E5: pop     ebx
0x7604E6: pop     ecx
0x7604E7: retn
0x7604E8: push    ebp
0x7604E9: mov     ebp, ds:0A2807Ch
0x7604EF: push    edi
0x7604F0: mov     edi, [esi+34h]
0x7604F3: cmp     edi, ebx
0x7604F5: jz      short loc_760512
0x7604F7: lea     eax, [edi+4]
0x7604FA: push    eax; lpAddend
0x7604FB: call    ebp ; InterlockedDecrement
0x7604FD: test    eax, eax
0x7604FF: jnz     short loc_76050F
0x760501: cmp     edi, ebx
0x760503: jz      short loc_76050F
0x760505: mov     edx, [edi]
0x760507: mov     eax, [edx]
0x760509: push    1
0x76050B: mov     ecx, edi
0x76050D: call    eax
0x76050F: mov     [esi+34h], ebx
0x760512: mov     edi, [esi+44h]
0x760515: cmp     edi, ebx
0x760517: jz      short loc_760534
0x760519: lea     ecx, [edi+4]
0x76051C: push    ecx; lpAddend
0x76051D: call    ebp ; InterlockedDecrement
0x76051F: test    eax, eax
0x760521: jnz     short loc_760531
0x760523: cmp     edi, ebx
0x760525: jz      short loc_760531
0x760527: mov     edx, [edi]
0x760529: mov     eax, [edx]
0x76052B: push    1
0x76052D: mov     ecx, edi
0x76052F: call    eax
0x760531: mov     [esi+44h], ebx
0x760534: mov     edi, [esi+48h]
0x760537: cmp     edi, ebx
0x760539: jz      short loc_760556
0x76053B: lea     ecx, [edi+4]
0x76053E: push    ecx; lpAddend
0x76053F: call    ebp ; InterlockedDecrement
0x760541: test    eax, eax
0x760543: jnz     short loc_760553
0x760545: cmp     edi, ebx
0x760547: jz      short loc_760553
0x760549: mov     edx, [edi]
0x76054B: mov     eax, [edx]
0x76054D: push    1
0x76054F: mov     ecx, edi
0x760551: call    eax
0x760553: mov     [esi+48h], ebx
0x760556: mov     edi, [esi+58h]
0x760559: cmp     edi, ebx
0x76055B: jz      short loc_760578
0x76055D: lea     ecx, [edi+4]
0x760560: push    ecx; lpAddend
0x760561: call    ebp ; InterlockedDecrement
0x760563: test    eax, eax
0x760565: jnz     short loc_760575
0x760567: cmp     edi, ebx
0x760569: jz      short loc_760575
0x76056B: mov     edx, [edi]
0x76056D: mov     eax, [edx]
0x76056F: push    1
0x760571: mov     ecx, edi
0x760573: call    eax
0x760575: mov     [esi+58h], ebx
0x760578: mov     ecx, [esi+30h]
0x76057B: push    ecx
0x76057C: call    sub_772E30
0x760581: mov     edx, [esi+38h]
0x760584: push    edx
0x760585: mov     [esi+30h], ebx
0x760588: call    FormHeapFree
0x76058D: mov     eax, [esi+3Ch]
0x760590: push    eax
0x760591: mov     [esi+38h], ebx
0x760594: call    FormHeapFree
0x760599: mov     ecx, [esi+40h]
0x76059C: push    ecx
0x76059D: mov     [esi+3Ch], ebx
0x7605A0: call    FormHeapFree
0x7605A5: mov     edx, [esi+4Ch]
0x7605A8: push    edx
0x7605A9: mov     [esi+40h], ebx
0x7605AC: call    FormHeapFree
0x7605B1: mov     eax, [esi+50h]
0x7605B4: push    eax
0x7605B5: mov     [esi+4Ch], ebx
0x7605B8: call    FormHeapFree
0x7605BD: mov     ecx, [esi+54h]
0x7605C0: push    ecx
0x7605C1: mov     [esi+50h], ebx
0x7605C4: call    FormHeapFree
0x7605C9: add     esp, 1Ch
0x7605CC: lea     ecx, [esi+20h]
0x7605CF: mov     [esi+54h], ebx
0x7605D2: call    sub_75FF80
0x7605D7: lea     edx, [esp+14h+a2]
0x7605DB: mov     [esi+14h], ebx
0x7605DE: mov     [esi+18h], ebx
0x7605E1: mov     [esi+1Ch], ebx
0x7605E4: mov     [esi+5Ch], bl
0x7605E7: mov     ecx, ds:0B42044h; this
0x7605ED: push    edx; a2
0x7605EE: mov     [esp+18h+a2], esi
0x7605F2: call    sub_73A5E0
0x7605F7: pop     edi
0x7605F8: pop     ebp
0x7605F9: pop     esi
0x7605FA: pop     ebx
0x7605FB: pop     ecx
0x7605FC: retn

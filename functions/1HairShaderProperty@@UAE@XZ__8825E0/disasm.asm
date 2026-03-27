0x8825E0: push    0FFFFFFFFh
0x8825E2: push    offset ??1HairShaderProperty@@UAE@XZ_SEH
0x8825E7: mov     eax, large fs:0
0x8825ED: push    eax
0x8825EE: push    ecx
0x8825EF: push    ebx
0x8825F0: push    ebp
0x8825F1: push    esi
0x8825F2: push    edi
0x8825F3: mov     eax, ds:0B30AACh
0x8825F8: xor     eax, esp
0x8825FA: push    eax
0x8825FB: lea     eax, [esp+24h+var_C]
0x8825FF: mov     large fs:0, eax
0x882605: mov     esi, ecx
0x882607: mov     [esp+24h+var_10], esi
0x88260B: mov     dword ptr [esi], offset ??_7HairShaderProperty@@6B@; const HairShaderProperty::`vftable'
0x882611: mov     edi, [esi+168h]
0x882617: mov     ebp, ds:0A2807Ch
0x88261D: xor     ebx, ebx
0x88261F: cmp     edi, ebx
0x882621: mov     [esp+24h+var_4], 4
0x882629: jz      short loc_882649
0x88262B: lea     eax, [edi+4]
0x88262E: push    eax; lpAddend
0x88262F: call    ebp ; InterlockedDecrement
0x882631: test    eax, eax
0x882633: jnz     short loc_882643
0x882635: cmp     edi, ebx
0x882637: jz      short loc_882643
0x882639: mov     edx, [edi]
0x88263B: mov     eax, [edx]
0x88263D: push    1
0x88263F: mov     ecx, edi
0x882641: call    eax
0x882643: mov     [esi+168h], ebx
0x882649: mov     edi, [esi+0F0h]
0x88264F: cmp     edi, ebx
0x882651: jz      short loc_882671
0x882653: lea     ecx, [edi+4]
0x882656: push    ecx; lpAddend
0x882657: call    ebp ; InterlockedDecrement
0x882659: test    eax, eax
0x88265B: jnz     short loc_88266B
0x88265D: cmp     edi, ebx
0x88265F: jz      short loc_88266B
0x882661: mov     edx, [edi]
0x882663: mov     eax, [edx]
0x882665: push    1
0x882667: mov     ecx, edi
0x882669: call    eax
0x88266B: mov     [esi+0F0h], ebx
0x882671: mov     edi, [esi+0F4h]
0x882677: cmp     edi, ebx
0x882679: jz      short loc_882699
0x88267B: lea     ecx, [edi+4]
0x88267E: push    ecx; lpAddend
0x88267F: call    ebp ; InterlockedDecrement
0x882681: test    eax, eax
0x882683: jnz     short loc_882693
0x882685: cmp     edi, ebx
0x882687: jz      short loc_882693
0x882689: mov     edx, [edi]
0x88268B: mov     eax, [edx]
0x88268D: push    1
0x88268F: mov     ecx, edi
0x882691: call    eax
0x882693: mov     [esi+0F4h], ebx
0x882699: mov     ecx, ds:0B3F9A8h
0x88269F: fldz
0x8826A1: mov     [esi+0F8h], ecx
0x8826A7: mov     edx, ds:0B3F9ACh
0x8826AD: mov     [esi+0FCh], edx
0x8826B3: mov     eax, ds:0B3F9B0h
0x8826B8: mov     [esi+100h], eax
0x8826BE: fst     dword ptr [esi+11Ch]
0x8826C4: mov     ecx, ds:0B3F9A8h
0x8826CA: mov     [esi+104h], ecx
0x8826D0: mov     edx, ds:0B3F9ACh
0x8826D6: mov     [esi+108h], edx
0x8826DC: mov     eax, ds:0B3F9B0h
0x8826E1: mov     [esi+10Ch], eax
0x8826E7: fst     dword ptr [esi+120h]
0x8826ED: mov     ecx, ds:0B3F9A8h
0x8826F3: mov     [esi+110h], ecx
0x8826F9: mov     edx, ds:0B3F9ACh
0x8826FF: mov     [esi+114h], edx
0x882705: mov     eax, ds:0B3F9B0h
0x88270A: mov     [esi+118h], eax
0x882710: fstp    dword ptr [esi+124h]
0x882716: mov     edi, [esi+16Ch]
0x88271C: cmp     edi, ebx
0x88271E: mov     byte ptr [esp+24h+var_4], 3
0x882723: jz      short loc_88273D
0x882725: lea     ecx, [edi+4]
0x882728: push    ecx; lpAddend
0x882729: call    ebp ; InterlockedDecrement
0x88272B: test    eax, eax
0x88272D: jnz     short loc_88273D
0x88272F: cmp     edi, ebx
0x882731: jz      short loc_88273D
0x882733: mov     edx, [edi]
0x882735: mov     eax, [edx]
0x882737: push    1
0x882739: mov     ecx, edi
0x88273B: call    eax
0x88273D: mov     edi, [esi+168h]
0x882743: cmp     edi, ebx
0x882745: mov     byte ptr [esp+24h+var_4], 2
0x88274A: jz      short loc_882764
0x88274C: lea     ecx, [edi+4]
0x88274F: push    ecx; lpAddend
0x882750: call    ebp ; InterlockedDecrement
0x882752: test    eax, eax
0x882754: jnz     short loc_882764
0x882756: cmp     edi, ebx
0x882758: jz      short loc_882764
0x88275A: mov     edx, [edi]
0x88275C: mov     eax, [edx]
0x88275E: push    1
0x882760: mov     ecx, edi
0x882762: call    eax
0x882764: mov     edi, [esi+0F4h]
0x88276A: cmp     edi, ebx
0x88276C: mov     byte ptr [esp+24h+var_4], 1
0x882771: jz      short loc_88278B
0x882773: lea     ecx, [edi+4]
0x882776: push    ecx; lpAddend
0x882777: call    ebp ; InterlockedDecrement
0x882779: test    eax, eax
0x88277B: jnz     short loc_88278B
0x88277D: cmp     edi, ebx
0x88277F: jz      short loc_88278B
0x882781: mov     edx, [edi]
0x882783: mov     eax, [edx]
0x882785: push    1
0x882787: mov     ecx, edi
0x882789: call    eax
0x88278B: mov     edi, [esi+0F0h]
0x882791: cmp     edi, ebx
0x882793: mov     byte ptr [esp+24h+var_4], bl
0x882797: jz      short loc_8827B1
0x882799: lea     ecx, [edi+4]
0x88279C: push    ecx; lpAddend
0x88279D: call    ebp ; InterlockedDecrement
0x88279F: test    eax, eax
0x8827A1: jnz     short loc_8827B1
0x8827A3: cmp     edi, ebx
0x8827A5: jz      short loc_8827B1
0x8827A7: mov     edx, [edi]
0x8827A9: mov     eax, [edx]
0x8827AB: push    1
0x8827AD: mov     ecx, edi
0x8827AF: call    eax
0x8827B1: mov     ecx, esi; this
0x8827B3: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8827BB: call    ??1BSShaderPPLightingProperty@@UAE@XZ; BSShaderPPLightingProperty::~BSShaderPPLightingProperty(void)
0x8827C0: mov     ecx, dword ptr [esp+24h+var_C]
0x8827C4: mov     large fs:0, ecx
0x8827CB: pop     ecx
0x8827CC: pop     edi
0x8827CD: pop     esi
0x8827CE: pop     ebp
0x8827CF: pop     ebx
0x8827D0: add     esp, 10h
0x8827D3: retn

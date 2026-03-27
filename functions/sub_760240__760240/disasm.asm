0x760240: push    ebx
0x760241: push    ebp
0x760242: push    esi
0x760243: mov     esi, ecx
0x760245: mov     eax, [esi+30h]
0x760248: push    edi
0x760249: push    eax
0x76024A: mov     dword ptr [esi], offset ??_7NiD3DPass@@6B@; const NiD3DPass::`vftable'
0x760250: call    sub_772E30
0x760255: mov     edi, [esi+34h]
0x760258: mov     ebp, ds:0A2807Ch
0x76025E: xor     ebx, ebx
0x760260: add     esp, 4
0x760263: cmp     edi, ebx
0x760265: jz      short loc_760282
0x760267: lea     ecx, [edi+4]
0x76026A: push    ecx; lpAddend
0x76026B: call    ebp ; InterlockedDecrement
0x76026D: test    eax, eax
0x76026F: jnz     short loc_76027F
0x760271: cmp     edi, ebx
0x760273: jz      short loc_76027F
0x760275: mov     edx, [edi]
0x760277: mov     eax, [edx]
0x760279: push    1
0x76027B: mov     ecx, edi
0x76027D: call    eax
0x76027F: mov     [esi+34h], ebx
0x760282: mov     ecx, [esi+38h]
0x760285: push    ecx
0x760286: call    FormHeapFree
0x76028B: mov     edx, [esi+3Ch]
0x76028E: push    edx
0x76028F: call    FormHeapFree
0x760294: mov     eax, [esi+40h]
0x760297: push    eax
0x760298: call    FormHeapFree
0x76029D: mov     edi, [esi+44h]
0x7602A0: add     esp, 0Ch
0x7602A3: cmp     edi, ebx
0x7602A5: jz      short loc_7602C2
0x7602A7: lea     ecx, [edi+4]
0x7602AA: push    ecx; lpAddend
0x7602AB: call    ebp ; InterlockedDecrement
0x7602AD: test    eax, eax
0x7602AF: jnz     short loc_7602BF
0x7602B1: cmp     edi, ebx
0x7602B3: jz      short loc_7602BF
0x7602B5: mov     edx, [edi]
0x7602B7: mov     eax, [edx]
0x7602B9: push    1
0x7602BB: mov     ecx, edi
0x7602BD: call    eax
0x7602BF: mov     [esi+44h], ebx
0x7602C2: mov     edi, [esi+48h]
0x7602C5: cmp     edi, ebx
0x7602C7: jz      short loc_7602E4
0x7602C9: lea     ecx, [edi+4]
0x7602CC: push    ecx; lpAddend
0x7602CD: call    ebp ; InterlockedDecrement
0x7602CF: test    eax, eax
0x7602D1: jnz     short loc_7602E1
0x7602D3: cmp     edi, ebx
0x7602D5: jz      short loc_7602E1
0x7602D7: mov     edx, [edi]
0x7602D9: mov     eax, [edx]
0x7602DB: push    1
0x7602DD: mov     ecx, edi
0x7602DF: call    eax
0x7602E1: mov     [esi+48h], ebx
0x7602E4: mov     ecx, [esi+4Ch]
0x7602E7: push    ecx
0x7602E8: call    FormHeapFree
0x7602ED: mov     edx, [esi+50h]
0x7602F0: push    edx
0x7602F1: call    FormHeapFree
0x7602F6: mov     eax, [esi+54h]
0x7602F9: push    eax
0x7602FA: call    FormHeapFree
0x7602FF: mov     edi, [esi+58h]
0x760302: add     esp, 0Ch
0x760305: cmp     edi, ebx
0x760307: jz      short loc_760324
0x760309: lea     ecx, [edi+4]
0x76030C: push    ecx; lpAddend
0x76030D: call    ebp ; InterlockedDecrement
0x76030F: test    eax, eax
0x760311: jnz     short loc_760321
0x760313: cmp     edi, ebx
0x760315: jz      short loc_760321
0x760317: mov     edx, [edi]
0x760319: mov     eax, [edx]
0x76031B: push    1
0x76031D: mov     ecx, edi
0x76031F: call    eax
0x760321: mov     [esi+58h], ebx
0x760324: lea     ebp, [esi+20h]
0x760327: mov     ecx, ebp
0x760329: call    sub_75FF80
0x76032E: mov     [esi+14h], ebx
0x760331: mov     [esi+18h], ebx
0x760334: mov     [esi+1Ch], ebx
0x760337: mov     edi, [esi+58h]
0x76033A: cmp     edi, ebx
0x76033C: jz      short loc_76035A
0x76033E: lea     ecx, [edi+4]
0x760341: push    ecx; lpAddend
0x760342: call    dword ptr ds:0A2807Ch
0x760348: test    eax, eax
0x76034A: jnz     short loc_76035A
0x76034C: cmp     edi, ebx
0x76034E: jz      short loc_76035A
0x760350: mov     edx, [edi]
0x760352: mov     eax, [edx]
0x760354: push    1
0x760356: mov     ecx, edi
0x760358: call    eax
0x76035A: mov     edi, [esi+48h]
0x76035D: cmp     edi, ebx
0x76035F: jz      short loc_76037D
0x760361: lea     ecx, [edi+4]
0x760364: push    ecx; lpAddend
0x760365: call    dword ptr ds:0A2807Ch
0x76036B: test    eax, eax
0x76036D: jnz     short loc_76037D
0x76036F: cmp     edi, ebx
0x760371: jz      short loc_76037D
0x760373: mov     edx, [edi]
0x760375: mov     eax, [edx]
0x760377: push    1
0x760379: mov     ecx, edi
0x76037B: call    eax
0x76037D: mov     edi, [esi+44h]
0x760380: cmp     edi, ebx
0x760382: jz      short loc_7603A0
0x760384: lea     ecx, [edi+4]
0x760387: push    ecx; lpAddend
0x760388: call    dword ptr ds:0A2807Ch
0x76038E: test    eax, eax
0x760390: jnz     short loc_7603A0
0x760392: cmp     edi, ebx
0x760394: jz      short loc_7603A0
0x760396: mov     edx, [edi]
0x760398: mov     eax, [edx]
0x76039A: push    1
0x76039C: mov     ecx, edi
0x76039E: call    eax
0x7603A0: mov     esi, [esi+34h]
0x7603A3: cmp     esi, ebx
0x7603A5: jz      short loc_7603C3
0x7603A7: lea     ecx, [esi+4]
0x7603AA: push    ecx; lpAddend
0x7603AB: call    dword ptr ds:0A2807Ch
0x7603B1: test    eax, eax
0x7603B3: jnz     short loc_7603C3
0x7603B5: cmp     esi, ebx
0x7603B7: jz      short loc_7603C3
0x7603B9: mov     edx, [esi]
0x7603BB: mov     eax, [edx]
0x7603BD: push    1
0x7603BF: mov     ecx, esi
0x7603C1: call    eax
0x7603C3: pop     edi
0x7603C4: pop     esi
0x7603C5: mov     ecx, ebp
0x7603C7: pop     ebp
0x7603C8: pop     ebx
0x7603C9: jmp     ??1?$NiTArray@V?$NiPointer@VNiD3DTextureStage@@@@@@UAE@XZ; NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(void)

0x805320: sub     esp, 2F0h
0x805326: mov     eax, ds:0B30AACh
0x80532B: xor     eax, esp
0x80532D: mov     [esp+2F0h+var_4], eax
0x805334: push    ebx
0x805335: push    ebp
0x805336: push    esi
0x805337: push    edi
0x805338: push    2Ch ; ','
0x80533A: lea     eax, [esp+304h+var_238]
0x805341: mov     ebp, offset EmptyString
0x805346: push    0
0x805348: push    eax
0x805349: mov     esi, ecx
0x80534B: mov     [esp+30Ch+FullPath], offset aLighting2xVDec; "lighting\\2x\\v\\decal.v.hlsl"
0x805356: mov     [esp+30Ch+var_254], offset aDecal_0; "DECAL"
0x805361: mov     [esp+30Ch+var_250], ebp
0x805368: mov     [esp+30Ch+var_24C], offset aGeomdecal; "GEOMDECAL"
0x805373: mov     [esp+30Ch+var_248], ebp
0x80537A: mov     [esp+30Ch+var_244], offset aMaxdecals; "MAXDECALS"
0x805385: mov     [esp+30Ch+var_240], offset a1; "1"
0x805390: mov     [esp+30Ch+var_23C], 0
0x80539B: call    __memset
0x8053A0: mov     edx, [esp+30Ch+FullPath]
0x8053A7: lea     ecx, [esp+30Ch+FileName]
0x8053AE: push    ecx; int
0x8053AF: push    edx; FullPath
0x8053B0: call    sub_801030
0x8053B5: lea     eax, [esp+314h+var_20C]
0x8053BC: push    offset aGdecal_vso; "GDECAL.vso"
0x8053C1: push    eax
0x8053C2: call    __sprintf
0x8053C7: add     esp, 1Ch
0x8053CA: push    0; int
0x8053CC: push    0; int
0x8053CE: lea     ecx, [esp+308h+var_20C]
0x8053D5: push    ecx; int
0x8053D6: push    offset aVs_1_1; "vs_1_1"
0x8053DB: lea     edx, [esp+310h+var_254]
0x8053E2: push    edx; int
0x8053E3: lea     eax, [esp+314h+FileName]
0x8053EA: push    eax; lpFileName
0x8053EB: mov     ecx, esi
0x8053ED: call    CreateVertexShader
0x8053F2: mov     edi, [esi+84h]
0x8053F8: mov     ebx, eax
0x8053FA: cmp     edi, ebx
0x8053FC: jz      short loc_805432
0x8053FE: test    edi, edi
0x805400: jz      short loc_80541E
0x805402: lea     ecx, [edi+4]
0x805405: push    ecx; lpAddend
0x805406: call    dword ptr ds:0A2807Ch
0x80540C: test    eax, eax
0x80540E: jnz     short loc_80541E
0x805410: test    edi, edi
0x805412: jz      short loc_80541E
0x805414: mov     edx, [edi]
0x805416: mov     eax, [edx]
0x805418: push    1
0x80541A: mov     ecx, edi
0x80541C: call    eax
0x80541E: test    ebx, ebx
0x805420: mov     [esi+84h], ebx
0x805426: jz      short loc_805432
0x805428: add     ebx, 4
0x80542B: push    ebx; lpAddend
0x80542C: call    dword ptr ds:0A28078h
0x805432: xor     eax, eax
0x805434: lea     edx, [esp+300h+FileName]
0x80543B: mov     ecx, offset aLighting2xVDec; "lighting\\2x\\v\\decal.v.hlsl"
0x805440: push    edx; int
0x805441: push    ecx; FullPath
0x805442: mov     [esp+308h+var_2F0], ecx
0x805446: mov     [esp+308h+var_2EC], offset aDecal_0; "DECAL"
0x80544E: mov     [esp+308h+var_2E8], ebp
0x805452: mov     [esp+308h+var_2E4], offset aGeomdecal; "GEOMDECAL"
0x80545A: mov     [esp+308h+var_2E0], ebp
0x80545E: mov     [esp+308h+var_2DC], offset aMaxdecals; "MAXDECALS"
0x805466: mov     [esp+308h+var_2D8], offset a1; "1"
0x80546E: mov     [esp+308h+var_2D4], offset aSkin_1; "SKIN"
0x805476: mov     [esp+308h+var_2D0], ebp
0x80547A: mov     [esp+308h+var_2CC], eax
0x80547E: mov     [esp+308h+var_2C8], eax
0x805482: mov     [esp+308h+var_2C4], eax
0x805486: mov     [esp+308h+var_2C0], eax
0x80548A: mov     [esp+308h+var_2BC], eax
0x80548E: mov     [esp+308h+var_2B8], eax
0x805492: mov     [esp+308h+var_2B4], eax
0x805496: mov     [esp+308h+var_2B0], eax
0x80549A: mov     [esp+308h+var_2AC], eax
0x80549E: mov     [esp+308h+var_2A8], eax
0x8054A2: call    sub_801030
0x8054A7: lea     eax, [esp+308h+var_20C]
0x8054AE: push    offset aGdecals_vso; "GDECALS.vso"
0x8054B3: push    eax
0x8054B4: call    __sprintf
0x8054B9: add     esp, 10h
0x8054BC: push    0; int
0x8054BE: push    0; int
0x8054C0: lea     ecx, [esp+308h+var_20C]
0x8054C7: push    ecx; int
0x8054C8: push    offset aVs_1_1; "vs_1_1"
0x8054CD: lea     edx, [esp+310h+var_2EC]
0x8054D1: push    edx; int
0x8054D2: lea     eax, [esp+314h+FileName]
0x8054D9: push    eax; lpFileName
0x8054DA: mov     ecx, esi
0x8054DC: call    CreateVertexShader
0x8054E1: mov     edi, [esi+88h]
0x8054E7: mov     ebx, eax
0x8054E9: cmp     edi, ebx
0x8054EB: jz      short loc_805521
0x8054ED: test    edi, edi
0x8054EF: jz      short loc_80550D
0x8054F1: lea     ecx, [edi+4]
0x8054F4: push    ecx; lpAddend
0x8054F5: call    dword ptr ds:0A2807Ch
0x8054FB: test    eax, eax
0x8054FD: jnz     short loc_80550D
0x8054FF: test    edi, edi
0x805501: jz      short loc_80550D
0x805503: mov     edx, [edi]
0x805505: mov     eax, [edx]
0x805507: push    1
0x805509: mov     ecx, edi
0x80550B: call    eax
0x80550D: test    ebx, ebx
0x80550F: mov     [esi+88h], ebx
0x805515: jz      short loc_805521
0x805517: add     ebx, 4
0x80551A: push    ebx; lpAddend
0x80551B: call    dword ptr ds:0A28078h
0x805521: cmp     dword ptr ds:0B42F48h, 2
0x805528: mov     edi, offset aPs_1_3; "ps_1_3"
0x80552D: jl      short loc_805534
0x80552F: mov     edi, offset aPs_2_0; "ps_2_0"
0x805534: push    2Ch ; ','
0x805536: lea     ecx, [esp+304h+var_284]
0x80553D: push    0
0x80553F: push    ecx
0x805540: mov     [esp+30Ch+var_2A4], offset aLighting2xPDec; "lighting\\2x\\p\\decal.p.hlsl"
0x805548: mov     [esp+30Ch+var_2A0], offset aDecal_0; "DECAL"
0x805550: mov     [esp+30Ch+var_29C], ebp
0x805554: mov     [esp+30Ch+var_298], offset aGeomdecal; "GEOMDECAL"
0x80555C: mov     [esp+30Ch+var_294], ebp
0x805560: mov     [esp+30Ch+var_290], offset aMaxdecals; "MAXDECALS"
0x805568: mov     [esp+30Ch+var_28C], offset a1; "1"
0x805573: mov     [esp+30Ch+var_288], 0
0x80557E: call    __memset
0x805583: mov     eax, [esp+30Ch+var_2A4]
0x805587: lea     edx, [esp+30Ch+FileName]
0x80558E: push    edx; int
0x80558F: push    eax; FullPath
0x805590: call    sub_801030
0x805595: lea     ecx, [esp+314h+var_20C]
0x80559C: push    offset aGdecal_pso; "GDECAL.pso"
0x8055A1: push    ecx
0x8055A2: call    __sprintf
0x8055A7: add     esp, 1Ch
0x8055AA: push    0; int
0x8055AC: push    0; int
0x8055AE: lea     edx, [esp+308h+var_20C]
0x8055B5: push    edx; int
0x8055B6: push    edi; Str1
0x8055B7: lea     eax, [esp+310h+var_2A0]
0x8055BB: push    eax; int
0x8055BC: lea     ecx, [esp+314h+FileName]
0x8055C3: push    ecx; lpFileName
0x8055C4: mov     ecx, esi
0x8055C6: call    CreatePixelShader
0x8055CB: mov     edi, [esi+8Ch]
0x8055D1: mov     ebx, eax
0x8055D3: cmp     edi, ebx
0x8055D5: jz      short loc_80560B
0x8055D7: test    edi, edi
0x8055D9: jz      short loc_8055F7
0x8055DB: lea     edx, [edi+4]
0x8055DE: push    edx; lpAddend
0x8055DF: call    dword ptr ds:0A2807Ch
0x8055E5: test    eax, eax
0x8055E7: jnz     short loc_8055F7
0x8055E9: test    edi, edi
0x8055EB: jz      short loc_8055F7
0x8055ED: mov     eax, [edi]
0x8055EF: mov     edx, [eax]
0x8055F1: push    1
0x8055F3: mov     ecx, edi
0x8055F5: call    edx
0x8055F7: test    ebx, ebx
0x8055F9: mov     [esi+8Ch], ebx
0x8055FF: jz      short loc_80560B
0x805601: add     ebx, 4
0x805604: push    ebx; lpAddend
0x805605: call    dword ptr ds:0A28078h
0x80560B: mov     edi, [esi+90h]
0x805611: cmp     edi, [esi+8Ch]
0x805617: jz      short loc_805653
0x805619: test    edi, edi
0x80561B: jz      short loc_805639
0x80561D: lea     eax, [edi+4]
0x805620: push    eax; lpAddend
0x805621: call    dword ptr ds:0A2807Ch
0x805627: test    eax, eax
0x805629: jnz     short loc_805639
0x80562B: test    edi, edi
0x80562D: jz      short loc_805639
0x80562F: mov     edx, [edi]
0x805631: mov     eax, [edx]
0x805633: push    1
0x805635: mov     ecx, edi
0x805637: call    eax
0x805639: mov     eax, [esi+8Ch]
0x80563F: test    eax, eax
0x805641: mov     [esi+90h], eax
0x805647: jz      short loc_805653
0x805649: add     eax, 4
0x80564C: push    eax; lpAddend
0x80564D: call    dword ptr ds:0A28078h
0x805653: mov     ecx, [esp+300h+var_4]
0x80565A: pop     edi
0x80565B: pop     esi
0x80565C: pop     ebp
0x80565D: pop     ebx
0x80565E: xor     ecx, esp
0x805660: call    @__security_check_cookie@4; __security_check_cookie(x)
0x805665: add     esp, 2F0h
0x80566B: retn

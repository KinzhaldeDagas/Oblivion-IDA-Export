0x8041B0: sub     esp, 390h
0x8041B6: mov     eax, ds:0B30AACh
0x8041BB: xor     eax, esp
0x8041BD: mov     [esp+390h+var_4], eax
0x8041C4: push    ebx
0x8041C5: push    ebp
0x8041C6: push    esi
0x8041C7: push    edi
0x8041C8: xor     ebx, ebx
0x8041CA: push    3Ch ; '<'
0x8041CC: lea     eax, [esp+3A4h+var_378]
0x8041D0: mov     edi, ecx
0x8041D2: push    ebx
0x8041D3: mov     esi, offset aImagespace1xVC; "imagespace\\1x\\v\\copy.v.hlsl"
0x8041D8: push    eax
0x8041D9: mov     [esp+3ACh+var_38C], edi
0x8041DD: mov     [esp+3ACh+var_388], esi
0x8041E1: mov     [esp+3ACh+var_384], ebx
0x8041E5: mov     [esp+3ACh+var_380], ebx
0x8041E9: mov     [esp+3ACh+var_37C], ebx
0x8041ED: call    __memset
0x8041F2: push    3Ch ; '<'
0x8041F4: lea     ecx, [esp+3B0h+var_32C]
0x8041FB: push    ebx
0x8041FC: push    ecx
0x8041FD: mov     [esp+3B8h+var_33C], esi
0x804201: mov     [esp+3B8h+var_338], offset aMask; "MASK"
0x80420C: mov     [esp+3B8h+var_334], offset EmptyString
0x804217: mov     [esp+3B8h+var_330], ebx
0x80421E: call    __memset
0x804223: lea     esi, [esp+3B8h+var_388]
0x804227: add     esp, 18h
0x80422A: mov     [esp+3A0h+var_390], esi
0x80422E: lea     ebp, [edi+90h]
0x804234: jmp     short loc_80423A
0x804236: mov     edi, [esp+3A0h+var_38C]
0x80423A: mov     eax, [esi]
0x80423C: test    eax, eax
0x80423E: jz      loc_8042C7
0x804244: lea     edx, [esp+3A0h+FileName]
0x80424B: push    edx; int
0x80424C: push    eax; FullPath
0x80424D: call    sub_801030
0x804252: push    ebx
0x804253: lea     eax, [esp+3ACh+var_20C]
0x80425A: push    offset aCopy03i_vso; "COPY%03i.vso"
0x80425F: push    eax
0x804260: call    __sprintf
0x804265: add     esp, 14h
0x804268: push    0; int
0x80426A: lea     ecx, [esp+3A4h+var_20C]
0x804271: push    0; int
0x804273: push    ecx; int
0x804274: call    sub_7B47E0
0x804279: push    eax; int
0x80427A: add     esi, 4
0x80427D: push    esi; int
0x80427E: lea     edx, [esp+3B4h+FileName]
0x804285: push    edx; lpFileName
0x804286: mov     ecx, edi
0x804288: call    CreateVertexShader
0x80428D: mov     esi, [ebp+0]
0x804290: mov     edi, eax
0x804292: cmp     esi, edi
0x804294: jz      short loc_8042C7
0x804296: test    esi, esi
0x804298: jz      short loc_8042B6
0x80429A: lea     eax, [esi+4]
0x80429D: push    eax; lpAddend
0x80429E: call    dword ptr ds:0A2807Ch
0x8042A4: test    eax, eax
0x8042A6: jnz     short loc_8042B6
0x8042A8: test    esi, esi
0x8042AA: jz      short loc_8042B6
0x8042AC: mov     edx, [esi]
0x8042AE: mov     eax, [edx]
0x8042B0: push    1
0x8042B2: mov     ecx, esi
0x8042B4: call    eax
0x8042B6: test    edi, edi
0x8042B8: mov     [ebp+0], edi
0x8042BB: jz      short loc_8042C7
0x8042BD: add     edi, 4
0x8042C0: push    edi; lpAddend
0x8042C1: call    dword ptr ds:0A28078h
0x8042C7: mov     esi, [esp+3A0h+var_390]
0x8042CB: add     ebx, 1
0x8042CE: add     esi, 4Ch ; 'L'
0x8042D1: add     ebp, 4
0x8042D4: cmp     ebx, 2
0x8042D7: mov     [esp+3A0h+var_390], esi
0x8042DB: jl      loc_804236
0x8042E1: xor     edi, edi
0x8042E3: push    3Ch ; '<'
0x8042E5: lea     ecx, [esp+3A4h+var_2E0]
0x8042EC: push    edi
0x8042ED: mov     esi, offset aImagespace1xPC; "imagespace\\1x\\p\\copy.p.hlsl"
0x8042F2: push    ecx
0x8042F3: mov     [esp+3ACh+var_2F0], esi
0x8042FA: mov     [esp+3ACh+var_2EC], edi
0x804301: mov     [esp+3ACh+var_2E8], edi
0x804308: mov     [esp+3ACh+var_2E4], edi
0x80430F: call    __memset
0x804314: push    3Ch ; '<'
0x804316: lea     edx, [esp+3B0h+var_294]
0x80431D: push    edi
0x80431E: push    edx
0x80431F: mov     [esp+3B8h+var_2A4], esi
0x804326: mov     [esp+3B8h+var_2A0], offset aMask; "MASK"
0x804331: mov     [esp+3B8h+var_29C], edi
0x804338: mov     [esp+3B8h+var_298], edi
0x80433F: call    __memset
0x804344: push    48h ; 'H'
0x804346: lea     eax, [esp+3BCh+var_254]
0x80434D: push    edi
0x80434E: push    eax
0x80434F: mov     [esp+3C4h+var_258], edi
0x804356: call    __memset
0x80435B: mov     ebp, [esp+3C4h+var_38C]
0x80435F: add     esp, 24h
0x804362: xor     ebx, ebx
0x804364: add     ebp, 98h ; '˜'
0x80436A: cmp     dword ptr ds:0B42F48h, 2
0x804371: lea     esi, [esp+3A0h+var_2F0]
0x804378: jge     loc_804436
0x80437E: mov     [esp+3A0h+var_390], esi
0x804382: jmp     short loc_804386
0x804384: xor     edi, edi
0x804386: mov     eax, [esi]
0x804388: cmp     eax, edi
0x80438A: jz      loc_804417
0x804390: lea     ecx, [esp+3A0h+FileName]
0x804397: push    ecx; int
0x804398: push    eax; FullPath
0x804399: call    sub_801030
0x80439E: push    ebx
0x80439F: lea     edx, [esp+3ACh+var_20C]
0x8043A6: push    offset aCopy03i_pso; "COPY%03i.pso"
0x8043AB: push    edx
0x8043AC: call    __sprintf
0x8043B1: add     esp, 14h
0x8043B4: push    edi; int
0x8043B5: push    edi; int
0x8043B6: lea     eax, [esp+3A8h+var_20C]
0x8043BD: push    eax; int
0x8043BE: push    edi
0x8043BF: call    sub_7B4780
0x8043C4: add     esp, 4
0x8043C7: push    eax; Str1
0x8043C8: add     esi, 4
0x8043CB: push    esi; int
0x8043CC: lea     ecx, [esp+3B4h+FileName]
0x8043D3: push    ecx; lpFileName
0x8043D4: mov     ecx, [esp+3B8h+var_38C]
0x8043D8: call    CreatePixelShader
0x8043DD: mov     esi, [ebp+0]
0x8043E0: mov     edi, eax
0x8043E2: cmp     esi, edi
0x8043E4: jz      short loc_804417
0x8043E6: test    esi, esi
0x8043E8: jz      short loc_804406
0x8043EA: lea     edx, [esi+4]
0x8043ED: push    edx; lpAddend
0x8043EE: call    dword ptr ds:0A2807Ch
0x8043F4: test    eax, eax
0x8043F6: jnz     short loc_804406
0x8043F8: test    esi, esi
0x8043FA: jz      short loc_804406
0x8043FC: mov     eax, [esi]
0x8043FE: mov     edx, [eax]
0x804400: push    1
0x804402: mov     ecx, esi
0x804404: call    edx
0x804406: test    edi, edi
0x804408: mov     [ebp+0], edi
0x80440B: jz      short loc_804417
0x80440D: add     edi, 4
0x804410: push    edi; lpAddend
0x804411: call    dword ptr ds:0A28078h
0x804417: mov     esi, [esp+3A0h+var_390]
0x80441B: add     ebx, 1
0x80441E: add     esi, 4Ch ; 'L'
0x804421: add     ebp, 4
0x804424: cmp     ebx, 2
0x804427: mov     [esp+3A0h+var_390], esi
0x80442B: jl      loc_804384
0x804431: jmp     loc_8044ED
0x804436: mov     [esp+3A0h+var_390], esi
0x80443A: jmp     short loc_804442
0x80443C: align 10h
0x804440: xor     edi, edi
0x804442: mov     eax, [esi]
0x804444: cmp     eax, edi
0x804446: jz      loc_8044D3
0x80444C: lea     ecx, [esp+3A0h+FileName]
0x804453: push    ecx; int
0x804454: push    eax; FullPath
0x804455: call    sub_801030
0x80445A: push    ebx
0x80445B: lea     edx, [esp+3ACh+var_20C]
0x804462: push    offset aCopy03i_pso; "COPY%03i.pso"
0x804467: push    edx
0x804468: call    __sprintf
0x80446D: add     esp, 14h
0x804470: push    edi; int
0x804471: push    edi; int
0x804472: lea     eax, [esp+3A8h+var_20C]
0x804479: push    eax; int
0x80447A: push    edi
0x80447B: call    sub_7B4780
0x804480: add     esp, 4
0x804483: push    eax; Str1
0x804484: add     esi, 4
0x804487: push    esi; int
0x804488: lea     ecx, [esp+3B4h+FileName]
0x80448F: push    ecx; lpFileName
0x804490: mov     ecx, [esp+3B8h+var_38C]
0x804494: call    CreatePixelShader
0x804499: mov     esi, [ebp+0]
0x80449C: mov     edi, eax
0x80449E: cmp     esi, edi
0x8044A0: jz      short loc_8044D3
0x8044A2: test    esi, esi
0x8044A4: jz      short loc_8044C2
0x8044A6: lea     edx, [esi+4]
0x8044A9: push    edx; lpAddend
0x8044AA: call    dword ptr ds:0A2807Ch
0x8044B0: test    eax, eax
0x8044B2: jnz     short loc_8044C2
0x8044B4: test    esi, esi
0x8044B6: jz      short loc_8044C2
0x8044B8: mov     eax, [esi]
0x8044BA: mov     edx, [eax]
0x8044BC: push    1
0x8044BE: mov     ecx, esi
0x8044C0: call    edx
0x8044C2: test    edi, edi
0x8044C4: mov     [ebp+0], edi
0x8044C7: jz      short loc_8044D3
0x8044C9: add     edi, 4
0x8044CC: push    edi; lpAddend
0x8044CD: call    dword ptr ds:0A28078h
0x8044D3: mov     esi, [esp+3A0h+var_390]
0x8044D7: add     ebx, 1
0x8044DA: add     esi, 4Ch ; 'L'
0x8044DD: add     ebp, 4
0x8044E0: cmp     ebx, 3
0x8044E3: mov     [esp+3A0h+var_390], esi
0x8044E7: jl      loc_804440
0x8044ED: mov     ecx, [esp+3A0h+var_4]
0x8044F4: pop     edi
0x8044F5: pop     esi
0x8044F6: pop     ebp
0x8044F7: pop     ebx
0x8044F8: xor     ecx, esp
0x8044FA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8044FF: add     esp, 390h
0x804505: retn

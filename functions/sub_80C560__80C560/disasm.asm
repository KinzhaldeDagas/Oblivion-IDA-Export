0x80C560: sub     esp, 3DCh
0x80C566: mov     eax, ds:0B30AACh
0x80C56B: xor     eax, esp
0x80C56D: mov     [esp+3DCh+var_4], eax
0x80C574: push    ebx
0x80C575: push    ebp
0x80C576: push    esi
0x80C577: push    edi
0x80C578: xor     ebx, ebx
0x80C57A: push    3Ch ; '<'
0x80C57C: lea     eax, [esp+3F0h+var_2E0]
0x80C583: mov     ebp, ecx
0x80C585: push    ebx
0x80C586: mov     edi, offset aHair1xHair_p_h; "hair\\1x\\hair.p.hlsl"
0x80C58B: mov     esi, offset EmptyString
0x80C590: push    eax
0x80C591: mov     [esp+3F8h+var_3D8], ebp
0x80C595: mov     [esp+3F8h+var_2F0], edi
0x80C59C: mov     [esp+3F8h+var_2EC], offset aDirp; "DIRP"
0x80C5A7: mov     [esp+3F8h+var_2E8], esi
0x80C5AE: mov     [esp+3F8h+var_2E4], ebx
0x80C5B5: call    __memset
0x80C5BA: push    3Ch ; '<'
0x80C5BC: lea     ecx, [esp+3FCh+var_294]
0x80C5C3: push    ebx
0x80C5C4: push    ecx
0x80C5C5: mov     [esp+404h+var_2A4], edi
0x80C5CC: mov     [esp+404h+var_2A0], offset off_A943B0
0x80C5D7: mov     [esp+404h+var_29C], esi
0x80C5DE: mov     [esp+404h+var_298], ebx
0x80C5E5: call    __memset
0x80C5EA: push    34h ; '4'
0x80C5EC: lea     edx, [esp+408h+var_240]
0x80C5F3: push    ebx
0x80C5F4: push    edx
0x80C5F5: mov     [esp+410h+var_258], edi
0x80C5FC: mov     [esp+410h+var_254], offset aDirp; "DIRP"
0x80C607: mov     [esp+410h+var_250], esi
0x80C60E: mov     [esp+410h+var_24C], offset aNospecular; "NOSPECULAR"
0x80C619: mov     [esp+410h+var_248], esi
0x80C620: mov     [esp+410h+var_244], ebx
0x80C627: call    __memset
0x80C62C: push    34h ; '4'
0x80C62E: lea     eax, [esp+414h+var_3BC]
0x80C632: push    ebx
0x80C633: mov     edi, offset off_A94408
0x80C638: push    eax
0x80C639: mov     [esp+41Ch+var_3D4], offset aHair2xHair_p_h; "hair\\2x\\hair.p.hlsl"
0x80C641: mov     [esp+41Ch+var_3D0], offset off_A8F8C4
0x80C649: mov     [esp+41Ch+var_3CC], esi
0x80C64D: mov     [esp+41Ch+var_3C8], edi
0x80C651: mov     [esp+41Ch+var_3C4], esi
0x80C655: mov     [esp+41Ch+var_3C0], ebx
0x80C659: call    __memset
0x80C65E: push    2Ch ; ','
0x80C660: lea     ecx, [esp+420h+var_368]
0x80C667: push    ebx
0x80C668: push    ecx
0x80C669: mov     [esp+428h+var_388], offset aHair2xHair_p_h; "hair\\2x\\hair.p.hlsl"
0x80C674: mov     [esp+428h+var_384], offset off_A8F8C4
0x80C67F: mov     [esp+428h+var_380], esi
0x80C686: mov     [esp+428h+var_37C], edi
0x80C68D: mov     [esp+428h+var_378], esi
0x80C694: mov     [esp+428h+var_374], offset aPoint; "POINT"
0x80C69F: mov     [esp+428h+var_370], offset a1; "1"
0x80C6AA: mov     [esp+428h+var_36C], ebx
0x80C6B1: call    __memset
0x80C6B6: push    2Ch ; ','
0x80C6B8: lea     edx, [esp+42Ch+var_31C]
0x80C6BF: push    ebx
0x80C6C0: push    edx
0x80C6C1: mov     [esp+434h+var_33C], offset aHair2xHair_p_h; "hair\\2x\\hair.p.hlsl"
0x80C6CC: mov     [esp+434h+var_338], offset off_A8F8C4
0x80C6D7: mov     [esp+434h+var_334], esi
0x80C6DE: mov     [esp+434h+var_330], edi
0x80C6E5: mov     [esp+434h+var_32C], esi
0x80C6EC: mov     [esp+434h+var_328], offset aPoint; "POINT"
0x80C6F7: mov     [esp+434h+var_324], offset a2_0; "2"
0x80C702: mov     [esp+434h+var_320], ebx
0x80C709: call    __memset
0x80C70E: lea     esi, [esp+434h+var_2F0]
0x80C715: add     esp, 48h
0x80C718: mov     [esp+3ECh+var_3DC], esi
0x80C71C: add     ebp, 0C0h ; 'À'
0x80C722: mov     eax, [esi]
0x80C724: test    eax, eax
0x80C726: jz      loc_80C7B0
0x80C72C: lea     ecx, [esp+3ECh+FileName]
0x80C733: push    ecx; int
0x80C734: push    eax; FullPath
0x80C735: call    sub_801030
0x80C73A: push    ebx
0x80C73B: lea     edx, [esp+3F8h+var_20C]
0x80C742: push    offset aHair103i_pso; "HAIR1%03i.pso"
0x80C747: push    edx
0x80C748: call    __sprintf
0x80C74D: add     esp, 14h
0x80C750: push    0; int
0x80C752: push    0; int
0x80C754: lea     eax, [esp+3F4h+var_20C]
0x80C75B: push    eax; int
0x80C75C: push    offset aPs_1_3; "ps_1_3"
0x80C761: add     esi, 4
0x80C764: push    esi; int
0x80C765: lea     ecx, [esp+400h+FileName]
0x80C76C: push    ecx; lpFileName
0x80C76D: mov     ecx, [esp+404h+var_3D8]
0x80C771: call    CreatePixelShader
0x80C776: mov     esi, [ebp+0]
0x80C779: mov     edi, eax
0x80C77B: cmp     esi, edi
0x80C77D: jz      short loc_80C7B0
0x80C77F: test    esi, esi
0x80C781: jz      short loc_80C79F
0x80C783: lea     edx, [esi+4]
0x80C786: push    edx; lpAddend
0x80C787: call    dword ptr ds:0A2807Ch
0x80C78D: test    eax, eax
0x80C78F: jnz     short loc_80C79F
0x80C791: test    esi, esi
0x80C793: jz      short loc_80C79F
0x80C795: mov     eax, [esi]
0x80C797: mov     edx, [eax]
0x80C799: push    1
0x80C79B: mov     ecx, esi
0x80C79D: call    edx
0x80C79F: test    edi, edi
0x80C7A1: mov     [ebp+0], edi
0x80C7A4: jz      short loc_80C7B0
0x80C7A6: add     edi, 4
0x80C7A9: push    edi; lpAddend
0x80C7AA: call    dword ptr ds:0A28078h
0x80C7B0: mov     esi, [esp+3ECh+var_3DC]
0x80C7B4: add     ebx, 1
0x80C7B7: add     esi, 4Ch ; 'L'
0x80C7BA: add     ebp, 4
0x80C7BD: cmp     ebx, 3
0x80C7C0: mov     [esp+3ECh+var_3DC], esi
0x80C7C4: jl      loc_80C722
0x80C7CA: cmp     dword ptr ds:0B42F48h, 2
0x80C7D1: jl      loc_80C88E
0x80C7D7: mov     eax, [esp+3ECh+var_3D8]
0x80C7DB: xor     ebp, ebp
0x80C7DD: add     eax, 0E8h ; 'è'
0x80C7E2: lea     ebx, [esp+3ECh+var_3D0]
0x80C7E6: mov     [esp+3ECh+var_3DC], eax
0x80C7EA: lea     ebx, [ebx+0]
0x80C7F0: mov     edx, [ebx-4]
0x80C7F3: lea     ecx, [esp+3ECh+FileName]
0x80C7FA: push    ecx; int
0x80C7FB: push    edx; FullPath
0x80C7FC: call    sub_801030
0x80C801: push    ebp
0x80C802: lea     eax, [esp+3F8h+var_20C]
0x80C809: push    offset aHair203i_pso; "HAIR2%03i.pso"
0x80C80E: push    eax
0x80C80F: call    __sprintf
0x80C814: add     esp, 14h
0x80C817: push    0; int
0x80C819: push    0; int
0x80C81B: lea     ecx, [esp+3F4h+var_20C]
0x80C822: push    ecx; int
0x80C823: mov     ecx, [esp+3F8h+var_3D8]
0x80C827: push    offset aPs_2_0; "ps_2_0"
0x80C82C: push    ebx; int
0x80C82D: lea     edx, [esp+400h+FileName]
0x80C834: push    edx; lpFileName
0x80C835: call    CreatePixelShader
0x80C83A: mov     edi, eax
0x80C83C: mov     eax, [esp+3ECh+var_3DC]
0x80C840: mov     esi, [eax]
0x80C842: cmp     esi, edi
0x80C844: jz      short loc_80C87A
0x80C846: test    esi, esi
0x80C848: jz      short loc_80C866
0x80C84A: lea     ecx, [esi+4]
0x80C84D: push    ecx; lpAddend
0x80C84E: call    dword ptr ds:0A2807Ch
0x80C854: test    eax, eax
0x80C856: jnz     short loc_80C866
0x80C858: test    esi, esi
0x80C85A: jz      short loc_80C866
0x80C85C: mov     edx, [esi]
0x80C85E: mov     eax, [edx]
0x80C860: push    1
0x80C862: mov     ecx, esi
0x80C864: call    eax
0x80C866: test    edi, edi
0x80C868: mov     ecx, [esp+3ECh+var_3DC]
0x80C86C: mov     [ecx], edi
0x80C86E: jz      short loc_80C87A
0x80C870: add     edi, 4
0x80C873: push    edi; lpAddend
0x80C874: call    dword ptr ds:0A28078h
0x80C87A: add     [esp+3ECh+var_3DC], 4
0x80C87F: add     ebp, 1
0x80C882: add     ebx, 4Ch ; 'L'
0x80C885: cmp     ebp, 3
0x80C888: jl      loc_80C7F0
0x80C88E: mov     ecx, [esp+3ECh+var_4]
0x80C895: pop     edi
0x80C896: pop     esi
0x80C897: pop     ebp
0x80C898: pop     ebx
0x80C899: xor     ecx, esp
0x80C89B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x80C8A0: add     esp, 3DCh
0x80C8A6: retn

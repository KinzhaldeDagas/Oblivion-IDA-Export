0x7EA510: sub     esp, 510h
0x7EA516: mov     eax, ds:0B30AACh
0x7EA51B: xor     eax, esp
0x7EA51D: mov     [esp+510h+var_4], eax
0x7EA524: push    ebx
0x7EA525: push    ebp
0x7EA526: push    esi
0x7EA527: push    edi
0x7EA528: xor     esi, esi
0x7EA52A: push    3Ch ; '<'
0x7EA52C: lea     eax, [esp+524h+var_378]
0x7EA533: mov     ebp, ecx
0x7EA535: push    esi
0x7EA536: mov     edi, offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x7EA53B: push    eax
0x7EA53C: mov     [esp+52Ch+var_508], ebp
0x7EA540: mov     [esp+52Ch+var_388], edi
0x7EA547: mov     [esp+52Ch+var_384], esi
0x7EA54E: mov     [esp+52Ch+var_380], esi
0x7EA555: mov     [esp+52Ch+var_37C], esi
0x7EA55C: call    __memset
0x7EA561: push    3Ch ; '<'
0x7EA563: lea     ecx, [esp+530h+var_32C]
0x7EA56A: push    esi
0x7EA56B: push    ecx
0x7EA56C: mov     [esp+538h+var_33C], edi
0x7EA573: mov     [esp+538h+var_338], esi
0x7EA57A: mov     [esp+538h+var_334], esi
0x7EA581: mov     [esp+538h+var_330], esi
0x7EA588: call    __memset
0x7EA58D: push    3Ch ; '<'
0x7EA58F: lea     edx, [esp+53Ch+var_2E0]
0x7EA596: push    esi
0x7EA597: push    edx
0x7EA598: mov     [esp+544h+var_2F0], edi
0x7EA59F: mov     [esp+544h+var_2EC], esi
0x7EA5A6: mov     [esp+544h+var_2E8], esi
0x7EA5AD: mov     [esp+544h+var_2E4], esi
0x7EA5B4: call    __memset
0x7EA5B9: push    38h ; '8'
0x7EA5BB: lea     eax, [esp+548h+var_290]
0x7EA5C2: push    esi
0x7EA5C3: mov     ebx, offset EmptyString
0x7EA5C8: push    eax
0x7EA5C9: mov     [esp+550h+var_2A4], edi
0x7EA5D0: mov     [esp+550h+var_2A0], offset aTex2; "TEX2"
0x7EA5DB: mov     [esp+550h+var_29C], ebx
0x7EA5E2: mov     [esp+550h+var_298], esi
0x7EA5E9: mov     [esp+550h+var_294], esi
0x7EA5F0: call    __memset
0x7EA5F5: push    3Ch ; '<'
0x7EA5F7: lea     ecx, [esp+554h+var_248]
0x7EA5FE: push    esi
0x7EA5FF: push    ecx
0x7EA600: mov     [esp+55Ch+var_258], edi
0x7EA607: mov     [esp+55Ch+var_254], esi
0x7EA60E: mov     [esp+55Ch+var_250], esi
0x7EA615: mov     [esp+55Ch+var_24C], esi
0x7EA61C: call    __memset
0x7EA621: push    38h ; '8'
0x7EA623: lea     edx, [esp+560h+var_4F0]
0x7EA627: push    esi
0x7EA628: mov     edi, offset aImagespace1xPC; "imagespace\\1x\\p\\copy.p.hlsl"
0x7EA62D: push    edx
0x7EA62E: mov     [esp+568h+FullPath], edi
0x7EA632: mov     [esp+568h+var_500], offset aAlphamult; "ALPHAMULT"
0x7EA63A: mov     [esp+568h+var_4FC], ebx
0x7EA63E: mov     [esp+568h+var_4F8], esi
0x7EA642: mov     [esp+568h+var_4F4], esi
0x7EA646: call    __memset
0x7EA64B: add     esp, 48h
0x7EA64E: push    3Ch ; '<'
0x7EA650: lea     eax, [esp+524h+var_4A8]
0x7EA654: push    esi
0x7EA655: push    eax
0x7EA656: mov     [esp+52Ch+var_4B8], edi
0x7EA65A: mov     [esp+52Ch+var_4B4], esi
0x7EA65E: mov     [esp+52Ch+var_4B0], esi
0x7EA662: mov     [esp+52Ch+var_4AC], esi
0x7EA669: call    __memset
0x7EA66E: mov     [esp+52Ch+var_46C], offset aImagespace2xPB; "imagespace\\2x\\p\\blur_20.p.hlsl"
0x7EA679: mov     [esp+52Ch+var_468], esi
0x7EA680: mov     [esp+52Ch+var_464], esi
0x7EA687: mov     [esp+52Ch+var_460], esi
0x7EA68E: push    3Ch ; '<'
0x7EA690: lea     ecx, [esp+530h+var_45C]
0x7EA697: push    esi
0x7EA698: push    ecx
0x7EA699: call    __memset
0x7EA69E: push    3Ch ; '<'
0x7EA6A0: lea     edx, [esp+53Ch+var_410]
0x7EA6A7: push    esi
0x7EA6A8: push    edx
0x7EA6A9: mov     [esp+544h+var_420], offset aImagespace2x_0; "imagespace\\2x\\p\\blend_P20.p.hlsl"
0x7EA6B4: mov     [esp+544h+var_41C], esi
0x7EA6BB: mov     [esp+544h+var_418], esi
0x7EA6C2: mov     [esp+544h+var_414], esi
0x7EA6C9: call    __memset
0x7EA6CE: push    38h ; '8'
0x7EA6D0: lea     eax, [esp+548h+var_3C0]
0x7EA6D7: push    esi
0x7EA6D8: push    eax
0x7EA6D9: mov     [esp+550h+var_3D4], edi
0x7EA6E0: mov     [esp+550h+var_3D0], offset aBlurdebug; "BLURDEBUG"
0x7EA6EB: mov     [esp+550h+var_3CC], ebx
0x7EA6F2: mov     [esp+550h+var_3C8], esi
0x7EA6F9: mov     [esp+550h+var_3C4], esi
0x7EA700: call    __memset
0x7EA705: add     esp, 30h
0x7EA708: add     ebp, 0A8h ; '¨'
0x7EA70E: xor     eax, eax
0x7EA710: mov     [esp+520h+var_510], esi
0x7EA714: mov     [esp+520h+var_50C], eax
0x7EA718: jmp     short loc_7EA720
0x7EA71A: align 10h
0x7EA720: lea     edi, [esp+eax+520h+var_388]
0x7EA727: mov     eax, [edi]
0x7EA729: cmp     eax, esi
0x7EA72B: jz      loc_7EA7B7
0x7EA731: lea     ecx, [esp+520h+FileName]
0x7EA738: push    ecx; int
0x7EA739: push    eax; FullPath
0x7EA73A: call    sub_801030
0x7EA73F: mov     edx, [esp+528h+var_510]
0x7EA743: push    edx
0x7EA744: lea     eax, [esp+52Ch+var_20C]
0x7EA74B: push    offset aIsblur203i_vso; "ISBLUR2%03i.vso"
0x7EA750: push    eax
0x7EA751: call    __sprintf
0x7EA756: add     esp, 14h
0x7EA759: push    esi; int
0x7EA75A: push    esi; int
0x7EA75B: lea     ecx, [esp+528h+var_20C]
0x7EA762: push    ecx; int
0x7EA763: mov     ecx, [esp+52Ch+var_508]
0x7EA767: push    offset aVs_1_1; "vs_1_1"
0x7EA76C: add     edi, 4
0x7EA76F: push    edi; int
0x7EA770: lea     edx, [esp+534h+FileName]
0x7EA777: push    edx; lpFileName
0x7EA778: call    CreateVertexShader
0x7EA77D: mov     edi, [ebp-14h]
0x7EA780: mov     ebx, eax
0x7EA782: cmp     edi, ebx
0x7EA784: jz      short loc_7EA7B7
0x7EA786: cmp     edi, esi
0x7EA788: jz      short loc_7EA7A6
0x7EA78A: lea     eax, [edi+4]
0x7EA78D: push    eax; lpAddend
0x7EA78E: call    dword ptr ds:0A2807Ch
0x7EA794: test    eax, eax
0x7EA796: jnz     short loc_7EA7A6
0x7EA798: cmp     edi, esi
0x7EA79A: jz      short loc_7EA7A6
0x7EA79C: mov     edx, [edi]
0x7EA79E: mov     eax, [edx]
0x7EA7A0: push    1
0x7EA7A2: mov     ecx, edi
0x7EA7A4: call    eax
0x7EA7A6: cmp     ebx, esi
0x7EA7A8: mov     [ebp-14h], ebx
0x7EA7AB: jz      short loc_7EA7B7
0x7EA7AD: add     ebx, 4
0x7EA7B0: push    ebx; lpAddend
0x7EA7B1: call    dword ptr ds:0A28078h
0x7EA7B7: mov     edi, [esp+520h+var_50C]
0x7EA7BB: mov     eax, [esp+edi+520h+FullPath]
0x7EA7BF: cmp     eax, esi
0x7EA7C1: jz      loc_7EA84E
0x7EA7C7: lea     ecx, [esp+520h+FileName]
0x7EA7CE: push    ecx; int
0x7EA7CF: push    eax; FullPath
0x7EA7D0: call    sub_801030
0x7EA7D5: mov     edx, [esp+528h+var_510]
0x7EA7D9: push    edx
0x7EA7DA: lea     eax, [esp+52Ch+var_20C]
0x7EA7E1: push    offset aIsblur203i_pso; "ISBLUR2%03i.pso"
0x7EA7E6: push    eax
0x7EA7E7: call    __sprintf
0x7EA7EC: add     esp, 14h
0x7EA7EF: push    esi; int
0x7EA7F0: push    esi; int
0x7EA7F1: lea     ecx, [esp+528h+var_20C]
0x7EA7F8: push    ecx; int
0x7EA7F9: mov     ecx, [esp+52Ch+var_508]
0x7EA7FD: push    offset aPs_2_0; "ps_2_0"
0x7EA802: lea     edx, [esp+edi+530h+var_500]
0x7EA806: push    edx; int
0x7EA807: lea     eax, [esp+534h+FileName]
0x7EA80E: push    eax; lpFileName
0x7EA80F: call    CreatePixelShader
0x7EA814: mov     edi, [ebp+0]
0x7EA817: mov     ebx, eax
0x7EA819: cmp     edi, ebx
0x7EA81B: jz      short loc_7EA84E
0x7EA81D: cmp     edi, esi
0x7EA81F: jz      short loc_7EA83D
0x7EA821: lea     ecx, [edi+4]
0x7EA824: push    ecx; lpAddend
0x7EA825: call    dword ptr ds:0A2807Ch
0x7EA82B: test    eax, eax
0x7EA82D: jnz     short loc_7EA83D
0x7EA82F: cmp     edi, esi
0x7EA831: jz      short loc_7EA83D
0x7EA833: mov     edx, [edi]
0x7EA835: mov     eax, [edx]
0x7EA837: push    1
0x7EA839: mov     ecx, edi
0x7EA83B: call    eax
0x7EA83D: cmp     ebx, esi
0x7EA83F: mov     [ebp+0], ebx
0x7EA842: jz      short loc_7EA84E
0x7EA844: add     ebx, 4
0x7EA847: push    ebx; lpAddend
0x7EA848: call    dword ptr ds:0A28078h
0x7EA84E: mov     eax, [esp+520h+var_50C]
0x7EA852: add     [esp+520h+var_510], 1
0x7EA857: add     eax, 4Ch ; 'L'
0x7EA85A: add     ebp, 4
0x7EA85D: cmp     eax, 17Ch
0x7EA862: mov     [esp+520h+var_50C], eax
0x7EA866: jl      loc_7EA720
0x7EA86C: mov     ecx, [esp+520h+var_4]
0x7EA873: pop     edi
0x7EA874: pop     esi
0x7EA875: pop     ebp
0x7EA876: pop     ebx
0x7EA877: xor     ecx, esp
0x7EA879: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7EA87E: add     esp, 510h
0x7EA884: retn

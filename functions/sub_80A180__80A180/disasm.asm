0x80A180: sub     esp, 808h
0x80A186: mov     eax, ds:0B30AACh
0x80A18B: xor     eax, esp
0x80A18D: mov     [esp+808h+var_4], eax
0x80A194: push    ebx
0x80A195: push    ebp
0x80A196: push    esi
0x80A197: push    edi
0x80A198: xor     ebx, ebx
0x80A19A: push    3Ch ; '<'
0x80A19C: lea     eax, [esp+81Ch+var_7EC]
0x80A1A0: push    ebx
0x80A1A1: mov     ebp, offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80A1A6: mov     edi, offset aFacegenblend; "FACEGENBLEND"
0x80A1AB: mov     esi, offset EmptyString
0x80A1B0: push    eax
0x80A1B1: mov     [esp+824h+var_800], ecx
0x80A1B5: mov     [esp+824h+var_7FC], ebp
0x80A1B9: mov     [esp+824h+var_7F8], edi
0x80A1BD: mov     [esp+824h+var_7F4], esi
0x80A1C1: mov     [esp+824h+var_7F0], ebx
0x80A1C5: call    __memset
0x80A1CA: push    34h ; '4'
0x80A1CC: lea     ecx, [esp+828h+var_798]
0x80A1D3: push    ebx
0x80A1D4: push    ecx
0x80A1D5: mov     [esp+830h+var_7B0], ebp
0x80A1DC: mov     [esp+830h+var_7AC], offset aSkin_1; "SKIN"
0x80A1E7: mov     [esp+830h+var_7A8], esi
0x80A1EE: mov     [esp+830h+var_7A4], edi
0x80A1F5: mov     [esp+830h+var_7A0], esi
0x80A1FC: mov     [esp+830h+var_79C], ebx
0x80A203: call    __memset
0x80A208: push    34h ; '4'
0x80A20A: lea     edx, [esp+834h+var_74C]
0x80A211: push    ebx
0x80A212: push    edx
0x80A213: mov     [esp+83Ch+var_764], ebp
0x80A21A: mov     [esp+83Ch+var_760], edi
0x80A221: mov     [esp+83Ch+var_75C], esi
0x80A228: mov     [esp+83Ch+var_758], offset aProj_shadow; "PROJ_SHADOW"
0x80A233: mov     [esp+83Ch+var_754], esi
0x80A23A: mov     [esp+83Ch+var_750], ebx
0x80A241: call    __memset
0x80A246: push    2Ch ; ','
0x80A248: lea     eax, [esp+840h+var_6F8]
0x80A24F: push    ebx
0x80A250: push    eax
0x80A251: mov     [esp+848h+var_718], ebp
0x80A258: mov     [esp+848h+var_714], offset aSkin_1; "SKIN"
0x80A263: mov     [esp+848h+var_710], esi
0x80A26A: mov     [esp+848h+var_70C], edi
0x80A271: mov     [esp+848h+var_708], esi
0x80A278: mov     [esp+848h+var_704], offset aProj_shadow; "PROJ_SHADOW"
0x80A283: mov     [esp+848h+var_700], esi
0x80A28A: mov     [esp+848h+var_6FC], ebx
0x80A291: call    __memset
0x80A296: push    34h ; '4'
0x80A298: mov     [esp+84Ch+var_6CC], ebp
0x80A29F: lea     ecx, [esp+84Ch+var_6B4]
0x80A2A6: push    ebx
0x80A2A7: mov     ebp, offset aLights; "LIGHTS"
0x80A2AC: push    ecx
0x80A2AD: mov     [esp+854h+var_6C8], ebp
0x80A2B4: mov     [esp+854h+var_6C4], offset a2_0; "2"
0x80A2BF: mov     [esp+854h+var_6C0], edi
0x80A2C6: mov     [esp+854h+var_6BC], esi
0x80A2CD: mov     [esp+854h+var_6B8], ebx
0x80A2D4: call    __memset
0x80A2D9: push    2Ch ; ','
0x80A2DB: lea     edx, [esp+858h+var_660]
0x80A2E2: push    ebx
0x80A2E3: push    edx
0x80A2E4: mov     [esp+860h+var_680], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80A2EF: mov     [esp+860h+var_67C], offset aSkin_1; "SKIN"
0x80A2FA: mov     [esp+860h+var_678], esi
0x80A301: mov     [esp+860h+var_674], ebp
0x80A308: mov     [esp+860h+var_670], offset a2_0; "2"
0x80A313: mov     [esp+860h+var_66C], edi
0x80A31A: mov     [esp+860h+var_668], esi
0x80A321: mov     [esp+860h+var_664], ebx
0x80A328: call    __memset
0x80A32D: add     esp, 48h
0x80A330: mov     [esp+818h+var_634], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80A33B: mov     [esp+818h+var_630], ebp
0x80A342: push    2Ch ; ','
0x80A344: lea     eax, [esp+81Ch+var_614]
0x80A34B: push    ebx
0x80A34C: push    eax
0x80A34D: mov     [esp+824h+var_62C], offset a2_0; "2"
0x80A358: mov     [esp+824h+var_628], edi
0x80A35F: mov     [esp+824h+var_624], esi
0x80A366: mov     [esp+824h+var_620], offset aProj_shadow; "PROJ_SHADOW"
0x80A371: mov     [esp+824h+var_61C], esi
0x80A378: mov     [esp+824h+var_618], ebx
0x80A37F: call    __memset
0x80A384: xor     eax, eax
0x80A386: mov     ecx, offset a2_0; "2"
0x80A38B: push    34h ; '4'
0x80A38D: mov     [esp+828h+var_5D8], ecx
0x80A394: mov     [esp+828h+var_594], ecx
0x80A39B: lea     ecx, [esp+828h+var_584]
0x80A3A2: push    ebx
0x80A3A3: push    ecx
0x80A3A4: mov     [esp+830h+var_5E8], offset aLighting2xVAdt; "lighting\\2x\\v\\ADTS.v.hlsl"
0x80A3AF: mov     [esp+830h+var_5E4], offset aSkin_1; "SKIN"
0x80A3BA: mov     [esp+830h+var_5E0], esi
0x80A3C1: mov     [esp+830h+var_5DC], ebp
0x80A3C8: mov     [esp+830h+var_5D4], edi
0x80A3CF: mov     [esp+830h+var_5D0], esi
0x80A3D6: mov     [esp+830h+var_5CC], offset aProj_shadow; "PROJ_SHADOW"
0x80A3E1: mov     [esp+830h+var_5C8], esi
0x80A3E8: mov     [esp+830h+var_5C4], ebx
0x80A3EF: mov     [esp+830h+var_5C0], eax
0x80A3F6: mov     [esp+830h+var_5BC], eax
0x80A3FD: mov     [esp+830h+var_5B8], eax
0x80A404: mov     [esp+830h+var_5B4], eax
0x80A40B: mov     [esp+830h+var_5B0], eax
0x80A412: mov     [esp+830h+var_5AC], eax
0x80A419: mov     [esp+830h+var_5A8], eax
0x80A420: mov     [esp+830h+var_5A4], eax
0x80A427: mov     [esp+830h+var_5A0], eax
0x80A42E: mov     [esp+830h+var_59C], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A439: mov     [esp+830h+var_598], ebp
0x80A440: mov     [esp+830h+var_590], edi
0x80A447: mov     [esp+830h+var_58C], esi
0x80A44E: mov     [esp+830h+var_588], ebx
0x80A455: call    __memset
0x80A45A: push    2Ch ; ','
0x80A45C: lea     edx, [esp+834h+var_530]
0x80A463: push    ebx
0x80A464: push    edx
0x80A465: mov     [esp+83Ch+var_550], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A470: mov     [esp+83Ch+var_54C], offset aSkin_1; "SKIN"
0x80A47B: mov     [esp+83Ch+var_548], esi
0x80A482: mov     [esp+83Ch+var_544], ebp
0x80A489: mov     [esp+83Ch+var_540], offset a2_0; "2"
0x80A494: mov     [esp+83Ch+var_53C], edi
0x80A49B: mov     [esp+83Ch+var_538], esi
0x80A4A2: mov     [esp+83Ch+var_534], ebx
0x80A4A9: call    __memset
0x80A4AE: push    2Ch ; ','
0x80A4B0: lea     eax, [esp+840h+var_4E4]
0x80A4B7: push    ebx
0x80A4B8: push    eax
0x80A4B9: mov     [esp+848h+var_504], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A4C4: mov     [esp+848h+var_500], ebp
0x80A4CB: mov     [esp+848h+var_4FC], offset a2_0; "2"
0x80A4D6: mov     [esp+848h+var_4F8], edi
0x80A4DD: mov     [esp+848h+var_4F4], esi
0x80A4E4: mov     [esp+848h+var_4F0], offset aProj_shadow; "PROJ_SHADOW"
0x80A4EF: mov     [esp+848h+var_4EC], esi
0x80A4F6: mov     [esp+848h+var_4E8], ebx
0x80A4FD: call    __memset
0x80A502: mov     ecx, offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A507: mov     [esp+848h+var_4B8], ecx
0x80A50E: mov     [esp+848h+var_4B4], offset aSkin_1; "SKIN"
0x80A519: mov     [esp+848h+var_4B0], esi
0x80A520: mov     [esp+848h+var_4AC], ebp
0x80A527: mov     [esp+848h+var_4A8], offset a2_0; "2"
0x80A532: mov     [esp+848h+var_4A4], edi
0x80A539: mov     [esp+848h+var_4A0], esi
0x80A540: mov     [esp+848h+var_49C], offset aProj_shadow; "PROJ_SHADOW"
0x80A54B: mov     [esp+848h+var_498], esi
0x80A552: mov     [esp+848h+var_494], ebx
0x80A559: xor     eax, eax
0x80A55B: push    34h ; '4'
0x80A55D: mov     [esp+84Ch+var_46C], ecx
0x80A564: lea     ecx, [esp+84Ch+var_454]
0x80A56B: push    ebx
0x80A56C: push    ecx
0x80A56D: mov     [esp+854h+var_490], eax
0x80A574: mov     [esp+854h+var_48C], eax
0x80A57B: mov     [esp+854h+var_488], eax
0x80A582: mov     [esp+854h+var_484], eax
0x80A589: mov     [esp+854h+var_480], eax
0x80A590: mov     [esp+854h+var_47C], eax
0x80A597: mov     [esp+854h+var_478], eax
0x80A59E: mov     [esp+854h+var_474], eax
0x80A5A5: mov     [esp+854h+var_470], eax
0x80A5AC: mov     [esp+854h+var_468], ebp
0x80A5B3: mov     [esp+854h+var_464], offset a3; "3"
0x80A5BE: mov     [esp+854h+var_460], edi
0x80A5C5: mov     [esp+854h+var_45C], esi
0x80A5CC: mov     [esp+854h+var_458], ebx
0x80A5D3: call    __memset
0x80A5D8: push    2Ch ; ','
0x80A5DA: lea     edx, [esp+858h+var_400]
0x80A5E1: push    ebx
0x80A5E2: push    edx
0x80A5E3: mov     [esp+860h+var_420], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A5EE: mov     [esp+860h+var_41C], offset aSkin_1; "SKIN"
0x80A5F9: mov     [esp+860h+var_418], esi
0x80A600: mov     [esp+860h+var_414], ebp
0x80A607: mov     [esp+860h+var_410], offset a3; "3"
0x80A612: mov     [esp+860h+var_40C], edi
0x80A619: mov     [esp+860h+var_408], esi
0x80A620: mov     [esp+860h+var_404], ebx
0x80A627: call    __memset
0x80A62C: add     esp, 48h
0x80A62F: push    2Ch ; ','
0x80A631: lea     eax, [esp+81Ch+var_3B4]
0x80A638: push    ebx
0x80A639: push    eax
0x80A63A: mov     [esp+824h+var_3D4], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A645: mov     [esp+824h+var_3D0], ebp
0x80A64C: mov     [esp+824h+var_3CC], offset a3; "3"
0x80A657: mov     [esp+824h+var_3C8], edi
0x80A65E: mov     [esp+824h+var_3C4], esi
0x80A665: mov     [esp+824h+var_3C0], offset aProj_shadow; "PROJ_SHADOW"
0x80A670: mov     [esp+824h+var_3BC], esi
0x80A677: mov     [esp+824h+var_3B8], ebx
0x80A67E: call    __memset
0x80A683: xor     eax, eax
0x80A685: push    34h ; '4'
0x80A687: lea     ecx, [esp+828h+var_324]
0x80A68E: push    ebx
0x80A68F: push    ecx
0x80A690: mov     [esp+830h+var_388], offset aLighting2xVAd_; "lighting\\2x\\v\\AD.v.hlsl"
0x80A69B: mov     [esp+830h+var_384], offset aSkin_1; "SKIN"
0x80A6A6: mov     [esp+830h+var_380], esi
0x80A6AD: mov     [esp+830h+var_37C], ebp
0x80A6B4: mov     [esp+830h+var_378], offset a3; "3"
0x80A6BF: mov     [esp+830h+var_374], edi
0x80A6C6: mov     [esp+830h+var_370], esi
0x80A6CD: mov     [esp+830h+var_36C], offset aProj_shadow; "PROJ_SHADOW"
0x80A6D8: mov     [esp+830h+var_368], esi
0x80A6DF: mov     [esp+830h+var_364], ebx
0x80A6E6: mov     [esp+830h+var_360], eax
0x80A6ED: mov     [esp+830h+var_35C], eax
0x80A6F4: mov     [esp+830h+var_358], eax
0x80A6FB: mov     [esp+830h+var_354], eax
0x80A702: mov     [esp+830h+var_350], eax
0x80A709: mov     [esp+830h+var_34C], eax
0x80A710: mov     [esp+830h+var_348], eax
0x80A717: mov     [esp+830h+var_344], eax
0x80A71E: mov     [esp+830h+var_340], eax
0x80A725: mov     [esp+830h+var_33C], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x80A730: mov     [esp+830h+var_338], ebp
0x80A737: mov     [esp+830h+var_334], offset a2_0; "2"
0x80A742: mov     [esp+830h+var_330], edi
0x80A749: mov     [esp+830h+var_32C], esi
0x80A750: mov     [esp+830h+var_328], ebx
0x80A757: call    __memset
0x80A75C: mov     [esp+830h+var_2F0], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x80A767: mov     [esp+830h+var_2EC], ebp
0x80A76E: mov     [esp+830h+var_2E8], offset a2_0; "2"
0x80A779: push    2Ch ; ','
0x80A77B: lea     edx, [esp+834h+var_2D0]
0x80A782: push    ebx
0x80A783: push    edx
0x80A784: mov     [esp+83Ch+var_2E4], offset aSkin_1; "SKIN"
0x80A78F: mov     [esp+83Ch+var_2E0], esi
0x80A796: mov     [esp+83Ch+var_2DC], edi
0x80A79D: mov     [esp+83Ch+var_2D8], esi
0x80A7A4: mov     [esp+83Ch+var_2D4], ebx
0x80A7AB: call    __memset
0x80A7B0: push    34h ; '4'
0x80A7B2: lea     eax, [esp+840h+var_28C]
0x80A7B9: push    ebx
0x80A7BA: push    eax
0x80A7BB: mov     [esp+848h+var_2A4], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x80A7C6: mov     [esp+848h+var_2A0], ebp
0x80A7CD: mov     [esp+848h+var_29C], offset a3; "3"
0x80A7D8: mov     [esp+848h+var_298], edi
0x80A7DF: mov     [esp+848h+var_294], esi
0x80A7E6: mov     [esp+848h+var_290], ebx
0x80A7ED: call    __memset
0x80A7F2: push    2Ch ; ','
0x80A7F4: lea     ecx, [esp+84Ch+var_238]
0x80A7FB: push    ebx
0x80A7FC: push    ecx
0x80A7FD: mov     [esp+854h+var_258], offset aLighting2xVDif; "lighting\\2x\\v\\DiffusePt.v.hlsl"
0x80A808: mov     [esp+854h+var_254], ebp
0x80A80F: mov     [esp+854h+var_250], offset a3; "3"
0x80A81A: mov     [esp+854h+var_24C], offset aSkin_1; "SKIN"
0x80A825: mov     [esp+854h+var_248], esi
0x80A82C: mov     [esp+854h+var_244], edi
0x80A833: mov     [esp+854h+var_240], esi
0x80A83A: mov     [esp+854h+var_23C], ebx
0x80A841: call    __memset
0x80A846: add     esp, 3Ch
0x80A849: cmp     dword ptr ds:0B42F48h, 2
0x80A850: jl      loc_80A918
0x80A856: mov     edx, [esp+818h+var_800]
0x80A85A: add     edx, 9Ch ; 'œ'
0x80A860: mov     [esp+818h+var_804], ebx
0x80A864: lea     ebp, [esp+818h+var_7F8]
0x80A868: mov     [esp+818h+var_808], edx
0x80A86C: lea     esp, [esp+0]
0x80A870: mov     ecx, [ebp-4]
0x80A873: lea     eax, [esp+818h+FileName]
0x80A87A: push    eax; int
0x80A87B: push    ecx; FullPath
0x80A87C: call    sub_801030
0x80A881: mov     edx, [esp+820h+var_804]
0x80A885: push    edx
0x80A886: lea     eax, [esp+824h+var_108]
0x80A88D: push    offset aSkin203i_vso; "SKIN2%03i.vso"
0x80A892: push    eax
0x80A893: call    __sprintf
0x80A898: add     esp, 14h
0x80A89B: push    ebx; int
0x80A89C: push    ebx; int
0x80A89D: lea     ecx, [esp+820h+var_108]
0x80A8A4: push    ecx; int
0x80A8A5: mov     ecx, [esp+824h+var_800]
0x80A8A9: push    offset aVs_2_0; "vs_2_0"
0x80A8AE: push    ebp; int
0x80A8AF: lea     edx, [esp+82Ch+FileName]
0x80A8B6: push    edx; lpFileName
0x80A8B7: call    CreateVertexShader
0x80A8BC: mov     edi, eax
0x80A8BE: mov     eax, [esp+818h+var_808]
0x80A8C2: mov     esi, [eax]
0x80A8C4: cmp     esi, edi
0x80A8C6: jz      short loc_80A8FC
0x80A8C8: cmp     esi, ebx
0x80A8CA: jz      short loc_80A8E8
0x80A8CC: lea     ecx, [esi+4]
0x80A8CF: push    ecx; lpAddend
0x80A8D0: call    dword ptr ds:0A2807Ch
0x80A8D6: test    eax, eax
0x80A8D8: jnz     short loc_80A8E8
0x80A8DA: cmp     esi, ebx
0x80A8DC: jz      short loc_80A8E8
0x80A8DE: mov     edx, [esi]
0x80A8E0: mov     eax, [edx]
0x80A8E2: push    1
0x80A8E4: mov     ecx, esi
0x80A8E6: call    eax
0x80A8E8: cmp     edi, ebx
0x80A8EA: mov     ecx, [esp+818h+var_808]
0x80A8EE: mov     [ecx], edi
0x80A8F0: jz      short loc_80A8FC
0x80A8F2: add     edi, 4
0x80A8F5: push    edi; lpAddend
0x80A8F6: call    dword ptr ds:0A28078h
0x80A8FC: mov     eax, [esp+818h+var_804]
0x80A900: add     [esp+818h+var_808], 4
0x80A905: add     eax, 1
0x80A908: add     ebp, 4Ch ; 'L'
0x80A90B: cmp     eax, 14h
0x80A90E: mov     [esp+818h+var_804], eax
0x80A912: jl      loc_80A870
0x80A918: mov     ecx, [esp+818h+var_4]
0x80A91F: pop     edi
0x80A920: pop     esi
0x80A921: pop     ebp
0x80A922: pop     ebx
0x80A923: xor     ecx, esp
0x80A925: call    @__security_check_cookie@4; __security_check_cookie(x)
0x80A92A: add     esp, 808h
0x80A930: retn

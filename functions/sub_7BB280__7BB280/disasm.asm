0x7BB280: sub     esp, 8C4h
0x7BB286: mov     eax, ds:0B30AACh
0x7BB28B: xor     eax, esp
0x7BB28D: mov     [esp+8C4h+var_4], eax
0x7BB294: push    ebx
0x7BB295: push    ebp
0x7BB296: push    esi
0x7BB297: push    edi
0x7BB298: xor     edi, edi
0x7BB29A: push    3Ch ; '<'
0x7BB29C: lea     eax, [esp+8D8h+var_48C]
0x7BB2A3: push    edi
0x7BB2A4: push    eax
0x7BB2A5: mov     esi, ecx
0x7BB2A7: mov     [esp+8E0h+FullPath], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BB2B2: mov     [esp+8E0h+var_498], edi
0x7BB2B9: mov     [esp+8E0h+var_494], edi
0x7BB2C0: mov     [esp+8E0h+var_490], edi
0x7BB2C7: call    __memset
0x7BB2CC: mov     edx, [esp+8E0h+FullPath]
0x7BB2D3: lea     ecx, [esp+8E0h+FileName]
0x7BB2DA: push    ecx; int
0x7BB2DB: push    edx; FullPath
0x7BB2DC: call    sub_801030
0x7BB2E1: lea     eax, [esp+8E8h+var_36C]
0x7BB2E8: push    offset aSky_vso; "SKY.vso"
0x7BB2ED: push    eax
0x7BB2EE: call    __sprintf
0x7BB2F3: add     esp, 1Ch
0x7BB2F6: push    edi; int
0x7BB2F7: lea     ecx, [esp+8D8h+var_36C]
0x7BB2FE: push    edi; int
0x7BB2FF: push    ecx; int
0x7BB300: call    sub_7B47E0
0x7BB305: push    eax; int
0x7BB306: lea     edx, [esp+8E4h+var_498]
0x7BB30D: push    edx; int
0x7BB30E: lea     eax, [esp+8E8h+FileName]
0x7BB315: push    eax; lpFileName
0x7BB316: mov     ecx, esi
0x7BB318: call    CreateVertexShader
0x7BB31D: mov     ebx, [esi+7Ch]
0x7BB320: mov     ebp, eax
0x7BB322: cmp     ebx, ebp
0x7BB324: jz      short loc_7BB357
0x7BB326: cmp     ebx, edi
0x7BB328: jz      short loc_7BB346
0x7BB32A: lea     ecx, [ebx+4]
0x7BB32D: push    ecx; lpAddend
0x7BB32E: call    dword ptr ds:0A2807Ch
0x7BB334: test    eax, eax
0x7BB336: jnz     short loc_7BB346
0x7BB338: cmp     ebx, edi
0x7BB33A: jz      short loc_7BB346
0x7BB33C: mov     edx, [ebx]
0x7BB33E: mov     eax, [edx]
0x7BB340: push    1
0x7BB342: mov     ecx, ebx
0x7BB344: call    eax
0x7BB346: cmp     ebp, edi
0x7BB348: mov     [esi+7Ch], ebp
0x7BB34B: jz      short loc_7BB357
0x7BB34D: add     ebp, 4
0x7BB350: push    ebp; lpAddend
0x7BB351: call    dword ptr ds:0A28078h
0x7BB357: push    38h ; '8'
0x7BB359: lea     ecx, [esp+8D8h+var_520]
0x7BB360: push    edi
0x7BB361: push    ecx
0x7BB362: mov     [esp+8E0h+var_534], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BB36D: mov     [esp+8E0h+var_530], offset off_A8F8C4
0x7BB378: mov     [esp+8E0h+var_52C], edi
0x7BB37F: mov     [esp+8E0h+var_528], edi
0x7BB386: mov     [esp+8E0h+var_524], edi
0x7BB38D: call    __memset
0x7BB392: mov     eax, [esp+8E0h+var_534]
0x7BB399: lea     edx, [esp+8E0h+FileName]
0x7BB3A0: push    edx; int
0x7BB3A1: push    eax; FullPath
0x7BB3A2: call    sub_801030
0x7BB3A7: lea     ecx, [esp+8E8h+var_36C]
0x7BB3AE: push    offset aSkyt_vso; "SKYT.vso"
0x7BB3B3: push    ecx
0x7BB3B4: call    __sprintf
0x7BB3B9: add     esp, 1Ch
0x7BB3BC: push    edi; int
0x7BB3BD: lea     edx, [esp+8D8h+var_36C]
0x7BB3C4: push    edi; int
0x7BB3C5: push    edx; int
0x7BB3C6: call    sub_7B47E0
0x7BB3CB: push    eax; int
0x7BB3CC: lea     eax, [esp+8E4h+var_530]
0x7BB3D3: push    eax; int
0x7BB3D4: lea     ecx, [esp+8E8h+FileName]
0x7BB3DB: push    ecx; lpFileName
0x7BB3DC: mov     ecx, esi
0x7BB3DE: call    CreateVertexShader
0x7BB3E3: mov     ebx, [esi+80h]
0x7BB3E9: mov     ebp, eax
0x7BB3EB: cmp     ebx, ebp
0x7BB3ED: jz      short loc_7BB423
0x7BB3EF: cmp     ebx, edi
0x7BB3F1: jz      short loc_7BB40F
0x7BB3F3: lea     edx, [ebx+4]
0x7BB3F6: push    edx; lpAddend
0x7BB3F7: call    dword ptr ds:0A2807Ch
0x7BB3FD: test    eax, eax
0x7BB3FF: jnz     short loc_7BB40F
0x7BB401: cmp     ebx, edi
0x7BB403: jz      short loc_7BB40F
0x7BB405: mov     eax, [ebx]
0x7BB407: mov     edx, [eax]
0x7BB409: push    1
0x7BB40B: mov     ecx, ebx
0x7BB40D: call    edx
0x7BB40F: cmp     ebp, edi
0x7BB411: mov     [esi+80h], ebp
0x7BB417: jz      short loc_7BB423
0x7BB419: add     ebp, 4
0x7BB41C: push    ebp; lpAddend
0x7BB41D: call    dword ptr ds:0A28078h
0x7BB423: push    3Ch ; '<'
0x7BB425: lea     eax, [esp+8D8h+var_3A8]
0x7BB42C: push    edi
0x7BB42D: push    eax
0x7BB42E: mov     [esp+8E0h+var_3B8], offset aSkyVSky_quad_v; "sky\\v\\sky_quad.v.hlsl"
0x7BB439: mov     [esp+8E0h+var_3B4], edi
0x7BB440: mov     [esp+8E0h+var_3B0], edi
0x7BB447: mov     [esp+8E0h+var_3AC], edi
0x7BB44E: call    __memset
0x7BB453: mov     edx, [esp+8E0h+var_3B8]
0x7BB45A: lea     ecx, [esp+8E0h+FileName]
0x7BB461: push    ecx; int
0x7BB462: push    edx; FullPath
0x7BB463: call    sub_801030
0x7BB468: lea     eax, [esp+8E8h+var_36C]
0x7BB46F: push    offset aSkyquad_vso; "SKYQUAD.vso"
0x7BB474: push    eax
0x7BB475: call    __sprintf
0x7BB47A: add     esp, 1Ch
0x7BB47D: push    edi; int
0x7BB47E: lea     ecx, [esp+8D8h+var_36C]
0x7BB485: push    edi; int
0x7BB486: push    ecx; int
0x7BB487: call    sub_7B47E0
0x7BB48C: push    eax; int
0x7BB48D: lea     edx, [esp+8E4h+var_3B4]
0x7BB494: push    edx; int
0x7BB495: lea     eax, [esp+8E8h+FileName]
0x7BB49C: push    eax; lpFileName
0x7BB49D: mov     ecx, esi
0x7BB49F: call    CreateVertexShader
0x7BB4A4: mov     ebx, [esi+84h]
0x7BB4AA: mov     ebp, eax
0x7BB4AC: cmp     ebx, ebp
0x7BB4AE: jz      short loc_7BB4E4
0x7BB4B0: cmp     ebx, edi
0x7BB4B2: jz      short loc_7BB4D0
0x7BB4B4: lea     ecx, [ebx+4]
0x7BB4B7: push    ecx; lpAddend
0x7BB4B8: call    dword ptr ds:0A2807Ch
0x7BB4BE: test    eax, eax
0x7BB4C0: jnz     short loc_7BB4D0
0x7BB4C2: cmp     ebx, edi
0x7BB4C4: jz      short loc_7BB4D0
0x7BB4C6: mov     edx, [ebx]
0x7BB4C8: mov     eax, [edx]
0x7BB4CA: push    1
0x7BB4CC: mov     ecx, ebx
0x7BB4CE: call    eax
0x7BB4D0: cmp     ebp, edi
0x7BB4D2: mov     [esi+84h], ebp
0x7BB4D8: jz      short loc_7BB4E4
0x7BB4DA: add     ebp, 4
0x7BB4DD: push    ebp; lpAddend
0x7BB4DE: call    dword ptr ds:0A28078h
0x7BB4E4: push    38h ; '8'
0x7BB4E6: lea     ecx, [esp+8D8h+var_5B8]
0x7BB4ED: push    edi
0x7BB4EE: push    ecx
0x7BB4EF: mov     [esp+8E0h+var_5CC], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BB4FA: mov     [esp+8E0h+var_5C8], offset aHorizfade; "HORIZFADE"
0x7BB505: mov     [esp+8E0h+var_5C4], edi
0x7BB50C: mov     [esp+8E0h+var_5C0], edi
0x7BB513: mov     [esp+8E0h+var_5BC], edi
0x7BB51A: call    __memset
0x7BB51F: mov     eax, [esp+8E0h+var_5CC]
0x7BB526: lea     edx, [esp+8E0h+FileName]
0x7BB52D: push    edx; int
0x7BB52E: push    eax; FullPath
0x7BB52F: call    sub_801030
0x7BB534: lea     ecx, [esp+8E8h+var_36C]
0x7BB53B: push    offset aSkyhorizfade_v; "SKYHORIZFADE.vso"
0x7BB540: push    ecx
0x7BB541: call    __sprintf
0x7BB546: add     esp, 1Ch
0x7BB549: push    edi; int
0x7BB54A: lea     edx, [esp+8D8h+var_36C]
0x7BB551: push    edi; int
0x7BB552: push    edx; int
0x7BB553: call    sub_7B47E0
0x7BB558: push    eax; int
0x7BB559: lea     eax, [esp+8E4h+var_5C8]
0x7BB560: push    eax; int
0x7BB561: lea     ecx, [esp+8E8h+FileName]
0x7BB568: push    ecx; lpFileName
0x7BB569: mov     ecx, esi
0x7BB56B: call    CreateVertexShader
0x7BB570: mov     ebx, [esi+88h]
0x7BB576: mov     ebp, eax
0x7BB578: cmp     ebx, ebp
0x7BB57A: jz      short loc_7BB5B0
0x7BB57C: cmp     ebx, edi
0x7BB57E: jz      short loc_7BB59C
0x7BB580: lea     edx, [ebx+4]
0x7BB583: push    edx; lpAddend
0x7BB584: call    dword ptr ds:0A2807Ch
0x7BB58A: test    eax, eax
0x7BB58C: jnz     short loc_7BB59C
0x7BB58E: cmp     ebx, edi
0x7BB590: jz      short loc_7BB59C
0x7BB592: mov     eax, [ebx]
0x7BB594: mov     edx, [eax]
0x7BB596: push    1
0x7BB598: mov     ecx, ebx
0x7BB59A: call    edx
0x7BB59C: cmp     ebp, edi
0x7BB59E: mov     [esi+88h], ebp
0x7BB5A4: jz      short loc_7BB5B0
0x7BB5A6: add     ebp, 4
0x7BB5A9: push    ebp; lpAddend
0x7BB5AA: call    dword ptr ds:0A28078h
0x7BB5B0: push    38h ; '8'
0x7BB5B2: lea     eax, [esp+8D8h+var_650]
0x7BB5B9: push    edi
0x7BB5BA: push    eax
0x7BB5BB: mov     [esp+8E0h+var_664], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BB5C6: mov     [esp+8E0h+var_660], offset aOcclusion; "OCCLUSION"
0x7BB5D1: mov     [esp+8E0h+var_65C], edi
0x7BB5D8: mov     [esp+8E0h+var_658], edi
0x7BB5DF: mov     [esp+8E0h+var_654], edi
0x7BB5E6: call    __memset
0x7BB5EB: mov     edx, [esp+8E0h+var_664]
0x7BB5F2: lea     ecx, [esp+8E0h+FileName]
0x7BB5F9: push    ecx; int
0x7BB5FA: push    edx; FullPath
0x7BB5FB: call    sub_801030
0x7BB600: lea     eax, [esp+8E8h+var_36C]
0x7BB607: push    offset aSkyocc_vso; "SKYOCC.vso"
0x7BB60C: push    eax
0x7BB60D: call    __sprintf
0x7BB612: add     esp, 1Ch
0x7BB615: push    edi; int
0x7BB616: lea     ecx, [esp+8D8h+var_36C]
0x7BB61D: push    edi; int
0x7BB61E: push    ecx; int
0x7BB61F: call    sub_7B47E0
0x7BB624: push    eax; int
0x7BB625: lea     edx, [esp+8E4h+var_660]
0x7BB62C: push    edx; int
0x7BB62D: lea     eax, [esp+8E8h+FileName]
0x7BB634: push    eax; lpFileName
0x7BB635: mov     ecx, esi
0x7BB637: call    CreateVertexShader
0x7BB63C: mov     ebx, [esi+8Ch]
0x7BB642: mov     ebp, eax
0x7BB644: cmp     ebx, ebp
0x7BB646: jz      short loc_7BB67C
0x7BB648: cmp     ebx, edi
0x7BB64A: jz      short loc_7BB668
0x7BB64C: lea     ecx, [ebx+4]
0x7BB64F: push    ecx; lpAddend
0x7BB650: call    dword ptr ds:0A2807Ch
0x7BB656: test    eax, eax
0x7BB658: jnz     short loc_7BB668
0x7BB65A: cmp     ebx, edi
0x7BB65C: jz      short loc_7BB668
0x7BB65E: mov     edx, [ebx]
0x7BB660: mov     eax, [edx]
0x7BB662: push    1
0x7BB664: mov     ecx, ebx
0x7BB666: call    eax
0x7BB668: cmp     ebp, edi
0x7BB66A: mov     [esi+8Ch], ebp
0x7BB670: jz      short loc_7BB67C
0x7BB672: add     ebp, 4
0x7BB675: push    ebp; lpAddend
0x7BB676: call    dword ptr ds:0A28078h
0x7BB67C: push    34h ; '4'
0x7BB67E: lea     ecx, [esp+8D8h+var_860]
0x7BB682: push    edi
0x7BB683: push    ecx
0x7BB684: mov     [esp+8E0h+var_878], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BB68C: mov     [esp+8E0h+var_874], offset off_A8F8C4
0x7BB694: mov     [esp+8E0h+var_870], edi
0x7BB698: mov     [esp+8E0h+var_86C], offset aClouds; "CLOUDS"
0x7BB6A0: mov     [esp+8E0h+var_868], edi
0x7BB6A4: mov     [esp+8E0h+var_864], edi
0x7BB6A8: call    __memset
0x7BB6AD: mov     eax, [esp+8E0h+var_878]
0x7BB6B1: lea     edx, [esp+8E0h+FileName]
0x7BB6B8: push    edx; int
0x7BB6B9: push    eax; FullPath
0x7BB6BA: call    sub_801030
0x7BB6BF: lea     ecx, [esp+8E8h+var_36C]
0x7BB6C6: push    offset aSkyclouds_vso; "SKYCLOUDS.vso"
0x7BB6CB: push    ecx
0x7BB6CC: call    __sprintf
0x7BB6D1: add     esp, 1Ch
0x7BB6D4: push    edi; int
0x7BB6D5: lea     edx, [esp+8D8h+var_36C]
0x7BB6DC: push    edi; int
0x7BB6DD: push    edx; int
0x7BB6DE: call    sub_7B47E0
0x7BB6E3: push    eax; int
0x7BB6E4: lea     eax, [esp+8E4h+var_874]
0x7BB6E8: push    eax; int
0x7BB6E9: lea     ecx, [esp+8E8h+FileName]
0x7BB6F0: push    ecx; lpFileName
0x7BB6F1: mov     ecx, esi
0x7BB6F3: call    CreateVertexShader
0x7BB6F8: mov     ebx, [esi+90h]
0x7BB6FE: mov     ebp, eax
0x7BB700: cmp     ebx, ebp
0x7BB702: jz      short loc_7BB738
0x7BB704: cmp     ebx, edi
0x7BB706: jz      short loc_7BB724
0x7BB708: lea     edx, [ebx+4]
0x7BB70B: push    edx; lpAddend
0x7BB70C: call    dword ptr ds:0A2807Ch
0x7BB712: test    eax, eax
0x7BB714: jnz     short loc_7BB724
0x7BB716: cmp     ebx, edi
0x7BB718: jz      short loc_7BB724
0x7BB71A: mov     eax, [ebx]
0x7BB71C: mov     edx, [eax]
0x7BB71E: push    1
0x7BB720: mov     ecx, ebx
0x7BB722: call    edx
0x7BB724: cmp     ebp, edi
0x7BB726: mov     [esi+90h], ebp
0x7BB72C: jz      short loc_7BB738
0x7BB72E: add     ebp, 4
0x7BB731: push    ebp; lpAddend
0x7BB732: call    dword ptr ds:0A28078h
0x7BB738: push    2Ch ; ','
0x7BB73A: lea     eax, [esp+8D8h+var_80C]
0x7BB741: push    edi
0x7BB742: push    eax
0x7BB743: mov     [esp+8E0h+var_82C], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BB74E: mov     [esp+8E0h+var_828], offset aHorizfade; "HORIZFADE"
0x7BB759: mov     [esp+8E0h+var_824], edi
0x7BB760: mov     [esp+8E0h+var_820], offset off_A8F8C4
0x7BB76B: mov     [esp+8E0h+var_81C], edi
0x7BB772: mov     [esp+8E0h+var_818], offset aClouds; "CLOUDS"
0x7BB77D: mov     [esp+8E0h+var_814], edi
0x7BB784: mov     [esp+8E0h+var_810], edi
0x7BB78B: call    __memset
0x7BB790: mov     edx, [esp+8E0h+var_878]
0x7BB794: lea     ecx, [esp+8E0h+FileName]
0x7BB79B: push    ecx; int
0x7BB79C: push    edx; FullPath
0x7BB79D: call    sub_801030
0x7BB7A2: lea     eax, [esp+8E8h+var_36C]
0x7BB7A9: push    offset aSkycloudsfade_; "SKYCLOUDSFADE.vso"
0x7BB7AE: push    eax
0x7BB7AF: call    __sprintf
0x7BB7B4: add     esp, 1Ch
0x7BB7B7: push    edi; int
0x7BB7B8: lea     ecx, [esp+8D8h+var_36C]
0x7BB7BF: push    edi; int
0x7BB7C0: push    ecx; int
0x7BB7C1: call    sub_7B47E0
0x7BB7C6: push    eax; int
0x7BB7C7: lea     edx, [esp+8E4h+var_828]
0x7BB7CE: push    edx; int
0x7BB7CF: lea     eax, [esp+8E8h+FileName]
0x7BB7D6: push    eax; lpFileName
0x7BB7D7: mov     ecx, esi
0x7BB7D9: call    CreateVertexShader
0x7BB7DE: mov     ebx, [esi+94h]
0x7BB7E4: mov     ebp, eax
0x7BB7E6: cmp     ebx, ebp
0x7BB7E8: jz      short loc_7BB81E
0x7BB7EA: cmp     ebx, edi
0x7BB7EC: jz      short loc_7BB80A
0x7BB7EE: lea     ecx, [ebx+4]
0x7BB7F1: push    ecx; lpAddend
0x7BB7F2: call    dword ptr ds:0A2807Ch
0x7BB7F8: test    eax, eax
0x7BB7FA: jnz     short loc_7BB80A
0x7BB7FC: cmp     ebx, edi
0x7BB7FE: jz      short loc_7BB80A
0x7BB800: mov     edx, [ebx]
0x7BB802: mov     eax, [edx]
0x7BB804: push    1
0x7BB806: mov     ecx, ebx
0x7BB808: call    eax
0x7BB80A: cmp     ebp, edi
0x7BB80C: mov     [esi+94h], ebp
0x7BB812: jz      short loc_7BB81E
0x7BB814: add     ebp, 4
0x7BB817: push    ebp; lpAddend
0x7BB818: call    dword ptr ds:0A28078h
0x7BB81E: push    3Ch ; '<'
0x7BB820: lea     ecx, [esp+8D8h+var_3F4]
0x7BB827: push    edi
0x7BB828: push    ecx
0x7BB829: mov     [esp+8E0h+var_404], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BB834: mov     [esp+8E0h+var_400], edi
0x7BB83B: mov     [esp+8E0h+var_3FC], edi
0x7BB842: mov     [esp+8E0h+var_3F8], edi
0x7BB849: call    __memset
0x7BB84E: mov     eax, [esp+8E0h+var_404]
0x7BB855: lea     edx, [esp+8E0h+FileName]
0x7BB85C: push    edx; int
0x7BB85D: push    eax; FullPath
0x7BB85E: call    sub_801030
0x7BB863: lea     ecx, [esp+8E8h+var_36C]
0x7BB86A: push    offset aSky_pso; "SKY.pso"
0x7BB86F: push    ecx
0x7BB870: call    __sprintf
0x7BB875: add     esp, 1Ch
0x7BB878: push    edi; int
0x7BB879: push    edi; int
0x7BB87A: lea     edx, [esp+8DCh+var_36C]
0x7BB881: push    edx; int
0x7BB882: push    edi
0x7BB883: call    sub_7B4780
0x7BB888: add     esp, 4
0x7BB88B: push    eax; Str1
0x7BB88C: lea     eax, [esp+8E4h+var_400]
0x7BB893: push    eax; int
0x7BB894: lea     ecx, [esp+8E8h+FileName]
0x7BB89B: push    ecx; lpFileName
0x7BB89C: mov     ecx, esi
0x7BB89E: call    CreatePixelShader
0x7BB8A3: mov     ebx, [esi+0A0h]
0x7BB8A9: mov     ebp, eax
0x7BB8AB: cmp     ebx, ebp
0x7BB8AD: jz      short loc_7BB8E3
0x7BB8AF: cmp     ebx, edi
0x7BB8B1: jz      short loc_7BB8CF
0x7BB8B3: lea     edx, [ebx+4]
0x7BB8B6: push    edx; lpAddend
0x7BB8B7: call    dword ptr ds:0A2807Ch
0x7BB8BD: test    eax, eax
0x7BB8BF: jnz     short loc_7BB8CF
0x7BB8C1: cmp     ebx, edi
0x7BB8C3: jz      short loc_7BB8CF
0x7BB8C5: mov     eax, [ebx]
0x7BB8C7: mov     edx, [eax]
0x7BB8C9: push    1
0x7BB8CB: mov     ecx, ebx
0x7BB8CD: call    edx
0x7BB8CF: cmp     ebp, edi
0x7BB8D1: mov     [esi+0A0h], ebp
0x7BB8D7: jz      short loc_7BB8E3
0x7BB8D9: add     ebp, 4
0x7BB8DC: push    ebp; lpAddend
0x7BB8DD: call    dword ptr ds:0A28078h
0x7BB8E3: push    38h ; '8'
0x7BB8E5: lea     eax, [esp+8D8h+var_7CC]
0x7BB8EC: push    edi
0x7BB8ED: push    eax
0x7BB8EE: mov     [esp+8E0h+var_7E0], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BB8F9: mov     [esp+8E0h+var_7DC], offset off_A8F8C4
0x7BB904: mov     [esp+8E0h+var_7D8], edi
0x7BB90B: mov     [esp+8E0h+var_7D4], edi
0x7BB912: mov     [esp+8E0h+var_7D0], edi
0x7BB919: call    __memset
0x7BB91E: mov     edx, [esp+8E0h+var_7E0]
0x7BB925: lea     ecx, [esp+8E0h+FileName]
0x7BB92C: push    ecx; int
0x7BB92D: push    edx; FullPath
0x7BB92E: call    sub_801030
0x7BB933: lea     eax, [esp+8E8h+var_36C]
0x7BB93A: push    offset aSkytex_pso; "SKYTEX.pso"
0x7BB93F: push    eax
0x7BB940: call    __sprintf
0x7BB945: add     esp, 1Ch
0x7BB948: push    edi; int
0x7BB949: push    edi; int
0x7BB94A: lea     ecx, [esp+8DCh+var_36C]
0x7BB951: push    ecx; int
0x7BB952: push    edi
0x7BB953: call    sub_7B4780
0x7BB958: add     esp, 4
0x7BB95B: push    eax; Str1
0x7BB95C: lea     edx, [esp+8E4h+var_7DC]
0x7BB963: push    edx; int
0x7BB964: lea     eax, [esp+8E8h+FileName]
0x7BB96B: push    eax; lpFileName
0x7BB96C: mov     ecx, esi
0x7BB96E: call    CreatePixelShader
0x7BB973: mov     ebx, [esi+98h]
0x7BB979: mov     ebp, eax
0x7BB97B: cmp     ebx, ebp
0x7BB97D: jz      short loc_7BB9B3
0x7BB97F: cmp     ebx, edi
0x7BB981: jz      short loc_7BB99F
0x7BB983: lea     ecx, [ebx+4]
0x7BB986: push    ecx; lpAddend
0x7BB987: call    dword ptr ds:0A2807Ch
0x7BB98D: test    eax, eax
0x7BB98F: jnz     short loc_7BB99F
0x7BB991: cmp     ebx, edi
0x7BB993: jz      short loc_7BB99F
0x7BB995: mov     edx, [ebx]
0x7BB997: mov     eax, [edx]
0x7BB999: push    1
0x7BB99B: mov     ecx, ebx
0x7BB99D: call    eax
0x7BB99F: cmp     ebp, edi
0x7BB9A1: mov     [esi+98h], ebp
0x7BB9A7: jz      short loc_7BB9B3
0x7BB9A9: add     ebp, 4
0x7BB9AC: push    ebp; lpAddend
0x7BB9AD: call    dword ptr ds:0A28078h
0x7BB9B3: push    30h ; '0'
0x7BB9B5: lea     ecx, [esp+8D8h+var_6E0]
0x7BB9BC: push    edi
0x7BB9BD: push    ecx
0x7BB9BE: mov     [esp+8E0h+var_6FC], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BB9C9: mov     [esp+8E0h+var_6F8], offset aHorizfade; "HORIZFADE"
0x7BB9D4: mov     [esp+8E0h+var_6F4], edi
0x7BB9DB: mov     [esp+8E0h+var_6F0], offset off_A8F8C4
0x7BB9E6: mov     [esp+8E0h+var_6EC], edi
0x7BB9ED: mov     [esp+8E0h+var_6E8], edi
0x7BB9F4: mov     [esp+8E0h+var_6E4], edi
0x7BB9FB: call    __memset
0x7BBA00: mov     eax, [esp+8E0h+var_7E0]
0x7BBA07: lea     edx, [esp+8E0h+FileName]
0x7BBA0E: push    edx; int
0x7BBA0F: push    eax; FullPath
0x7BBA10: call    sub_801030
0x7BBA15: lea     ecx, [esp+8E8h+var_36C]
0x7BBA1C: push    offset aSkytexfade_pso; "SKYTEXFADE.pso"
0x7BBA21: push    ecx
0x7BBA22: call    __sprintf
0x7BBA27: add     esp, 1Ch
0x7BBA2A: push    edi; int
0x7BBA2B: push    edi; int
0x7BBA2C: lea     edx, [esp+8DCh+var_36C]
0x7BBA33: push    edx; int
0x7BBA34: push    edi
0x7BBA35: call    sub_7B4780
0x7BBA3A: add     esp, 4
0x7BBA3D: push    eax; Str1
0x7BBA3E: lea     eax, [esp+8E4h+var_6F8]
0x7BBA45: push    eax; int
0x7BBA46: lea     ecx, [esp+8E8h+FileName]
0x7BBA4D: push    ecx; lpFileName
0x7BBA4E: mov     ecx, esi
0x7BBA50: call    CreatePixelShader
0x7BBA55: mov     ebx, [esi+9Ch]
0x7BBA5B: mov     ebp, eax
0x7BBA5D: cmp     ebx, ebp
0x7BBA5F: jz      short loc_7BBA95
0x7BBA61: cmp     ebx, edi
0x7BBA63: jz      short loc_7BBA81
0x7BBA65: lea     edx, [ebx+4]
0x7BBA68: push    edx; lpAddend
0x7BBA69: call    dword ptr ds:0A2807Ch
0x7BBA6F: test    eax, eax
0x7BBA71: jnz     short loc_7BBA81
0x7BBA73: cmp     ebx, edi
0x7BBA75: jz      short loc_7BBA81
0x7BBA77: mov     eax, [ebx]
0x7BBA79: mov     edx, [eax]
0x7BBA7B: push    1
0x7BBA7D: mov     ecx, ebx
0x7BBA7F: call    edx
0x7BBA81: cmp     ebp, edi
0x7BBA83: mov     [esi+9Ch], ebp
0x7BBA89: jz      short loc_7BBA95
0x7BBA8B: add     ebp, 4
0x7BBA8E: push    ebp; lpAddend
0x7BBA8F: call    dword ptr ds:0A28078h
0x7BBA95: fld     dword ptr ds:0B43154h
0x7BBA9B: lea     eax, [esp+8D4h+DstBuf]
0x7BBAA2: push    eax; DstBuf
0x7BBAA3: push    0Ch; NumOfDigits
0x7BBAA5: sub     esp, 8
0x7BBAA8: fstp    [esp+8E4h+Val]; Val
0x7BBAAB: call    __gcvt
0x7BBAB0: push    3Ch ; '<'
0x7BBAB2: lea     ecx, [esp+8E8h+var_440]
0x7BBAB9: push    edi
0x7BBABA: push    ecx
0x7BBABB: mov     [esp+8F0h+var_450], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BBAC6: mov     [esp+8F0h+var_44C], offset aOcclusion; "OCCLUSION"
0x7BBAD1: mov     [esp+8F0h+var_448], edi
0x7BBAD8: mov     [esp+8F0h+var_444], edi
0x7BBADF: call    __memset
0x7BBAE4: mov     eax, [esp+8F0h+var_450]
0x7BBAEB: lea     edx, [esp+8F0h+FileName]
0x7BBAF2: push    edx; int
0x7BBAF3: push    eax; FullPath
0x7BBAF4: call    sub_801030
0x7BBAF9: lea     ecx, [esp+8F8h+var_36C]
0x7BBB00: push    offset aSkysunoccl_pso; "SKYSUNOCCL.pso"
0x7BBB05: push    ecx
0x7BBB06: call    __sprintf
0x7BBB0B: add     esp, 2Ch
0x7BBB0E: push    edi; int
0x7BBB0F: push    edi; int
0x7BBB10: lea     edx, [esp+8DCh+var_36C]
0x7BBB17: push    edx; int
0x7BBB18: push    edi
0x7BBB19: call    sub_7B4780
0x7BBB1E: add     esp, 4
0x7BBB21: push    eax; Str1
0x7BBB22: lea     eax, [esp+8E4h+var_44C]
0x7BBB29: push    eax; int
0x7BBB2A: lea     ecx, [esp+8E8h+FileName]
0x7BBB31: push    ecx; lpFileName
0x7BBB32: mov     ecx, esi
0x7BBB34: call    CreatePixelShader
0x7BBB39: mov     ebx, [esi+0A4h]
0x7BBB3F: mov     ebp, eax
0x7BBB41: cmp     ebx, ebp
0x7BBB43: jz      short loc_7BBB79
0x7BBB45: cmp     ebx, edi
0x7BBB47: jz      short loc_7BBB65
0x7BBB49: lea     edx, [ebx+4]
0x7BBB4C: push    edx; lpAddend
0x7BBB4D: call    dword ptr ds:0A2807Ch
0x7BBB53: test    eax, eax
0x7BBB55: jnz     short loc_7BBB65
0x7BBB57: cmp     ebx, edi
0x7BBB59: jz      short loc_7BBB65
0x7BBB5B: mov     eax, [ebx]
0x7BBB5D: mov     edx, [eax]
0x7BBB5F: push    1
0x7BBB61: mov     ecx, ebx
0x7BBB63: call    edx
0x7BBB65: cmp     ebp, edi
0x7BBB67: mov     [esi+0A4h], ebp
0x7BBB6D: jz      short loc_7BBB79
0x7BBB6F: add     ebp, 4
0x7BBB72: push    ebp; lpAddend
0x7BBB73: call    dword ptr ds:0A28078h
0x7BBB79: push    38h ; '8'
0x7BBB7B: lea     eax, [esp+8D8h+var_604]
0x7BBB82: push    edi
0x7BBB83: push    eax
0x7BBB84: mov     [esp+8E0h+var_618], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BBB8F: mov     [esp+8E0h+var_614], offset aHorizfade; "HORIZFADE"
0x7BBB9A: mov     [esp+8E0h+var_610], edi
0x7BBBA1: mov     [esp+8E0h+var_60C], edi
0x7BBBA8: mov     [esp+8E0h+var_608], edi
0x7BBBAF: call    __memset
0x7BBBB4: mov     edx, [esp+8E0h+var_618]
0x7BBBBB: lea     ecx, [esp+8E0h+FileName]
0x7BBBC2: push    ecx; int
0x7BBBC3: push    edx; FullPath
0x7BBBC4: call    sub_801030
0x7BBBC9: lea     eax, [esp+8E8h+var_36C]
0x7BBBD0: push    offset aSkyshorizfade_; "SKYSHORIZFADE.pso"
0x7BBBD5: push    eax
0x7BBBD6: call    __sprintf
0x7BBBDB: add     esp, 1Ch
0x7BBBDE: push    edi; int
0x7BBBDF: push    edi; int
0x7BBBE0: lea     ecx, [esp+8DCh+var_36C]
0x7BBBE7: push    ecx; int
0x7BBBE8: push    edi
0x7BBBE9: call    sub_7B4780
0x7BBBEE: add     esp, 4
0x7BBBF1: push    eax; Str1
0x7BBBF2: lea     edx, [esp+8E4h+var_614]
0x7BBBF9: push    edx; int
0x7BBBFA: lea     eax, [esp+8E8h+FileName]
0x7BBC01: push    eax; lpFileName
0x7BBC02: mov     ecx, esi
0x7BBC04: call    CreatePixelShader
0x7BBC09: mov     ebx, [esi+0A8h]
0x7BBC0F: mov     ebp, eax
0x7BBC11: cmp     ebx, ebp
0x7BBC13: jz      short loc_7BBC49
0x7BBC15: cmp     ebx, edi
0x7BBC17: jz      short loc_7BBC35
0x7BBC19: lea     ecx, [ebx+4]
0x7BBC1C: push    ecx; lpAddend
0x7BBC1D: call    dword ptr ds:0A2807Ch
0x7BBC23: test    eax, eax
0x7BBC25: jnz     short loc_7BBC35
0x7BBC27: cmp     ebx, edi
0x7BBC29: jz      short loc_7BBC35
0x7BBC2B: mov     edx, [ebx]
0x7BBC2D: mov     eax, [edx]
0x7BBC2F: push    1
0x7BBC31: mov     ecx, ebx
0x7BBC33: call    eax
0x7BBC35: cmp     ebp, edi
0x7BBC37: mov     [esi+0A8h], ebp
0x7BBC3D: jz      short loc_7BBC49
0x7BBC3F: add     ebp, 4
0x7BBC42: push    ebp; lpAddend
0x7BBC43: call    dword ptr ds:0A28078h
0x7BBC49: push    34h ; '4'
0x7BBC4B: lea     ecx, [esp+8D8h+var_77C]
0x7BBC52: push    edi
0x7BBC53: push    ecx
0x7BBC54: mov     [esp+8E0h+var_794], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BBC5F: mov     [esp+8E0h+var_790], offset aDepth_value; "DEPTH_VALUE"
0x7BBC6A: mov     [esp+8E0h+var_78C], offset a0_999999; "0.999999"
0x7BBC75: mov     [esp+8E0h+var_788], offset aSi; "SI"
0x7BBC80: mov     [esp+8E0h+var_784], edi
0x7BBC87: mov     [esp+8E0h+var_780], edi
0x7BBC8E: call    __memset
0x7BBC93: mov     eax, [esp+8E0h+var_794]
0x7BBC9A: lea     edx, [esp+8E0h+FileName]
0x7BBCA1: push    edx; int
0x7BBCA2: push    eax; FullPath
0x7BBCA3: call    sub_801030
0x7BBCA8: lea     ecx, [esp+8E8h+var_36C]
0x7BBCAF: push    offset aSkyfar_vso; "SKYFAR.vso"
0x7BBCB4: push    ecx
0x7BBCB5: call    __sprintf
0x7BBCBA: add     esp, 1Ch
0x7BBCBD: push    edi; int
0x7BBCBE: lea     edx, [esp+8D8h+var_36C]
0x7BBCC5: push    edi; int
0x7BBCC6: push    edx; int
0x7BBCC7: call    sub_7B47E0
0x7BBCCC: push    eax; int
0x7BBCCD: lea     eax, [esp+8E4h+var_790]
0x7BBCD4: push    eax; int
0x7BBCD5: lea     ecx, [esp+8E8h+FileName]
0x7BBCDC: push    ecx; lpFileName
0x7BBCDD: mov     ecx, esi
0x7BBCDF: call    CreateVertexShader
0x7BBCE4: mov     ebx, [esi+0C4h]
0x7BBCEA: mov     ebp, eax
0x7BBCEC: cmp     ebx, ebp
0x7BBCEE: jz      short loc_7BBD24
0x7BBCF0: cmp     ebx, edi
0x7BBCF2: jz      short loc_7BBD10
0x7BBCF4: lea     edx, [ebx+4]
0x7BBCF7: push    edx; lpAddend
0x7BBCF8: call    dword ptr ds:0A2807Ch
0x7BBCFE: test    eax, eax
0x7BBD00: jnz     short loc_7BBD10
0x7BBD02: cmp     ebx, edi
0x7BBD04: jz      short loc_7BBD10
0x7BBD06: mov     eax, [ebx]
0x7BBD08: mov     edx, [eax]
0x7BBD0A: push    1
0x7BBD0C: mov     ecx, ebx
0x7BBD0E: call    edx
0x7BBD10: cmp     ebp, edi
0x7BBD12: mov     [esi+0C4h], ebp
0x7BBD18: jz      short loc_7BBD24
0x7BBD1A: add     ebp, 4
0x7BBD1D: push    ebp; lpAddend
0x7BBD1E: call    dword ptr ds:0A28078h
0x7BBD24: push    2Ch ; ','
0x7BBD26: lea     eax, [esp+8D8h+var_8A4]
0x7BBD2A: push    edi
0x7BBD2B: push    eax
0x7BBD2C: mov     [esp+8E0h+var_8C4], offset aSkyVSky_v_hlsl; "sky\\v\\sky.v.hlsl"
0x7BBD34: mov     [esp+8E0h+var_8C0], offset aDepth_value; "DEPTH_VALUE"
0x7BBD3C: mov     [esp+8E0h+var_8BC], offset a0_999999; "0.999999"
0x7BBD44: mov     [esp+8E0h+var_8B8], offset aSi; "SI"
0x7BBD4C: mov     [esp+8E0h+var_8B4], edi
0x7BBD50: mov     [esp+8E0h+var_8B0], offset aSi_clouds; "SI_CLOUDS"
0x7BBD58: mov     [esp+8E0h+var_8AC], offset EmptyString
0x7BBD60: mov     [esp+8E0h+var_8A8], edi
0x7BBD64: call    __memset
0x7BBD69: mov     edx, [esp+8E0h+var_8C4]
0x7BBD6D: lea     ecx, [esp+8E0h+FileName]
0x7BBD74: push    ecx; int
0x7BBD75: push    edx; FullPath
0x7BBD76: call    sub_801030
0x7BBD7B: lea     eax, [esp+8E8h+var_36C]
0x7BBD82: push    offset aSkycloudsi_vso; "SKYCLOUDSI.vso"
0x7BBD87: push    eax
0x7BBD88: call    __sprintf
0x7BBD8D: add     esp, 1Ch
0x7BBD90: push    edi; int
0x7BBD91: lea     ecx, [esp+8D8h+var_36C]
0x7BBD98: push    edi; int
0x7BBD99: push    ecx; int
0x7BBD9A: call    sub_7B47E0
0x7BBD9F: push    eax; int
0x7BBDA0: lea     edx, [esp+8E4h+var_8C0]
0x7BBDA4: push    edx; int
0x7BBDA5: lea     eax, [esp+8E8h+FileName]
0x7BBDAC: push    eax; lpFileName
0x7BBDAD: mov     ecx, esi
0x7BBDAF: call    CreateVertexShader
0x7BBDB4: mov     ebx, [esi+0C8h]
0x7BBDBA: mov     ebp, eax
0x7BBDBC: cmp     ebx, ebp
0x7BBDBE: jz      short loc_7BBDF4
0x7BBDC0: cmp     ebx, edi
0x7BBDC2: jz      short loc_7BBDE0
0x7BBDC4: lea     ecx, [ebx+4]
0x7BBDC7: push    ecx; lpAddend
0x7BBDC8: call    dword ptr ds:0A2807Ch
0x7BBDCE: test    eax, eax
0x7BBDD0: jnz     short loc_7BBDE0
0x7BBDD2: cmp     ebx, edi
0x7BBDD4: jz      short loc_7BBDE0
0x7BBDD6: mov     edx, [ebx]
0x7BBDD8: mov     eax, [edx]
0x7BBDDA: push    1
0x7BBDDC: mov     ecx, ebx
0x7BBDDE: call    eax
0x7BBDE0: cmp     ebp, edi
0x7BBDE2: mov     [esi+0C8h], ebp
0x7BBDE8: jz      short loc_7BBDF4
0x7BBDEA: add     ebp, 4
0x7BBDED: push    ebp; lpAddend
0x7BBDEE: call    dword ptr ds:0A28078h
0x7BBDF4: push    38h ; '8'
0x7BBDF6: lea     ecx, [esp+8D8h+var_56C]
0x7BBDFD: push    edi
0x7BBDFE: push    ecx
0x7BBDFF: mov     [esp+8E0h+var_580], offset aSkyVSky_quad_v; "sky\\v\\sky_quad.v.hlsl"
0x7BBE0A: mov     [esp+8E0h+var_57C], offset aSi; "SI"
0x7BBE15: mov     [esp+8E0h+var_578], edi
0x7BBE1C: mov     [esp+8E0h+var_574], edi
0x7BBE23: mov     [esp+8E0h+var_570], edi
0x7BBE2A: call    __memset
0x7BBE2F: mov     eax, [esp+8E0h+var_580]
0x7BBE36: lea     edx, [esp+8E0h+FileName]
0x7BBE3D: push    edx; int
0x7BBE3E: push    eax; FullPath
0x7BBE3F: call    sub_801030
0x7BBE44: lea     ecx, [esp+8E8h+var_36C]
0x7BBE4B: push    offset aSkyquadsi_vso; "SKYQUADSI.vso"
0x7BBE50: push    ecx
0x7BBE51: call    __sprintf
0x7BBE56: add     esp, 1Ch
0x7BBE59: push    edi; int
0x7BBE5A: lea     edx, [esp+8D8h+var_36C]
0x7BBE61: push    edi; int
0x7BBE62: push    edx; int
0x7BBE63: call    sub_7B47E0
0x7BBE68: push    eax; int
0x7BBE69: lea     eax, [esp+8E4h+var_57C]
0x7BBE70: push    eax; int
0x7BBE71: lea     ecx, [esp+8E8h+FileName]
0x7BBE78: push    ecx; lpFileName
0x7BBE79: mov     ecx, esi
0x7BBE7B: call    CreateVertexShader
0x7BBE80: mov     ebx, [esi+0CCh]
0x7BBE86: mov     ebp, eax
0x7BBE88: cmp     ebx, ebp
0x7BBE8A: jz      short loc_7BBEC0
0x7BBE8C: cmp     ebx, edi
0x7BBE8E: jz      short loc_7BBEAC
0x7BBE90: lea     edx, [ebx+4]
0x7BBE93: push    edx; lpAddend
0x7BBE94: call    dword ptr ds:0A2807Ch
0x7BBE9A: test    eax, eax
0x7BBE9C: jnz     short loc_7BBEAC
0x7BBE9E: cmp     ebx, edi
0x7BBEA0: jz      short loc_7BBEAC
0x7BBEA2: mov     eax, [ebx]
0x7BBEA4: mov     edx, [eax]
0x7BBEA6: push    1
0x7BBEA8: mov     ecx, ebx
0x7BBEAA: call    edx
0x7BBEAC: cmp     ebp, edi
0x7BBEAE: mov     [esi+0CCh], ebp
0x7BBEB4: jz      short loc_7BBEC0
0x7BBEB6: add     ebp, 4
0x7BBEB9: push    ebp; lpAddend
0x7BBEBA: call    dword ptr ds:0A28078h
0x7BBEC0: fld     dword ptr ds:0B43158h
0x7BBEC6: lea     eax, [esp+8D4h+DstBuf]
0x7BBECD: push    eax; DstBuf
0x7BBECE: push    0Ch; NumOfDigits
0x7BBED0: sub     esp, 8
0x7BBED3: fstp    [esp+8E4h+Val]; Val
0x7BBED6: call    __gcvt
0x7BBEDB: push    38h ; '8'
0x7BBEDD: lea     edx, [esp+8E8h+var_4D4]
0x7BBEE4: lea     ecx, [esp+8E8h+DstBuf]
0x7BBEEB: push    edi
0x7BBEEC: push    edx
0x7BBEED: mov     [esp+8F0h+var_4E8], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BBEF8: mov     [esp+8F0h+var_4E4], offset aSi; "SI"
0x7BBF03: mov     [esp+8F0h+var_4E0], ecx
0x7BBF0A: mov     [esp+8F0h+var_4DC], edi
0x7BBF11: mov     [esp+8F0h+var_4D8], edi
0x7BBF18: call    __memset
0x7BBF1D: mov     ecx, [esp+8F0h+var_4E8]
0x7BBF24: lea     eax, [esp+8F0h+FileName]
0x7BBF2B: push    eax; int
0x7BBF2C: push    ecx; FullPath
0x7BBF2D: call    sub_801030
0x7BBF32: lea     edx, [esp+8F8h+var_36C]
0x7BBF39: push    offset aSkysi_pso; "SKYSI.pso"
0x7BBF3E: push    edx
0x7BBF3F: call    __sprintf
0x7BBF44: add     esp, 2Ch
0x7BBF47: push    edi; int
0x7BBF48: push    edi; int
0x7BBF49: lea     eax, [esp+8DCh+var_36C]
0x7BBF50: push    eax; int
0x7BBF51: push    edi
0x7BBF52: call    sub_7B4780
0x7BBF57: add     esp, 4
0x7BBF5A: push    eax; Str1
0x7BBF5B: lea     ecx, [esp+8E4h+var_4E4]
0x7BBF62: push    ecx; int
0x7BBF63: lea     edx, [esp+8E8h+FileName]
0x7BBF6A: push    edx; lpFileName
0x7BBF6B: mov     ecx, esi
0x7BBF6D: call    CreatePixelShader
0x7BBF72: mov     ebx, [esi+0D0h]
0x7BBF78: mov     ebp, eax
0x7BBF7A: cmp     ebx, ebp
0x7BBF7C: jz      short loc_7BBFB2
0x7BBF7E: cmp     ebx, edi
0x7BBF80: jz      short loc_7BBF9E
0x7BBF82: lea     eax, [ebx+4]
0x7BBF85: push    eax; lpAddend
0x7BBF86: call    dword ptr ds:0A2807Ch
0x7BBF8C: test    eax, eax
0x7BBF8E: jnz     short loc_7BBF9E
0x7BBF90: cmp     ebx, edi
0x7BBF92: jz      short loc_7BBF9E
0x7BBF94: mov     edx, [ebx]
0x7BBF96: mov     eax, [edx]
0x7BBF98: push    1
0x7BBF9A: mov     ecx, ebx
0x7BBF9C: call    eax
0x7BBF9E: cmp     ebp, edi
0x7BBFA0: mov     [esi+0D0h], ebp
0x7BBFA6: jz      short loc_7BBFB2
0x7BBFA8: add     ebp, 4
0x7BBFAB: push    ebp; lpAddend
0x7BBFAC: call    dword ptr ds:0A28078h
0x7BBFB2: fld     dword ptr ds:0B43154h
0x7BBFB8: lea     ecx, [esp+8D4h+DstBuf]
0x7BBFBF: push    ecx; DstBuf
0x7BBFC0: push    0Ch; NumOfDigits
0x7BBFC2: sub     esp, 8
0x7BBFC5: fstp    [esp+8E4h+Val]; Val
0x7BBFC8: call    __gcvt
0x7BBFCD: push    34h ; '4'
0x7BBFCF: lea     eax, [esp+8E8h+var_730]
0x7BBFD6: lea     edx, [esp+8E8h+DstBuf]
0x7BBFDD: push    edi
0x7BBFDE: push    eax
0x7BBFDF: mov     [esp+8F0h+var_748], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BBFEA: mov     [esp+8F0h+var_744], offset aSi; "SI"
0x7BBFF5: mov     [esp+8F0h+var_740], edx
0x7BBFFC: mov     [esp+8F0h+var_73C], offset aSi_sun; "SI_SUN"
0x7BC007: mov     [esp+8F0h+var_738], edi
0x7BC00E: mov     [esp+8F0h+var_734], edi
0x7BC015: call    __memset
0x7BC01A: mov     edx, [esp+8F0h+var_748]
0x7BC021: lea     ecx, [esp+8F0h+FileName]
0x7BC028: push    ecx; int
0x7BC029: push    edx; FullPath
0x7BC02A: call    sub_801030
0x7BC02F: lea     eax, [esp+8F8h+var_36C]
0x7BC036: push    offset aSkysisun_pso; "SKYSISUN.pso"
0x7BC03B: push    eax
0x7BC03C: call    __sprintf
0x7BC041: add     esp, 2Ch
0x7BC044: push    edi; int
0x7BC045: push    edi; int
0x7BC046: lea     ecx, [esp+8DCh+var_36C]
0x7BC04D: push    ecx; int
0x7BC04E: push    edi
0x7BC04F: call    sub_7B4780
0x7BC054: add     esp, 4
0x7BC057: push    eax; Str1
0x7BC058: lea     edx, [esp+8E4h+var_744]
0x7BC05F: push    edx; int
0x7BC060: lea     eax, [esp+8E8h+FileName]
0x7BC067: push    eax; lpFileName
0x7BC068: mov     ecx, esi
0x7BC06A: call    CreatePixelShader
0x7BC06F: mov     ebx, [esi+0D4h]
0x7BC075: mov     ebp, eax
0x7BC077: cmp     ebx, ebp
0x7BC079: jz      short loc_7BC0AF
0x7BC07B: cmp     ebx, edi
0x7BC07D: jz      short loc_7BC09B
0x7BC07F: lea     ecx, [ebx+4]
0x7BC082: push    ecx; lpAddend
0x7BC083: call    dword ptr ds:0A2807Ch
0x7BC089: test    eax, eax
0x7BC08B: jnz     short loc_7BC09B
0x7BC08D: cmp     ebx, edi
0x7BC08F: jz      short loc_7BC09B
0x7BC091: mov     edx, [ebx]
0x7BC093: mov     eax, [edx]
0x7BC095: push    1
0x7BC097: mov     ecx, ebx
0x7BC099: call    eax
0x7BC09B: cmp     ebp, edi
0x7BC09D: mov     [esi+0D4h], ebp
0x7BC0A3: jz      short loc_7BC0AF
0x7BC0A5: add     ebp, 4
0x7BC0A8: push    ebp; lpAddend
0x7BC0A9: call    dword ptr ds:0A28078h
0x7BC0AF: push    34h ; '4'
0x7BC0B1: lea     ecx, [esp+8D8h+var_698]
0x7BC0B8: push    edi
0x7BC0B9: push    ecx
0x7BC0BA: mov     [esp+8E0h+var_6B0], offset aSkyPSky_p_hlsl; "sky\\p\\sky.p.hlsl"
0x7BC0C5: mov     [esp+8E0h+var_6AC], offset aSi; "SI"
0x7BC0D0: mov     [esp+8E0h+var_6A8], edi
0x7BC0D7: mov     [esp+8E0h+var_6A4], offset aSi_clouds; "SI_CLOUDS"
0x7BC0E2: mov     [esp+8E0h+var_6A0], edi
0x7BC0E9: mov     [esp+8E0h+var_69C], edi
0x7BC0F0: call    __memset
0x7BC0F5: mov     eax, [esp+8E0h+var_6B0]
0x7BC0FC: lea     edx, [esp+8E0h+FileName]
0x7BC103: push    edx; int
0x7BC104: push    eax; FullPath
0x7BC105: call    sub_801030
0x7BC10A: lea     ecx, [esp+8E8h+var_36C]
0x7BC111: push    offset aSkysiclouds_ps; "SKYSICLOUDS.pso"
0x7BC116: push    ecx
0x7BC117: call    __sprintf
0x7BC11C: add     esp, 1Ch
0x7BC11F: push    edi; int
0x7BC120: push    edi; int
0x7BC121: lea     edx, [esp+8DCh+var_36C]
0x7BC128: push    edx; int
0x7BC129: push    edi
0x7BC12A: call    sub_7B4780
0x7BC12F: add     esp, 4
0x7BC132: push    eax; Str1
0x7BC133: lea     eax, [esp+8E4h+var_6AC]
0x7BC13A: push    eax; int
0x7BC13B: lea     ecx, [esp+8E8h+FileName]
0x7BC142: push    ecx; lpFileName
0x7BC143: mov     ecx, esi
0x7BC145: call    CreatePixelShader
0x7BC14A: mov     ebx, [esi+0D8h]
0x7BC150: mov     ebp, eax
0x7BC152: cmp     ebx, ebp
0x7BC154: jz      short loc_7BC18A
0x7BC156: cmp     ebx, edi
0x7BC158: jz      short loc_7BC176
0x7BC15A: lea     edx, [ebx+4]
0x7BC15D: push    edx; lpAddend
0x7BC15E: call    dword ptr ds:0A2807Ch
0x7BC164: test    eax, eax
0x7BC166: jnz     short loc_7BC176
0x7BC168: cmp     ebx, edi
0x7BC16A: jz      short loc_7BC176
0x7BC16C: mov     eax, [ebx]
0x7BC16E: mov     edx, [eax]
0x7BC170: push    1
0x7BC172: mov     ecx, ebx
0x7BC174: call    edx
0x7BC176: cmp     ebp, edi
0x7BC178: mov     [esi+0D8h], ebp
0x7BC17E: jz      short loc_7BC18A
0x7BC180: add     ebp, 4
0x7BC183: push    ebp; lpAddend
0x7BC184: call    dword ptr ds:0A28078h
0x7BC18A: mov     ecx, [esp+8D4h+var_4]
0x7BC191: pop     edi
0x7BC192: pop     esi
0x7BC193: pop     ebp
0x7BC194: pop     ebx
0x7BC195: xor     ecx, esp
0x7BC197: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7BC19C: add     esp, 8C4h
0x7BC1A2: retn

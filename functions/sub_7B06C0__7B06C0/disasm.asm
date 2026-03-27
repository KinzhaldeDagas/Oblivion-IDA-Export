0x7B06C0: sub     esp, 3E0h
0x7B06C6: mov     eax, ds:0B30AACh
0x7B06CB: xor     eax, esp
0x7B06CD: mov     [esp+3E0h+var_4], eax
0x7B06D4: push    ebx
0x7B06D5: push    ebp
0x7B06D6: push    esi
0x7B06D7: push    edi
0x7B06D8: xor     ebx, ebx
0x7B06DA: push    3Ch ; '<'
0x7B06DC: lea     eax, [esp+3F4h+var_2E0]
0x7B06E3: mov     ebp, ecx
0x7B06E5: push    ebx
0x7B06E6: mov     edi, offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x7B06EB: push    eax
0x7B06EC: mov     [esp+3FCh+var_3D8], ebp
0x7B06F0: mov     [esp+3FCh+var_2F0], edi
0x7B06F7: mov     [esp+3FCh+var_2EC], ebx
0x7B06FE: mov     [esp+3FCh+var_2E8], ebx
0x7B0705: mov     [esp+3FCh+var_2E4], ebx
0x7B070C: call    __memset
0x7B0711: push    38h ; '8'
0x7B0713: lea     ecx, [esp+400h+var_290]
0x7B071A: push    ebx
0x7B071B: mov     esi, offset EmptyString
0x7B0720: push    ecx
0x7B0721: mov     [esp+408h+var_2A4], edi
0x7B0728: mov     [esp+408h+var_2A0], offset aTex4; "TEX4"
0x7B0733: mov     [esp+408h+var_29C], esi
0x7B073A: mov     [esp+408h+var_298], ebx
0x7B0741: mov     [esp+408h+var_294], ebx
0x7B0748: call    __memset
0x7B074D: push    38h ; '8'
0x7B074F: lea     edx, [esp+40Ch+var_244]
0x7B0756: push    ebx
0x7B0757: push    edx
0x7B0758: mov     [esp+414h+var_258], edi
0x7B075F: mov     [esp+414h+var_254], offset aTex2; "TEX2"
0x7B076A: mov     [esp+414h+var_250], esi
0x7B0771: mov     [esp+414h+var_24C], ebx
0x7B0778: mov     [esp+414h+var_248], ebx
0x7B077F: call    __memset
0x7B0784: push    38h ; '8'
0x7B0786: lea     eax, [esp+418h+var_3C0]
0x7B078A: push    ebx
0x7B078B: push    eax
0x7B078C: mov     [esp+420h+FullPath], offset aImagespace1xPC; "imagespace\\1x\\p\\copy.p.hlsl"
0x7B0794: mov     [esp+420h+var_3D0], offset aAlphamult; "ALPHAMULT"
0x7B079C: mov     [esp+420h+var_3CC], esi
0x7B07A0: mov     [esp+420h+var_3C8], ebx
0x7B07A4: mov     [esp+420h+var_3C4], ebx
0x7B07A8: call    __memset
0x7B07AD: push    3Ch ; '<'
0x7B07AF: lea     ecx, [esp+424h+var_378]
0x7B07B6: push    ebx
0x7B07B7: push    ecx
0x7B07B8: mov     [esp+42Ch+var_388], offset aImagespace1xPB; "imagespace\\1x\\p\\blur.p.hlsl"
0x7B07C3: mov     [esp+42Ch+var_384], ebx
0x7B07CA: mov     [esp+42Ch+var_380], ebx
0x7B07D1: mov     [esp+42Ch+var_37C], ebx
0x7B07D8: call    __memset
0x7B07DD: push    38h ; '8'
0x7B07DF: lea     edx, [esp+430h+var_328]
0x7B07E6: push    ebx
0x7B07E7: push    edx
0x7B07E8: mov     [esp+438h+var_33C], offset aImagespace1x_1; "imagespace\\1x\\p\\blend.p.hlsl"
0x7B07F3: mov     [esp+438h+var_338], offset aSourceconst_de; "SOURCECONST_DESTCONST"
0x7B07FE: mov     [esp+438h+var_334], esi
0x7B0805: mov     [esp+438h+var_330], ebx
0x7B080C: mov     [esp+438h+var_32C], ebx
0x7B0813: call    __memset
0x7B0818: add     esp, 48h
0x7B081B: add     ebp, 0A0h ; ' '
0x7B0821: xor     eax, eax
0x7B0823: mov     [esp+3F0h+var_3E0], ebx
0x7B0827: mov     [esp+3F0h+var_3DC], eax
0x7B082B: jmp     short loc_7B0830
0x7B082D: align 10h
0x7B0830: lea     esi, [esp+eax+3F0h+var_2F0]
0x7B0837: mov     eax, [esi]
0x7B0839: cmp     eax, ebx
0x7B083B: jz      loc_7B08C7
0x7B0841: lea     ecx, [esp+3F0h+FileName]
0x7B0848: push    ecx; int
0x7B0849: push    eax; FullPath
0x7B084A: call    sub_801030
0x7B084F: mov     edx, [esp+3F8h+var_3E0]
0x7B0853: push    edx
0x7B0854: lea     eax, [esp+3FCh+var_20C]
0x7B085B: push    offset aIsblur103i_vso; "ISBLUR1%03i.vso"
0x7B0860: push    eax
0x7B0861: call    __sprintf
0x7B0866: add     esp, 14h
0x7B0869: push    ebx; int
0x7B086A: push    ebx; int
0x7B086B: lea     ecx, [esp+3F8h+var_20C]
0x7B0872: push    ecx; int
0x7B0873: mov     ecx, [esp+3FCh+var_3D8]
0x7B0877: push    offset aVs_1_1; "vs_1_1"
0x7B087C: add     esi, 4
0x7B087F: push    esi; int
0x7B0880: lea     edx, [esp+404h+FileName]
0x7B0887: push    edx; lpFileName
0x7B0888: call    CreateVertexShader
0x7B088D: mov     esi, [ebp-0Ch]
0x7B0890: mov     edi, eax
0x7B0892: cmp     esi, edi
0x7B0894: jz      short loc_7B08C7
0x7B0896: cmp     esi, ebx
0x7B0898: jz      short loc_7B08B6
0x7B089A: lea     eax, [esi+4]
0x7B089D: push    eax; lpAddend
0x7B089E: call    dword ptr ds:0A2807Ch
0x7B08A4: test    eax, eax
0x7B08A6: jnz     short loc_7B08B6
0x7B08A8: cmp     esi, ebx
0x7B08AA: jz      short loc_7B08B6
0x7B08AC: mov     edx, [esi]
0x7B08AE: mov     eax, [edx]
0x7B08B0: push    1
0x7B08B2: mov     ecx, esi
0x7B08B4: call    eax
0x7B08B6: cmp     edi, ebx
0x7B08B8: mov     [ebp-0Ch], edi
0x7B08BB: jz      short loc_7B08C7
0x7B08BD: add     edi, 4
0x7B08C0: push    edi; lpAddend
0x7B08C1: call    dword ptr ds:0A28078h
0x7B08C7: mov     esi, [esp+3F0h+var_3DC]
0x7B08CB: mov     eax, [esp+esi+3F0h+FullPath]
0x7B08CF: cmp     eax, ebx
0x7B08D1: jz      loc_7B095E
0x7B08D7: lea     ecx, [esp+3F0h+FileName]
0x7B08DE: push    ecx; int
0x7B08DF: push    eax; FullPath
0x7B08E0: call    sub_801030
0x7B08E5: mov     edx, [esp+3F8h+var_3E0]
0x7B08E9: push    edx
0x7B08EA: lea     eax, [esp+3FCh+var_20C]
0x7B08F1: push    offset aIsblur103i_pso; "ISBLUR1%03i.pso"
0x7B08F6: push    eax
0x7B08F7: call    __sprintf
0x7B08FC: add     esp, 14h
0x7B08FF: push    ebx; int
0x7B0900: push    ebx; int
0x7B0901: lea     ecx, [esp+3F8h+var_20C]
0x7B0908: push    ecx; int
0x7B0909: mov     ecx, [esp+3FCh+var_3D8]
0x7B090D: push    offset aPs_1_3; "ps_1_3"
0x7B0912: lea     edx, [esp+esi+400h+var_3D0]
0x7B0916: push    edx; int
0x7B0917: lea     eax, [esp+404h+FileName]
0x7B091E: push    eax; lpFileName
0x7B091F: call    CreatePixelShader
0x7B0924: mov     esi, [ebp+0]
0x7B0927: mov     edi, eax
0x7B0929: cmp     esi, edi
0x7B092B: jz      short loc_7B095E
0x7B092D: cmp     esi, ebx
0x7B092F: jz      short loc_7B094D
0x7B0931: lea     ecx, [esi+4]
0x7B0934: push    ecx; lpAddend
0x7B0935: call    dword ptr ds:0A2807Ch
0x7B093B: test    eax, eax
0x7B093D: jnz     short loc_7B094D
0x7B093F: cmp     esi, ebx
0x7B0941: jz      short loc_7B094D
0x7B0943: mov     edx, [esi]
0x7B0945: mov     eax, [edx]
0x7B0947: push    1
0x7B0949: mov     ecx, esi
0x7B094B: call    eax
0x7B094D: cmp     edi, ebx
0x7B094F: mov     [ebp+0], edi
0x7B0952: jz      short loc_7B095E
0x7B0954: add     edi, 4
0x7B0957: push    edi; lpAddend
0x7B0958: call    dword ptr ds:0A28078h
0x7B095E: mov     eax, [esp+3F0h+var_3DC]
0x7B0962: add     [esp+3F0h+var_3E0], 1
0x7B0967: add     eax, 4Ch ; 'L'
0x7B096A: add     ebp, 4
0x7B096D: cmp     eax, 0E4h ; 'ä'
0x7B0972: mov     [esp+3F0h+var_3DC], eax
0x7B0976: jl      loc_7B0830
0x7B097C: mov     ecx, [esp+3F0h+var_4]
0x7B0983: pop     edi
0x7B0984: pop     esi
0x7B0985: pop     ebp
0x7B0986: pop     ebx
0x7B0987: xor     ecx, esp
0x7B0989: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B098E: add     esp, 3E0h
0x7B0994: retn

0x7DFBD0: sub     esp, 478h
0x7DFBD6: mov     eax, ds:0B30AACh
0x7DFBDB: xor     eax, esp
0x7DFBDD: mov     [esp+478h+var_4], eax
0x7DFBE4: push    ebx
0x7DFBE5: push    ebp
0x7DFBE6: push    esi
0x7DFBE7: push    edi
0x7DFBE8: xor     edi, edi
0x7DFBEA: push    3Ch ; '<'
0x7DFBEC: lea     eax, [esp+48Ch+var_45C]
0x7DFBF0: mov     esi, ecx
0x7DFBF2: push    edi
0x7DFBF3: push    eax
0x7DFBF4: mov     [esp+494h+var_470], esi
0x7DFBF8: mov     [esp+494h+FullPath], offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x7DFC00: mov     [esp+494h+var_468], edi
0x7DFC04: mov     [esp+494h+var_464], edi
0x7DFC08: mov     [esp+494h+var_460], edi
0x7DFC0C: call    __memset
0x7DFC11: mov     edx, [esp+494h+FullPath]
0x7DFC15: lea     ecx, [esp+494h+FileName]
0x7DFC1C: push    ecx; int
0x7DFC1D: push    edx; FullPath
0x7DFC1E: call    sub_801030
0x7DFC23: lea     eax, [esp+49Ch+var_108]
0x7DFC2A: push    offset aWaterhmap_vso; "WATERHMAP.vso"
0x7DFC2F: push    eax
0x7DFC30: call    __sprintf
0x7DFC35: add     esp, 1Ch
0x7DFC38: push    edi; int
0x7DFC39: push    edi; int
0x7DFC3A: lea     ecx, [esp+490h+var_108]
0x7DFC41: push    ecx; int
0x7DFC42: push    offset aVs_1_1; "vs_1_1"
0x7DFC47: lea     edx, [esp+498h+var_468]
0x7DFC4B: push    edx; int
0x7DFC4C: lea     eax, [esp+49Ch+FileName]
0x7DFC53: push    eax; lpFileName
0x7DFC54: mov     ecx, esi
0x7DFC56: call    CreateVertexShader
0x7DFC5B: mov     ebx, [esi+0B0h]
0x7DFC61: mov     ebp, eax
0x7DFC63: cmp     ebx, ebp
0x7DFC65: jz      short loc_7DFC9B
0x7DFC67: cmp     ebx, edi
0x7DFC69: jz      short loc_7DFC87
0x7DFC6B: lea     ecx, [ebx+4]
0x7DFC6E: push    ecx; lpAddend
0x7DFC6F: call    dword ptr ds:0A2807Ch
0x7DFC75: test    eax, eax
0x7DFC77: jnz     short loc_7DFC87
0x7DFC79: cmp     ebx, edi
0x7DFC7B: jz      short loc_7DFC87
0x7DFC7D: mov     edx, [ebx]
0x7DFC7F: mov     eax, [edx]
0x7DFC81: push    1
0x7DFC83: mov     ecx, ebx
0x7DFC85: call    eax
0x7DFC87: cmp     ebp, edi
0x7DFC89: mov     [esi+0B0h], ebp
0x7DFC8F: jz      short loc_7DFC9B
0x7DFC91: add     ebp, 4
0x7DFC94: push    ebp; lpAddend
0x7DFC95: call    dword ptr ds:0A28078h
0x7DFC9B: cmp     dword ptr ds:0B42F48h, 2
0x7DFCA2: mov     [esp+488h+Str1], offset aPs_1_3; "ps_1_3"
0x7DFCAA: jl      short loc_7DFCB4
0x7DFCAC: mov     [esp+488h+Str1], offset aPs_2_0; "ps_2_0"
0x7DFCB4: push    3Ch ; '<'
0x7DFCB6: lea     ecx, [esp+48Ch+var_410]
0x7DFCBA: push    edi
0x7DFCBB: mov     ebp, offset aWater2_abPWa_0; "water\\2_ab\\p\\waterhmap.p.hlsl"
0x7DFCC0: mov     ebx, offset EmptyString
0x7DFCC5: push    ecx
0x7DFCC6: mov     [esp+494h+var_420], ebp
0x7DFCCA: mov     [esp+494h+var_41C], offset aWater_spectrum; "WATER_SPECTRUM"
0x7DFCD2: mov     [esp+494h+var_418], ebx
0x7DFCD6: mov     [esp+494h+var_414], edi
0x7DFCDD: call    __memset
0x7DFCE2: push    3Ch ; '<'
0x7DFCE4: lea     edx, [esp+498h+var_3C4]
0x7DFCEB: push    edi
0x7DFCEC: push    edx
0x7DFCED: mov     [esp+4A0h+var_3D4], ebp
0x7DFCF4: mov     [esp+4A0h+var_3D0], offset aHorizontal_but; "HORIZONTAL_BUTTERFLY"
0x7DFCFF: mov     [esp+4A0h+var_3CC], ebx
0x7DFD06: mov     [esp+4A0h+var_3C8], edi
0x7DFD0D: call    __memset
0x7DFD12: push    3Ch ; '<'
0x7DFD14: lea     eax, [esp+4A4h+var_378]
0x7DFD1B: push    edi
0x7DFD1C: push    eax
0x7DFD1D: mov     [esp+4ACh+var_388], ebp
0x7DFD24: mov     [esp+4ACh+var_384], offset aVertical_butte; "VERTICAL_BUTTERFLY"
0x7DFD2F: mov     [esp+4ACh+var_380], ebx
0x7DFD36: mov     [esp+4ACh+var_37C], edi
0x7DFD3D: call    __memset
0x7DFD42: push    3Ch ; '<'
0x7DFD44: lea     ecx, [esp+4B0h+var_32C]
0x7DFD4B: push    edi
0x7DFD4C: push    ecx
0x7DFD4D: mov     [esp+4B8h+var_33C], ebp
0x7DFD54: mov     [esp+4B8h+var_338], offset aHorizontal_scr; "HORIZONTAL_SCRAMBLE"
0x7DFD5F: mov     [esp+4B8h+var_334], ebx
0x7DFD66: mov     [esp+4B8h+var_330], edi
0x7DFD6D: call    __memset
0x7DFD72: push    3Ch ; '<'
0x7DFD74: lea     edx, [esp+4BCh+var_2E0]
0x7DFD7B: push    edi
0x7DFD7C: push    edx
0x7DFD7D: mov     [esp+4C4h+var_2F0], ebp
0x7DFD84: mov     [esp+4C4h+var_2EC], offset aVertical_scram; "VERTICAL_SCRAMBLE"
0x7DFD8F: mov     [esp+4C4h+var_2E8], ebx
0x7DFD96: mov     [esp+4C4h+var_2E4], edi
0x7DFD9D: call    __memset
0x7DFDA2: push    3Ch ; '<'
0x7DFDA4: lea     eax, [esp+4C8h+var_294]
0x7DFDAB: push    edi
0x7DFDAC: push    eax
0x7DFDAD: mov     [esp+4D0h+var_2A4], ebp
0x7DFDB4: mov     [esp+4D0h+var_2A0], offset aNormals; "NORMALS"
0x7DFDBF: mov     [esp+4D0h+var_29C], ebx
0x7DFDC6: mov     [esp+4D0h+var_298], edi
0x7DFDCD: call    __memset
0x7DFDD2: add     esp, 48h
0x7DFDD5: push    3Ch ; '<'
0x7DFDD7: lea     ecx, [esp+48Ch+var_248]
0x7DFDDE: push    edi
0x7DFDDF: push    ecx
0x7DFDE0: mov     [esp+494h+var_258], ebp
0x7DFDE7: mov     [esp+494h+var_254], offset aFilter; "FILTER"
0x7DFDF2: mov     [esp+494h+var_250], ebx
0x7DFDF9: mov     [esp+494h+var_24C], edi
0x7DFE00: call    __memset
0x7DFE05: lea     edx, [esp+494h+var_420]
0x7DFE09: add     esp, 0Ch
0x7DFE0C: xor     ebx, ebx
0x7DFE0E: mov     [esp+488h+var_478], edx
0x7DFE12: lea     ebp, [esi+0B4h]
0x7DFE18: mov     eax, [esp+488h+var_478]
0x7DFE1C: mov     eax, [eax]
0x7DFE1E: cmp     eax, edi
0x7DFE20: jz      loc_7DFEB1
0x7DFE26: lea     ecx, [esp+488h+FileName]
0x7DFE2D: push    ecx; int
0x7DFE2E: push    eax; FullPath
0x7DFE2F: call    sub_801030
0x7DFE34: push    ebx
0x7DFE35: lea     edx, [esp+494h+var_108]
0x7DFE3C: push    offset aWaterhmap03i_p; "WATERHMAP%03i.pso"
0x7DFE41: push    edx
0x7DFE42: call    __sprintf
0x7DFE47: mov     ecx, [esp+49Ch+Str1]
0x7DFE4B: mov     edx, [esp+49Ch+var_478]
0x7DFE4F: add     esp, 14h
0x7DFE52: push    1; int
0x7DFE54: push    edi; int
0x7DFE55: lea     eax, [esp+490h+var_108]
0x7DFE5C: push    eax; int
0x7DFE5D: push    ecx; Str1
0x7DFE5E: add     edx, 4
0x7DFE61: push    edx; int
0x7DFE62: lea     eax, [esp+49Ch+FileName]
0x7DFE69: push    eax; lpFileName
0x7DFE6A: mov     ecx, esi
0x7DFE6C: call    CreatePixelShader
0x7DFE71: mov     esi, [ebp+0]
0x7DFE74: mov     edi, eax
0x7DFE76: cmp     esi, edi
0x7DFE78: jz      short loc_7DFEAB
0x7DFE7A: test    esi, esi
0x7DFE7C: jz      short loc_7DFE9A
0x7DFE7E: lea     ecx, [esi+4]
0x7DFE81: push    ecx; lpAddend
0x7DFE82: call    dword ptr ds:0A2807Ch
0x7DFE88: test    eax, eax
0x7DFE8A: jnz     short loc_7DFE9A
0x7DFE8C: test    esi, esi
0x7DFE8E: jz      short loc_7DFE9A
0x7DFE90: mov     edx, [esi]
0x7DFE92: mov     eax, [edx]
0x7DFE94: push    1
0x7DFE96: mov     ecx, esi
0x7DFE98: call    eax
0x7DFE9A: test    edi, edi
0x7DFE9C: mov     [ebp+0], edi
0x7DFE9F: jz      short loc_7DFEAB
0x7DFEA1: add     edi, 4
0x7DFEA4: push    edi; lpAddend
0x7DFEA5: call    dword ptr ds:0A28078h
0x7DFEAB: mov     esi, [esp+488h+var_470]
0x7DFEAF: xor     edi, edi
0x7DFEB1: add     [esp+488h+var_478], 4Ch ; 'L'
0x7DFEB6: add     ebx, 1
0x7DFEB9: add     ebp, 4
0x7DFEBC: cmp     ebx, 7
0x7DFEBF: jl      loc_7DFE18
0x7DFEC5: mov     ecx, [esp+488h+var_4]
0x7DFECC: pop     edi
0x7DFECD: pop     esi
0x7DFECE: pop     ebp
0x7DFECF: pop     ebx
0x7DFED0: xor     ecx, esp
0x7DFED2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DFED7: add     esp, 478h
0x7DFEDD: retn

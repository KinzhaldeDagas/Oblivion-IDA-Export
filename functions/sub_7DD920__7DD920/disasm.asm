0x7DD920: sub     esp, 6E0h
0x7DD926: mov     eax, ds:0B30AACh
0x7DD92B: xor     eax, esp
0x7DD92D: mov     [esp+6E0h+var_4], eax
0x7DD934: push    ebx
0x7DD935: push    ebp
0x7DD936: push    esi
0x7DD937: push    edi
0x7DD938: xor     edi, edi
0x7DD93A: push    3Ch ; '<'
0x7DD93C: lea     eax, [esp+6F4h+var_45C]
0x7DD943: mov     ebp, ecx
0x7DD945: push    edi
0x7DD946: mov     ebx, offset aWater2_abVDisp; "water\\2_ab\\v\\displace.v.hlsl"
0x7DD94B: mov     esi, offset EmptyString
0x7DD950: push    eax
0x7DD951: mov     [esp+6FCh+var_6D8], ebp
0x7DD955: mov     [esp+6FCh+var_46C], ebx
0x7DD95C: mov     [esp+6FCh+var_468], offset aRipple_maker_w; "RIPPLE_MAKER_WADING"
0x7DD967: mov     [esp+6FCh+var_464], esi
0x7DD96E: mov     [esp+6FCh+var_460], edi
0x7DD975: call    __memset
0x7DD97A: push    3Ch ; '<'
0x7DD97C: lea     ecx, [esp+700h+var_410]
0x7DD983: push    edi
0x7DD984: push    ecx
0x7DD985: mov     [esp+708h+var_420], ebx
0x7DD98C: mov     [esp+708h+var_41C], offset aRipple_maker_r; "RIPPLE_MAKER_RAIN"
0x7DD997: mov     [esp+708h+var_418], esi
0x7DD99E: mov     [esp+708h+var_414], edi
0x7DD9A5: call    __memset
0x7DD9AA: push    44h ; 'D'
0x7DD9AC: lea     edx, [esp+70Ch+var_3CC]
0x7DD9B3: push    edi
0x7DD9B4: push    edx
0x7DD9B5: mov     [esp+714h+var_3D4], ebx
0x7DD9BC: mov     [esp+714h+var_3D0], edi
0x7DD9C3: call    __memset
0x7DD9C8: push    44h ; 'D'
0x7DD9CA: lea     eax, [esp+718h+var_380]
0x7DD9D1: push    edi
0x7DD9D2: push    eax
0x7DD9D3: mov     [esp+720h+var_388], ebx
0x7DD9DA: mov     [esp+720h+var_384], edi
0x7DD9E1: call    __memset
0x7DD9E6: push    44h ; 'D'
0x7DD9E8: lea     ecx, [esp+724h+var_334]
0x7DD9EF: push    edi
0x7DD9F0: push    ecx
0x7DD9F1: mov     [esp+72Ch+var_33C], ebx
0x7DD9F8: mov     [esp+72Ch+var_338], edi
0x7DD9FF: call    __memset
0x7DDA04: push    44h ; 'D'
0x7DDA06: lea     edx, [esp+730h+var_2E8]
0x7DDA0D: push    edi
0x7DDA0E: push    edx
0x7DDA0F: mov     [esp+738h+var_2F0], ebx
0x7DDA16: mov     [esp+738h+var_2EC], edi
0x7DDA1D: call    __memset
0x7DDA22: add     esp, 48h
0x7DDA25: push    44h ; 'D'
0x7DDA27: lea     eax, [esp+6F4h+var_29C]
0x7DDA2E: push    edi
0x7DDA2F: push    eax
0x7DDA30: mov     [esp+6FCh+var_2A4], ebx
0x7DDA37: mov     [esp+6FCh+var_2A0], edi
0x7DDA3E: call    __memset
0x7DDA43: push    44h ; 'D'
0x7DDA45: lea     ecx, [esp+700h+var_250]
0x7DDA4C: push    edi
0x7DDA4D: push    ecx
0x7DDA4E: mov     [esp+708h+var_258], ebx
0x7DDA55: mov     [esp+708h+var_254], edi
0x7DDA5C: call    __memset
0x7DDA61: add     esp, 18h
0x7DDA64: cmp     dword ptr ds:0B42F48h, 2
0x7DDA6B: mov     [esp+6F0h+Str1], offset aPs_1_3; "ps_1_3"
0x7DDA73: mov     [esp+6F0h+var_6D4], offset aVs_1_1; "vs_1_1"
0x7DDA7B: jl      short loc_7DDA8D
0x7DDA7D: mov     [esp+6F0h+Str1], offset aPs_2_0; "ps_2_0"
0x7DDA85: mov     [esp+6F0h+var_6D4], offset aVs_2_0; "vs_2_0"
0x7DDA8D: push    3Ch ; '<'
0x7DDA8F: lea     edx, [esp+6F4h+var_6BC]
0x7DDA93: push    edi
0x7DDA94: mov     ebx, offset aWater2_abPDisp; "water\\2_ab\\p\\displace.p.hlsl"
0x7DDA99: push    edx
0x7DDA9A: mov     [esp+6FCh+FullPath], ebx
0x7DDA9E: mov     [esp+6FCh+var_6C8], offset aRipple_maker_w; "RIPPLE_MAKER_WADING"
0x7DDAA6: mov     [esp+6FCh+var_6C4], esi
0x7DDAAA: mov     [esp+6FCh+var_6C0], edi
0x7DDAAE: call    __memset
0x7DDAB3: push    3Ch ; '<'
0x7DDAB5: lea     eax, [esp+700h+var_670]
0x7DDABC: push    edi
0x7DDABD: push    eax
0x7DDABE: mov     [esp+708h+var_680], ebx
0x7DDAC5: mov     [esp+708h+var_67C], offset aRipple_maker_r; "RIPPLE_MAKER_RAIN"
0x7DDAD0: mov     [esp+708h+var_678], esi
0x7DDAD7: mov     [esp+708h+var_674], edi
0x7DDADE: call    __memset
0x7DDAE3: push    3Ch ; '<'
0x7DDAE5: lea     ecx, [esp+70Ch+var_624]
0x7DDAEC: push    edi
0x7DDAED: push    ecx
0x7DDAEE: mov     [esp+714h+var_634], ebx
0x7DDAF5: mov     [esp+714h+var_630], offset aHeightmap_wadi; "HEIGHTMAP_WADING"
0x7DDB00: mov     [esp+714h+var_62C], esi
0x7DDB07: mov     [esp+714h+var_628], edi
0x7DDB0E: call    __memset
0x7DDB13: push    3Ch ; '<'
0x7DDB15: lea     edx, [esp+718h+var_5D8]
0x7DDB1C: push    edi
0x7DDB1D: push    edx
0x7DDB1E: mov     [esp+720h+var_5E8], ebx
0x7DDB25: mov     [esp+720h+var_5E4], offset aHeightmap_rain; "HEIGHTMAP_RAIN"
0x7DDB30: mov     [esp+720h+var_5E0], esi
0x7DDB37: mov     [esp+720h+var_5DC], edi
0x7DDB3E: call    __memset
0x7DDB43: push    3Ch ; '<'
0x7DDB45: lea     eax, [esp+724h+var_58C]
0x7DDB4C: push    edi
0x7DDB4D: push    eax
0x7DDB4E: mov     [esp+72Ch+var_59C], ebx
0x7DDB55: mov     [esp+72Ch+var_598], offset aHeightmap_smoo; "HEIGHTMAP_SMOOTH"
0x7DDB60: mov     [esp+72Ch+var_594], esi
0x7DDB67: mov     [esp+72Ch+var_590], edi
0x7DDB6E: call    __memset
0x7DDB73: push    3Ch ; '<'
0x7DDB75: lea     ecx, [esp+730h+var_540]
0x7DDB7C: push    edi
0x7DDB7D: push    ecx
0x7DDB7E: mov     [esp+738h+var_550], ebx
0x7DDB85: mov     [esp+738h+var_54C], offset aNormals; "NORMALS"
0x7DDB90: mov     [esp+738h+var_548], esi
0x7DDB97: mov     [esp+738h+var_544], edi
0x7DDB9E: call    __memset
0x7DDBA3: add     esp, 48h
0x7DDBA6: push    3Ch ; '<'
0x7DDBA8: lea     edx, [esp+6F4h+var_4F4]
0x7DDBAF: push    edi
0x7DDBB0: push    edx
0x7DDBB1: mov     [esp+6FCh+var_504], ebx
0x7DDBB8: mov     [esp+6FCh+var_500], offset aBlend_heightma; "BLEND_HEIGHTMAPS"
0x7DDBC3: mov     [esp+6FCh+var_4FC], esi
0x7DDBCA: mov     [esp+6FCh+var_4F8], edi
0x7DDBD1: call    __memset
0x7DDBD6: push    3Ch ; '<'
0x7DDBD8: lea     eax, [esp+700h+var_4A8]
0x7DDBDF: push    edi
0x7DDBE0: push    eax
0x7DDBE1: mov     [esp+708h+var_4B8], ebx
0x7DDBE8: mov     [esp+708h+var_4B4], offset aTexcoord_offse; "TEXCOORD_OFFSET"
0x7DDBF3: mov     [esp+708h+var_4B0], esi
0x7DDBFA: mov     [esp+708h+var_4AC], edi
0x7DDC01: call    __memset
0x7DDC06: add     esp, 18h
0x7DDC09: add     ebp, 0D4h ; 'Ô'
0x7DDC0F: xor     eax, eax
0x7DDC11: mov     [esp+6F0h+var_6E0], edi
0x7DDC15: mov     [esp+6F0h+var_6DC], eax
0x7DDC19: lea     esp, [esp+0]
0x7DDC20: lea     esi, [esp+eax+6F0h+var_46C]
0x7DDC27: mov     eax, [esi]
0x7DDC29: cmp     eax, edi
0x7DDC2B: jz      loc_7DDCB7
0x7DDC31: lea     ecx, [esp+6F0h+FileName]
0x7DDC38: push    ecx; int
0x7DDC39: push    eax; FullPath
0x7DDC3A: call    sub_801030
0x7DDC3F: mov     edx, [esp+6F8h+var_6E0]
0x7DDC43: push    edx
0x7DDC44: lea     eax, [esp+6FCh+var_20C]
0x7DDC4B: push    offset aWaterdisplace0; "WATERDISPLACE%03i.vso"
0x7DDC50: push    eax
0x7DDC51: call    __sprintf
0x7DDC56: mov     edx, [esp+704h+var_6D4]
0x7DDC5A: add     esp, 14h
0x7DDC5D: push    edi; int
0x7DDC5E: push    edi; int
0x7DDC5F: lea     ecx, [esp+6F8h+var_20C]
0x7DDC66: push    ecx; int
0x7DDC67: mov     ecx, [esp+6FCh+var_6D8]
0x7DDC6B: push    edx; int
0x7DDC6C: add     esi, 4
0x7DDC6F: push    esi; int
0x7DDC70: lea     eax, [esp+704h+FileName]
0x7DDC77: push    eax; lpFileName
0x7DDC78: call    CreateVertexShader
0x7DDC7D: mov     esi, [ebp-20h]
0x7DDC80: mov     ebx, eax
0x7DDC82: cmp     esi, ebx
0x7DDC84: jz      short loc_7DDCB7
0x7DDC86: cmp     esi, edi
0x7DDC88: jz      short loc_7DDCA6
0x7DDC8A: lea     ecx, [esi+4]
0x7DDC8D: push    ecx; lpAddend
0x7DDC8E: call    dword ptr ds:0A2807Ch
0x7DDC94: test    eax, eax
0x7DDC96: jnz     short loc_7DDCA6
0x7DDC98: cmp     esi, edi
0x7DDC9A: jz      short loc_7DDCA6
0x7DDC9C: mov     edx, [esi]
0x7DDC9E: mov     eax, [edx]
0x7DDCA0: push    1
0x7DDCA2: mov     ecx, esi
0x7DDCA4: call    eax
0x7DDCA6: cmp     ebx, edi
0x7DDCA8: mov     [ebp-20h], ebx
0x7DDCAB: jz      short loc_7DDCB7
0x7DDCAD: add     ebx, 4
0x7DDCB0: push    ebx; lpAddend
0x7DDCB1: call    dword ptr ds:0A28078h
0x7DDCB7: mov     esi, [esp+6F0h+var_6DC]
0x7DDCBB: mov     eax, [esp+esi+6F0h+FullPath]
0x7DDCBF: cmp     eax, edi
0x7DDCC1: jz      loc_7DDD4F
0x7DDCC7: lea     ecx, [esp+6F0h+FileName]
0x7DDCCE: push    ecx; int
0x7DDCCF: push    eax; FullPath
0x7DDCD0: call    sub_801030
0x7DDCD5: mov     edx, [esp+6F8h+var_6E0]
0x7DDCD9: push    edx
0x7DDCDA: lea     eax, [esp+6FCh+var_20C]
0x7DDCE1: push    offset aWaterdisplac_0; "WATERDISPLACE%03i.pso"
0x7DDCE6: push    eax
0x7DDCE7: call    __sprintf
0x7DDCEC: mov     edx, [esp+704h+Str1]
0x7DDCF0: add     esp, 14h
0x7DDCF3: push    1; int
0x7DDCF5: push    edi; int
0x7DDCF6: lea     ecx, [esp+6F8h+var_20C]
0x7DDCFD: push    ecx; int
0x7DDCFE: push    edx; Str1
0x7DDCFF: lea     eax, [esp+esi+700h+var_6C8]
0x7DDD03: push    eax; int
0x7DDD04: lea     ecx, [esp+704h+FileName]
0x7DDD0B: push    ecx; lpFileName
0x7DDD0C: mov     ecx, [esp+708h+var_6D8]
0x7DDD10: call    CreatePixelShader
0x7DDD15: mov     esi, [ebp+0]
0x7DDD18: mov     ebx, eax
0x7DDD1A: cmp     esi, ebx
0x7DDD1C: jz      short loc_7DDD4F
0x7DDD1E: cmp     esi, edi
0x7DDD20: jz      short loc_7DDD3E
0x7DDD22: lea     edx, [esi+4]
0x7DDD25: push    edx; lpAddend
0x7DDD26: call    dword ptr ds:0A2807Ch
0x7DDD2C: test    eax, eax
0x7DDD2E: jnz     short loc_7DDD3E
0x7DDD30: cmp     esi, edi
0x7DDD32: jz      short loc_7DDD3E
0x7DDD34: mov     eax, [esi]
0x7DDD36: mov     edx, [eax]
0x7DDD38: push    1
0x7DDD3A: mov     ecx, esi
0x7DDD3C: call    edx
0x7DDD3E: cmp     ebx, edi
0x7DDD40: mov     [ebp+0], ebx
0x7DDD43: jz      short loc_7DDD4F
0x7DDD45: add     ebx, 4
0x7DDD48: push    ebx; lpAddend
0x7DDD49: call    dword ptr ds:0A28078h
0x7DDD4F: mov     eax, [esp+6F0h+var_6DC]
0x7DDD53: add     [esp+6F0h+var_6E0], 1
0x7DDD58: add     eax, 4Ch ; 'L'
0x7DDD5B: add     ebp, 4
0x7DDD5E: cmp     eax, 260h
0x7DDD63: mov     [esp+6F0h+var_6DC], eax
0x7DDD67: jl      loc_7DDC20
0x7DDD6D: mov     ecx, [esp+6F0h+var_4]
0x7DDD74: pop     edi
0x7DDD75: pop     esi
0x7DDD76: pop     ebp
0x7DDD77: pop     ebx
0x7DDD78: xor     ecx, esp
0x7DDD7A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DDD7F: add     esp, 6E0h
0x7DDD85: retn

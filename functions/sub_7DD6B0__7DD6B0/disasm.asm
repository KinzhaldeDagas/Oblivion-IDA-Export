0x7DD6B0: push    0FFFFFFFFh
0x7DD6B2: push    offset SEH_803C90
0x7DD6B7: mov     eax, large fs:0
0x7DD6BD: push    eax
0x7DD6BE: push    ecx
0x7DD6BF: push    esi
0x7DD6C0: push    edi
0x7DD6C1: mov     eax, ds:0B30AACh
0x7DD6C6: xor     eax, esp
0x7DD6C8: push    eax
0x7DD6C9: lea     eax, [esp+1Ch+var_C]
0x7DD6CD: mov     large fs:0, eax
0x7DD6D3: mov     edi, ecx
0x7DD6D5: cmp     dword ptr [edi+2Ch], 0
0x7DD6D9: lea     esi, [edi+2Ch]
0x7DD6DC: jnz     loc_7DD813
0x7DD6E2: push    34h ; '4'; Size
0x7DD6E4: call    FormHeapAlloc
0x7DD6E9: add     esp, 4
0x7DD6EC: mov     [esp+1Ch+var_10], eax
0x7DD6F0: test    eax, eax
0x7DD6F2: mov     [esp+1Ch+var_4], 0
0x7DD6FA: jz      short loc_7DD709
0x7DD6FC: mov     ecx, [edi+14h]
0x7DD6FF: push    ecx
0x7DD700: mov     ecx, eax
0x7DD702: call    NiD3DShaderCostantMapPixel__Construct
0x7DD707: jmp     short loc_7DD70B
0x7DD709: xor     eax, eax
0x7DD70B: push    eax; a2
0x7DD70C: mov     ecx, esi; this
0x7DD70E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DD716: call    NiSmartPointer_Set??
0x7DD71B: mov     ecx, [esi]
0x7DD71D: mov     edx, [ecx]
0x7DD71F: mov     edx, [edx+18h]
0x7DD722: push    0
0x7DD724: lea     eax, [edi+110h]
0x7DD72A: push    eax
0x7DD72B: push    4
0x7DD72D: push    10h
0x7DD72F: push    offset EmptyString
0x7DD734: push    1
0x7DD736: push    0
0x7DD738: push    0
0x7DD73A: push    10000007h
0x7DD73F: push    offset aTime; "Time"
0x7DD744: call    edx
0x7DD746: mov     ecx, [esi]
0x7DD748: mov     eax, [ecx]
0x7DD74A: mov     edx, [eax+18h]
0x7DD74D: push    0
0x7DD74F: push    offset flt_B45F44
0x7DD754: push    4
0x7DD756: push    10h
0x7DD758: push    offset EmptyString
0x7DD75D: push    1
0x7DD75F: push    1
0x7DD761: push    0
0x7DD763: push    10000007h
0x7DD768: push    offset aBlendamount; "BlendAmount"
0x7DD76D: call    edx
0x7DD76F: mov     ecx, [esi]
0x7DD771: mov     eax, [ecx]
0x7DD773: mov     edx, [eax+18h]
0x7DD776: push    0
0x7DD778: push    offset flt_B45FAC
0x7DD77D: push    4
0x7DD77F: push    10h
0x7DD781: push    offset EmptyString
0x7DD786: push    1
0x7DD788: push    2
0x7DD78A: push    0
0x7DD78C: push    10000007h
0x7DD791: push    offset aTextureoffset; "TextureOffset"
0x7DD796: call    edx
0x7DD798: mov     ecx, [esi]
0x7DD79A: mov     eax, [ecx]
0x7DD79C: mov     edx, [eax+18h]
0x7DD79F: push    0
0x7DD7A1: push    offset WaterShader_DisplaceDampener
0x7DD7A6: push    4
0x7DD7A8: push    10h
0x7DD7AA: push    offset EmptyString
0x7DD7AF: push    1
0x7DD7B1: push    3
0x7DD7B3: push    0
0x7DD7B5: push    10000007h
0x7DD7BA: push    offset aFdamp; "fDamp"
0x7DD7BF: call    edx
0x7DD7C1: mov     ecx, [esi]
0x7DD7C3: mov     eax, [ecx]
0x7DD7C5: mov     edx, [eax+18h]
0x7DD7C8: push    0
0x7DD7CA: push    offset WaterShader_Rainforce
0x7DD7CF: push    4
0x7DD7D1: push    10h
0x7DD7D3: push    offset EmptyString
0x7DD7D8: push    1
0x7DD7DA: push    4
0x7DD7DC: push    0
0x7DD7DE: push    10000007h
0x7DD7E3: push    offset aRainvars; "RainVars"
0x7DD7E8: call    edx
0x7DD7EA: mov     ecx, [esi]
0x7DD7EC: mov     eax, [ecx]
0x7DD7EE: push    0
0x7DD7F0: push    offset WaterShader_DisplaceForce
0x7DD7F5: push    4
0x7DD7F7: push    10h
0x7DD7F9: mov     edx, [eax+18h]
0x7DD7FC: push    offset EmptyString
0x7DD801: push    1
0x7DD803: push    5
0x7DD805: push    0
0x7DD807: push    10000007h
0x7DD80C: push    offset aWadingvars; "WadingVars"
0x7DD811: call    edx
0x7DD813: cmp     dword ptr [edi+30h], 0
0x7DD817: lea     esi, [edi+30h]
0x7DD81A: jnz     loc_7DD901
0x7DD820: push    34h ; '4'; Size
0x7DD822: call    FormHeapAlloc
0x7DD827: add     esp, 4
0x7DD82A: mov     [esp+1Ch+var_10], eax
0x7DD82E: test    eax, eax
0x7DD830: mov     [esp+1Ch+var_4], 1
0x7DD838: jz      short loc_7DD847
0x7DD83A: mov     ecx, [edi+14h]
0x7DD83D: push    ecx
0x7DD83E: mov     ecx, eax
0x7DD840: call    NiD3DShaderCostantMapVertex__Construct
0x7DD845: jmp     short loc_7DD849
0x7DD847: xor     eax, eax
0x7DD849: push    eax; a2
0x7DD84A: mov     ecx, esi; this
0x7DD84C: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DD854: call    NiSmartPointer_Set??
0x7DD859: mov     ecx, [esi]
0x7DD85B: mov     edx, [ecx]
0x7DD85D: mov     edx, [edx+18h]
0x7DD860: push    0
0x7DD862: lea     eax, [edi+94h]
0x7DD868: push    eax
0x7DD869: push    4
0x7DD86B: push    10h
0x7DD86D: push    offset EmptyString
0x7DD872: push    1
0x7DD874: push    6
0x7DD876: push    0
0x7DD878: push    10000007h
0x7DD87D: push    offset aTexratio0; "texRatio0"
0x7DD882: call    edx
0x7DD884: mov     ecx, [esi]
0x7DD886: mov     eax, [ecx]
0x7DD888: mov     edx, [eax+18h]
0x7DD88B: push    0
0x7DD88D: add     edi, 0A4h ; '¤'
0x7DD893: push    edi
0x7DD894: push    4
0x7DD896: push    10h
0x7DD898: push    offset EmptyString
0x7DD89D: push    1
0x7DD89F: push    7
0x7DD8A1: push    0
0x7DD8A3: push    10000007h
0x7DD8A8: push    offset aTexratio1; "texRatio1"
0x7DD8AD: call    edx
0x7DD8AF: mov     ecx, [esi]
0x7DD8B1: mov     eax, [ecx]
0x7DD8B3: mov     edx, [eax+18h]
0x7DD8B6: push    0
0x7DD8B8: push    offset flt_B45F78
0x7DD8BD: push    4
0x7DD8BF: push    10h
0x7DD8C1: push    offset EmptyString
0x7DD8C6: push    1
0x7DD8C8: push    8
0x7DD8CA: push    0
0x7DD8CC: push    10000007h
0x7DD8D1: push    offset aTransmatrixrow; "TransMatrixRowOne"
0x7DD8D6: call    edx
0x7DD8D8: mov     ecx, [esi]
0x7DD8DA: mov     eax, [ecx]
0x7DD8DC: mov     edx, [eax+18h]
0x7DD8DF: push    0
0x7DD8E1: push    offset flt_B45F88
0x7DD8E6: push    4
0x7DD8E8: push    10h
0x7DD8EA: push    offset EmptyString
0x7DD8EF: push    1
0x7DD8F1: push    9
0x7DD8F3: push    0
0x7DD8F5: push    10000007h
0x7DD8FA: push    offset aTransmatrixr_0; "TransMatrixRowTwo"
0x7DD8FF: call    edx
0x7DD901: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7DD905: mov     large fs:0, ecx
0x7DD90C: pop     ecx
0x7DD90D: pop     edi
0x7DD90E: pop     esi
0x7DD90F: add     esp, 10h
0x7DD912: retn

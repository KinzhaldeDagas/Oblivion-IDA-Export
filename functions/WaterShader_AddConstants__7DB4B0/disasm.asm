0x7DB4B0: push    0FFFFFFFFh
0x7DB4B2: push    offset SEH_803C90
0x7DB4B7: mov     eax, large fs:0
0x7DB4BD: push    eax
0x7DB4BE: push    ecx
0x7DB4BF: push    esi
0x7DB4C0: push    edi
0x7DB4C1: mov     eax, ds:0B30AACh
0x7DB4C6: xor     eax, esp
0x7DB4C8: push    eax
0x7DB4C9: lea     eax, [esp+1Ch+var_C]
0x7DB4CD: mov     large fs:0, eax
0x7DB4D3: mov     edi, ecx
0x7DB4D5: cmp     dword ptr [edi+2Ch], 0
0x7DB4D9: lea     esi, [edi+2Ch]
0x7DB4DC: jnz     loc_7DB730
0x7DB4E2: push    34h ; '4'; Size
0x7DB4E4: call    FormHeapAlloc
0x7DB4E9: add     esp, 4
0x7DB4EC: mov     [esp+1Ch+var_10], eax
0x7DB4F0: test    eax, eax
0x7DB4F2: mov     [esp+1Ch+var_4], 0
0x7DB4FA: jz      short loc_7DB509
0x7DB4FC: mov     ecx, [edi+14h]
0x7DB4FF: push    ecx
0x7DB500: mov     ecx, eax
0x7DB502: call    NiD3DShaderCostantMapPixel__Construct
0x7DB507: jmp     short loc_7DB50B
0x7DB509: xor     eax, eax
0x7DB50B: push    eax; a2
0x7DB50C: mov     ecx, esi; this
0x7DB50E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DB516: call    NiSmartPointer_Set??
0x7DB51B: mov     ecx, [esi]
0x7DB51D: mov     edx, [ecx]
0x7DB51F: mov     eax, [edx+18h]
0x7DB522: push    0
0x7DB524: push    offset flt_B45E64
0x7DB529: push    4
0x7DB52B: push    10h
0x7DB52D: push    offset EmptyString
0x7DB532: push    1
0x7DB534: push    0
0x7DB536: push    0
0x7DB538: push    10000007h
0x7DB53D: push    offset aScroll; "Scroll"
0x7DB542: call    eax
0x7DB544: mov     ecx, [esi]
0x7DB546: mov     edx, [ecx]
0x7DB548: mov     eax, [edx+18h]
0x7DB54B: push    0
0x7DB54D: push    offset dword_B45DD4
0x7DB552: push    4
0x7DB554: push    10h
0x7DB556: push    offset EmptyString
0x7DB55B: push    1
0x7DB55D: push    1
0x7DB55F: push    0
0x7DB561: push    10000007h
0x7DB566: push    offset aEyepos_0; "EyePos"
0x7DB56B: call    eax
0x7DB56D: mov     ecx, [esi]
0x7DB56F: mov     edx, [ecx]
0x7DB571: mov     eax, [edx+18h]
0x7DB574: push    0
0x7DB576: push    offset flt_B45DF4
0x7DB57B: push    4
0x7DB57D: push    10h
0x7DB57F: push    offset EmptyString
0x7DB584: push    1
0x7DB586: push    2
0x7DB588: push    0
0x7DB58A: push    10000007h
0x7DB58F: push    offset aSundir; "SunDir"
0x7DB594: call    eax
0x7DB596: mov     ecx, [esi]
0x7DB598: mov     edx, [ecx]
0x7DB59A: mov     eax, [edx+18h]
0x7DB59D: push    0
0x7DB59F: push    offset flt_B45E04
0x7DB5A4: push    4
0x7DB5A6: push    10h
0x7DB5A8: push    offset EmptyString
0x7DB5AD: push    1
0x7DB5AF: push    3
0x7DB5B1: push    0
0x7DB5B3: push    10000007h
0x7DB5B8: push    offset aSuncolor; "SunColor"
0x7DB5BD: call    eax
0x7DB5BF: mov     ecx, [esi]
0x7DB5C1: mov     edx, [ecx]
0x7DB5C3: mov     eax, [edx+18h]
0x7DB5C6: push    0
0x7DB5C8: push    offset dword_B45EC4
0x7DB5CD: push    4
0x7DB5CF: push    10h
0x7DB5D1: push    offset EmptyString
0x7DB5D6: push    1
0x7DB5D8: push    4
0x7DB5DA: push    0
0x7DB5DC: push    10000007h
0x7DB5E1: push    offset aNormaloffset; "NormalOffset"
0x7DB5E6: call    eax
0x7DB5E8: mov     ecx, [esi]
0x7DB5EA: mov     edx, [ecx]
0x7DB5EC: push    0
0x7DB5EE: push    offset dword_B45E14
0x7DB5F3: push    4
0x7DB5F5: push    10h
0x7DB5F7: push    offset EmptyString
0x7DB5FC: mov     eax, [edx+18h]
0x7DB5FF: push    1
0x7DB601: push    5
0x7DB603: push    0
0x7DB605: push    10000007h
0x7DB60A: push    offset aShallowcolor; "ShallowColor"
0x7DB60F: call    eax
0x7DB611: mov     ecx, [esi]
0x7DB613: mov     edx, [ecx]
0x7DB615: mov     eax, [edx+18h]
0x7DB618: push    0
0x7DB61A: push    offset dword_B45E24
0x7DB61F: push    4
0x7DB621: push    10h
0x7DB623: push    offset EmptyString
0x7DB628: push    1
0x7DB62A: push    6
0x7DB62C: push    0
0x7DB62E: push    10000007h
0x7DB633: push    offset aDeepcolor; "DeepColor"
0x7DB638: call    eax
0x7DB63A: mov     ecx, [esi]
0x7DB63C: mov     edx, [ecx]
0x7DB63E: mov     eax, [edx+18h]
0x7DB641: push    0
0x7DB643: push    offset dword_B45E34
0x7DB648: push    4
0x7DB64A: push    10h
0x7DB64C: push    offset EmptyString
0x7DB651: push    1
0x7DB653: push    7
0x7DB655: push    0
0x7DB657: push    10000007h
0x7DB65C: push    offset aReflectioncolo; "ReflectionColor"
0x7DB661: call    eax
0x7DB663: mov     ecx, [esi]
0x7DB665: mov     edx, [ecx]
0x7DB667: mov     eax, [edx+18h]
0x7DB66A: push    0
0x7DB66C: push    offset flt_B45E44
0x7DB671: push    4
0x7DB673: push    10h
0x7DB675: push    offset EmptyString
0x7DB67A: push    1
0x7DB67C: push    8
0x7DB67E: push    0
0x7DB680: push    10000007h
0x7DB685: push    offset aVaramounts; "VarAmounts"
0x7DB68A: call    eax
0x7DB68C: mov     ecx, [esi]
0x7DB68E: mov     edx, [ecx]
0x7DB690: mov     eax, [edx+18h]
0x7DB693: push    0
0x7DB695: push    offset dword_B45E74
0x7DB69A: push    4
0x7DB69C: push    10h
0x7DB69E: push    offset EmptyString
0x7DB6A3: push    1
0x7DB6A5: push    9
0x7DB6A7: push    0
0x7DB6A9: push    10000007h
0x7DB6AE: push    offset aFogparam; "FogParam"
0x7DB6B3: call    eax
0x7DB6B5: mov     ecx, [esi]
0x7DB6B7: mov     edx, [ecx]
0x7DB6B9: mov     eax, [edx+18h]
0x7DB6BC: push    0
0x7DB6BE: push    offset dword_B45E84
0x7DB6C3: push    4
0x7DB6C5: push    10h
0x7DB6C7: push    offset EmptyString
0x7DB6CC: push    1
0x7DB6CE: push    0Ah
0x7DB6D0: push    0
0x7DB6D2: push    10000007h
0x7DB6D7: push    offset aFogcolor; "FogColor"
0x7DB6DC: call    eax
0x7DB6DE: mov     ecx, [esi]
0x7DB6E0: mov     edx, [ecx]
0x7DB6E2: push    0
0x7DB6E4: push    offset flt_B45E94
0x7DB6E9: mov     eax, [edx+18h]
0x7DB6EC: push    4
0x7DB6EE: push    10h
0x7DB6F0: push    offset EmptyString
0x7DB6F5: push    1
0x7DB6F7: push    0Bh
0x7DB6F9: push    0
0x7DB6FB: push    10000007h
0x7DB700: push    offset aFresnelri; "FresnelRI"
0x7DB705: call    eax
0x7DB707: mov     ecx, [esi]
0x7DB709: mov     edx, [ecx]
0x7DB70B: mov     eax, [edx+18h]
0x7DB70E: push    0
0x7DB710: push    offset flt_B45EB4
0x7DB715: push    4
0x7DB717: push    10h
0x7DB719: push    offset EmptyString
0x7DB71E: push    1
0x7DB720: push    0Ch
0x7DB722: push    0
0x7DB724: push    10000007h
0x7DB729: push    offset aBlendradius; "BlendRadius"
0x7DB72E: call    eax
0x7DB730: cmp     dword ptr [edi+30h], 0
0x7DB734: lea     esi, [edi+30h]
0x7DB737: jnz     loc_7DB82E
0x7DB73D: push    34h ; '4'; Size
0x7DB73F: call    FormHeapAlloc
0x7DB744: add     esp, 4
0x7DB747: mov     [esp+1Ch+var_10], eax
0x7DB74B: test    eax, eax
0x7DB74D: mov     [esp+1Ch+var_4], 1
0x7DB755: jz      short loc_7DB764
0x7DB757: mov     ecx, [edi+14h]
0x7DB75A: push    ecx
0x7DB75B: mov     ecx, eax
0x7DB75D: call    NiD3DShaderCostantMapVertex__Construct
0x7DB762: jmp     short loc_7DB766
0x7DB764: xor     eax, eax
0x7DB766: push    eax; a2
0x7DB767: mov     ecx, esi; this
0x7DB769: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DB771: call    NiSmartPointer_Set??
0x7DB776: mov     ecx, [esi]
0x7DB778: mov     edx, [ecx]
0x7DB77A: mov     eax, [edx+18h]
0x7DB77D: push    0
0x7DB77F: push    0
0x7DB781: push    0
0x7DB783: push    0
0x7DB785: push    0
0x7DB787: push    4
0x7DB789: push    0
0x7DB78B: push    0
0x7DB78D: push    20000009h
0x7DB792: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7DB797: call    eax
0x7DB799: mov     ecx, [esi]
0x7DB79B: mov     edx, [ecx]
0x7DB79D: mov     eax, [edx+1Ch]
0x7DB7A0: push    offset EmptyString
0x7DB7A5: push    4
0x7DB7A7: push    20000009h
0x7DB7AC: push    offset aWorldtranspose; "WorldTranspose"
0x7DB7B1: call    eax
0x7DB7B3: mov     ecx, [esi]
0x7DB7B5: mov     edx, [ecx]
0x7DB7B7: mov     eax, [edx+18h]
0x7DB7BA: push    0
0x7DB7BC: push    offset flt_B45EA4
0x7DB7C1: push    4
0x7DB7C3: push    10h
0x7DB7C5: push    offset EmptyString
0x7DB7CA: push    1
0x7DB7CC: push    8
0x7DB7CE: push    0
0x7DB7D0: push    10000007h
0x7DB7D5: push    offset aTile_1; "Tile"
0x7DB7DA: call    eax
0x7DB7DC: mov     ecx, [esi]
0x7DB7DE: mov     edx, [ecx]
0x7DB7E0: mov     eax, [edx+18h]
0x7DB7E3: push    0
0x7DB7E5: push    offset flt_B45ED4
0x7DB7EA: push    4
0x7DB7EC: push    10h
0x7DB7EE: push    offset EmptyString
0x7DB7F3: push    1
0x7DB7F5: push    9
0x7DB7F7: push    0
0x7DB7F9: push    10000007h
0x7DB7FE: push    offset aQposadjust; "QPosAdjust"
0x7DB803: call    eax
0x7DB805: mov     ecx, [esi]
0x7DB807: mov     edx, [ecx]
0x7DB809: mov     eax, [edx+18h]
0x7DB80C: push    0
0x7DB80E: push    offset dword_B45EE4
0x7DB813: push    4
0x7DB815: push    10h
0x7DB817: push    offset EmptyString
0x7DB81C: push    1
0x7DB81E: push    0Ah
0x7DB820: push    0
0x7DB822: push    10000007h
0x7DB827: push    offset aDepthoffset; "DepthOffset"
0x7DB82C: call    eax
0x7DB82E: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7DB832: mov     large fs:0, ecx
0x7DB839: pop     ecx
0x7DB83A: pop     edi
0x7DB83B: pop     esi
0x7DB83C: add     esp, 10h
0x7DB83F: retn

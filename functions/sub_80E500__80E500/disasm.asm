0x80E500: push    0FFFFFFFFh
0x80E502: push    offset SEH_8C8970
0x80E507: mov     eax, large fs:0
0x80E50D: push    eax
0x80E50E: push    ecx
0x80E50F: push    esi
0x80E510: push    edi
0x80E511: mov     eax, ds:0B30AACh
0x80E516: xor     eax, esp
0x80E518: push    eax
0x80E519: lea     eax, [esp+1Ch+var_C]
0x80E51D: mov     large fs:0, eax
0x80E523: mov     edi, ecx
0x80E525: cmp     dword ptr [edi+30h], 0
0x80E529: lea     esi, [edi+30h]
0x80E52C: jnz     loc_80E719
0x80E532: push    34h ; '4'; Size
0x80E534: call    FormHeapAlloc
0x80E539: add     esp, 4
0x80E53C: mov     [esp+1Ch+var_10], eax
0x80E540: test    eax, eax
0x80E542: mov     [esp+1Ch+var_4], 0
0x80E54A: jz      short loc_80E559
0x80E54C: mov     ecx, [edi+14h]
0x80E54F: push    ecx
0x80E550: mov     ecx, eax
0x80E552: call    NiD3DShaderCostantMapVertex__Construct
0x80E557: jmp     short loc_80E55B
0x80E559: xor     eax, eax
0x80E55B: push    eax; a2
0x80E55C: mov     ecx, esi; this
0x80E55E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80E566: call    NiSmartPointer_Set??
0x80E56B: mov     ecx, [esi]
0x80E56D: mov     edx, [ecx]
0x80E56F: mov     eax, [edx+18h]
0x80E572: push    0
0x80E574: push    0
0x80E576: push    0
0x80E578: push    0
0x80E57A: push    0
0x80E57C: push    4
0x80E57E: push    0
0x80E580: push    0
0x80E582: push    20000009h
0x80E587: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x80E58C: call    eax
0x80E58E: mov     ecx, [esi]
0x80E590: mov     edx, [ecx]
0x80E592: mov     eax, [edx+18h]
0x80E595: push    0
0x80E597: push    offset dword_B46498
0x80E59C: push    4
0x80E59E: push    10h
0x80E5A0: push    offset EmptyString
0x80E5A5: push    1
0x80E5A7: push    5
0x80E5A9: push    0
0x80E5AB: push    10000007h
0x80E5B0: push    offset aAmbientColor; "Ambient Color"
0x80E5B5: call    eax
0x80E5B7: mov     ecx, [esi]
0x80E5B9: mov     edx, [ecx]
0x80E5BB: mov     eax, [edx+18h]
0x80E5BE: push    0
0x80E5C0: push    offset dword_B464A8
0x80E5C5: push    4
0x80E5C7: push    10h
0x80E5C9: push    offset EmptyString
0x80E5CE: push    1
0x80E5D0: push    6
0x80E5D2: push    0
0x80E5D4: push    10000007h
0x80E5D9: push    offset aDiffColor0; "Diff Color 0"
0x80E5DE: call    eax
0x80E5E0: mov     ecx, [esi]
0x80E5E2: mov     edx, [ecx]
0x80E5E4: mov     eax, [edx+18h]
0x80E5E7: push    0
0x80E5E9: push    offset unk_B464B8
0x80E5EE: push    4
0x80E5F0: push    10h
0x80E5F2: push    offset EmptyString
0x80E5F7: push    1
0x80E5F9: push    7
0x80E5FB: push    0
0x80E5FD: push    10000007h
0x80E602: push    offset aDiffColor1; "Diff Color 1"
0x80E607: call    eax
0x80E609: mov     ecx, [esi]
0x80E60B: mov     edx, [ecx]
0x80E60D: mov     edx, [edx+18h]
0x80E610: push    0
0x80E612: lea     eax, [edi+0A8h]
0x80E618: push    eax
0x80E619: push    4
0x80E61B: push    10h
0x80E61D: push    offset EmptyString
0x80E622: push    1
0x80E624: push    8
0x80E626: push    0
0x80E628: push    10000007h
0x80E62D: push    offset aDirectronall_3; "DirectronalLightDir"
0x80E632: call    edx
0x80E634: mov     ecx, [esi]
0x80E636: mov     eax, [ecx]
0x80E638: push    0
0x80E63A: add     edi, 98h ; '˜'
0x80E640: push    edi
0x80E641: push    4
0x80E643: mov     edx, [eax+18h]
0x80E646: push    10h
0x80E648: push    offset EmptyString
0x80E64D: push    1
0x80E64F: push    9
0x80E651: push    0
0x80E653: push    10000007h
0x80E658: push    offset aPointlightpos; "PointLightPos"
0x80E65D: call    edx
0x80E65F: mov     ecx, [esi]
0x80E661: mov     eax, [ecx]
0x80E663: mov     edx, [eax+18h]
0x80E666: push    0
0x80E668: push    offset flt_B465A8
0x80E66D: push    4
0x80E66F: push    10h
0x80E671: push    offset EmptyString
0x80E676: push    1
0x80E678: push    0Ah
0x80E67A: push    0
0x80E67C: push    10000007h
0x80E681: push    offset aLightradius; "LightRadius"
0x80E686: call    edx
0x80E688: mov     ecx, [esi]
0x80E68A: mov     eax, [ecx]
0x80E68C: mov     edx, [eax+18h]
0x80E68F: push    0
0x80E691: push    offset dword_B46638
0x80E696: push    4
0x80E698: push    10h
0x80E69A: push    offset EmptyString
0x80E69F: push    1
0x80E6A1: push    0Eh
0x80E6A3: push    0
0x80E6A5: push    10000007h
0x80E6AA: push    offset aFogparamShadow; "FogParam | ShadowVolumeFatness"
0x80E6AF: call    edx
0x80E6B1: mov     ecx, [esi]
0x80E6B3: mov     eax, [ecx]
0x80E6B5: mov     edx, [eax+18h]
0x80E6B8: push    0
0x80E6BA: push    offset dword_B46648
0x80E6BF: push    4
0x80E6C1: push    10h
0x80E6C3: push    offset EmptyString
0x80E6C8: push    1
0x80E6CA: push    0Fh
0x80E6CC: push    0
0x80E6CE: push    10000007h
0x80E6D3: push    offset aFogcolorShadow; "FogColor | ShadowVolumeExtrudeDistance"
0x80E6D8: call    edx
0x80E6DA: cmp     byte ptr ds:0B43070h, 0
0x80E6E1: jz      short loc_80E70C
0x80E6E3: mov     ecx, [esi]
0x80E6E5: mov     eax, [ecx]
0x80E6E7: mov     edx, [eax+18h]
0x80E6EA: push    0
0x80E6EC: push    offset flt_B42EA8
0x80E6F1: push    4
0x80E6F3: push    4
0x80E6F5: push    offset EmptyString
0x80E6FA: push    1
0x80E6FC: push    10h
0x80E6FE: push    0
0x80E700: push    10000004h
0x80E705: push    offset aTreeDimmer; "Tree Dimmer"
0x80E70A: call    edx
0x80E70C: mov     eax, [esi]
0x80E70E: push    11h
0x80E710: push    eax
0x80E711: call    sub_7F16F0
0x80E716: add     esp, 8
0x80E719: mov     ecx, dword ptr [esp+1Ch+var_C]
0x80E71D: mov     large fs:0, ecx
0x80E724: pop     ecx
0x80E725: pop     edi
0x80E726: pop     esi
0x80E727: add     esp, 10h
0x80E72A: retn

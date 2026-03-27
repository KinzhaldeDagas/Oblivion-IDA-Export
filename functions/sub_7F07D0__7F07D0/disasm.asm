0x7F07D0: push    0FFFFFFFFh
0x7F07D2: push    offset SEH_8C8970
0x7F07D7: mov     eax, large fs:0
0x7F07DD: push    eax
0x7F07DE: push    ecx
0x7F07DF: push    esi
0x7F07E0: push    edi
0x7F07E1: mov     eax, ds:0B30AACh
0x7F07E6: xor     eax, esp
0x7F07E8: push    eax
0x7F07E9: lea     eax, [esp+1Ch+var_C]
0x7F07ED: mov     large fs:0, eax
0x7F07F3: mov     edi, ecx
0x7F07F5: cmp     dword ptr [edi+30h], 0
0x7F07F9: lea     esi, [edi+30h]
0x7F07FC: jnz     loc_7F09BE
0x7F0802: push    34h ; '4'; Size
0x7F0804: call    FormHeapAlloc
0x7F0809: add     esp, 4
0x7F080C: mov     [esp+1Ch+var_10], eax
0x7F0810: test    eax, eax
0x7F0812: mov     [esp+1Ch+var_4], 0
0x7F081A: jz      short loc_7F0829
0x7F081C: mov     ecx, [edi+14h]
0x7F081F: push    ecx
0x7F0820: mov     ecx, eax
0x7F0822: call    NiD3DShaderCostantMapVertex__Construct
0x7F0827: jmp     short loc_7F082B
0x7F0829: xor     eax, eax
0x7F082B: push    eax; a2
0x7F082C: mov     ecx, esi; this
0x7F082E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F0836: call    NiSmartPointer_Set??
0x7F083B: mov     ecx, [esi]
0x7F083D: mov     edx, [ecx]
0x7F083F: mov     eax, [edx+18h]
0x7F0842: push    0
0x7F0844: push    0
0x7F0846: push    0
0x7F0848: push    0
0x7F084A: push    0
0x7F084C: push    4
0x7F084E: push    0
0x7F0850: push    0
0x7F0852: push    20000009h
0x7F0857: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7F085C: call    eax
0x7F085E: mov     ecx, [esi]
0x7F0860: mov     edx, [ecx]
0x7F0862: mov     eax, [edx+18h]
0x7F0865: push    0
0x7F0867: push    offset dword_B46498
0x7F086C: push    4
0x7F086E: push    10h
0x7F0870: push    offset EmptyString
0x7F0875: push    1
0x7F0877: push    5
0x7F0879: push    0
0x7F087B: push    10000007h
0x7F0880: push    offset aAmbientColor; "Ambient Color"
0x7F0885: call    eax
0x7F0887: mov     ecx, [esi]
0x7F0889: mov     edx, [ecx]
0x7F088B: mov     eax, [edx+18h]
0x7F088E: push    0
0x7F0890: push    offset dword_B464A8
0x7F0895: push    4
0x7F0897: push    10h
0x7F0899: push    offset EmptyString
0x7F089E: push    1
0x7F08A0: push    6
0x7F08A2: push    0
0x7F08A4: push    10000007h
0x7F08A9: push    offset aDiffColor0; "Diff Color 0"
0x7F08AE: call    eax
0x7F08B0: mov     ecx, [esi]
0x7F08B2: mov     edx, [ecx]
0x7F08B4: mov     eax, [edx+18h]
0x7F08B7: push    0
0x7F08B9: push    offset unk_B464B8
0x7F08BE: push    4
0x7F08C0: push    10h
0x7F08C2: push    offset EmptyString
0x7F08C7: push    1
0x7F08C9: push    7
0x7F08CB: push    0
0x7F08CD: push    10000007h
0x7F08D2: push    offset aDiffColor1; "Diff Color 1"
0x7F08D7: call    eax
0x7F08D9: mov     ecx, [esi]
0x7F08DB: mov     edx, [ecx]
0x7F08DD: mov     eax, [edx+18h]
0x7F08E0: push    0
0x7F08E2: push    offset dword_B46638
0x7F08E7: push    4
0x7F08E9: push    10h
0x7F08EB: push    offset EmptyString
0x7F08F0: push    1
0x7F08F2: push    8
0x7F08F4: push    0
0x7F08F6: push    10000007h
0x7F08FB: push    offset aFogparamShadow; "FogParam | ShadowVolumeFatness"
0x7F0900: call    eax
0x7F0902: mov     ecx, [esi]
0x7F0904: mov     edx, [ecx]
0x7F0906: push    0
0x7F0908: push    offset dword_B46648
0x7F090D: push    4
0x7F090F: push    10h
0x7F0911: push    offset EmptyString
0x7F0916: mov     eax, [edx+18h]
0x7F0919: push    1
0x7F091B: push    9
0x7F091D: push    0
0x7F091F: push    10000007h
0x7F0924: push    offset aFogcolorShadow; "FogColor | ShadowVolumeExtrudeDistance"
0x7F0929: call    eax
0x7F092B: cmp     byte ptr ds:0B43070h, 0
0x7F0932: jz      short loc_7F095D
0x7F0934: mov     ecx, [esi]
0x7F0936: mov     edx, [ecx]
0x7F0938: mov     eax, [edx+18h]
0x7F093B: push    0
0x7F093D: push    offset flt_B42EA8
0x7F0942: push    4
0x7F0944: push    4
0x7F0946: push    offset EmptyString
0x7F094B: push    1
0x7F094D: push    0Ah
0x7F094F: push    0
0x7F0951: push    10000004h
0x7F0956: push    offset aTreeDimmer; "Tree Dimmer"
0x7F095B: call    eax
0x7F095D: mov     ecx, [esi]
0x7F095F: mov     edx, [ecx]
0x7F0961: mov     eax, [edx+18h]
0x7F0964: push    0
0x7F0966: push    offset dword_B46738
0x7F096B: push    4
0x7F096D: push    60h ; '`'
0x7F096F: push    offset EmptyString
0x7F0974: push    6
0x7F0976: push    0Bh
0x7F0978: push    0
0x7F097A: push    10000009h
0x7F097F: push    offset aGroupedConstan; "grouped constants"
0x7F0984: call    eax
0x7F0986: mov     ecx, [esi]
0x7F0988: push    11h
0x7F098A: push    ecx
0x7F098B: call    sub_7F16F0
0x7F0990: mov     ecx, [esi]
0x7F0992: mov     edx, [ecx]
0x7F0994: mov     eax, [edx+18h]
0x7F0997: add     esp, 8
0x7F099A: push    0
0x7F099C: add     edi, 7Ch ; '|'
0x7F099F: push    edi
0x7F09A0: push    4
0x7F09A2: push    300h
0x7F09A7: push    offset EmptyString
0x7F09AC: push    30h ; '0'
0x7F09AE: push    22h ; '"'
0x7F09B0: push    0
0x7F09B2: push    10000009h
0x7F09B7: push    offset aLeafData; "leaf data"
0x7F09BC: call    eax
0x7F09BE: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7F09C2: mov     large fs:0, ecx
0x7F09C9: pop     ecx
0x7F09CA: pop     edi
0x7F09CB: pop     esi
0x7F09CC: add     esp, 10h
0x7F09CF: retn

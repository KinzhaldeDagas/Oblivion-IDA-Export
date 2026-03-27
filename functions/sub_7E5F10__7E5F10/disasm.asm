0x7E5F10: push    0FFFFFFFFh
0x7E5F12: push    offset SEH_8122A0
0x7E5F17: mov     eax, large fs:0
0x7E5F1D: push    eax
0x7E5F1E: push    ecx
0x7E5F1F: push    ebp
0x7E5F20: push    esi
0x7E5F21: push    edi
0x7E5F22: mov     eax, ds:0B30AACh
0x7E5F27: xor     eax, esp
0x7E5F29: push    eax
0x7E5F2A: lea     eax, [esp+20h+var_C]
0x7E5F2E: mov     large fs:0, eax
0x7E5F34: mov     edi, ecx
0x7E5F36: cmp     dword ptr [edi+30h], 0
0x7E5F3A: lea     esi, [edi+30h]
0x7E5F3D: jnz     loc_7E608F
0x7E5F43: push    34h ; '4'; Size
0x7E5F45: call    FormHeapAlloc
0x7E5F4A: add     esp, 4
0x7E5F4D: mov     [esp+20h+var_10], eax
0x7E5F51: test    eax, eax
0x7E5F53: mov     [esp+20h+var_4], 0
0x7E5F5B: jz      short loc_7E5F6A
0x7E5F5D: mov     ecx, [edi+14h]
0x7E5F60: push    ecx
0x7E5F61: mov     ecx, eax
0x7E5F63: call    NiD3DShaderCostantMapVertex__Construct
0x7E5F68: jmp     short loc_7E5F6C
0x7E5F6A: xor     eax, eax
0x7E5F6C: push    eax; a2
0x7E5F6D: mov     ecx, esi; this
0x7E5F6F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E5F77: call    NiSmartPointer_Set??
0x7E5F7C: mov     ecx, [esi]
0x7E5F7E: mov     edx, [ecx]
0x7E5F80: mov     eax, [edx+18h]
0x7E5F83: push    0
0x7E5F85: push    0
0x7E5F87: push    0
0x7E5F89: push    0
0x7E5F8B: push    0
0x7E5F8D: push    4
0x7E5F8F: push    9
0x7E5F91: push    0
0x7E5F93: push    20000009h
0x7E5F98: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7E5F9D: call    eax
0x7E5F9F: mov     ecx, [esi]
0x7E5FA1: mov     edx, [ecx]
0x7E5FA3: mov     eax, [edx+18h]
0x7E5FA6: push    0
0x7E5FA8: push    offset flt_B44EF8
0x7E5FAD: push    4
0x7E5FAF: push    10h
0x7E5FB1: push    offset EmptyString
0x7E5FB6: push    1
0x7E5FB8: push    0Dh
0x7E5FBA: push    0
0x7E5FBC: push    10000007h
0x7E5FC1: push    offset aShadowprojtran; "ShadowProjTransform"
0x7E5FC6: call    eax
0x7E5FC8: mov     ecx, [esi]
0x7E5FCA: mov     edx, [ecx]
0x7E5FCC: mov     eax, [edx+18h]
0x7E5FCF: push    0
0x7E5FD1: push    offset dword_B46638
0x7E5FD6: push    4
0x7E5FD8: push    10h
0x7E5FDA: push    offset EmptyString
0x7E5FDF: push    1
0x7E5FE1: push    0Fh
0x7E5FE3: push    0
0x7E5FE5: push    10000007h
0x7E5FEA: push    offset aFogparam_0; "fogparam"
0x7E5FEF: call    eax
0x7E5FF1: mov     ecx, [esi]
0x7E5FF3: mov     edx, [ecx]
0x7E5FF5: mov     eax, [edx+18h]
0x7E5FF8: push    0
0x7E5FFA: push    offset dword_B46648
0x7E5FFF: push    4
0x7E6001: push    10h
0x7E6003: push    offset EmptyString
0x7E6008: push    1
0x7E600A: push    0Eh
0x7E600C: push    0
0x7E600E: push    10000007h
0x7E6013: push    offset aFogcolor_0; "fogcolor"
0x7E6018: call    eax
0x7E601A: mov     ecx, [esi]
0x7E601C: mov     edx, [ecx]
0x7E601E: mov     eax, [edx+18h]
0x7E6021: push    0
0x7E6023: push    offset dword_B46070
0x7E6028: push    4
0x7E602A: push    90h
0x7E602F: push    offset EmptyString
0x7E6034: push    9
0x7E6036: push    0
0x7E6038: push    0
0x7E603A: push    10000009h
0x7E603F: push    offset aGroupedConstan; "grouped constants"
0x7E6044: call    eax
0x7E6046: mov     ebp, [edi+158h]
0x7E604C: mov     ecx, [esi]
0x7E604E: movzx   eax, word ptr [edi+160h]
0x7E6055: mov     edx, [ecx]
0x7E6057: push    0
0x7E6059: push    ebp
0x7E605A: push    4
0x7E605C: mov     ebp, eax
0x7E605E: shl     ebp, 4
0x7E6061: push    ebp
0x7E6062: push    offset EmptyString
0x7E6067: push    eax
0x7E6068: mov     eax, [edx+18h]
0x7E606B: push    14h
0x7E606D: push    0
0x7E606F: push    10000009h
0x7E6074: push    offset aInstanceData; "instance data"
0x7E6079: call    eax
0x7E607B: mov     ecx, [esi]
0x7E607D: mov     edx, [ecx]
0x7E607F: mov     eax, [edx+38h]
0x7E6082: push    offset aInstanceData; "instance data"
0x7E6087: call    eax
0x7E6089: mov     [edi+15Ch], eax
0x7E608F: cmp     dword ptr [edi+2Ch], 0
0x7E6093: lea     esi, [edi+2Ch]
0x7E6096: jnz     loc_7E6156
0x7E609C: push    34h ; '4'; Size
0x7E609E: call    FormHeapAlloc
0x7E60A3: add     esp, 4
0x7E60A6: mov     [esp+20h+var_10], eax
0x7E60AA: test    eax, eax
0x7E60AC: mov     [esp+20h+var_4], 1
0x7E60B4: jz      short loc_7E60C3
0x7E60B6: mov     ecx, [edi+14h]
0x7E60B9: push    ecx
0x7E60BA: mov     ecx, eax
0x7E60BC: call    NiD3DShaderCostantMapPixel__Construct
0x7E60C1: jmp     short loc_7E60C5
0x7E60C3: xor     eax, eax
0x7E60C5: push    eax; a2
0x7E60C6: mov     ecx, esi; this
0x7E60C8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E60D0: call    NiSmartPointer_Set??
0x7E60D5: mov     ecx, [esi]
0x7E60D7: mov     edx, [ecx]
0x7E60D9: mov     edx, [edx+18h]
0x7E60DC: push    0
0x7E60DE: lea     eax, [edi+164h]
0x7E60E4: push    eax
0x7E60E5: push    4
0x7E60E7: push    10h
0x7E60E9: push    offset EmptyString
0x7E60EE: push    1
0x7E60F0: push    2
0x7E60F2: push    0
0x7E60F4: push    10000007h
0x7E60F9: push    offset aPointLightColo; "point light color"
0x7E60FE: call    edx
0x7E6100: mov     ecx, [esi]
0x7E6102: mov     eax, [ecx]
0x7E6104: mov     eax, [eax+18h]
0x7E6107: push    0
0x7E6109: lea     edx, [edi+174h]
0x7E610F: push    edx
0x7E6110: push    4
0x7E6112: push    10h
0x7E6114: push    offset EmptyString
0x7E6119: push    1
0x7E611B: push    4
0x7E611D: push    0
0x7E611F: push    10000007h
0x7E6124: push    offset aPointLightData; "point light data"
0x7E6129: call    eax
0x7E612B: mov     ecx, [esi]
0x7E612D: mov     edx, [ecx]
0x7E612F: mov     edx, [edx+18h]
0x7E6132: push    0
0x7E6134: lea     eax, [edi+184h]
0x7E613A: push    eax
0x7E613B: push    4
0x7E613D: push    10h
0x7E613F: push    offset EmptyString
0x7E6144: push    1
0x7E6146: push    3
0x7E6148: push    0
0x7E614A: push    10000007h
0x7E614F: push    offset aAlphaTestRef; "alpha test ref"
0x7E6154: call    edx
0x7E6156: mov     eax, [esp+20h+a2]
0x7E615A: push    eax; a2
0x7E615B: mov     ecx, edi; this
0x7E615D: call    sub_77AA60
0x7E6162: mov     ecx, dword ptr [esp+20h+var_C]
0x7E6166: mov     large fs:0, ecx
0x7E616D: pop     ecx
0x7E616E: pop     edi
0x7E616F: pop     esi
0x7E6170: pop     ebp
0x7E6171: add     esp, 10h
0x7E6174: retn    4

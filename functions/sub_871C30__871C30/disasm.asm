0x871C30: push    0FFFFFFFFh
0x871C32: push    offset SEH_871C30
0x871C37: mov     eax, large fs:0
0x871C3D: push    eax
0x871C3E: sub     esp, 10h
0x871C41: push    ebx
0x871C42: push    ebp
0x871C43: push    esi
0x871C44: push    edi
0x871C45: mov     eax, ds:0B30AACh
0x871C4A: xor     eax, esp
0x871C4C: push    eax
0x871C4D: lea     eax, [esp+30h+var_C]
0x871C51: mov     large fs:0, eax
0x871C57: mov     [esp+30h+var_18], ecx
0x871C5B: xor     edi, edi
0x871C5D: xor     esi, esi
0x871C5F: mov     [esp+30h+var_14], edi
0x871C63: mov     [esp+30h+var_4], esi
0x871C67: mov     [esp+30h+var_1C], esi
0x871C6B: mov     eax, ds:0B476F8h
0x871C70: cmp     eax, esi
0x871C72: mov     ebx, 1
0x871C77: mov     byte ptr [esp+30h+var_4], bl
0x871C7B: jz      short loc_871C8A
0x871C7D: mov     edi, eax
0x871C7F: cmp     edi, esi
0x871C81: mov     [esp+30h+var_14], edi
0x871C85: jz      short loc_871C8A
0x871C87: add     [edi+60h], ebx
0x871C8A: mov     eax, [edi+18h]
0x871C8D: or      ebp, 0FFFFFFFFh
0x871C90: cmp     eax, 6
0x871C93: jnb     loc_871F2D
0x871C99: lea     eax, [esp+30h+var_10]
0x871C9D: push    eax
0x871C9E: call    sub_772630
0x871CA3: add     esp, 4
0x871CA6: mov     eax, [eax]
0x871CA8: test    eax, eax
0x871CAA: jz      short loc_871CB5
0x871CAC: mov     esi, eax
0x871CAE: add     [esi+5Ch], ebx
0x871CB1: mov     [esp+30h+var_1C], esi
0x871CB5: mov     eax, [esp+30h+var_10]
0x871CB9: test    eax, eax
0x871CBB: mov     byte ptr [esp+30h+var_4], 1
0x871CC0: jz      short loc_871CD4
0x871CC2: add     [eax+5Ch], ebp
0x871CC5: mov     ecx, eax
0x871CC7: add     eax, 5Ch ; '\'
0x871CCA: cmp     dword ptr [eax], 0
0x871CCD: jnz     short loc_871CD4
0x871CCF: call    sub_772560
0x871CD4: push    2
0x871CD6: push    1
0x871CD8: push    0
0x871CDA: push    esi
0x871CDB: call    sub_801110
0x871CE0: mov     ecx, [edi+14h]
0x871CE3: add     esp, 10h
0x871CE6: push    esi; a3
0x871CE7: push    ecx; a2
0x871CE8: mov     ecx, edi; this
0x871CEA: call    sub_760010
0x871CEF: lea     edx, [esp+30h+var_10]
0x871CF3: push    edx
0x871CF4: call    sub_772630
0x871CF9: add     esp, 4
0x871CFC: mov     ebx, eax
0x871CFE: cmp     esi, [ebx]
0x871D00: mov     byte ptr [esp+30h+var_4], 3
0x871D05: jz      short loc_871D25
0x871D07: test    esi, esi
0x871D09: jz      short loc_871D17
0x871D0B: add     [esi+5Ch], ebp
0x871D0E: jnz     short loc_871D17
0x871D10: mov     ecx, esi
0x871D12: call    sub_772560
0x871D17: mov     esi, [ebx]
0x871D19: test    esi, esi
0x871D1B: mov     [esp+30h+var_1C], esi
0x871D1F: jz      short loc_871D25
0x871D21: add     dword ptr [esi+5Ch], 1
0x871D25: mov     eax, [esp+30h+var_10]
0x871D29: test    eax, eax
0x871D2B: mov     byte ptr [esp+30h+var_4], 1
0x871D30: jz      short loc_871D44
0x871D32: add     [eax+5Ch], ebp
0x871D35: mov     ecx, eax
0x871D37: add     eax, 5Ch ; '\'
0x871D3A: cmp     dword ptr [eax], 0
0x871D3D: jnz     short loc_871D44
0x871D3F: call    sub_772560
0x871D44: push    2
0x871D46: push    1
0x871D48: push    1
0x871D4A: push    esi
0x871D4B: call    sub_801110
0x871D50: mov     eax, [edi+14h]
0x871D53: add     esp, 10h
0x871D56: push    esi; a3
0x871D57: push    eax; a2
0x871D58: mov     ecx, edi; this
0x871D5A: call    sub_760010
0x871D5F: lea     ecx, [esp+30h+var_10]
0x871D63: push    ecx
0x871D64: call    sub_772630
0x871D69: add     esp, 4
0x871D6C: mov     ebx, eax
0x871D6E: cmp     esi, [ebx]
0x871D70: mov     byte ptr [esp+30h+var_4], 4
0x871D75: jz      short loc_871D95
0x871D77: test    esi, esi
0x871D79: jz      short loc_871D87
0x871D7B: add     [esi+5Ch], ebp
0x871D7E: jnz     short loc_871D87
0x871D80: mov     ecx, esi
0x871D82: call    sub_772560
0x871D87: mov     esi, [ebx]
0x871D89: test    esi, esi
0x871D8B: mov     [esp+30h+var_1C], esi
0x871D8F: jz      short loc_871D95
0x871D91: add     dword ptr [esi+5Ch], 1
0x871D95: mov     eax, [esp+30h+var_10]
0x871D99: test    eax, eax
0x871D9B: mov     byte ptr [esp+30h+var_4], 1
0x871DA0: jz      short loc_871DB4
0x871DA2: add     [eax+5Ch], ebp
0x871DA5: mov     ecx, eax
0x871DA7: add     eax, 5Ch ; '\'
0x871DAA: cmp     dword ptr [eax], 0
0x871DAD: jnz     short loc_871DB4
0x871DAF: call    sub_772560
0x871DB4: push    2
0x871DB6: push    1
0x871DB8: push    2
0x871DBA: push    esi
0x871DBB: call    sub_801110
0x871DC0: mov     edx, [edi+14h]
0x871DC3: add     esp, 10h
0x871DC6: push    esi; a3
0x871DC7: push    edx; a2
0x871DC8: mov     ecx, edi; this
0x871DCA: call    sub_760010
0x871DCF: lea     eax, [esp+30h+var_10]
0x871DD3: push    eax
0x871DD4: call    sub_772630
0x871DD9: add     esp, 4
0x871DDC: mov     ebx, eax
0x871DDE: cmp     esi, [ebx]
0x871DE0: mov     byte ptr [esp+30h+var_4], 5
0x871DE5: jz      short loc_871E05
0x871DE7: test    esi, esi
0x871DE9: jz      short loc_871DF7
0x871DEB: add     [esi+5Ch], ebp
0x871DEE: jnz     short loc_871DF7
0x871DF0: mov     ecx, esi
0x871DF2: call    sub_772560
0x871DF7: mov     esi, [ebx]
0x871DF9: test    esi, esi
0x871DFB: mov     [esp+30h+var_1C], esi
0x871DFF: jz      short loc_871E05
0x871E01: add     dword ptr [esi+5Ch], 1
0x871E05: mov     eax, [esp+30h+var_10]
0x871E09: test    eax, eax
0x871E0B: mov     byte ptr [esp+30h+var_4], 1
0x871E10: jz      short loc_871E24
0x871E12: add     [eax+5Ch], ebp
0x871E15: mov     ecx, eax
0x871E17: add     eax, 5Ch ; '\'
0x871E1A: cmp     dword ptr [eax], 0
0x871E1D: jnz     short loc_871E24
0x871E1F: call    sub_772560
0x871E24: mov     ecx, ds:0B43110h
0x871E2A: push    ecx; a2
0x871E2B: mov     ecx, esi; this
0x871E2D: call    sub_76C910
0x871E32: push    0
0x871E34: push    3
0x871E36: push    3
0x871E38: push    esi
0x871E39: call    sub_801110
0x871E3E: mov     edx, [edi+14h]
0x871E41: add     esp, 10h
0x871E44: push    esi; a3
0x871E45: push    edx; a2
0x871E46: mov     ecx, edi; this
0x871E48: call    sub_760010
0x871E4D: lea     eax, [esp+30h+var_10]
0x871E51: push    eax
0x871E52: call    sub_772630
0x871E57: add     esp, 4
0x871E5A: mov     ebx, eax
0x871E5C: cmp     esi, [ebx]
0x871E5E: mov     byte ptr [esp+30h+var_4], 6
0x871E63: jz      short loc_871E83
0x871E65: test    esi, esi
0x871E67: jz      short loc_871E75
0x871E69: add     [esi+5Ch], ebp
0x871E6C: jnz     short loc_871E75
0x871E6E: mov     ecx, esi
0x871E70: call    sub_772560
0x871E75: mov     esi, [ebx]
0x871E77: test    esi, esi
0x871E79: mov     [esp+30h+var_1C], esi
0x871E7D: jz      short loc_871E83
0x871E7F: add     dword ptr [esi+5Ch], 1
0x871E83: mov     eax, [esp+30h+var_10]
0x871E87: test    eax, eax
0x871E89: mov     byte ptr [esp+30h+var_4], 1
0x871E8E: jz      short loc_871EA2
0x871E90: add     [eax+5Ch], ebp
0x871E93: mov     ecx, eax
0x871E95: add     eax, 5Ch ; '\'
0x871E98: cmp     dword ptr [eax], 0
0x871E9B: jnz     short loc_871EA2
0x871E9D: call    sub_772560
0x871EA2: push    2
0x871EA4: push    1
0x871EA6: push    4
0x871EA8: push    esi
0x871EA9: call    sub_801110
0x871EAE: mov     ecx, [edi+14h]
0x871EB1: add     esp, 10h
0x871EB4: push    esi; a3
0x871EB5: push    ecx; a2
0x871EB6: mov     ecx, edi; this
0x871EB8: call    sub_760010
0x871EBD: lea     edx, [esp+30h+var_10]
0x871EC1: push    edx
0x871EC2: call    sub_772630
0x871EC7: add     esp, 4
0x871ECA: mov     ebx, eax
0x871ECC: cmp     esi, [ebx]
0x871ECE: mov     byte ptr [esp+30h+var_4], 7
0x871ED3: jz      short loc_871EF3
0x871ED5: test    esi, esi
0x871ED7: jz      short loc_871EE5
0x871ED9: add     [esi+5Ch], ebp
0x871EDC: jnz     short loc_871EE5
0x871EDE: mov     ecx, esi
0x871EE0: call    sub_772560
0x871EE5: mov     esi, [ebx]
0x871EE7: test    esi, esi
0x871EE9: mov     [esp+30h+var_1C], esi
0x871EED: jz      short loc_871EF3
0x871EEF: add     dword ptr [esi+5Ch], 1
0x871EF3: mov     eax, [esp+30h+var_10]
0x871EF7: test    eax, eax
0x871EF9: mov     byte ptr [esp+30h+var_4], 1
0x871EFE: jz      short loc_871F12
0x871F00: add     [eax+5Ch], ebp
0x871F03: mov     ecx, eax
0x871F05: add     eax, 5Ch ; '\'
0x871F08: cmp     dword ptr [eax], 0
0x871F0B: jnz     short loc_871F12
0x871F0D: call    sub_772560
0x871F12: push    2
0x871F14: push    1
0x871F16: push    5
0x871F18: push    esi
0x871F19: call    sub_801110
0x871F1E: mov     eax, [edi+14h]
0x871F21: add     esp, 10h
0x871F24: push    esi; a3
0x871F25: push    eax; a2
0x871F26: mov     ecx, edi; this
0x871F28: call    sub_760010
0x871F2D: mov     ecx, [esp+30h+var_18]
0x871F31: mov     ebx, [ecx+114h]
0x871F37: mov     ebp, [edi+58h]
0x871F3A: cmp     ebp, ebx
0x871F3C: jz      short loc_871F70
0x871F3E: test    ebp, ebp
0x871F40: jz      short loc_871F5F
0x871F42: lea     edx, [ebp+4]
0x871F45: push    edx; lpAddend
0x871F46: call    dword ptr ds:0A2807Ch
0x871F4C: test    eax, eax
0x871F4E: jnz     short loc_871F5F
0x871F50: test    ebp, ebp
0x871F52: jz      short loc_871F5F
0x871F54: mov     eax, [ebp+0]
0x871F57: mov     edx, [eax]
0x871F59: push    1
0x871F5B: mov     ecx, ebp
0x871F5D: call    edx
0x871F5F: test    ebx, ebx
0x871F61: mov     [edi+58h], ebx
0x871F64: jz      short loc_871F70
0x871F66: add     ebx, 4
0x871F69: push    ebx; lpAddend
0x871F6A: call    dword ptr ds:0A28078h
0x871F70: mov     eax, [esp+30h+var_18]
0x871F74: mov     ebx, [eax+188h]
0x871F7A: mov     ebp, [edi+44h]
0x871F7D: cmp     ebp, ebx
0x871F7F: jz      short loc_871FB3
0x871F81: test    ebp, ebp
0x871F83: jz      short loc_871FA2
0x871F85: lea     ecx, [ebp+4]
0x871F88: push    ecx; lpAddend
0x871F89: call    dword ptr ds:0A2807Ch
0x871F8F: test    eax, eax
0x871F91: jnz     short loc_871FA2
0x871F93: test    ebp, ebp
0x871F95: jz      short loc_871FA2
0x871F97: mov     edx, [ebp+0]
0x871F9A: mov     eax, [edx]
0x871F9C: push    1
0x871F9E: mov     ecx, ebp
0x871FA0: call    eax
0x871FA2: test    ebx, ebx
0x871FA4: mov     [edi+44h], ebx
0x871FA7: jz      short loc_871FB3
0x871FA9: add     ebx, 4
0x871FAC: push    ebx; lpAddend
0x871FAD: call    dword ptr ds:0A28078h
0x871FB3: cmp     dword ptr [edi+30h], 0
0x871FB7: jnz     short loc_871FC1
0x871FB9: call    sub_772DF0
0x871FBE: mov     [edi+30h], eax
0x871FC1: mov     ecx, [edi+30h]
0x871FC4: push    0
0x871FC6: push    1
0x871FC8: push    1Bh
0x871FCA: call    sub_772CD0
0x871FCF: cmp     dword ptr [edi+30h], 0
0x871FD3: jnz     short loc_871FDD
0x871FD5: call    sub_772DF0
0x871FDA: mov     [edi+30h], eax
0x871FDD: mov     ecx, [edi+30h]
0x871FE0: push    0
0x871FE2: push    2
0x871FE4: push    13h
0x871FE6: call    sub_772CD0
0x871FEB: cmp     dword ptr [edi+30h], 0
0x871FEF: jnz     short loc_871FF9
0x871FF1: call    sub_772DF0
0x871FF6: mov     [edi+30h], eax
0x871FF9: mov     ecx, [edi+30h]
0x871FFC: push    0
0x871FFE: push    2
0x872000: push    14h
0x872002: call    sub_772CD0
0x872007: cmp     dword ptr [edi+30h], 0
0x87200B: jnz     short loc_872015
0x87200D: call    sub_772DF0
0x872012: mov     [edi+30h], eax
0x872015: mov     ecx, [edi+30h]
0x872018: push    0
0x87201A: push    0
0x87201C: push    0Fh
0x87201E: call    sub_772CD0
0x872023: cmp     dword ptr [edi+30h], 0
0x872027: jnz     short loc_872031
0x872029: call    sub_772DF0
0x87202E: mov     [edi+30h], eax
0x872031: mov     ecx, [edi+30h]
0x872034: push    0
0x872036: push    1
0x872038: push    7
0x87203A: call    sub_772CD0
0x87203F: cmp     dword ptr [edi+30h], 0
0x872043: jnz     short loc_87204D
0x872045: call    sub_772DF0
0x87204A: mov     [edi+30h], eax
0x87204D: mov     ecx, [edi+30h]
0x872050: push    0
0x872052: push    3
0x872054: push    17h
0x872056: call    sub_772CD0
0x87205B: cmp     dword ptr [edi+30h], 0
0x87205F: jnz     short loc_872069
0x872061: call    sub_772DF0
0x872066: mov     [edi+30h], eax
0x872069: mov     ecx, [edi+30h]
0x87206C: push    0
0x87206E: push    0
0x872070: push    0Eh
0x872072: call    sub_772CD0
0x872077: cmp     dword ptr [edi+30h], 0
0x87207B: jnz     short loc_872085
0x87207D: call    sub_772DF0
0x872082: mov     [edi+30h], eax
0x872085: mov     ecx, [edi+30h]
0x872088: push    0
0x87208A: push    0
0x87208C: push    34h ; '4'
0x87208E: call    sub_772CD0
0x872093: or      ebx, 0FFFFFFFFh
0x872096: cmp     edi, ds:0B476FCh
0x87209C: mov     dword ptr ds:0B43F7Ch, 20082h
0x8720A6: mov     dword ptr ds:0B4460Ch, 108h
0x8720B0: jz      short loc_8720D0
0x8720B2: add     [edi+60h], ebx
0x8720B5: jnz     short loc_8720BE
0x8720B7: mov     ecx, edi
0x8720B9: call    sub_7604D0
0x8720BE: mov     edi, ds:0B476FCh
0x8720C4: test    edi, edi
0x8720C6: mov     [esp+30h+var_14], edi
0x8720CA: jz      short loc_8720D0
0x8720CC: add     dword ptr [edi+60h], 1
0x8720D0: cmp     dword ptr [edi+18h], 6
0x8720D4: jnb     loc_872394
0x8720DA: lea     ecx, [esp+30h+var_10]
0x8720DE: push    ecx
0x8720DF: call    sub_772630
0x8720E4: add     esp, 4
0x8720E7: mov     ebp, eax
0x8720E9: cmp     esi, [ebp+0]
0x8720EC: mov     byte ptr [esp+30h+var_4], 8
0x8720F1: jz      short loc_872112
0x8720F3: test    esi, esi
0x8720F5: jz      short loc_872103
0x8720F7: add     [esi+5Ch], ebx
0x8720FA: jnz     short loc_872103
0x8720FC: mov     ecx, esi
0x8720FE: call    sub_772560
0x872103: mov     esi, [ebp+0]
0x872106: test    esi, esi
0x872108: mov     [esp+30h+var_1C], esi
0x87210C: jz      short loc_872112
0x87210E: add     dword ptr [esi+5Ch], 1
0x872112: mov     eax, [esp+30h+var_10]
0x872116: test    eax, eax
0x872118: mov     byte ptr [esp+30h+var_4], 1
0x87211D: jz      short loc_872131
0x87211F: add     [eax+5Ch], ebx
0x872122: mov     ecx, eax
0x872124: add     eax, 5Ch ; '\'
0x872127: cmp     dword ptr [eax], 0
0x87212A: jnz     short loc_872131
0x87212C: call    sub_772560
0x872131: push    2
0x872133: push    1
0x872135: push    0
0x872137: push    esi
0x872138: call    sub_801110
0x87213D: mov     edx, [edi+14h]
0x872140: add     esp, 10h
0x872143: push    esi; a3
0x872144: push    edx; a2
0x872145: mov     ecx, edi; this
0x872147: call    sub_760010
0x87214C: lea     eax, [esp+30h+var_10]
0x872150: push    eax
0x872151: call    sub_772630
0x872156: add     esp, 4
0x872159: mov     ebp, eax
0x87215B: cmp     esi, [ebp+0]
0x87215E: mov     byte ptr [esp+30h+var_4], 9
0x872163: jz      short loc_872184
0x872165: test    esi, esi
0x872167: jz      short loc_872175
0x872169: add     [esi+5Ch], ebx
0x87216C: jnz     short loc_872175
0x87216E: mov     ecx, esi
0x872170: call    sub_772560
0x872175: mov     esi, [ebp+0]
0x872178: test    esi, esi
0x87217A: mov     [esp+30h+var_1C], esi
0x87217E: jz      short loc_872184
0x872180: add     dword ptr [esi+5Ch], 1
0x872184: mov     eax, [esp+30h+var_10]
0x872188: test    eax, eax
0x87218A: mov     byte ptr [esp+30h+var_4], 1
0x87218F: jz      short loc_8721A3
0x872191: add     [eax+5Ch], ebx
0x872194: mov     ecx, eax
0x872196: add     eax, 5Ch ; '\'
0x872199: cmp     dword ptr [eax], 0
0x87219C: jnz     short loc_8721A3
0x87219E: call    sub_772560
0x8721A3: push    2
0x8721A5: push    1
0x8721A7: push    1
0x8721A9: push    esi
0x8721AA: call    sub_801110
0x8721AF: mov     ecx, [edi+14h]
0x8721B2: add     esp, 10h
0x8721B5: push    esi; a3
0x8721B6: push    ecx; a2
0x8721B7: mov     ecx, edi; this
0x8721B9: call    sub_760010
0x8721BE: lea     edx, [esp+30h+var_10]
0x8721C2: push    edx
0x8721C3: call    sub_772630
0x8721C8: add     esp, 4
0x8721CB: mov     ebp, eax
0x8721CD: cmp     esi, [ebp+0]
0x8721D0: mov     byte ptr [esp+30h+var_4], 0Ah
0x8721D5: jz      short loc_8721F6
0x8721D7: test    esi, esi
0x8721D9: jz      short loc_8721E7
0x8721DB: add     [esi+5Ch], ebx
0x8721DE: jnz     short loc_8721E7
0x8721E0: mov     ecx, esi
0x8721E2: call    sub_772560
0x8721E7: mov     esi, [ebp+0]
0x8721EA: test    esi, esi
0x8721EC: mov     [esp+30h+var_1C], esi
0x8721F0: jz      short loc_8721F6
0x8721F2: add     dword ptr [esi+5Ch], 1
0x8721F6: mov     eax, [esp+30h+var_10]
0x8721FA: test    eax, eax
0x8721FC: mov     byte ptr [esp+30h+var_4], 1
0x872201: jz      short loc_872215
0x872203: add     [eax+5Ch], ebx
0x872206: mov     ecx, eax
0x872208: add     eax, 5Ch ; '\'
0x87220B: cmp     dword ptr [eax], 0
0x87220E: jnz     short loc_872215
0x872210: call    sub_772560
0x872215: push    2
0x872217: push    1
0x872219: push    2
0x87221B: push    esi
0x87221C: call    sub_801110
0x872221: mov     eax, [edi+14h]
0x872224: add     esp, 10h
0x872227: push    esi; a3
0x872228: push    eax; a2
0x872229: mov     ecx, edi; this
0x87222B: call    sub_760010
0x872230: lea     ecx, [esp+30h+var_10]
0x872234: push    ecx
0x872235: call    sub_772630
0x87223A: add     esp, 4
0x87223D: mov     ebp, eax
0x87223F: cmp     esi, [ebp+0]
0x872242: mov     byte ptr [esp+30h+var_4], 0Bh
0x872247: jz      short loc_872268
0x872249: test    esi, esi
0x87224B: jz      short loc_872259
0x87224D: add     [esi+5Ch], ebx
0x872250: jnz     short loc_872259
0x872252: mov     ecx, esi
0x872254: call    sub_772560
0x872259: mov     esi, [ebp+0]
0x87225C: test    esi, esi
0x87225E: mov     [esp+30h+var_1C], esi
0x872262: jz      short loc_872268
0x872264: add     dword ptr [esi+5Ch], 1
0x872268: mov     eax, [esp+30h+var_10]
0x87226C: test    eax, eax
0x87226E: mov     byte ptr [esp+30h+var_4], 1
0x872273: jz      short loc_872287
0x872275: add     [eax+5Ch], ebx
0x872278: mov     ecx, eax
0x87227A: add     eax, 5Ch ; '\'
0x87227D: cmp     dword ptr [eax], 0
0x872280: jnz     short loc_872287
0x872282: call    sub_772560
0x872287: mov     edx, ds:0B43110h
0x87228D: push    edx; a2
0x87228E: mov     ecx, esi; this
0x872290: call    sub_76C910
0x872295: push    0
0x872297: push    3
0x872299: push    3
0x87229B: push    esi
0x87229C: call    sub_801110
0x8722A1: mov     eax, [edi+14h]
0x8722A4: add     esp, 10h
0x8722A7: push    esi; a3
0x8722A8: push    eax; a2
0x8722A9: mov     ecx, edi; this
0x8722AB: call    sub_760010
0x8722B0: lea     ecx, [esp+30h+var_10]
0x8722B4: push    ecx
0x8722B5: call    sub_772630
0x8722BA: add     esp, 4
0x8722BD: mov     ebp, eax
0x8722BF: cmp     esi, [ebp+0]
0x8722C2: mov     byte ptr [esp+30h+var_4], 0Ch
0x8722C7: jz      short loc_8722E8
0x8722C9: test    esi, esi
0x8722CB: jz      short loc_8722D9
0x8722CD: add     [esi+5Ch], ebx
0x8722D0: jnz     short loc_8722D9
0x8722D2: mov     ecx, esi
0x8722D4: call    sub_772560
0x8722D9: mov     esi, [ebp+0]
0x8722DC: test    esi, esi
0x8722DE: mov     [esp+30h+var_1C], esi
0x8722E2: jz      short loc_8722E8
0x8722E4: add     dword ptr [esi+5Ch], 1
0x8722E8: mov     eax, [esp+30h+var_10]
0x8722EC: test    eax, eax
0x8722EE: mov     byte ptr [esp+30h+var_4], 1
0x8722F3: jz      short loc_872307
0x8722F5: add     [eax+5Ch], ebx
0x8722F8: mov     ecx, eax
0x8722FA: add     eax, 5Ch ; '\'
0x8722FD: cmp     dword ptr [eax], 0
0x872300: jnz     short loc_872307
0x872302: call    sub_772560
0x872307: push    2
0x872309: push    1
0x87230B: push    4
0x87230D: push    esi
0x87230E: call    sub_801110
0x872313: mov     edx, [edi+14h]
0x872316: add     esp, 10h
0x872319: push    esi; a3
0x87231A: push    edx; a2
0x87231B: mov     ecx, edi; this
0x87231D: call    sub_760010
0x872322: lea     eax, [esp+30h+var_10]
0x872326: push    eax
0x872327: call    sub_772630
0x87232C: add     esp, 4
0x87232F: mov     ebp, eax
0x872331: cmp     esi, [ebp+0]
0x872334: mov     byte ptr [esp+30h+var_4], 0Dh
0x872339: jz      short loc_87235A
0x87233B: test    esi, esi
0x87233D: jz      short loc_87234B
0x87233F: add     [esi+5Ch], ebx
0x872342: jnz     short loc_87234B
0x872344: mov     ecx, esi
0x872346: call    sub_772560
0x87234B: mov     esi, [ebp+0]
0x87234E: test    esi, esi
0x872350: mov     [esp+30h+var_1C], esi
0x872354: jz      short loc_87235A
0x872356: add     dword ptr [esi+5Ch], 1
0x87235A: mov     eax, [esp+30h+var_10]
0x87235E: test    eax, eax
0x872360: mov     byte ptr [esp+30h+var_4], 1
0x872365: jz      short loc_872379
0x872367: add     [eax+5Ch], ebx
0x87236A: mov     ecx, eax
0x87236C: add     eax, 5Ch ; '\'
0x87236F: cmp     dword ptr [eax], 0
0x872372: jnz     short loc_872379
0x872374: call    sub_772560
0x872379: push    2
0x87237B: push    1
0x87237D: push    5
0x87237F: push    esi
0x872380: call    sub_801110
0x872385: mov     ecx, [edi+14h]
0x872388: add     esp, 10h
0x87238B: push    esi; a3
0x87238C: push    ecx; a2
0x87238D: mov     ecx, edi; this
0x87238F: call    sub_760010
0x872394: mov     edx, [esp+30h+var_18]
0x872398: mov     ebx, [edx+118h]
0x87239E: mov     ebp, [edi+58h]
0x8723A1: cmp     ebp, ebx
0x8723A3: jz      short loc_8723D7
0x8723A5: test    ebp, ebp
0x8723A7: jz      short loc_8723C6
0x8723A9: lea     eax, [ebp+4]
0x8723AC: push    eax; lpAddend
0x8723AD: call    dword ptr ds:0A2807Ch
0x8723B3: test    eax, eax
0x8723B5: jnz     short loc_8723C6
0x8723B7: test    ebp, ebp
0x8723B9: jz      short loc_8723C6
0x8723BB: mov     edx, [ebp+0]
0x8723BE: mov     eax, [edx]
0x8723C0: push    1
0x8723C2: mov     ecx, ebp
0x8723C4: call    eax
0x8723C6: test    ebx, ebx
0x8723C8: mov     [edi+58h], ebx
0x8723CB: jz      short loc_8723D7
0x8723CD: add     ebx, 4
0x8723D0: push    ebx; lpAddend
0x8723D1: call    dword ptr ds:0A28078h
0x8723D7: mov     ecx, [esp+30h+var_18]
0x8723DB: mov     ebx, [ecx+188h]
0x8723E1: mov     ebp, [edi+44h]
0x8723E4: cmp     ebp, ebx
0x8723E6: jz      short loc_87241A
0x8723E8: test    ebp, ebp
0x8723EA: jz      short loc_872409
0x8723EC: lea     edx, [ebp+4]
0x8723EF: push    edx; lpAddend
0x8723F0: call    dword ptr ds:0A2807Ch
0x8723F6: test    eax, eax
0x8723F8: jnz     short loc_872409
0x8723FA: test    ebp, ebp
0x8723FC: jz      short loc_872409
0x8723FE: mov     eax, [ebp+0]
0x872401: mov     edx, [eax]
0x872403: push    1
0x872405: mov     ecx, ebp
0x872407: call    edx
0x872409: test    ebx, ebx
0x87240B: mov     [edi+44h], ebx
0x87240E: jz      short loc_87241A
0x872410: add     ebx, 4
0x872413: push    ebx; lpAddend
0x872414: call    dword ptr ds:0A28078h
0x87241A: cmp     dword ptr [edi+30h], 0
0x87241E: jnz     short loc_872428
0x872420: call    sub_772DF0
0x872425: mov     [edi+30h], eax
0x872428: mov     ecx, [edi+30h]
0x87242B: push    0
0x87242D: push    1
0x87242F: push    1Bh
0x872431: call    sub_772CD0
0x872436: cmp     dword ptr [edi+30h], 0
0x87243A: jnz     short loc_872444
0x87243C: call    sub_772DF0
0x872441: mov     [edi+30h], eax
0x872444: mov     ecx, [edi+30h]
0x872447: push    0
0x872449: push    2
0x87244B: push    13h
0x87244D: call    sub_772CD0
0x872452: cmp     dword ptr [edi+30h], 0
0x872456: jnz     short loc_872460
0x872458: call    sub_772DF0
0x87245D: mov     [edi+30h], eax
0x872460: mov     ecx, [edi+30h]
0x872463: push    0
0x872465: push    2
0x872467: push    14h
0x872469: call    sub_772CD0
0x87246E: cmp     dword ptr [edi+30h], 0
0x872472: jnz     short loc_87247C
0x872474: call    sub_772DF0
0x872479: mov     [edi+30h], eax
0x87247C: mov     ecx, [edi+30h]
0x87247F: push    0
0x872481: push    0
0x872483: push    0Fh
0x872485: call    sub_772CD0
0x87248A: cmp     dword ptr [edi+30h], 0
0x87248E: jnz     short loc_872498
0x872490: call    sub_772DF0
0x872495: mov     [edi+30h], eax
0x872498: mov     ecx, [edi+30h]
0x87249B: push    0
0x87249D: push    1
0x87249F: push    7
0x8724A1: call    sub_772CD0
0x8724A6: cmp     dword ptr [edi+30h], 0
0x8724AA: jnz     short loc_8724B4
0x8724AC: call    sub_772DF0
0x8724B1: mov     [edi+30h], eax
0x8724B4: mov     ecx, [edi+30h]
0x8724B7: push    0
0x8724B9: push    3
0x8724BB: push    17h
0x8724BD: call    sub_772CD0
0x8724C2: cmp     dword ptr [edi+30h], 0
0x8724C6: jnz     short loc_8724D0
0x8724C8: call    sub_772DF0
0x8724CD: mov     [edi+30h], eax
0x8724D0: mov     ecx, [edi+30h]
0x8724D3: push    0
0x8724D5: push    0
0x8724D7: push    0Eh
0x8724D9: call    sub_772CD0
0x8724DE: cmp     dword ptr [edi+30h], 0
0x8724E2: jnz     short loc_8724EC
0x8724E4: call    sub_772DF0
0x8724E9: mov     [edi+30h], eax
0x8724EC: mov     ecx, [edi+30h]
0x8724EF: push    0
0x8724F1: push    0
0x8724F3: push    34h ; '4'
0x8724F5: call    sub_772CD0
0x8724FA: or      ebx, 0FFFFFFFFh
0x8724FD: cmp     edi, ds:0B47700h
0x872503: mov     dword ptr ds:0B43F88h, 60088h
0x87250D: mov     dword ptr ds:0B44618h, 108h
0x872517: jz      short loc_872537
0x872519: add     [edi+60h], ebx
0x87251C: jnz     short loc_872525
0x87251E: mov     ecx, edi
0x872520: call    sub_7604D0
0x872525: mov     edi, ds:0B47700h
0x87252B: test    edi, edi
0x87252D: mov     [esp+30h+var_14], edi
0x872531: jz      short loc_872537
0x872533: add     dword ptr [edi+60h], 1
0x872537: cmp     dword ptr [edi+18h], 6
0x87253B: jnb     loc_8727FB
0x872541: lea     eax, [esp+30h+var_10]
0x872545: push    eax
0x872546: call    sub_772630
0x87254B: add     esp, 4
0x87254E: mov     ebp, eax
0x872550: cmp     esi, [ebp+0]
0x872553: mov     byte ptr [esp+30h+var_4], 0Eh
0x872558: jz      short loc_872579
0x87255A: test    esi, esi
0x87255C: jz      short loc_87256A
0x87255E: add     [esi+5Ch], ebx
0x872561: jnz     short loc_87256A
0x872563: mov     ecx, esi
0x872565: call    sub_772560
0x87256A: mov     esi, [ebp+0]
0x87256D: test    esi, esi
0x87256F: mov     [esp+30h+var_1C], esi
0x872573: jz      short loc_872579
0x872575: add     dword ptr [esi+5Ch], 1
0x872579: mov     eax, [esp+30h+var_10]
0x87257D: test    eax, eax
0x87257F: mov     byte ptr [esp+30h+var_4], 1
0x872584: jz      short loc_872598
0x872586: add     [eax+5Ch], ebx
0x872589: mov     ecx, eax
0x87258B: add     eax, 5Ch ; '\'
0x87258E: cmp     dword ptr [eax], 0
0x872591: jnz     short loc_872598
0x872593: call    sub_772560
0x872598: push    2
0x87259A: push    1
0x87259C: push    0
0x87259E: push    esi
0x87259F: call    sub_801110
0x8725A4: mov     ecx, [edi+14h]
0x8725A7: add     esp, 10h
0x8725AA: push    esi; a3
0x8725AB: push    ecx; a2
0x8725AC: mov     ecx, edi; this
0x8725AE: call    sub_760010
0x8725B3: lea     edx, [esp+30h+var_10]
0x8725B7: push    edx
0x8725B8: call    sub_772630
0x8725BD: add     esp, 4
0x8725C0: mov     ebp, eax
0x8725C2: cmp     esi, [ebp+0]
0x8725C5: mov     byte ptr [esp+30h+var_4], 0Fh
0x8725CA: jz      short loc_8725EB
0x8725CC: test    esi, esi
0x8725CE: jz      short loc_8725DC
0x8725D0: add     [esi+5Ch], ebx
0x8725D3: jnz     short loc_8725DC
0x8725D5: mov     ecx, esi
0x8725D7: call    sub_772560
0x8725DC: mov     esi, [ebp+0]
0x8725DF: test    esi, esi
0x8725E1: mov     [esp+30h+var_1C], esi
0x8725E5: jz      short loc_8725EB
0x8725E7: add     dword ptr [esi+5Ch], 1
0x8725EB: mov     eax, [esp+30h+var_10]
0x8725EF: test    eax, eax
0x8725F1: mov     byte ptr [esp+30h+var_4], 1
0x8725F6: jz      short loc_87260A
0x8725F8: add     [eax+5Ch], ebx
0x8725FB: mov     ecx, eax
0x8725FD: add     eax, 5Ch ; '\'
0x872600: cmp     dword ptr [eax], 0
0x872603: jnz     short loc_87260A
0x872605: call    sub_772560
0x87260A: push    2
0x87260C: push    1
0x87260E: push    1
0x872610: push    esi
0x872611: call    sub_801110
0x872616: mov     eax, [edi+14h]
0x872619: add     esp, 10h
0x87261C: push    esi; a3
0x87261D: push    eax; a2
0x87261E: mov     ecx, edi; this
0x872620: call    sub_760010
0x872625: lea     ecx, [esp+30h+var_10]
0x872629: push    ecx
0x87262A: call    sub_772630
0x87262F: add     esp, 4
0x872632: mov     ebp, eax
0x872634: cmp     esi, [ebp+0]
0x872637: mov     byte ptr [esp+30h+var_4], 10h
0x87263C: jz      short loc_87265D
0x87263E: test    esi, esi
0x872640: jz      short loc_87264E
0x872642: add     [esi+5Ch], ebx
0x872645: jnz     short loc_87264E
0x872647: mov     ecx, esi
0x872649: call    sub_772560
0x87264E: mov     esi, [ebp+0]
0x872651: test    esi, esi
0x872653: mov     [esp+30h+var_1C], esi
0x872657: jz      short loc_87265D
0x872659: add     dword ptr [esi+5Ch], 1
0x87265D: mov     eax, [esp+30h+var_10]
0x872661: test    eax, eax
0x872663: mov     byte ptr [esp+30h+var_4], 1
0x872668: jz      short loc_87267C
0x87266A: add     [eax+5Ch], ebx
0x87266D: mov     ecx, eax
0x87266F: add     eax, 5Ch ; '\'
0x872672: cmp     dword ptr [eax], 0
0x872675: jnz     short loc_87267C
0x872677: call    sub_772560
0x87267C: push    2
0x87267E: push    1
0x872680: push    2
0x872682: push    esi
0x872683: call    sub_801110
0x872688: mov     edx, [edi+14h]
0x87268B: add     esp, 10h
0x87268E: push    esi; a3
0x87268F: push    edx; a2
0x872690: mov     ecx, edi; this
0x872692: call    sub_760010
0x872697: lea     eax, [esp+30h+var_10]
0x87269B: push    eax
0x87269C: call    sub_772630
0x8726A1: add     esp, 4
0x8726A4: mov     ebp, eax
0x8726A6: cmp     esi, [ebp+0]
0x8726A9: mov     byte ptr [esp+30h+var_4], 11h
0x8726AE: jz      short loc_8726CF
0x8726B0: test    esi, esi
0x8726B2: jz      short loc_8726C0
0x8726B4: add     [esi+5Ch], ebx
0x8726B7: jnz     short loc_8726C0
0x8726B9: mov     ecx, esi
0x8726BB: call    sub_772560
0x8726C0: mov     esi, [ebp+0]
0x8726C3: test    esi, esi
0x8726C5: mov     [esp+30h+var_1C], esi
0x8726C9: jz      short loc_8726CF
0x8726CB: add     dword ptr [esi+5Ch], 1
0x8726CF: mov     eax, [esp+30h+var_10]
0x8726D3: test    eax, eax
0x8726D5: mov     byte ptr [esp+30h+var_4], 1
0x8726DA: jz      short loc_8726EE
0x8726DC: add     [eax+5Ch], ebx
0x8726DF: mov     ecx, eax
0x8726E1: add     eax, 5Ch ; '\'
0x8726E4: cmp     dword ptr [eax], 0
0x8726E7: jnz     short loc_8726EE
0x8726E9: call    sub_772560
0x8726EE: mov     ecx, ds:0B43110h
0x8726F4: push    ecx; a2
0x8726F5: mov     ecx, esi; this
0x8726F7: call    sub_76C910
0x8726FC: push    0
0x8726FE: push    3
0x872700: push    3
0x872702: push    esi
0x872703: call    sub_801110
0x872708: mov     edx, [edi+14h]
0x87270B: add     esp, 10h
0x87270E: push    esi; a3
0x87270F: push    edx; a2
0x872710: mov     ecx, edi; this
0x872712: call    sub_760010
0x872717: lea     eax, [esp+30h+var_10]
0x87271B: push    eax
0x87271C: call    sub_772630
0x872721: add     esp, 4
0x872724: mov     ebp, eax
0x872726: cmp     esi, [ebp+0]
0x872729: mov     byte ptr [esp+30h+var_4], 12h
0x87272E: jz      short loc_87274F
0x872730: test    esi, esi
0x872732: jz      short loc_872740
0x872734: add     [esi+5Ch], ebx
0x872737: jnz     short loc_872740
0x872739: mov     ecx, esi
0x87273B: call    sub_772560
0x872740: mov     esi, [ebp+0]
0x872743: test    esi, esi
0x872745: mov     [esp+30h+var_1C], esi
0x872749: jz      short loc_87274F
0x87274B: add     dword ptr [esi+5Ch], 1
0x87274F: mov     eax, [esp+30h+var_10]
0x872753: test    eax, eax
0x872755: mov     byte ptr [esp+30h+var_4], 1
0x87275A: jz      short loc_87276E
0x87275C: add     [eax+5Ch], ebx
0x87275F: mov     ecx, eax
0x872761: add     eax, 5Ch ; '\'
0x872764: cmp     dword ptr [eax], 0
0x872767: jnz     short loc_87276E
0x872769: call    sub_772560
0x87276E: push    2
0x872770: push    1
0x872772: push    4
0x872774: push    esi
0x872775: call    sub_801110
0x87277A: mov     ecx, [edi+14h]
0x87277D: add     esp, 10h
0x872780: push    esi; a3
0x872781: push    ecx; a2
0x872782: mov     ecx, edi; this
0x872784: call    sub_760010
0x872789: lea     edx, [esp+30h+var_10]
0x87278D: push    edx
0x87278E: call    sub_772630
0x872793: add     esp, 4
0x872796: mov     ebp, eax
0x872798: cmp     esi, [ebp+0]
0x87279B: mov     byte ptr [esp+30h+var_4], 13h
0x8727A0: jz      short loc_8727C1
0x8727A2: test    esi, esi
0x8727A4: jz      short loc_8727B2
0x8727A6: add     [esi+5Ch], ebx
0x8727A9: jnz     short loc_8727B2
0x8727AB: mov     ecx, esi
0x8727AD: call    sub_772560
0x8727B2: mov     esi, [ebp+0]
0x8727B5: test    esi, esi
0x8727B7: mov     [esp+30h+var_1C], esi
0x8727BB: jz      short loc_8727C1
0x8727BD: add     dword ptr [esi+5Ch], 1
0x8727C1: mov     eax, [esp+30h+var_10]
0x8727C5: test    eax, eax
0x8727C7: mov     byte ptr [esp+30h+var_4], 1
0x8727CC: jz      short loc_8727E0
0x8727CE: add     [eax+5Ch], ebx
0x8727D1: mov     ecx, eax
0x8727D3: add     eax, 5Ch ; '\'
0x8727D6: cmp     dword ptr [eax], 0
0x8727D9: jnz     short loc_8727E0
0x8727DB: call    sub_772560
0x8727E0: push    2
0x8727E2: push    1
0x8727E4: push    5
0x8727E6: push    esi
0x8727E7: call    sub_801110
0x8727EC: mov     eax, [edi+14h]
0x8727EF: add     esp, 10h
0x8727F2: push    esi; a3
0x8727F3: push    eax; a2
0x8727F4: mov     ecx, edi; this
0x8727F6: call    sub_760010
0x8727FB: mov     ecx, [esp+30h+var_18]
0x8727FF: mov     ebx, [ecx+11Ch]
0x872805: mov     ebp, [edi+58h]
0x872808: cmp     ebp, ebx
0x87280A: jz      short loc_87283E
0x87280C: test    ebp, ebp
0x87280E: jz      short loc_87282D
0x872810: lea     edx, [ebp+4]
0x872813: push    edx; lpAddend
0x872814: call    dword ptr ds:0A2807Ch
0x87281A: test    eax, eax
0x87281C: jnz     short loc_87282D
0x87281E: test    ebp, ebp
0x872820: jz      short loc_87282D
0x872822: mov     eax, [ebp+0]
0x872825: mov     edx, [eax]
0x872827: push    1
0x872829: mov     ecx, ebp
0x87282B: call    edx
0x87282D: test    ebx, ebx
0x87282F: mov     [edi+58h], ebx
0x872832: jz      short loc_87283E
0x872834: add     ebx, 4
0x872837: push    ebx; lpAddend
0x872838: call    dword ptr ds:0A28078h
0x87283E: mov     eax, [esp+30h+var_18]
0x872842: mov     ebx, [eax+18Ch]
0x872848: mov     ebp, [edi+44h]
0x87284B: cmp     ebp, ebx
0x87284D: jz      short loc_872881
0x87284F: test    ebp, ebp
0x872851: jz      short loc_872870
0x872853: lea     ecx, [ebp+4]
0x872856: push    ecx; lpAddend
0x872857: call    dword ptr ds:0A2807Ch
0x87285D: test    eax, eax
0x87285F: jnz     short loc_872870
0x872861: test    ebp, ebp
0x872863: jz      short loc_872870
0x872865: mov     edx, [ebp+0]
0x872868: mov     eax, [edx]
0x87286A: push    1
0x87286C: mov     ecx, ebp
0x87286E: call    eax
0x872870: test    ebx, ebx
0x872872: mov     [edi+44h], ebx
0x872875: jz      short loc_872881
0x872877: add     ebx, 4
0x87287A: push    ebx; lpAddend
0x87287B: call    dword ptr ds:0A28078h
0x872881: cmp     dword ptr [edi+30h], 0
0x872885: jnz     short loc_87288F
0x872887: call    sub_772DF0
0x87288C: mov     [edi+30h], eax
0x87288F: mov     ecx, [edi+30h]
0x872892: push    0
0x872894: push    1
0x872896: push    1Bh
0x872898: call    sub_772CD0
0x87289D: cmp     dword ptr [edi+30h], 0
0x8728A1: jnz     short loc_8728AB
0x8728A3: call    sub_772DF0
0x8728A8: mov     [edi+30h], eax
0x8728AB: mov     ecx, [edi+30h]
0x8728AE: push    0
0x8728B0: push    2
0x8728B2: push    13h
0x8728B4: call    sub_772CD0
0x8728B9: cmp     dword ptr [edi+30h], 0
0x8728BD: jnz     short loc_8728C7
0x8728BF: call    sub_772DF0
0x8728C4: mov     [edi+30h], eax
0x8728C7: mov     ecx, [edi+30h]
0x8728CA: push    0
0x8728CC: push    2
0x8728CE: push    14h
0x8728D0: call    sub_772CD0
0x8728D5: cmp     dword ptr [edi+30h], 0
0x8728D9: jnz     short loc_8728E3
0x8728DB: call    sub_772DF0
0x8728E0: mov     [edi+30h], eax
0x8728E3: mov     ecx, [edi+30h]
0x8728E6: push    0
0x8728E8: push    0
0x8728EA: push    0Fh
0x8728EC: call    sub_772CD0
0x8728F1: cmp     dword ptr [edi+30h], 0
0x8728F5: jnz     short loc_8728FF
0x8728F7: call    sub_772DF0
0x8728FC: mov     [edi+30h], eax
0x8728FF: mov     ecx, [edi+30h]
0x872902: push    0
0x872904: push    1
0x872906: push    7
0x872908: call    sub_772CD0
0x87290D: cmp     dword ptr [edi+30h], 0
0x872911: jnz     short loc_87291B
0x872913: call    sub_772DF0
0x872918: mov     [edi+30h], eax
0x87291B: mov     ecx, [edi+30h]
0x87291E: push    0
0x872920: push    3
0x872922: push    17h
0x872924: call    sub_772CD0
0x872929: cmp     dword ptr [edi+30h], 0
0x87292D: jnz     short loc_872937
0x87292F: call    sub_772DF0
0x872934: mov     [edi+30h], eax
0x872937: mov     ecx, [edi+30h]
0x87293A: push    0
0x87293C: push    0
0x87293E: push    0Eh
0x872940: call    sub_772CD0
0x872945: cmp     dword ptr [edi+30h], 0
0x872949: jnz     short loc_872953
0x87294B: call    sub_772DF0
0x872950: mov     [edi+30h], eax
0x872953: mov     ecx, [edi+30h]
0x872956: push    0
0x872958: push    0
0x87295A: push    34h ; '4'
0x87295C: call    sub_772CD0
0x872961: or      ebx, 0FFFFFFFFh
0x872964: cmp     edi, ds:0B47704h
0x87296A: mov     dword ptr ds:0B43F98h, 200F2h
0x872974: mov     dword ptr ds:0B44628h, 108h
0x87297E: jz      short loc_87299E
0x872980: add     [edi+60h], ebx
0x872983: jnz     short loc_87298C
0x872985: mov     ecx, edi
0x872987: call    sub_7604D0
0x87298C: mov     edi, ds:0B47704h
0x872992: test    edi, edi
0x872994: mov     [esp+30h+var_14], edi
0x872998: jz      short loc_87299E
0x87299A: add     dword ptr [edi+60h], 1
0x87299E: cmp     dword ptr [edi+18h], 6
0x8729A2: jnb     loc_872C62
0x8729A8: lea     ecx, [esp+30h+var_10]
0x8729AC: push    ecx
0x8729AD: call    sub_772630
0x8729B2: add     esp, 4
0x8729B5: mov     ebp, eax
0x8729B7: cmp     esi, [ebp+0]
0x8729BA: mov     byte ptr [esp+30h+var_4], 14h
0x8729BF: jz      short loc_8729E0
0x8729C1: test    esi, esi
0x8729C3: jz      short loc_8729D1
0x8729C5: add     [esi+5Ch], ebx
0x8729C8: jnz     short loc_8729D1
0x8729CA: mov     ecx, esi
0x8729CC: call    sub_772560
0x8729D1: mov     esi, [ebp+0]
0x8729D4: test    esi, esi
0x8729D6: mov     [esp+30h+var_1C], esi
0x8729DA: jz      short loc_8729E0
0x8729DC: add     dword ptr [esi+5Ch], 1
0x8729E0: mov     eax, [esp+30h+var_10]
0x8729E4: test    eax, eax
0x8729E6: mov     byte ptr [esp+30h+var_4], 1
0x8729EB: jz      short loc_8729FF
0x8729ED: add     [eax+5Ch], ebx
0x8729F0: mov     ecx, eax
0x8729F2: add     eax, 5Ch ; '\'
0x8729F5: cmp     dword ptr [eax], 0
0x8729F8: jnz     short loc_8729FF
0x8729FA: call    sub_772560
0x8729FF: push    2
0x872A01: push    1
0x872A03: push    0
0x872A05: push    esi
0x872A06: call    sub_801110
0x872A0B: mov     edx, [edi+14h]
0x872A0E: add     esp, 10h
0x872A11: push    esi; a3
0x872A12: push    edx; a2
0x872A13: mov     ecx, edi; this
0x872A15: call    sub_760010
0x872A1A: lea     eax, [esp+30h+var_10]
0x872A1E: push    eax
0x872A1F: call    sub_772630
0x872A24: add     esp, 4
0x872A27: mov     ebp, eax
0x872A29: cmp     esi, [ebp+0]
0x872A2C: mov     byte ptr [esp+30h+var_4], 15h
0x872A31: jz      short loc_872A52
0x872A33: test    esi, esi
0x872A35: jz      short loc_872A43
0x872A37: add     [esi+5Ch], ebx
0x872A3A: jnz     short loc_872A43
0x872A3C: mov     ecx, esi
0x872A3E: call    sub_772560
0x872A43: mov     esi, [ebp+0]
0x872A46: test    esi, esi
0x872A48: mov     [esp+30h+var_1C], esi
0x872A4C: jz      short loc_872A52
0x872A4E: add     dword ptr [esi+5Ch], 1
0x872A52: mov     eax, [esp+30h+var_10]
0x872A56: test    eax, eax
0x872A58: mov     byte ptr [esp+30h+var_4], 1
0x872A5D: jz      short loc_872A71
0x872A5F: add     [eax+5Ch], ebx
0x872A62: mov     ecx, eax
0x872A64: add     eax, 5Ch ; '\'
0x872A67: cmp     dword ptr [eax], 0
0x872A6A: jnz     short loc_872A71
0x872A6C: call    sub_772560
0x872A71: push    2
0x872A73: push    1
0x872A75: push    1
0x872A77: push    esi
0x872A78: call    sub_801110
0x872A7D: mov     ecx, [edi+14h]
0x872A80: add     esp, 10h
0x872A83: push    esi; a3
0x872A84: push    ecx; a2
0x872A85: mov     ecx, edi; this
0x872A87: call    sub_760010
0x872A8C: lea     edx, [esp+30h+var_10]
0x872A90: push    edx
0x872A91: call    sub_772630
0x872A96: add     esp, 4
0x872A99: mov     ebp, eax
0x872A9B: cmp     esi, [ebp+0]
0x872A9E: mov     byte ptr [esp+30h+var_4], 16h
0x872AA3: jz      short loc_872AC4
0x872AA5: test    esi, esi
0x872AA7: jz      short loc_872AB5
0x872AA9: add     [esi+5Ch], ebx
0x872AAC: jnz     short loc_872AB5
0x872AAE: mov     ecx, esi
0x872AB0: call    sub_772560
0x872AB5: mov     esi, [ebp+0]
0x872AB8: test    esi, esi
0x872ABA: mov     [esp+30h+var_1C], esi
0x872ABE: jz      short loc_872AC4
0x872AC0: add     dword ptr [esi+5Ch], 1
0x872AC4: mov     eax, [esp+30h+var_10]
0x872AC8: test    eax, eax
0x872ACA: mov     byte ptr [esp+30h+var_4], 1
0x872ACF: jz      short loc_872AE3
0x872AD1: add     [eax+5Ch], ebx
0x872AD4: mov     ecx, eax
0x872AD6: add     eax, 5Ch ; '\'
0x872AD9: cmp     dword ptr [eax], 0
0x872ADC: jnz     short loc_872AE3
0x872ADE: call    sub_772560
0x872AE3: push    2
0x872AE5: push    1
0x872AE7: push    2
0x872AE9: push    esi
0x872AEA: call    sub_801110
0x872AEF: mov     eax, [edi+14h]
0x872AF2: add     esp, 10h
0x872AF5: push    esi; a3
0x872AF6: push    eax; a2
0x872AF7: mov     ecx, edi; this
0x872AF9: call    sub_760010
0x872AFE: lea     ecx, [esp+30h+var_10]
0x872B02: push    ecx
0x872B03: call    sub_772630
0x872B08: add     esp, 4
0x872B0B: mov     ebp, eax
0x872B0D: cmp     esi, [ebp+0]
0x872B10: mov     byte ptr [esp+30h+var_4], 17h
0x872B15: jz      short loc_872B36
0x872B17: test    esi, esi
0x872B19: jz      short loc_872B27
0x872B1B: add     [esi+5Ch], ebx
0x872B1E: jnz     short loc_872B27
0x872B20: mov     ecx, esi
0x872B22: call    sub_772560
0x872B27: mov     esi, [ebp+0]
0x872B2A: test    esi, esi
0x872B2C: mov     [esp+30h+var_1C], esi
0x872B30: jz      short loc_872B36
0x872B32: add     dword ptr [esi+5Ch], 1
0x872B36: mov     eax, [esp+30h+var_10]
0x872B3A: test    eax, eax
0x872B3C: mov     byte ptr [esp+30h+var_4], 1
0x872B41: jz      short loc_872B55
0x872B43: add     [eax+5Ch], ebx
0x872B46: mov     ecx, eax
0x872B48: add     eax, 5Ch ; '\'
0x872B4B: cmp     dword ptr [eax], 0
0x872B4E: jnz     short loc_872B55
0x872B50: call    sub_772560
0x872B55: mov     edx, ds:0B43110h
0x872B5B: push    edx; a2
0x872B5C: mov     ecx, esi; this
0x872B5E: call    sub_76C910
0x872B63: push    0
0x872B65: push    3
0x872B67: push    3
0x872B69: push    esi
0x872B6A: call    sub_801110
0x872B6F: mov     eax, [edi+14h]
0x872B72: add     esp, 10h
0x872B75: push    esi; a3
0x872B76: push    eax; a2
0x872B77: mov     ecx, edi; this
0x872B79: call    sub_760010
0x872B7E: lea     ecx, [esp+30h+var_10]
0x872B82: push    ecx
0x872B83: call    sub_772630
0x872B88: add     esp, 4
0x872B8B: mov     ebp, eax
0x872B8D: cmp     esi, [ebp+0]
0x872B90: mov     byte ptr [esp+30h+var_4], 18h
0x872B95: jz      short loc_872BB6
0x872B97: test    esi, esi
0x872B99: jz      short loc_872BA7
0x872B9B: add     [esi+5Ch], ebx
0x872B9E: jnz     short loc_872BA7
0x872BA0: mov     ecx, esi
0x872BA2: call    sub_772560
0x872BA7: mov     esi, [ebp+0]
0x872BAA: test    esi, esi
0x872BAC: mov     [esp+30h+var_1C], esi
0x872BB0: jz      short loc_872BB6
0x872BB2: add     dword ptr [esi+5Ch], 1
0x872BB6: mov     eax, [esp+30h+var_10]
0x872BBA: test    eax, eax
0x872BBC: mov     byte ptr [esp+30h+var_4], 1
0x872BC1: jz      short loc_872BD5
0x872BC3: add     [eax+5Ch], ebx
0x872BC6: mov     ecx, eax
0x872BC8: add     eax, 5Ch ; '\'
0x872BCB: cmp     dword ptr [eax], 0
0x872BCE: jnz     short loc_872BD5
0x872BD0: call    sub_772560
0x872BD5: push    2
0x872BD7: push    1
0x872BD9: push    4
0x872BDB: push    esi
0x872BDC: call    sub_801110
0x872BE1: mov     edx, [edi+14h]
0x872BE4: add     esp, 10h
0x872BE7: push    esi; a3
0x872BE8: push    edx; a2
0x872BE9: mov     ecx, edi; this
0x872BEB: call    sub_760010
0x872BF0: lea     eax, [esp+30h+var_10]
0x872BF4: push    eax
0x872BF5: call    sub_772630
0x872BFA: add     esp, 4
0x872BFD: mov     ebp, eax
0x872BFF: cmp     esi, [ebp+0]
0x872C02: mov     byte ptr [esp+30h+var_4], 19h
0x872C07: jz      short loc_872C28
0x872C09: test    esi, esi
0x872C0B: jz      short loc_872C19
0x872C0D: add     [esi+5Ch], ebx
0x872C10: jnz     short loc_872C19
0x872C12: mov     ecx, esi
0x872C14: call    sub_772560
0x872C19: mov     esi, [ebp+0]
0x872C1C: test    esi, esi
0x872C1E: mov     [esp+30h+var_1C], esi
0x872C22: jz      short loc_872C28
0x872C24: add     dword ptr [esi+5Ch], 1
0x872C28: mov     eax, [esp+30h+var_10]
0x872C2C: test    eax, eax
0x872C2E: mov     byte ptr [esp+30h+var_4], 1
0x872C33: jz      short loc_872C47
0x872C35: add     [eax+5Ch], ebx
0x872C38: mov     ecx, eax
0x872C3A: add     eax, 5Ch ; '\'
0x872C3D: cmp     dword ptr [eax], 0
0x872C40: jnz     short loc_872C47
0x872C42: call    sub_772560
0x872C47: push    2
0x872C49: push    1
0x872C4B: push    5
0x872C4D: push    esi
0x872C4E: call    sub_801110
0x872C53: mov     ecx, [edi+14h]
0x872C56: add     esp, 10h
0x872C59: push    esi; a3
0x872C5A: push    ecx; a2
0x872C5B: mov     ecx, edi; this
0x872C5D: call    sub_760010
0x872C62: mov     edx, [esp+30h+var_18]
0x872C66: mov     ebx, [edx+120h]
0x872C6C: mov     ebp, [edi+58h]
0x872C6F: cmp     ebp, ebx
0x872C71: jz      short loc_872CA5
0x872C73: test    ebp, ebp
0x872C75: jz      short loc_872C94
0x872C77: lea     eax, [ebp+4]
0x872C7A: push    eax; lpAddend
0x872C7B: call    dword ptr ds:0A2807Ch
0x872C81: test    eax, eax
0x872C83: jnz     short loc_872C94
0x872C85: test    ebp, ebp
0x872C87: jz      short loc_872C94
0x872C89: mov     edx, [ebp+0]
0x872C8C: mov     eax, [edx]
0x872C8E: push    1
0x872C90: mov     ecx, ebp
0x872C92: call    eax
0x872C94: test    ebx, ebx
0x872C96: mov     [edi+58h], ebx
0x872C99: jz      short loc_872CA5
0x872C9B: add     ebx, 4
0x872C9E: push    ebx; lpAddend
0x872C9F: call    dword ptr ds:0A28078h
0x872CA5: mov     ecx, [esp+30h+var_18]
0x872CA9: mov     ebx, [ecx+18Ch]
0x872CAF: mov     ebp, [edi+44h]
0x872CB2: cmp     ebp, ebx
0x872CB4: jz      short loc_872CE8
0x872CB6: test    ebp, ebp
0x872CB8: jz      short loc_872CD7
0x872CBA: lea     edx, [ebp+4]
0x872CBD: push    edx; lpAddend
0x872CBE: call    dword ptr ds:0A2807Ch
0x872CC4: test    eax, eax
0x872CC6: jnz     short loc_872CD7
0x872CC8: test    ebp, ebp
0x872CCA: jz      short loc_872CD7
0x872CCC: mov     eax, [ebp+0]
0x872CCF: mov     edx, [eax]
0x872CD1: push    1
0x872CD3: mov     ecx, ebp
0x872CD5: call    edx
0x872CD7: test    ebx, ebx
0x872CD9: mov     [edi+44h], ebx
0x872CDC: jz      short loc_872CE8
0x872CDE: add     ebx, 4
0x872CE1: push    ebx; lpAddend
0x872CE2: call    dword ptr ds:0A28078h
0x872CE8: cmp     dword ptr [edi+30h], 0
0x872CEC: jnz     short loc_872CF6
0x872CEE: call    sub_772DF0
0x872CF3: mov     [edi+30h], eax
0x872CF6: mov     ecx, [edi+30h]
0x872CF9: push    0
0x872CFB: push    1
0x872CFD: push    1Bh
0x872CFF: call    sub_772CD0
0x872D04: cmp     dword ptr [edi+30h], 0
0x872D08: jnz     short loc_872D12
0x872D0A: call    sub_772DF0
0x872D0F: mov     [edi+30h], eax
0x872D12: mov     ecx, [edi+30h]
0x872D15: push    0
0x872D17: push    2
0x872D19: push    13h
0x872D1B: call    sub_772CD0
0x872D20: cmp     dword ptr [edi+30h], 0
0x872D24: jnz     short loc_872D2E
0x872D26: call    sub_772DF0
0x872D2B: mov     [edi+30h], eax
0x872D2E: mov     ecx, [edi+30h]
0x872D31: push    0
0x872D33: push    2
0x872D35: push    14h
0x872D37: call    sub_772CD0
0x872D3C: cmp     dword ptr [edi+30h], 0
0x872D40: jnz     short loc_872D4A
0x872D42: call    sub_772DF0
0x872D47: mov     [edi+30h], eax
0x872D4A: mov     ecx, [edi+30h]
0x872D4D: push    0
0x872D4F: push    0
0x872D51: push    0Fh
0x872D53: call    sub_772CD0
0x872D58: cmp     dword ptr [edi+30h], 0
0x872D5C: jnz     short loc_872D66
0x872D5E: call    sub_772DF0
0x872D63: mov     [edi+30h], eax
0x872D66: mov     ecx, [edi+30h]
0x872D69: push    0
0x872D6B: push    1
0x872D6D: push    7
0x872D6F: call    sub_772CD0
0x872D74: cmp     dword ptr [edi+30h], 0
0x872D78: jnz     short loc_872D82
0x872D7A: call    sub_772DF0
0x872D7F: mov     [edi+30h], eax
0x872D82: mov     ecx, [edi+30h]
0x872D85: push    0
0x872D87: push    3
0x872D89: push    17h
0x872D8B: call    sub_772CD0
0x872D90: cmp     dword ptr [edi+30h], 0
0x872D94: jnz     short loc_872D9E
0x872D96: call    sub_772DF0
0x872D9B: mov     [edi+30h], eax
0x872D9E: mov     ecx, [edi+30h]
0x872DA1: push    0
0x872DA3: push    0
0x872DA5: push    0Eh
0x872DA7: call    sub_772CD0
0x872DAC: cmp     dword ptr [edi+30h], 0
0x872DB0: jnz     short loc_872DBA
0x872DB2: call    sub_772DF0
0x872DB7: mov     [edi+30h], eax
0x872DBA: mov     ecx, [edi+30h]
0x872DBD: push    0
0x872DBF: push    0
0x872DC1: push    34h ; '4'
0x872DC3: call    sub_772CD0
0x872DC8: or      ebx, 0FFFFFFFFh
0x872DCB: cmp     edi, ds:0B47708h
0x872DD1: mov     dword ptr ds:0B43FA4h, 600F8h
0x872DDB: mov     dword ptr ds:0B44634h, 108h
0x872DE5: jz      short loc_872E05
0x872DE7: add     [edi+60h], ebx
0x872DEA: jnz     short loc_872DF3
0x872DEC: mov     ecx, edi
0x872DEE: call    sub_7604D0
0x872DF3: mov     edi, ds:0B47708h
0x872DF9: test    edi, edi
0x872DFB: mov     [esp+30h+var_14], edi
0x872DFF: jz      short loc_872E05
0x872E01: add     dword ptr [edi+60h], 1
0x872E05: cmp     dword ptr [edi+18h], 6
0x872E09: jnb     loc_8730C9
0x872E0F: lea     eax, [esp+30h+var_10]
0x872E13: push    eax
0x872E14: call    sub_772630
0x872E19: add     esp, 4
0x872E1C: mov     ebp, eax
0x872E1E: cmp     esi, [ebp+0]
0x872E21: mov     byte ptr [esp+30h+var_4], 1Ah
0x872E26: jz      short loc_872E47
0x872E28: test    esi, esi
0x872E2A: jz      short loc_872E38
0x872E2C: add     [esi+5Ch], ebx
0x872E2F: jnz     short loc_872E38
0x872E31: mov     ecx, esi
0x872E33: call    sub_772560
0x872E38: mov     esi, [ebp+0]
0x872E3B: test    esi, esi
0x872E3D: mov     [esp+30h+var_1C], esi
0x872E41: jz      short loc_872E47
0x872E43: add     dword ptr [esi+5Ch], 1
0x872E47: mov     eax, [esp+30h+var_10]
0x872E4B: test    eax, eax
0x872E4D: mov     byte ptr [esp+30h+var_4], 1
0x872E52: jz      short loc_872E66
0x872E54: add     [eax+5Ch], ebx
0x872E57: mov     ecx, eax
0x872E59: add     eax, 5Ch ; '\'
0x872E5C: cmp     dword ptr [eax], 0
0x872E5F: jnz     short loc_872E66
0x872E61: call    sub_772560
0x872E66: push    2
0x872E68: push    1
0x872E6A: push    0
0x872E6C: push    esi
0x872E6D: call    sub_801110
0x872E72: mov     ecx, [edi+14h]
0x872E75: add     esp, 10h
0x872E78: push    esi; a3
0x872E79: push    ecx; a2
0x872E7A: mov     ecx, edi; this
0x872E7C: call    sub_760010
0x872E81: lea     edx, [esp+30h+var_10]
0x872E85: push    edx
0x872E86: call    sub_772630
0x872E8B: add     esp, 4
0x872E8E: mov     ebp, eax
0x872E90: cmp     esi, [ebp+0]
0x872E93: mov     byte ptr [esp+30h+var_4], 1Bh
0x872E98: jz      short loc_872EB9
0x872E9A: test    esi, esi
0x872E9C: jz      short loc_872EAA
0x872E9E: add     [esi+5Ch], ebx
0x872EA1: jnz     short loc_872EAA
0x872EA3: mov     ecx, esi
0x872EA5: call    sub_772560
0x872EAA: mov     esi, [ebp+0]
0x872EAD: test    esi, esi
0x872EAF: mov     [esp+30h+var_1C], esi
0x872EB3: jz      short loc_872EB9
0x872EB5: add     dword ptr [esi+5Ch], 1
0x872EB9: mov     eax, [esp+30h+var_10]
0x872EBD: test    eax, eax
0x872EBF: mov     byte ptr [esp+30h+var_4], 1
0x872EC4: jz      short loc_872ED8
0x872EC6: add     [eax+5Ch], ebx
0x872EC9: mov     ecx, eax
0x872ECB: add     eax, 5Ch ; '\'
0x872ECE: cmp     dword ptr [eax], 0
0x872ED1: jnz     short loc_872ED8
0x872ED3: call    sub_772560
0x872ED8: push    2
0x872EDA: push    1
0x872EDC: push    1
0x872EDE: push    esi
0x872EDF: call    sub_801110
0x872EE4: mov     eax, [edi+14h]
0x872EE7: add     esp, 10h
0x872EEA: push    esi; a3
0x872EEB: push    eax; a2
0x872EEC: mov     ecx, edi; this
0x872EEE: call    sub_760010
0x872EF3: lea     ecx, [esp+30h+var_10]
0x872EF7: push    ecx
0x872EF8: call    sub_772630
0x872EFD: add     esp, 4
0x872F00: mov     ebp, eax
0x872F02: cmp     esi, [ebp+0]
0x872F05: mov     byte ptr [esp+30h+var_4], 1Ch
0x872F0A: jz      short loc_872F2B
0x872F0C: test    esi, esi
0x872F0E: jz      short loc_872F1C
0x872F10: add     [esi+5Ch], ebx
0x872F13: jnz     short loc_872F1C
0x872F15: mov     ecx, esi
0x872F17: call    sub_772560
0x872F1C: mov     esi, [ebp+0]
0x872F1F: test    esi, esi
0x872F21: mov     [esp+30h+var_1C], esi
0x872F25: jz      short loc_872F2B
0x872F27: add     dword ptr [esi+5Ch], 1
0x872F2B: mov     eax, [esp+30h+var_10]
0x872F2F: test    eax, eax
0x872F31: mov     byte ptr [esp+30h+var_4], 1
0x872F36: jz      short loc_872F4A
0x872F38: add     [eax+5Ch], ebx
0x872F3B: mov     ecx, eax
0x872F3D: add     eax, 5Ch ; '\'
0x872F40: cmp     dword ptr [eax], 0
0x872F43: jnz     short loc_872F4A
0x872F45: call    sub_772560
0x872F4A: push    2
0x872F4C: push    1
0x872F4E: push    2
0x872F50: push    esi
0x872F51: call    sub_801110
0x872F56: mov     edx, [edi+14h]
0x872F59: add     esp, 10h
0x872F5C: push    esi; a3
0x872F5D: push    edx; a2
0x872F5E: mov     ecx, edi; this
0x872F60: call    sub_760010
0x872F65: lea     eax, [esp+30h+var_10]
0x872F69: push    eax
0x872F6A: call    sub_772630
0x872F6F: add     esp, 4
0x872F72: mov     ebp, eax
0x872F74: cmp     esi, [ebp+0]
0x872F77: mov     byte ptr [esp+30h+var_4], 1Dh
0x872F7C: jz      short loc_872F9D
0x872F7E: test    esi, esi
0x872F80: jz      short loc_872F8E
0x872F82: add     [esi+5Ch], ebx
0x872F85: jnz     short loc_872F8E
0x872F87: mov     ecx, esi
0x872F89: call    sub_772560
0x872F8E: mov     esi, [ebp+0]
0x872F91: test    esi, esi
0x872F93: mov     [esp+30h+var_1C], esi
0x872F97: jz      short loc_872F9D
0x872F99: add     dword ptr [esi+5Ch], 1
0x872F9D: mov     eax, [esp+30h+var_10]
0x872FA1: test    eax, eax
0x872FA3: mov     byte ptr [esp+30h+var_4], 1
0x872FA8: jz      short loc_872FBC
0x872FAA: add     [eax+5Ch], ebx
0x872FAD: mov     ecx, eax
0x872FAF: add     eax, 5Ch ; '\'
0x872FB2: cmp     dword ptr [eax], 0
0x872FB5: jnz     short loc_872FBC
0x872FB7: call    sub_772560
0x872FBC: mov     ecx, ds:0B43110h
0x872FC2: push    ecx; a2
0x872FC3: mov     ecx, esi; this
0x872FC5: call    sub_76C910
0x872FCA: push    0
0x872FCC: push    3
0x872FCE: push    3
0x872FD0: push    esi
0x872FD1: call    sub_801110
0x872FD6: mov     edx, [edi+14h]
0x872FD9: add     esp, 10h
0x872FDC: push    esi; a3
0x872FDD: push    edx; a2
0x872FDE: mov     ecx, edi; this
0x872FE0: call    sub_760010
0x872FE5: lea     eax, [esp+30h+var_10]
0x872FE9: push    eax
0x872FEA: call    sub_772630
0x872FEF: add     esp, 4
0x872FF2: mov     ebp, eax
0x872FF4: cmp     esi, [ebp+0]
0x872FF7: mov     byte ptr [esp+30h+var_4], 1Eh
0x872FFC: jz      short loc_87301D
0x872FFE: test    esi, esi
0x873000: jz      short loc_87300E
0x873002: add     [esi+5Ch], ebx
0x873005: jnz     short loc_87300E
0x873007: mov     ecx, esi
0x873009: call    sub_772560
0x87300E: mov     esi, [ebp+0]
0x873011: test    esi, esi
0x873013: mov     [esp+30h+var_1C], esi
0x873017: jz      short loc_87301D
0x873019: add     dword ptr [esi+5Ch], 1
0x87301D: mov     eax, [esp+30h+var_10]
0x873021: test    eax, eax
0x873023: mov     byte ptr [esp+30h+var_4], 1
0x873028: jz      short loc_87303C
0x87302A: add     [eax+5Ch], ebx
0x87302D: mov     ecx, eax
0x87302F: add     eax, 5Ch ; '\'
0x873032: cmp     dword ptr [eax], 0
0x873035: jnz     short loc_87303C
0x873037: call    sub_772560
0x87303C: push    2
0x87303E: push    1
0x873040: push    4
0x873042: push    esi
0x873043: call    sub_801110
0x873048: mov     ecx, [edi+14h]
0x87304B: add     esp, 10h
0x87304E: push    esi; a3
0x87304F: push    ecx; a2
0x873050: mov     ecx, edi; this
0x873052: call    sub_760010
0x873057: lea     edx, [esp+30h+var_10]
0x87305B: push    edx
0x87305C: call    sub_772630
0x873061: add     esp, 4
0x873064: mov     ebp, eax
0x873066: cmp     esi, [ebp+0]
0x873069: mov     byte ptr [esp+30h+var_4], 1Fh
0x87306E: jz      short loc_87308F
0x873070: test    esi, esi
0x873072: jz      short loc_873080
0x873074: add     [esi+5Ch], ebx
0x873077: jnz     short loc_873080
0x873079: mov     ecx, esi
0x87307B: call    sub_772560
0x873080: mov     esi, [ebp+0]
0x873083: test    esi, esi
0x873085: mov     [esp+30h+var_1C], esi
0x873089: jz      short loc_87308F
0x87308B: add     dword ptr [esi+5Ch], 1
0x87308F: mov     eax, [esp+30h+var_10]
0x873093: test    eax, eax
0x873095: mov     byte ptr [esp+30h+var_4], 1
0x87309A: jz      short loc_8730AE
0x87309C: add     [eax+5Ch], ebx
0x87309F: mov     ecx, eax
0x8730A1: add     eax, 5Ch ; '\'
0x8730A4: cmp     dword ptr [eax], 0
0x8730A7: jnz     short loc_8730AE
0x8730A9: call    sub_772560
0x8730AE: push    2
0x8730B0: push    1
0x8730B2: push    5
0x8730B4: push    esi
0x8730B5: call    sub_801110
0x8730BA: mov     eax, [edi+14h]
0x8730BD: add     esp, 10h
0x8730C0: push    esi; a3
0x8730C1: push    eax; a2
0x8730C2: mov     ecx, edi; this
0x8730C4: call    sub_760010
0x8730C9: mov     ecx, [esp+30h+var_18]
0x8730CD: mov     ebx, [ecx+124h]
0x8730D3: mov     ebp, [edi+58h]
0x8730D6: cmp     ebp, ebx
0x8730D8: jz      short loc_87310C
0x8730DA: test    ebp, ebp
0x8730DC: jz      short loc_8730FB
0x8730DE: lea     edx, [ebp+4]
0x8730E1: push    edx; lpAddend
0x8730E2: call    dword ptr ds:0A2807Ch
0x8730E8: test    eax, eax
0x8730EA: jnz     short loc_8730FB
0x8730EC: test    ebp, ebp
0x8730EE: jz      short loc_8730FB
0x8730F0: mov     eax, [ebp+0]
0x8730F3: mov     edx, [eax]
0x8730F5: push    1
0x8730F7: mov     ecx, ebp
0x8730F9: call    edx
0x8730FB: test    ebx, ebx
0x8730FD: mov     [edi+58h], ebx
0x873100: jz      short loc_87310C
0x873102: add     ebx, 4
0x873105: push    ebx; lpAddend
0x873106: call    dword ptr ds:0A28078h
0x87310C: mov     eax, [esp+30h+var_18]
0x873110: mov     ebx, [eax+190h]
0x873116: mov     ebp, [edi+44h]
0x873119: cmp     ebp, ebx
0x87311B: jz      short loc_87314F
0x87311D: test    ebp, ebp
0x87311F: jz      short loc_87313E
0x873121: lea     ecx, [ebp+4]
0x873124: push    ecx; lpAddend
0x873125: call    dword ptr ds:0A2807Ch
0x87312B: test    eax, eax
0x87312D: jnz     short loc_87313E
0x87312F: test    ebp, ebp
0x873131: jz      short loc_87313E
0x873133: mov     edx, [ebp+0]
0x873136: mov     eax, [edx]
0x873138: push    1
0x87313A: mov     ecx, ebp
0x87313C: call    eax
0x87313E: test    ebx, ebx
0x873140: mov     [edi+44h], ebx
0x873143: jz      short loc_87314F
0x873145: add     ebx, 4
0x873148: push    ebx; lpAddend
0x873149: call    dword ptr ds:0A28078h
0x87314F: cmp     dword ptr [edi+30h], 0
0x873153: jnz     short loc_87315D
0x873155: call    sub_772DF0
0x87315A: mov     [edi+30h], eax
0x87315D: mov     ecx, [edi+30h]
0x873160: push    0
0x873162: push    1
0x873164: push    1Bh
0x873166: call    sub_772CD0
0x87316B: cmp     dword ptr [edi+30h], 0
0x87316F: jnz     short loc_873179
0x873171: call    sub_772DF0
0x873176: mov     [edi+30h], eax
0x873179: mov     ecx, [edi+30h]
0x87317C: push    0
0x87317E: push    2
0x873180: push    13h
0x873182: call    sub_772CD0
0x873187: cmp     dword ptr [edi+30h], 0
0x87318B: jnz     short loc_873195
0x87318D: call    sub_772DF0
0x873192: mov     [edi+30h], eax
0x873195: mov     ecx, [edi+30h]
0x873198: push    0
0x87319A: push    2
0x87319C: push    14h
0x87319E: call    sub_772CD0
0x8731A3: cmp     dword ptr [edi+30h], 0
0x8731A7: jnz     short loc_8731B1
0x8731A9: call    sub_772DF0
0x8731AE: mov     [edi+30h], eax
0x8731B1: mov     ecx, [edi+30h]
0x8731B4: push    0
0x8731B6: push    0
0x8731B8: push    0Fh
0x8731BA: call    sub_772CD0
0x8731BF: cmp     dword ptr [edi+30h], 0
0x8731C3: jnz     short loc_8731CD
0x8731C5: call    sub_772DF0
0x8731CA: mov     [edi+30h], eax
0x8731CD: mov     ecx, [edi+30h]
0x8731D0: push    0
0x8731D2: push    1
0x8731D4: push    7
0x8731D6: call    sub_772CD0
0x8731DB: cmp     dword ptr [edi+30h], 0
0x8731DF: jnz     short loc_8731E9
0x8731E1: call    sub_772DF0
0x8731E6: mov     [edi+30h], eax
0x8731E9: mov     ecx, [edi+30h]
0x8731EC: push    0
0x8731EE: push    3
0x8731F0: push    17h
0x8731F2: call    sub_772CD0
0x8731F7: cmp     dword ptr [edi+30h], 0
0x8731FB: jnz     short loc_873205
0x8731FD: call    sub_772DF0
0x873202: mov     [edi+30h], eax
0x873205: mov     ecx, [edi+30h]
0x873208: push    0
0x87320A: push    0
0x87320C: push    0Eh
0x87320E: call    sub_772CD0
0x873213: cmp     dword ptr [edi+30h], 0
0x873217: jnz     short loc_873221
0x873219: call    sub_772DF0
0x87321E: mov     [edi+30h], eax
0x873221: mov     ecx, [edi+30h]
0x873224: push    0
0x873226: push    0
0x873228: push    34h ; '4'
0x87322A: call    sub_772CD0
0x87322F: or      ebx, 0FFFFFFFFh
0x873232: cmp     edi, ds:0B4770Ch
0x873238: mov     dword ptr ds:0B43FB4h, 20802h
0x873242: mov     dword ptr ds:0B44644h, 108h
0x87324C: jz      short loc_87326C
0x87324E: add     [edi+60h], ebx
0x873251: jnz     short loc_87325A
0x873253: mov     ecx, edi
0x873255: call    sub_7604D0
0x87325A: mov     edi, ds:0B4770Ch
0x873260: test    edi, edi
0x873262: mov     [esp+30h+var_14], edi
0x873266: jz      short loc_87326C
0x873268: add     dword ptr [edi+60h], 1
0x87326C: cmp     dword ptr [edi+18h], 6
0x873270: jnb     loc_873530
0x873276: lea     ecx, [esp+30h+var_10]
0x87327A: push    ecx
0x87327B: call    sub_772630
0x873280: add     esp, 4
0x873283: mov     ebp, eax
0x873285: cmp     esi, [ebp+0]
0x873288: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x87328D: jz      short loc_8732AE
0x87328F: test    esi, esi
0x873291: jz      short loc_87329F
0x873293: add     [esi+5Ch], ebx
0x873296: jnz     short loc_87329F
0x873298: mov     ecx, esi
0x87329A: call    sub_772560
0x87329F: mov     esi, [ebp+0]
0x8732A2: test    esi, esi
0x8732A4: mov     [esp+30h+var_1C], esi
0x8732A8: jz      short loc_8732AE
0x8732AA: add     dword ptr [esi+5Ch], 1
0x8732AE: mov     eax, [esp+30h+var_10]
0x8732B2: test    eax, eax
0x8732B4: mov     byte ptr [esp+30h+var_4], 1
0x8732B9: jz      short loc_8732CD
0x8732BB: add     [eax+5Ch], ebx
0x8732BE: mov     ecx, eax
0x8732C0: add     eax, 5Ch ; '\'
0x8732C3: cmp     dword ptr [eax], 0
0x8732C6: jnz     short loc_8732CD
0x8732C8: call    sub_772560
0x8732CD: push    2
0x8732CF: push    1
0x8732D1: push    0
0x8732D3: push    esi
0x8732D4: call    sub_801110
0x8732D9: mov     edx, [edi+14h]
0x8732DC: add     esp, 10h
0x8732DF: push    esi; a3
0x8732E0: push    edx; a2
0x8732E1: mov     ecx, edi; this
0x8732E3: call    sub_760010
0x8732E8: lea     eax, [esp+30h+var_10]
0x8732EC: push    eax
0x8732ED: call    sub_772630
0x8732F2: add     esp, 4
0x8732F5: mov     ebp, eax
0x8732F7: cmp     esi, [ebp+0]
0x8732FA: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x8732FF: jz      short loc_873320
0x873301: test    esi, esi
0x873303: jz      short loc_873311
0x873305: add     [esi+5Ch], ebx
0x873308: jnz     short loc_873311
0x87330A: mov     ecx, esi
0x87330C: call    sub_772560
0x873311: mov     esi, [ebp+0]
0x873314: test    esi, esi
0x873316: mov     [esp+30h+var_1C], esi
0x87331A: jz      short loc_873320
0x87331C: add     dword ptr [esi+5Ch], 1
0x873320: mov     eax, [esp+30h+var_10]
0x873324: test    eax, eax
0x873326: mov     byte ptr [esp+30h+var_4], 1
0x87332B: jz      short loc_87333F
0x87332D: add     [eax+5Ch], ebx
0x873330: mov     ecx, eax
0x873332: add     eax, 5Ch ; '\'
0x873335: cmp     dword ptr [eax], 0
0x873338: jnz     short loc_87333F
0x87333A: call    sub_772560
0x87333F: push    2
0x873341: push    1
0x873343: push    1
0x873345: push    esi
0x873346: call    sub_801110
0x87334B: mov     ecx, [edi+14h]
0x87334E: add     esp, 10h
0x873351: push    esi; a3
0x873352: push    ecx; a2
0x873353: mov     ecx, edi; this
0x873355: call    sub_760010
0x87335A: lea     edx, [esp+30h+var_10]
0x87335E: push    edx
0x87335F: call    sub_772630
0x873364: add     esp, 4
0x873367: mov     ebp, eax
0x873369: cmp     esi, [ebp+0]
0x87336C: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x873371: jz      short loc_873392
0x873373: test    esi, esi
0x873375: jz      short loc_873383
0x873377: add     [esi+5Ch], ebx
0x87337A: jnz     short loc_873383
0x87337C: mov     ecx, esi
0x87337E: call    sub_772560
0x873383: mov     esi, [ebp+0]
0x873386: test    esi, esi
0x873388: mov     [esp+30h+var_1C], esi
0x87338C: jz      short loc_873392
0x87338E: add     dword ptr [esi+5Ch], 1
0x873392: mov     eax, [esp+30h+var_10]
0x873396: test    eax, eax
0x873398: mov     byte ptr [esp+30h+var_4], 1
0x87339D: jz      short loc_8733B1
0x87339F: add     [eax+5Ch], ebx
0x8733A2: mov     ecx, eax
0x8733A4: add     eax, 5Ch ; '\'
0x8733A7: cmp     dword ptr [eax], 0
0x8733AA: jnz     short loc_8733B1
0x8733AC: call    sub_772560
0x8733B1: push    2
0x8733B3: push    1
0x8733B5: push    2
0x8733B7: push    esi
0x8733B8: call    sub_801110
0x8733BD: mov     eax, [edi+14h]
0x8733C0: add     esp, 10h
0x8733C3: push    esi; a3
0x8733C4: push    eax; a2
0x8733C5: mov     ecx, edi; this
0x8733C7: call    sub_760010
0x8733CC: lea     ecx, [esp+30h+var_10]
0x8733D0: push    ecx
0x8733D1: call    sub_772630
0x8733D6: add     esp, 4
0x8733D9: mov     ebp, eax
0x8733DB: cmp     esi, [ebp+0]
0x8733DE: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x8733E3: jz      short loc_873404
0x8733E5: test    esi, esi
0x8733E7: jz      short loc_8733F5
0x8733E9: add     [esi+5Ch], ebx
0x8733EC: jnz     short loc_8733F5
0x8733EE: mov     ecx, esi
0x8733F0: call    sub_772560
0x8733F5: mov     esi, [ebp+0]
0x8733F8: test    esi, esi
0x8733FA: mov     [esp+30h+var_1C], esi
0x8733FE: jz      short loc_873404
0x873400: add     dword ptr [esi+5Ch], 1
0x873404: mov     eax, [esp+30h+var_10]
0x873408: test    eax, eax
0x87340A: mov     byte ptr [esp+30h+var_4], 1
0x87340F: jz      short loc_873423
0x873411: add     [eax+5Ch], ebx
0x873414: mov     ecx, eax
0x873416: add     eax, 5Ch ; '\'
0x873419: cmp     dword ptr [eax], 0
0x87341C: jnz     short loc_873423
0x87341E: call    sub_772560
0x873423: mov     edx, ds:0B43110h
0x873429: push    edx; a2
0x87342A: mov     ecx, esi; this
0x87342C: call    sub_76C910
0x873431: push    0
0x873433: push    3
0x873435: push    3
0x873437: push    esi
0x873438: call    sub_801110
0x87343D: mov     eax, [edi+14h]
0x873440: add     esp, 10h
0x873443: push    esi; a3
0x873444: push    eax; a2
0x873445: mov     ecx, edi; this
0x873447: call    sub_760010
0x87344C: lea     ecx, [esp+30h+var_10]
0x873450: push    ecx
0x873451: call    sub_772630
0x873456: add     esp, 4
0x873459: mov     ebp, eax
0x87345B: cmp     esi, [ebp+0]
0x87345E: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x873463: jz      short loc_873484
0x873465: test    esi, esi
0x873467: jz      short loc_873475
0x873469: add     [esi+5Ch], ebx
0x87346C: jnz     short loc_873475
0x87346E: mov     ecx, esi
0x873470: call    sub_772560
0x873475: mov     esi, [ebp+0]
0x873478: test    esi, esi
0x87347A: mov     [esp+30h+var_1C], esi
0x87347E: jz      short loc_873484
0x873480: add     dword ptr [esi+5Ch], 1
0x873484: mov     eax, [esp+30h+var_10]
0x873488: test    eax, eax
0x87348A: mov     byte ptr [esp+30h+var_4], 1
0x87348F: jz      short loc_8734A3
0x873491: add     [eax+5Ch], ebx
0x873494: mov     ecx, eax
0x873496: add     eax, 5Ch ; '\'
0x873499: cmp     dword ptr [eax], 0
0x87349C: jnz     short loc_8734A3
0x87349E: call    sub_772560
0x8734A3: push    2
0x8734A5: push    1
0x8734A7: push    4
0x8734A9: push    esi
0x8734AA: call    sub_801110
0x8734AF: mov     edx, [edi+14h]
0x8734B2: add     esp, 10h
0x8734B5: push    esi; a3
0x8734B6: push    edx; a2
0x8734B7: mov     ecx, edi; this
0x8734B9: call    sub_760010
0x8734BE: lea     eax, [esp+30h+var_10]
0x8734C2: push    eax
0x8734C3: call    sub_772630
0x8734C8: add     esp, 4
0x8734CB: mov     ebp, eax
0x8734CD: cmp     esi, [ebp+0]
0x8734D0: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x8734D5: jz      short loc_8734F6
0x8734D7: test    esi, esi
0x8734D9: jz      short loc_8734E7
0x8734DB: add     [esi+5Ch], ebx
0x8734DE: jnz     short loc_8734E7
0x8734E0: mov     ecx, esi
0x8734E2: call    sub_772560
0x8734E7: mov     esi, [ebp+0]
0x8734EA: test    esi, esi
0x8734EC: mov     [esp+30h+var_1C], esi
0x8734F0: jz      short loc_8734F6
0x8734F2: add     dword ptr [esi+5Ch], 1
0x8734F6: mov     eax, [esp+30h+var_10]
0x8734FA: test    eax, eax
0x8734FC: mov     byte ptr [esp+30h+var_4], 1
0x873501: jz      short loc_873515
0x873503: add     [eax+5Ch], ebx
0x873506: mov     ecx, eax
0x873508: add     eax, 5Ch ; '\'
0x87350B: cmp     dword ptr [eax], 0
0x87350E: jnz     short loc_873515
0x873510: call    sub_772560
0x873515: push    2
0x873517: push    1
0x873519: push    5
0x87351B: push    esi
0x87351C: call    sub_801110
0x873521: mov     ecx, [edi+14h]
0x873524: add     esp, 10h
0x873527: push    esi; a3
0x873528: push    ecx; a2
0x873529: mov     ecx, edi; this
0x87352B: call    sub_760010
0x873530: mov     edx, [esp+30h+var_18]
0x873534: mov     ebx, [edx+128h]
0x87353A: mov     ebp, [edi+58h]
0x87353D: cmp     ebp, ebx
0x87353F: jz      short loc_873573
0x873541: test    ebp, ebp
0x873543: jz      short loc_873562
0x873545: lea     eax, [ebp+4]
0x873548: push    eax; lpAddend
0x873549: call    dword ptr ds:0A2807Ch
0x87354F: test    eax, eax
0x873551: jnz     short loc_873562
0x873553: test    ebp, ebp
0x873555: jz      short loc_873562
0x873557: mov     edx, [ebp+0]
0x87355A: mov     eax, [edx]
0x87355C: push    1
0x87355E: mov     ecx, ebp
0x873560: call    eax
0x873562: test    ebx, ebx
0x873564: mov     [edi+58h], ebx
0x873567: jz      short loc_873573
0x873569: add     ebx, 4
0x87356C: push    ebx; lpAddend
0x87356D: call    dword ptr ds:0A28078h
0x873573: mov     ecx, [esp+30h+var_18]
0x873577: mov     ebx, [ecx+190h]
0x87357D: mov     ebp, [edi+44h]
0x873580: cmp     ebp, ebx
0x873582: jz      short loc_8735B6
0x873584: test    ebp, ebp
0x873586: jz      short loc_8735A5
0x873588: lea     edx, [ebp+4]
0x87358B: push    edx; lpAddend
0x87358C: call    dword ptr ds:0A2807Ch
0x873592: test    eax, eax
0x873594: jnz     short loc_8735A5
0x873596: test    ebp, ebp
0x873598: jz      short loc_8735A5
0x87359A: mov     eax, [ebp+0]
0x87359D: mov     edx, [eax]
0x87359F: push    1
0x8735A1: mov     ecx, ebp
0x8735A3: call    edx
0x8735A5: test    ebx, ebx
0x8735A7: mov     [edi+44h], ebx
0x8735AA: jz      short loc_8735B6
0x8735AC: add     ebx, 4
0x8735AF: push    ebx; lpAddend
0x8735B0: call    dword ptr ds:0A28078h
0x8735B6: cmp     dword ptr [edi+30h], 0
0x8735BA: jnz     short loc_8735C4
0x8735BC: call    sub_772DF0
0x8735C1: mov     [edi+30h], eax
0x8735C4: mov     ecx, [edi+30h]
0x8735C7: push    0
0x8735C9: push    1
0x8735CB: push    1Bh
0x8735CD: call    sub_772CD0
0x8735D2: cmp     dword ptr [edi+30h], 0
0x8735D6: jnz     short loc_8735E0
0x8735D8: call    sub_772DF0
0x8735DD: mov     [edi+30h], eax
0x8735E0: mov     ecx, [edi+30h]
0x8735E3: push    0
0x8735E5: push    2
0x8735E7: push    13h
0x8735E9: call    sub_772CD0
0x8735EE: cmp     dword ptr [edi+30h], 0
0x8735F2: jnz     short loc_8735FC
0x8735F4: call    sub_772DF0
0x8735F9: mov     [edi+30h], eax
0x8735FC: mov     ecx, [edi+30h]
0x8735FF: push    0
0x873601: push    2
0x873603: push    14h
0x873605: call    sub_772CD0
0x87360A: cmp     dword ptr [edi+30h], 0
0x87360E: jnz     short loc_873618
0x873610: call    sub_772DF0
0x873615: mov     [edi+30h], eax
0x873618: mov     ecx, [edi+30h]
0x87361B: push    0
0x87361D: push    0
0x87361F: push    0Fh
0x873621: call    sub_772CD0
0x873626: cmp     dword ptr [edi+30h], 0
0x87362A: jnz     short loc_873634
0x87362C: call    sub_772DF0
0x873631: mov     [edi+30h], eax
0x873634: mov     ecx, [edi+30h]
0x873637: push    0
0x873639: push    1
0x87363B: push    7
0x87363D: call    sub_772CD0
0x873642: cmp     dword ptr [edi+30h], 0
0x873646: jnz     short loc_873650
0x873648: call    sub_772DF0
0x87364D: mov     [edi+30h], eax
0x873650: mov     ecx, [edi+30h]
0x873653: push    0
0x873655: push    3
0x873657: push    17h
0x873659: call    sub_772CD0
0x87365E: cmp     dword ptr [edi+30h], 0
0x873662: jnz     short loc_87366C
0x873664: call    sub_772DF0
0x873669: mov     [edi+30h], eax
0x87366C: mov     ecx, [edi+30h]
0x87366F: push    0
0x873671: push    0
0x873673: push    0Eh
0x873675: call    sub_772CD0
0x87367A: cmp     dword ptr [edi+30h], 0
0x87367E: jnz     short loc_873688
0x873680: call    sub_772DF0
0x873685: mov     [edi+30h], eax
0x873688: mov     ecx, [edi+30h]
0x87368B: push    0
0x87368D: push    0
0x87368F: push    34h ; '4'
0x873691: call    sub_772CD0
0x873696: or      ebx, 0FFFFFFFFh
0x873699: test    esi, esi
0x87369B: mov     dword ptr ds:0B43FC0h, 60808h
0x8736A5: mov     dword ptr ds:0B44650h, 108h
0x8736AF: mov     byte ptr [esp+30h+var_4], 0
0x8736B4: jz      short loc_8736C2
0x8736B6: add     [esi+5Ch], ebx
0x8736B9: jnz     short loc_8736C2
0x8736BB: mov     ecx, esi
0x8736BD: call    sub_772560
0x8736C2: add     [edi+60h], ebx
0x8736C5: mov     [esp+30h+var_4], ebx
0x8736C9: jnz     short loc_8736D2
0x8736CB: mov     ecx, edi
0x8736CD: call    sub_7604D0
0x8736D2: mov     ecx, dword ptr [esp+30h+var_C]
0x8736D6: mov     large fs:0, ecx
0x8736DD: pop     ecx
0x8736DE: pop     edi
0x8736DF: pop     esi
0x8736E0: pop     ebp
0x8736E1: pop     ebx
0x8736E2: add     esp, 1Ch
0x8736E5: retn

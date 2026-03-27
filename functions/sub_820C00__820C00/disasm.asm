0x820C00: push    0FFFFFFFFh
0x820C02: push    offset SEH_820C00
0x820C07: mov     eax, large fs:0
0x820C0D: push    eax
0x820C0E: sub     esp, 378h
0x820C14: push    ebx
0x820C15: push    ebp
0x820C16: push    esi
0x820C17: push    edi
0x820C18: mov     eax, ds:0B30AACh
0x820C1D: xor     eax, esp
0x820C1F: push    eax
0x820C20: lea     eax, [esp+398h+var_C]
0x820C27: mov     large fs:0, eax
0x820C2D: xor     esi, esi
0x820C2F: xor     edi, edi
0x820C31: mov     [esp+398h+var_380], esi
0x820C35: mov     [esp+398h+var_4], edi
0x820C3C: mov     [esp+398h+a3], edi
0x820C40: mov     eax, ds:0B45778h
0x820C45: cmp     eax, edi
0x820C47: mov     ebp, 1
0x820C4C: mov     byte ptr [esp+398h+var_4], 1
0x820C54: jz      short loc_820C63
0x820C56: mov     esi, eax
0x820C58: cmp     esi, edi
0x820C5A: mov     [esp+398h+var_380], esi
0x820C5E: jz      short loc_820C63
0x820C60: add     [esi+60h], ebp
0x820C63: mov     eax, [esi+18h]
0x820C66: or      ebx, 0FFFFFFFFh
0x820C69: cmp     eax, 8
0x820C6C: jnb     loc_82102B
0x820C72: lea     eax, [esp+398h+var_EC]
0x820C79: push    eax
0x820C7A: call    sub_772630
0x820C7F: add     esp, 4
0x820C82: cmp     dword ptr [eax], 0
0x820C85: jz      short loc_820C94
0x820C87: mov     edi, [eax]
0x820C89: test    edi, edi
0x820C8B: mov     [esp+398h+a3], edi
0x820C8F: jz      short loc_820C94
0x820C91: add     [edi+5Ch], ebp
0x820C94: mov     eax, [esp+398h+var_EC]
0x820C9B: test    eax, eax
0x820C9D: mov     byte ptr [esp+398h+var_4], 1
0x820CA5: jz      short loc_820CB9
0x820CA7: add     [eax+5Ch], ebx
0x820CAA: mov     ecx, eax
0x820CAC: add     eax, 5Ch ; '\'
0x820CAF: cmp     dword ptr [eax], 0
0x820CB2: jnz     short loc_820CB9
0x820CB4: call    sub_772560
0x820CB9: push    2
0x820CBB: push    1
0x820CBD: push    0
0x820CBF: push    edi
0x820CC0: call    sub_801110
0x820CC5: add     esp, 10h
0x820CC8: push    edi; a3
0x820CC9: push    0; a2
0x820CCB: mov     ecx, esi; this
0x820CCD: call    sub_760010
0x820CD2: lea     ecx, [esp+398h+var_374]
0x820CD6: push    ecx
0x820CD7: call    sub_772630
0x820CDC: add     esp, 4
0x820CDF: mov     ebp, eax
0x820CE1: cmp     edi, [ebp+0]
0x820CE4: mov     byte ptr [esp+398h+var_4], 3
0x820CEC: jz      short loc_820D0D
0x820CEE: test    edi, edi
0x820CF0: jz      short loc_820CFE
0x820CF2: add     [edi+5Ch], ebx
0x820CF5: jnz     short loc_820CFE
0x820CF7: mov     ecx, edi
0x820CF9: call    sub_772560
0x820CFE: mov     edi, [ebp+0]
0x820D01: test    edi, edi
0x820D03: mov     [esp+398h+a3], edi
0x820D07: jz      short loc_820D0D
0x820D09: add     dword ptr [edi+5Ch], 1
0x820D0D: mov     eax, [esp+398h+var_374]
0x820D11: test    eax, eax
0x820D13: mov     byte ptr [esp+398h+var_4], 1
0x820D1B: jz      short loc_820D2F
0x820D1D: add     [eax+5Ch], ebx
0x820D20: mov     ecx, eax
0x820D22: add     eax, 5Ch ; '\'
0x820D25: cmp     dword ptr [eax], 0
0x820D28: jnz     short loc_820D2F
0x820D2A: call    sub_772560
0x820D2F: push    2
0x820D31: push    1
0x820D33: push    1
0x820D35: push    edi
0x820D36: call    sub_801110
0x820D3B: add     esp, 10h
0x820D3E: push    edi; a3
0x820D3F: push    1; a2
0x820D41: mov     ecx, esi; this
0x820D43: call    sub_760010
0x820D48: lea     edx, [esp+398h+var_7C]
0x820D4F: push    edx
0x820D50: call    sub_772630
0x820D55: add     esp, 4
0x820D58: mov     ebp, eax
0x820D5A: cmp     edi, [ebp+0]
0x820D5D: mov     byte ptr [esp+398h+var_4], 4
0x820D65: jz      short loc_820D86
0x820D67: test    edi, edi
0x820D69: jz      short loc_820D77
0x820D6B: add     [edi+5Ch], ebx
0x820D6E: jnz     short loc_820D77
0x820D70: mov     ecx, edi
0x820D72: call    sub_772560
0x820D77: mov     edi, [ebp+0]
0x820D7A: test    edi, edi
0x820D7C: mov     [esp+398h+a3], edi
0x820D80: jz      short loc_820D86
0x820D82: add     dword ptr [edi+5Ch], 1
0x820D86: mov     eax, [esp+398h+var_7C]
0x820D8D: test    eax, eax
0x820D8F: mov     byte ptr [esp+398h+var_4], 1
0x820D97: jz      short loc_820DAB
0x820D99: add     [eax+5Ch], ebx
0x820D9C: mov     ecx, eax
0x820D9E: add     eax, 5Ch ; '\'
0x820DA1: cmp     dword ptr [eax], 0
0x820DA4: jnz     short loc_820DAB
0x820DA6: call    sub_772560
0x820DAB: push    2
0x820DAD: push    1
0x820DAF: push    2
0x820DB1: push    edi
0x820DB2: call    sub_801110
0x820DB7: add     esp, 10h
0x820DBA: push    edi; a3
0x820DBB: push    2; a2
0x820DBD: mov     ecx, esi; this
0x820DBF: call    sub_760010
0x820DC4: lea     eax, [esp+398h+var_36C]
0x820DC8: push    eax
0x820DC9: call    sub_772630
0x820DCE: add     esp, 4
0x820DD1: mov     ebp, eax
0x820DD3: cmp     edi, [ebp+0]
0x820DD6: mov     byte ptr [esp+398h+var_4], 5
0x820DDE: jz      short loc_820DFF
0x820DE0: test    edi, edi
0x820DE2: jz      short loc_820DF0
0x820DE4: add     [edi+5Ch], ebx
0x820DE7: jnz     short loc_820DF0
0x820DE9: mov     ecx, edi
0x820DEB: call    sub_772560
0x820DF0: mov     edi, [ebp+0]
0x820DF3: test    edi, edi
0x820DF5: mov     [esp+398h+a3], edi
0x820DF9: jz      short loc_820DFF
0x820DFB: add     dword ptr [edi+5Ch], 1
0x820DFF: mov     eax, [esp+398h+var_36C]
0x820E03: test    eax, eax
0x820E05: mov     byte ptr [esp+398h+var_4], 1
0x820E0D: jz      short loc_820E21
0x820E0F: add     [eax+5Ch], ebx
0x820E12: mov     ecx, eax
0x820E14: add     eax, 5Ch ; '\'
0x820E17: cmp     dword ptr [eax], 0
0x820E1A: jnz     short loc_820E21
0x820E1C: call    sub_772560
0x820E21: push    2
0x820E23: push    1
0x820E25: push    3
0x820E27: push    edi
0x820E28: call    sub_801110
0x820E2D: add     esp, 10h
0x820E30: push    edi; a3
0x820E31: push    3; a2
0x820E33: mov     ecx, esi; this
0x820E35: call    sub_760010
0x820E3A: lea     ecx, [esp+398h+var_1BC]
0x820E41: push    ecx
0x820E42: call    sub_772630
0x820E47: add     esp, 4
0x820E4A: mov     ebp, eax
0x820E4C: cmp     edi, [ebp+0]
0x820E4F: mov     byte ptr [esp+398h+var_4], 6
0x820E57: jz      short loc_820E78
0x820E59: test    edi, edi
0x820E5B: jz      short loc_820E69
0x820E5D: add     [edi+5Ch], ebx
0x820E60: jnz     short loc_820E69
0x820E62: mov     ecx, edi
0x820E64: call    sub_772560
0x820E69: mov     edi, [ebp+0]
0x820E6C: test    edi, edi
0x820E6E: mov     [esp+398h+a3], edi
0x820E72: jz      short loc_820E78
0x820E74: add     dword ptr [edi+5Ch], 1
0x820E78: mov     eax, [esp+398h+var_1BC]
0x820E7F: test    eax, eax
0x820E81: mov     byte ptr [esp+398h+var_4], 1
0x820E89: jz      short loc_820E9D
0x820E8B: add     [eax+5Ch], ebx
0x820E8E: mov     ecx, eax
0x820E90: add     eax, 5Ch ; '\'
0x820E93: cmp     dword ptr [eax], 0
0x820E96: jnz     short loc_820E9D
0x820E98: call    sub_772560
0x820E9D: push    2
0x820E9F: push    1
0x820EA1: push    4
0x820EA3: push    edi
0x820EA4: call    sub_801110
0x820EA9: add     esp, 10h
0x820EAC: push    edi; a3
0x820EAD: push    4; a2
0x820EAF: mov     ecx, esi; this
0x820EB1: call    sub_760010
0x820EB6: lea     edx, [esp+398h+var_364]
0x820EBA: push    edx
0x820EBB: call    sub_772630
0x820EC0: add     esp, 4
0x820EC3: mov     ebp, eax
0x820EC5: cmp     edi, [ebp+0]
0x820EC8: mov     byte ptr [esp+398h+var_4], 7
0x820ED0: jz      short loc_820EF1
0x820ED2: test    edi, edi
0x820ED4: jz      short loc_820EE2
0x820ED6: add     [edi+5Ch], ebx
0x820ED9: jnz     short loc_820EE2
0x820EDB: mov     ecx, edi
0x820EDD: call    sub_772560
0x820EE2: mov     edi, [ebp+0]
0x820EE5: test    edi, edi
0x820EE7: mov     [esp+398h+a3], edi
0x820EEB: jz      short loc_820EF1
0x820EED: add     dword ptr [edi+5Ch], 1
0x820EF1: mov     eax, [esp+398h+var_364]
0x820EF5: test    eax, eax
0x820EF7: mov     byte ptr [esp+398h+var_4], 1
0x820EFF: jz      short loc_820F13
0x820F01: add     [eax+5Ch], ebx
0x820F04: mov     ecx, eax
0x820F06: add     eax, 5Ch ; '\'
0x820F09: cmp     dword ptr [eax], 0
0x820F0C: jnz     short loc_820F13
0x820F0E: call    sub_772560
0x820F13: push    0
0x820F15: push    3
0x820F17: push    5
0x820F19: push    edi
0x820F1A: call    sub_801110
0x820F1F: mov     eax, ds:0B43110h
0x820F24: add     esp, 10h
0x820F27: push    eax; a2
0x820F28: mov     ecx, edi; this
0x820F2A: call    sub_76C910
0x820F2F: push    edi; a3
0x820F30: push    5; a2
0x820F32: mov     ecx, esi; this
0x820F34: call    sub_760010
0x820F39: lea     ecx, [esp+398h+var_E4]
0x820F40: push    ecx
0x820F41: call    sub_772630
0x820F46: add     esp, 4
0x820F49: mov     ebp, eax
0x820F4B: cmp     edi, [ebp+0]
0x820F4E: mov     byte ptr [esp+398h+var_4], 8
0x820F56: jz      short loc_820F77
0x820F58: test    edi, edi
0x820F5A: jz      short loc_820F68
0x820F5C: add     [edi+5Ch], ebx
0x820F5F: jnz     short loc_820F68
0x820F61: mov     ecx, edi
0x820F63: call    sub_772560
0x820F68: mov     edi, [ebp+0]
0x820F6B: test    edi, edi
0x820F6D: mov     [esp+398h+a3], edi
0x820F71: jz      short loc_820F77
0x820F73: add     dword ptr [edi+5Ch], 1
0x820F77: mov     eax, [esp+398h+var_E4]
0x820F7E: test    eax, eax
0x820F80: mov     byte ptr [esp+398h+var_4], 1
0x820F88: jz      short loc_820F9C
0x820F8A: add     [eax+5Ch], ebx
0x820F8D: mov     ecx, eax
0x820F8F: add     eax, 5Ch ; '\'
0x820F92: cmp     dword ptr [eax], 0
0x820F95: jnz     short loc_820F9C
0x820F97: call    sub_772560
0x820F9C: push    2
0x820F9E: push    1
0x820FA0: push    6
0x820FA2: push    edi
0x820FA3: call    sub_801110
0x820FA8: add     esp, 10h
0x820FAB: push    edi; a3
0x820FAC: push    6; a2
0x820FAE: mov     ecx, esi; this
0x820FB0: call    sub_760010
0x820FB5: lea     edx, [esp+398h+var_35C]
0x820FB9: push    edx
0x820FBA: call    sub_772630
0x820FBF: add     esp, 4
0x820FC2: mov     ebp, eax
0x820FC4: cmp     edi, [ebp+0]
0x820FC7: mov     byte ptr [esp+398h+var_4], 9
0x820FCF: jz      short loc_820FF0
0x820FD1: test    edi, edi
0x820FD3: jz      short loc_820FE1
0x820FD5: add     [edi+5Ch], ebx
0x820FD8: jnz     short loc_820FE1
0x820FDA: mov     ecx, edi
0x820FDC: call    sub_772560
0x820FE1: mov     edi, [ebp+0]
0x820FE4: test    edi, edi
0x820FE6: mov     [esp+398h+a3], edi
0x820FEA: jz      short loc_820FF0
0x820FEC: add     dword ptr [edi+5Ch], 1
0x820FF0: mov     eax, [esp+398h+var_35C]
0x820FF4: test    eax, eax
0x820FF6: mov     byte ptr [esp+398h+var_4], 1
0x820FFE: jz      short loc_821012
0x821000: add     [eax+5Ch], ebx
0x821003: mov     ecx, eax
0x821005: add     eax, 5Ch ; '\'
0x821008: cmp     dword ptr [eax], 0
0x82100B: jnz     short loc_821012
0x82100D: call    sub_772560
0x821012: push    0
0x821014: push    3
0x821016: push    7
0x821018: push    edi
0x821019: call    sub_801110
0x82101E: add     esp, 10h
0x821021: push    edi; a3
0x821022: push    7; a2
0x821024: mov     ecx, esi; this
0x821026: call    sub_760010
0x82102B: mov     ecx, ds:0B45364h
0x821031: mov     eax, [esi+58h]
0x821034: cmp     eax, ecx
0x821036: mov     ebx, ecx
0x821038: jz      short loc_82106E
0x82103A: test    eax, eax
0x82103C: jz      short loc_82105D
0x82103E: mov     ebp, eax
0x821040: lea     eax, [ebp+4]
0x821043: push    eax; lpAddend
0x821044: call    dword ptr ds:0A2807Ch
0x82104A: test    eax, eax
0x82104C: jnz     short loc_82105D
0x82104E: test    ebp, ebp
0x821050: jz      short loc_82105D
0x821052: mov     edx, [ebp+0]
0x821055: mov     eax, [edx]
0x821057: push    1
0x821059: mov     ecx, ebp
0x82105B: call    eax
0x82105D: test    ebx, ebx
0x82105F: mov     [esi+58h], ebx
0x821062: jz      short loc_82106E
0x821064: add     ebx, 4
0x821067: push    ebx; lpAddend
0x821068: call    dword ptr ds:0A28078h
0x82106E: mov     ecx, ds:0B45144h
0x821074: mov     eax, [esi+44h]
0x821077: cmp     eax, ecx
0x821079: mov     ebx, ecx
0x82107B: jz      short loc_8210B1
0x82107D: test    eax, eax
0x82107F: jz      short loc_8210A0
0x821081: mov     ebp, eax
0x821083: lea     ecx, [ebp+4]
0x821086: push    ecx; lpAddend
0x821087: call    dword ptr ds:0A2807Ch
0x82108D: test    eax, eax
0x82108F: jnz     short loc_8210A0
0x821091: test    ebp, ebp
0x821093: jz      short loc_8210A0
0x821095: mov     edx, [ebp+0]
0x821098: mov     eax, [edx]
0x82109A: push    1
0x82109C: mov     ecx, ebp
0x82109E: call    eax
0x8210A0: test    ebx, ebx
0x8210A2: mov     [esi+44h], ebx
0x8210A5: jz      short loc_8210B1
0x8210A7: add     ebx, 4
0x8210AA: push    ebx; lpAddend
0x8210AB: call    dword ptr ds:0A28078h
0x8210B1: xor     ebx, ebx
0x8210B3: cmp     [esi+30h], ebx
0x8210B6: jnz     short loc_8210C0
0x8210B8: call    sub_772DF0
0x8210BD: mov     [esi+30h], eax
0x8210C0: mov     ecx, [esi+30h]
0x8210C3: push    ebx
0x8210C4: push    ebx
0x8210C5: push    1Bh
0x8210C7: call    sub_772CD0
0x8210CC: cmp     [esi+30h], ebx
0x8210CF: jnz     short loc_8210D9
0x8210D1: call    sub_772DF0
0x8210D6: mov     [esi+30h], eax
0x8210D9: mov     ecx, [esi+30h]
0x8210DC: push    ebx
0x8210DD: push    ebx
0x8210DE: push    0Fh
0x8210E0: call    sub_772CD0
0x8210E5: cmp     [esi+30h], ebx
0x8210E8: jnz     short loc_8210F2
0x8210EA: call    sub_772DF0
0x8210EF: mov     [esi+30h], eax
0x8210F2: mov     ecx, [esi+30h]
0x8210F5: push    ebx
0x8210F6: push    1
0x8210F8: push    7
0x8210FA: call    sub_772CD0
0x8210FF: cmp     [esi+30h], ebx
0x821102: jnz     short loc_82110C
0x821104: call    sub_772DF0
0x821109: mov     [esi+30h], eax
0x82110C: mov     ecx, [esi+30h]
0x82110F: push    ebx
0x821110: push    4
0x821112: push    17h
0x821114: call    sub_772CD0
0x821119: cmp     [esi+30h], ebx
0x82111C: jnz     short loc_821126
0x82111E: call    sub_772DF0
0x821123: mov     [esi+30h], eax
0x821126: mov     ecx, [esi+30h]
0x821129: push    ebx
0x82112A: push    1
0x82112C: push    0Eh
0x82112E: call    sub_772CD0
0x821133: cmp     [esi+30h], ebx
0x821136: jnz     short loc_821140
0x821138: call    sub_772DF0
0x82113D: mov     [esi+30h], eax
0x821140: mov     ecx, [esi+30h]
0x821143: push    ebx
0x821144: push    ebx
0x821145: push    34h ; '4'
0x821147: call    sub_772CD0
0x82114C: cmp     esi, ds:0B45B8Ch
0x821152: mov     ebp, 10Ch
0x821157: mov     dword ptr ds:0B43CF8h, 18082h
0x821161: mov     ds:0B44388h, ebp
0x821167: mov     dword ptr ds:0B43668h, 18000h
0x821171: mov     dword ptr ds:0B44A18h, 8
0x82117B: jz      short loc_82119C
0x82117D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x821181: jnz     short loc_82118A
0x821183: mov     ecx, esi
0x821185: call    sub_7604D0
0x82118A: mov     esi, ds:0B45B8Ch
0x821190: cmp     esi, ebx
0x821192: mov     [esp+398h+var_380], esi
0x821196: jz      short loc_82119C
0x821198: add     dword ptr [esi+60h], 1
0x82119C: mov     eax, [esi+18h]
0x82119F: cmp     eax, 8
0x8211A2: jnb     loc_82150A
0x8211A8: lea     ecx, [esp+398h+var_1B4]
0x8211AF: push    ecx
0x8211B0: call    sub_772630
0x8211B5: add     esp, 4
0x8211B8: mov     ebp, eax
0x8211BA: cmp     edi, [ebp+0]
0x8211BD: mov     byte ptr [esp+398h+var_4], 0Ah
0x8211C5: jz      short loc_8211E7
0x8211C7: cmp     edi, ebx
0x8211C9: jz      short loc_8211D8
0x8211CB: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8211CF: jnz     short loc_8211D8
0x8211D1: mov     ecx, edi
0x8211D3: call    sub_772560
0x8211D8: mov     edi, [ebp+0]
0x8211DB: cmp     edi, ebx
0x8211DD: mov     [esp+398h+a3], edi
0x8211E1: jz      short loc_8211E7
0x8211E3: add     dword ptr [edi+5Ch], 1
0x8211E7: mov     eax, [esp+398h+var_1B4]
0x8211EE: cmp     eax, ebx
0x8211F0: mov     byte ptr [esp+398h+var_4], 1
0x8211F8: jz      short loc_82120C
0x8211FA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8211FE: mov     ecx, eax
0x821200: add     eax, 5Ch ; '\'
0x821203: cmp     [eax], ebx
0x821205: jnz     short loc_82120C
0x821207: call    sub_772560
0x82120C: push    2
0x82120E: push    3
0x821210: push    ebx
0x821211: push    edi
0x821212: call    sub_801110
0x821217: add     esp, 10h
0x82121A: push    edi; a3
0x82121B: push    ebx; a2
0x82121C: mov     ecx, esi; this
0x82121E: call    sub_760010
0x821223: lea     edx, [esp+398h+var_354]
0x821227: push    edx
0x821228: call    sub_772630
0x82122D: add     esp, 4
0x821230: mov     ebp, eax
0x821232: cmp     edi, [ebp+0]
0x821235: mov     byte ptr [esp+398h+var_4], 0Bh
0x82123D: jz      short loc_82125F
0x82123F: cmp     edi, ebx
0x821241: jz      short loc_821250
0x821243: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x821247: jnz     short loc_821250
0x821249: mov     ecx, edi
0x82124B: call    sub_772560
0x821250: mov     edi, [ebp+0]
0x821253: cmp     edi, ebx
0x821255: mov     [esp+398h+a3], edi
0x821259: jz      short loc_82125F
0x82125B: add     dword ptr [edi+5Ch], 1
0x82125F: mov     eax, [esp+398h+var_354]
0x821263: cmp     eax, ebx
0x821265: mov     byte ptr [esp+398h+var_4], 1
0x82126D: jz      short loc_821281
0x82126F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821273: mov     ecx, eax
0x821275: add     eax, 5Ch ; '\'
0x821278: cmp     [eax], ebx
0x82127A: jnz     short loc_821281
0x82127C: call    sub_772560
0x821281: push    2
0x821283: push    3
0x821285: push    1
0x821287: push    edi
0x821288: call    sub_801110
0x82128D: add     esp, 10h
0x821290: push    edi; a3
0x821291: push    1; a2
0x821293: mov     ecx, esi; this
0x821295: call    sub_760010
0x82129A: lea     eax, [esp+398h+var_44]
0x8212A1: push    eax
0x8212A2: call    sub_772630
0x8212A7: add     esp, 4
0x8212AA: mov     ebp, eax
0x8212AC: cmp     edi, [ebp+0]
0x8212AF: mov     byte ptr [esp+398h+var_4], 0Ch
0x8212B7: jz      short loc_8212D9
0x8212B9: cmp     edi, ebx
0x8212BB: jz      short loc_8212CA
0x8212BD: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8212C1: jnz     short loc_8212CA
0x8212C3: mov     ecx, edi
0x8212C5: call    sub_772560
0x8212CA: mov     edi, [ebp+0]
0x8212CD: cmp     edi, ebx
0x8212CF: mov     [esp+398h+a3], edi
0x8212D3: jz      short loc_8212D9
0x8212D5: add     dword ptr [edi+5Ch], 1
0x8212D9: mov     eax, [esp+398h+var_44]
0x8212E0: cmp     eax, ebx
0x8212E2: mov     byte ptr [esp+398h+var_4], 1
0x8212EA: jz      short loc_8212FE
0x8212EC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8212F0: mov     ecx, eax
0x8212F2: add     eax, 5Ch ; '\'
0x8212F5: cmp     [eax], ebx
0x8212F7: jnz     short loc_8212FE
0x8212F9: call    sub_772560
0x8212FE: push    2
0x821300: push    1
0x821302: push    2
0x821304: push    edi
0x821305: call    sub_801110
0x82130A: add     esp, 10h
0x82130D: push    edi; a3
0x82130E: push    2; a2
0x821310: mov     ecx, esi; this
0x821312: call    sub_760010
0x821317: lea     ecx, [esp+398h+var_34C]
0x82131B: push    ecx
0x82131C: call    sub_772630
0x821321: add     esp, 4
0x821324: push    eax
0x821325: lea     ecx, [esp+39Ch+a3]
0x821329: mov     byte ptr [esp+39Ch+var_4], 0Dh
0x821331: call    sub_75FAE0
0x821336: mov     eax, [esp+398h+var_34C]
0x82133A: cmp     eax, ebx
0x82133C: mov     byte ptr [esp+398h+var_4], 1
0x821344: jz      short loc_821358
0x821346: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82134A: mov     ecx, eax
0x82134C: add     eax, 5Ch ; '\'
0x82134F: cmp     [eax], ebx
0x821351: jnz     short loc_821358
0x821353: call    sub_772560
0x821358: mov     edi, [esp+398h+a3]
0x82135C: push    2
0x82135E: push    1
0x821360: push    3
0x821362: push    edi
0x821363: call    sub_801110
0x821368: add     esp, 10h
0x82136B: push    edi; a3
0x82136C: push    3; a2
0x82136E: mov     ecx, esi; this
0x821370: call    sub_760010
0x821375: lea     edx, [esp+398h+var_1AC]
0x82137C: push    edx
0x82137D: call    sub_772630
0x821382: add     esp, 4
0x821385: push    eax
0x821386: lea     ecx, [esp+39Ch+a3]
0x82138A: mov     byte ptr [esp+39Ch+var_4], 0Eh
0x821392: call    sub_75FAE0
0x821397: mov     eax, [esp+398h+var_1AC]
0x82139E: cmp     eax, ebx
0x8213A0: mov     byte ptr [esp+398h+var_4], 1
0x8213A8: jz      short loc_8213BC
0x8213AA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8213AE: mov     ecx, eax
0x8213B0: add     eax, 5Ch ; '\'
0x8213B3: cmp     [eax], ebx
0x8213B5: jnz     short loc_8213BC
0x8213B7: call    sub_772560
0x8213BC: mov     edi, [esp+398h+a3]
0x8213C0: push    2
0x8213C2: push    1
0x8213C4: push    4
0x8213C6: push    edi
0x8213C7: call    sub_801110
0x8213CC: add     esp, 10h
0x8213CF: push    edi; a3
0x8213D0: push    4; a2
0x8213D2: mov     ecx, esi; this
0x8213D4: call    sub_760010
0x8213D9: lea     eax, [esp+398h+var_344]
0x8213DD: push    eax
0x8213DE: call    sub_772630
0x8213E3: add     esp, 4
0x8213E6: push    eax
0x8213E7: lea     ecx, [esp+39Ch+a3]
0x8213EB: mov     byte ptr [esp+39Ch+var_4], 0Fh
0x8213F3: call    sub_75FAE0
0x8213F8: mov     eax, [esp+398h+var_344]
0x8213FC: cmp     eax, ebx
0x8213FE: mov     byte ptr [esp+398h+var_4], 1
0x821406: jz      short loc_82141A
0x821408: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82140C: mov     ecx, eax
0x82140E: add     eax, 5Ch ; '\'
0x821411: cmp     [eax], ebx
0x821413: jnz     short loc_82141A
0x821415: call    sub_772560
0x82141A: mov     edi, [esp+398h+a3]
0x82141E: push    ebx
0x82141F: push    3
0x821421: push    5
0x821423: push    edi
0x821424: call    sub_801110
0x821429: mov     ecx, ds:0B43110h
0x82142F: add     esp, 10h
0x821432: push    ecx; a2
0x821433: mov     ecx, edi; this
0x821435: call    sub_76C910
0x82143A: push    edi; a3
0x82143B: push    5; a2
0x82143D: mov     ecx, esi; this
0x82143F: call    sub_760010
0x821444: lea     edx, [esp+398h+var_DC]
0x82144B: push    edx
0x82144C: call    sub_772630
0x821451: add     esp, 4
0x821454: push    eax
0x821455: lea     ecx, [esp+39Ch+a3]
0x821459: mov     byte ptr [esp+39Ch+var_4], 10h
0x821461: call    sub_75FAE0
0x821466: mov     eax, [esp+398h+var_DC]
0x82146D: cmp     eax, ebx
0x82146F: mov     byte ptr [esp+398h+var_4], 1
0x821477: jz      short loc_82148B
0x821479: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82147D: mov     ecx, eax
0x82147F: add     eax, 5Ch ; '\'
0x821482: cmp     [eax], ebx
0x821484: jnz     short loc_82148B
0x821486: call    sub_772560
0x82148B: mov     edi, [esp+398h+a3]
0x82148F: push    2
0x821491: push    1
0x821493: push    6
0x821495: push    edi
0x821496: call    sub_801110
0x82149B: add     esp, 10h
0x82149E: push    edi; a3
0x82149F: push    6; a2
0x8214A1: mov     ecx, esi; this
0x8214A3: call    sub_760010
0x8214A8: lea     eax, [esp+398h+var_33C]
0x8214AC: push    eax
0x8214AD: call    sub_772630
0x8214B2: add     esp, 4
0x8214B5: push    eax
0x8214B6: lea     ecx, [esp+39Ch+a3]
0x8214BA: mov     byte ptr [esp+39Ch+var_4], 11h
0x8214C2: call    sub_75FAE0
0x8214C7: mov     eax, [esp+398h+var_33C]
0x8214CB: cmp     eax, ebx
0x8214CD: mov     byte ptr [esp+398h+var_4], 1
0x8214D5: jz      short loc_8214E9
0x8214D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8214DB: mov     ecx, eax
0x8214DD: add     eax, 5Ch ; '\'
0x8214E0: cmp     [eax], ebx
0x8214E2: jnz     short loc_8214E9
0x8214E4: call    sub_772560
0x8214E9: mov     edi, [esp+398h+a3]
0x8214ED: push    ebx
0x8214EE: push    3
0x8214F0: push    7
0x8214F2: push    edi
0x8214F3: call    sub_801110
0x8214F8: add     esp, 10h
0x8214FB: push    edi; a3
0x8214FC: push    7; a2
0x8214FE: mov     ecx, esi; this
0x821500: call    sub_760010
0x821505: mov     ebp, 10Ch
0x82150A: mov     ecx, ds:0B4537Ch
0x821510: push    ecx; a2
0x821511: mov     ecx, esi; this
0x821513: call    sub_7AECB0
0x821518: mov     edx, ds:0B4515Ch
0x82151E: push    edx; a2
0x82151F: mov     ecx, esi; this
0x821521: call    sub_7AEC60
0x821526: cmp     [esi+30h], ebx
0x821529: jnz     short loc_821533
0x82152B: call    sub_772DF0
0x821530: mov     [esi+30h], eax
0x821533: mov     ecx, [esi+30h]
0x821536: push    ebx
0x821537: push    ebx
0x821538: push    1Bh
0x82153A: call    sub_772CD0
0x82153F: cmp     [esi+30h], ebx
0x821542: jnz     short loc_82154C
0x821544: call    sub_772DF0
0x821549: mov     [esi+30h], eax
0x82154C: mov     ecx, [esi+30h]
0x82154F: push    ebx
0x821550: push    ebx
0x821551: push    0Fh
0x821553: call    sub_772CD0
0x821558: cmp     [esi+30h], ebx
0x82155B: jnz     short loc_821565
0x82155D: call    sub_772DF0
0x821562: mov     [esi+30h], eax
0x821565: mov     ecx, [esi+30h]
0x821568: push    ebx
0x821569: push    1
0x82156B: push    7
0x82156D: call    sub_772CD0
0x821572: cmp     [esi+30h], ebx
0x821575: jnz     short loc_82157F
0x821577: call    sub_772DF0
0x82157C: mov     [esi+30h], eax
0x82157F: mov     ecx, [esi+30h]
0x821582: push    ebx
0x821583: push    4
0x821585: push    17h
0x821587: call    sub_772CD0
0x82158C: cmp     [esi+30h], ebx
0x82158F: jnz     short loc_821599
0x821591: call    sub_772DF0
0x821596: mov     [esi+30h], eax
0x821599: mov     ecx, [esi+30h]
0x82159C: push    ebx
0x82159D: push    1
0x82159F: push    0Eh
0x8215A1: call    sub_772CD0
0x8215A6: cmp     [esi+30h], ebx
0x8215A9: jnz     short loc_8215B3
0x8215AB: call    sub_772DF0
0x8215B0: mov     [esi+30h], eax
0x8215B3: mov     ecx, [esi+30h]
0x8215B6: push    ebx
0x8215B7: push    ebx
0x8215B8: push    34h ; '4'
0x8215BA: call    sub_772CD0
0x8215BF: cmp     esi, ds:0B4577Ch
0x8215C5: mov     dword ptr ds:0B4410Ch, 18082h
0x8215CF: mov     ds:0B4479Ch, ebp
0x8215D5: mov     dword ptr ds:0B43A7Ch, 18000h
0x8215DF: mov     dword ptr ds:0B44E2Ch, 108h
0x8215E9: jz      short loc_82160A
0x8215EB: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8215EF: jnz     short loc_8215F8
0x8215F1: mov     ecx, esi
0x8215F3: call    sub_7604D0
0x8215F8: mov     esi, ds:0B4577Ch
0x8215FE: cmp     esi, ebx
0x821600: mov     [esp+398h+var_380], esi
0x821604: jz      short loc_82160A
0x821606: add     dword ptr [esi+60h], 1
0x82160A: cmp     dword ptr [esi+18h], 8
0x82160E: jnb     loc_821925
0x821614: lea     eax, [esp+398h+var_1A4]
0x82161B: push    eax
0x82161C: call    sub_772630
0x821621: add     esp, 4
0x821624: push    eax
0x821625: lea     ecx, [esp+39Ch+a3]
0x821629: mov     byte ptr [esp+39Ch+var_4], 12h
0x821631: call    sub_75FAE0
0x821636: mov     eax, [esp+398h+var_1A4]
0x82163D: cmp     eax, ebx
0x82163F: mov     byte ptr [esp+398h+var_4], 1
0x821647: jz      short loc_82165B
0x821649: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82164D: mov     ecx, eax
0x82164F: add     eax, 5Ch ; '\'
0x821652: cmp     [eax], ebx
0x821654: jnz     short loc_82165B
0x821656: call    sub_772560
0x82165B: mov     edi, [esp+398h+a3]
0x82165F: push    2
0x821661: push    1
0x821663: push    ebx
0x821664: push    edi
0x821665: call    sub_801110
0x82166A: add     esp, 10h
0x82166D: push    edi; a3
0x82166E: push    ebx; a2
0x82166F: mov     ecx, esi; this
0x821671: call    sub_760010
0x821676: lea     ecx, [esp+398h+var_334]
0x82167A: push    ecx
0x82167B: call    sub_772630
0x821680: add     esp, 4
0x821683: push    eax
0x821684: lea     ecx, [esp+39Ch+a3]
0x821688: mov     byte ptr [esp+39Ch+var_4], 13h
0x821690: call    sub_75FAE0
0x821695: mov     eax, [esp+398h+var_334]
0x821699: cmp     eax, ebx
0x82169B: mov     byte ptr [esp+398h+var_4], 1
0x8216A3: jz      short loc_8216B7
0x8216A5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8216A9: mov     ecx, eax
0x8216AB: add     eax, 5Ch ; '\'
0x8216AE: cmp     [eax], ebx
0x8216B0: jnz     short loc_8216B7
0x8216B2: call    sub_772560
0x8216B7: mov     edi, [esp+398h+a3]
0x8216BB: push    2
0x8216BD: push    1
0x8216BF: push    1
0x8216C1: push    edi
0x8216C2: call    sub_801110
0x8216C7: add     esp, 10h
0x8216CA: push    edi; a3
0x8216CB: push    1; a2
0x8216CD: mov     ecx, esi; this
0x8216CF: call    sub_760010
0x8216D4: lea     edx, [esp+398h+var_74]
0x8216DB: push    edx
0x8216DC: call    sub_772630
0x8216E1: add     esp, 4
0x8216E4: push    eax
0x8216E5: lea     ecx, [esp+39Ch+a3]
0x8216E9: mov     byte ptr [esp+39Ch+var_4], 14h
0x8216F1: call    sub_75FAE0
0x8216F6: mov     eax, [esp+398h+var_74]
0x8216FD: cmp     eax, ebx
0x8216FF: mov     byte ptr [esp+398h+var_4], 1
0x821707: jz      short loc_82171B
0x821709: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82170D: mov     ecx, eax
0x82170F: add     eax, 5Ch ; '\'
0x821712: cmp     [eax], ebx
0x821714: jnz     short loc_82171B
0x821716: call    sub_772560
0x82171B: mov     edi, [esp+398h+a3]
0x82171F: push    2
0x821721: push    1
0x821723: push    2
0x821725: push    edi
0x821726: call    sub_801110
0x82172B: add     esp, 10h
0x82172E: push    edi; a3
0x82172F: push    2; a2
0x821731: mov     ecx, esi; this
0x821733: call    sub_760010
0x821738: lea     eax, [esp+398h+var_32C]
0x82173C: push    eax
0x82173D: call    sub_772630
0x821742: add     esp, 4
0x821745: push    eax
0x821746: lea     ecx, [esp+39Ch+a3]
0x82174A: mov     byte ptr [esp+39Ch+var_4], 15h
0x821752: call    sub_75FAE0
0x821757: mov     eax, [esp+398h+var_32C]
0x82175B: cmp     eax, ebx
0x82175D: mov     byte ptr [esp+398h+var_4], 1
0x821765: jz      short loc_821779
0x821767: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82176B: mov     ecx, eax
0x82176D: add     eax, 5Ch ; '\'
0x821770: cmp     [eax], ebx
0x821772: jnz     short loc_821779
0x821774: call    sub_772560
0x821779: mov     edi, [esp+398h+a3]
0x82177D: push    2
0x82177F: push    1
0x821781: push    3
0x821783: push    edi
0x821784: call    sub_801110
0x821789: add     esp, 10h
0x82178C: push    edi; a3
0x82178D: push    3; a2
0x82178F: mov     ecx, esi; this
0x821791: call    sub_760010
0x821796: lea     ecx, [esp+398h+var_19C]
0x82179D: push    ecx
0x82179E: call    sub_772630
0x8217A3: add     esp, 4
0x8217A6: push    eax
0x8217A7: lea     ecx, [esp+39Ch+a3]
0x8217AB: mov     byte ptr [esp+39Ch+var_4], 16h
0x8217B3: call    sub_75FAE0
0x8217B8: mov     eax, [esp+398h+var_19C]
0x8217BF: cmp     eax, ebx
0x8217C1: mov     byte ptr [esp+398h+var_4], 1
0x8217C9: jz      short loc_8217DD
0x8217CB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8217CF: mov     ecx, eax
0x8217D1: add     eax, 5Ch ; '\'
0x8217D4: cmp     [eax], ebx
0x8217D6: jnz     short loc_8217DD
0x8217D8: call    sub_772560
0x8217DD: mov     edi, [esp+398h+a3]
0x8217E1: push    2
0x8217E3: push    1
0x8217E5: push    4
0x8217E7: push    edi
0x8217E8: call    sub_801110
0x8217ED: add     esp, 10h
0x8217F0: push    edi; a3
0x8217F1: push    4; a2
0x8217F3: mov     ecx, esi; this
0x8217F5: call    sub_760010
0x8217FA: lea     edx, [esp+398h+var_324]
0x8217FE: push    edx
0x8217FF: call    sub_772630
0x821804: add     esp, 4
0x821807: push    eax
0x821808: lea     ecx, [esp+39Ch+a3]
0x82180C: mov     byte ptr [esp+39Ch+var_4], 17h
0x821814: call    sub_75FAE0
0x821819: mov     eax, [esp+398h+var_324]
0x82181D: cmp     eax, ebx
0x82181F: mov     byte ptr [esp+398h+var_4], 1
0x821827: jz      short loc_82183B
0x821829: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82182D: mov     ecx, eax
0x82182F: add     eax, 5Ch ; '\'
0x821832: cmp     [eax], ebx
0x821834: jnz     short loc_82183B
0x821836: call    sub_772560
0x82183B: mov     edi, [esp+398h+a3]
0x82183F: push    ebx
0x821840: push    3
0x821842: push    5
0x821844: push    edi
0x821845: call    sub_801110
0x82184A: mov     eax, ds:0B43110h
0x82184F: add     esp, 10h
0x821852: push    eax; a2
0x821853: mov     ecx, edi; this
0x821855: call    sub_76C910
0x82185A: push    edi; a3
0x82185B: push    5; a2
0x82185D: mov     ecx, esi; this
0x82185F: call    sub_760010
0x821864: lea     ecx, [esp+398h+var_D4]
0x82186B: push    ecx
0x82186C: call    sub_772630
0x821871: add     esp, 4
0x821874: push    eax
0x821875: lea     ecx, [esp+39Ch+a3]
0x821879: mov     byte ptr [esp+39Ch+var_4], 18h
0x821881: call    sub_75FAE0
0x821886: mov     eax, [esp+398h+var_D4]
0x82188D: cmp     eax, ebx
0x82188F: mov     byte ptr [esp+398h+var_4], 1
0x821897: jz      short loc_8218AB
0x821899: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82189D: mov     ecx, eax
0x82189F: add     eax, 5Ch ; '\'
0x8218A2: cmp     [eax], ebx
0x8218A4: jnz     short loc_8218AB
0x8218A6: call    sub_772560
0x8218AB: mov     edi, [esp+398h+a3]
0x8218AF: push    2
0x8218B1: push    1
0x8218B3: push    6
0x8218B5: push    edi
0x8218B6: call    sub_801110
0x8218BB: add     esp, 10h
0x8218BE: push    edi; a3
0x8218BF: push    6; a2
0x8218C1: mov     ecx, esi; this
0x8218C3: call    sub_760010
0x8218C8: lea     edx, [esp+398h+var_31C]
0x8218CC: push    edx
0x8218CD: call    sub_772630
0x8218D2: add     esp, 4
0x8218D5: push    eax
0x8218D6: lea     ecx, [esp+39Ch+a3]
0x8218DA: mov     byte ptr [esp+39Ch+var_4], 19h
0x8218E2: call    sub_75FAE0
0x8218E7: mov     eax, [esp+398h+var_31C]
0x8218EB: cmp     eax, ebx
0x8218ED: mov     byte ptr [esp+398h+var_4], 1
0x8218F5: jz      short loc_821909
0x8218F7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8218FB: mov     ecx, eax
0x8218FD: add     eax, 5Ch ; '\'
0x821900: cmp     [eax], ebx
0x821902: jnz     short loc_821909
0x821904: call    sub_772560
0x821909: mov     edi, [esp+398h+a3]
0x82190D: push    ebx
0x82190E: push    3
0x821910: push    7
0x821912: push    edi
0x821913: call    sub_801110
0x821918: add     esp, 10h
0x82191B: push    edi; a3
0x82191C: push    7; a2
0x82191E: mov     ecx, esi; this
0x821920: call    sub_760010
0x821925: mov     eax, ds:0B45368h
0x82192A: push    eax; a2
0x82192B: mov     ecx, esi; this
0x82192D: call    sub_7AECB0
0x821932: mov     ecx, ds:0B45148h
0x821938: push    ecx; a2
0x821939: mov     ecx, esi; this
0x82193B: call    sub_7AEC60
0x821940: cmp     [esi+30h], ebx
0x821943: jnz     short loc_82194D
0x821945: call    sub_772DF0
0x82194A: mov     [esi+30h], eax
0x82194D: mov     ecx, [esi+30h]
0x821950: push    ebx
0x821951: push    ebx
0x821952: push    1Bh
0x821954: call    sub_772CD0
0x821959: cmp     [esi+30h], ebx
0x82195C: jnz     short loc_821966
0x82195E: call    sub_772DF0
0x821963: mov     [esi+30h], eax
0x821966: mov     ecx, [esi+30h]
0x821969: push    ebx
0x82196A: push    ebx
0x82196B: push    0Fh
0x82196D: call    sub_772CD0
0x821972: cmp     [esi+30h], ebx
0x821975: jnz     short loc_82197F
0x821977: call    sub_772DF0
0x82197C: mov     [esi+30h], eax
0x82197F: mov     ecx, [esi+30h]
0x821982: push    ebx
0x821983: push    1
0x821985: push    7
0x821987: call    sub_772CD0
0x82198C: cmp     [esi+30h], ebx
0x82198F: jnz     short loc_821999
0x821991: call    sub_772DF0
0x821996: mov     [esi+30h], eax
0x821999: mov     ecx, [esi+30h]
0x82199C: push    ebx
0x82199D: push    4
0x82199F: push    17h
0x8219A1: call    sub_772CD0
0x8219A6: cmp     [esi+30h], ebx
0x8219A9: jnz     short loc_8219B3
0x8219AB: call    sub_772DF0
0x8219B0: mov     [esi+30h], eax
0x8219B3: mov     ecx, [esi+30h]
0x8219B6: push    ebx
0x8219B7: push    1
0x8219B9: push    0Eh
0x8219BB: call    sub_772CD0
0x8219C0: cmp     [esi+30h], ebx
0x8219C3: jnz     short loc_8219CD
0x8219C5: call    sub_772DF0
0x8219CA: mov     [esi+30h], eax
0x8219CD: mov     ecx, [esi+30h]
0x8219D0: push    ebx
0x8219D1: push    ebx
0x8219D2: push    34h ; '4'
0x8219D4: call    sub_772CD0
0x8219D9: cmp     esi, ds:0B45780h
0x8219DF: mov     dword ptr ds:0B43CFCh, 0A018086h
0x8219E9: mov     ds:0B4438Ch, ebp
0x8219EF: mov     dword ptr ds:0B4366Ch, 0A018084h
0x8219F9: mov     ds:0B44A1Ch, ebp
0x8219FF: jz      short loc_821A20
0x821A01: add     dword ptr [esi+60h], 0FFFFFFFFh
0x821A05: jnz     short loc_821A0E
0x821A07: mov     ecx, esi
0x821A09: call    sub_7604D0
0x821A0E: mov     esi, ds:0B45780h
0x821A14: cmp     esi, ebx
0x821A16: mov     [esp+398h+var_380], esi
0x821A1A: jz      short loc_821A20
0x821A1C: add     dword ptr [esi+60h], 1
0x821A20: cmp     dword ptr [esi+18h], 8
0x821A24: jnb     loc_821D54
0x821A2A: lea     edx, [esp+398h+var_194]
0x821A31: push    edx
0x821A32: call    sub_772630
0x821A37: add     esp, 4
0x821A3A: push    eax
0x821A3B: lea     ecx, [esp+39Ch+a3]
0x821A3F: mov     byte ptr [esp+39Ch+var_4], 1Ah
0x821A47: call    sub_75FAE0
0x821A4C: mov     eax, [esp+398h+var_194]
0x821A53: cmp     eax, ebx
0x821A55: mov     byte ptr [esp+398h+var_4], 1
0x821A5D: jz      short loc_821A71
0x821A5F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821A63: mov     ecx, eax
0x821A65: add     eax, 5Ch ; '\'
0x821A68: cmp     [eax], ebx
0x821A6A: jnz     short loc_821A71
0x821A6C: call    sub_772560
0x821A71: mov     edi, [esp+398h+a3]
0x821A75: push    2
0x821A77: push    1
0x821A79: push    ebx
0x821A7A: push    edi
0x821A7B: call    sub_801110
0x821A80: add     esp, 10h
0x821A83: push    edi; a3
0x821A84: push    ebx; a2
0x821A85: mov     ecx, esi; this
0x821A87: call    sub_760010
0x821A8C: lea     eax, [esp+398h+var_314]
0x821A93: push    eax
0x821A94: call    sub_772630
0x821A99: add     esp, 4
0x821A9C: push    eax
0x821A9D: lea     ecx, [esp+39Ch+a3]
0x821AA1: mov     byte ptr [esp+39Ch+var_4], 1Bh
0x821AA9: call    sub_75FAE0
0x821AAE: mov     eax, [esp+398h+var_314]
0x821AB5: cmp     eax, ebx
0x821AB7: mov     byte ptr [esp+398h+var_4], 1
0x821ABF: jz      short loc_821AD3
0x821AC1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821AC5: mov     ecx, eax
0x821AC7: add     eax, 5Ch ; '\'
0x821ACA: cmp     [eax], ebx
0x821ACC: jnz     short loc_821AD3
0x821ACE: call    sub_772560
0x821AD3: mov     edi, [esp+398h+a3]
0x821AD7: push    2
0x821AD9: push    1
0x821ADB: push    1
0x821ADD: push    edi
0x821ADE: call    sub_801110
0x821AE3: add     esp, 10h
0x821AE6: push    edi; a3
0x821AE7: push    1; a2
0x821AE9: mov     ecx, esi; this
0x821AEB: call    sub_760010
0x821AF0: lea     ecx, [esp+398h+var_1C]
0x821AF7: push    ecx
0x821AF8: call    sub_772630
0x821AFD: add     esp, 4
0x821B00: push    eax
0x821B01: lea     ecx, [esp+39Ch+a3]
0x821B05: mov     byte ptr [esp+39Ch+var_4], 1Ch
0x821B0D: call    sub_75FAE0
0x821B12: mov     eax, [esp+398h+var_1C]
0x821B19: cmp     eax, ebx
0x821B1B: mov     byte ptr [esp+398h+var_4], 1
0x821B23: jz      short loc_821B37
0x821B25: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821B29: mov     ecx, eax
0x821B2B: add     eax, 5Ch ; '\'
0x821B2E: cmp     [eax], ebx
0x821B30: jnz     short loc_821B37
0x821B32: call    sub_772560
0x821B37: mov     edi, [esp+398h+a3]
0x821B3B: push    2
0x821B3D: push    1
0x821B3F: push    2
0x821B41: push    edi
0x821B42: call    sub_801110
0x821B47: add     esp, 10h
0x821B4A: push    edi; a3
0x821B4B: push    2; a2
0x821B4D: mov     ecx, esi; this
0x821B4F: call    sub_760010
0x821B54: lea     edx, [esp+398h+var_30C]
0x821B5B: push    edx
0x821B5C: call    sub_772630
0x821B61: add     esp, 4
0x821B64: push    eax
0x821B65: lea     ecx, [esp+39Ch+a3]
0x821B69: mov     byte ptr [esp+39Ch+var_4], 1Dh
0x821B71: call    sub_75FAE0
0x821B76: mov     eax, [esp+398h+var_30C]
0x821B7D: cmp     eax, ebx
0x821B7F: mov     byte ptr [esp+398h+var_4], 1
0x821B87: jz      short loc_821B9B
0x821B89: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821B8D: mov     ecx, eax
0x821B8F: add     eax, 5Ch ; '\'
0x821B92: cmp     [eax], ebx
0x821B94: jnz     short loc_821B9B
0x821B96: call    sub_772560
0x821B9B: mov     edi, [esp+398h+a3]
0x821B9F: push    2
0x821BA1: push    1
0x821BA3: push    3
0x821BA5: push    edi
0x821BA6: call    sub_801110
0x821BAB: add     esp, 10h
0x821BAE: push    edi; a3
0x821BAF: push    3; a2
0x821BB1: mov     ecx, esi; this
0x821BB3: call    sub_760010
0x821BB8: lea     eax, [esp+398h+var_18C]
0x821BBF: push    eax
0x821BC0: call    sub_772630
0x821BC5: add     esp, 4
0x821BC8: push    eax
0x821BC9: lea     ecx, [esp+39Ch+a3]
0x821BCD: mov     byte ptr [esp+39Ch+var_4], 1Eh
0x821BD5: call    sub_75FAE0
0x821BDA: mov     eax, [esp+398h+var_18C]
0x821BE1: cmp     eax, ebx
0x821BE3: mov     byte ptr [esp+398h+var_4], 1
0x821BEB: jz      short loc_821BFF
0x821BED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821BF1: mov     ecx, eax
0x821BF3: add     eax, 5Ch ; '\'
0x821BF6: cmp     [eax], ebx
0x821BF8: jnz     short loc_821BFF
0x821BFA: call    sub_772560
0x821BFF: mov     edi, [esp+398h+a3]
0x821C03: push    2
0x821C05: push    1
0x821C07: push    4
0x821C09: push    edi
0x821C0A: call    sub_801110
0x821C0F: add     esp, 10h
0x821C12: push    edi; a3
0x821C13: push    4; a2
0x821C15: mov     ecx, esi; this
0x821C17: call    sub_760010
0x821C1C: lea     ecx, [esp+398h+var_304]
0x821C23: push    ecx
0x821C24: call    sub_772630
0x821C29: add     esp, 4
0x821C2C: push    eax
0x821C2D: lea     ecx, [esp+39Ch+a3]
0x821C31: mov     byte ptr [esp+39Ch+var_4], 1Fh
0x821C39: call    sub_75FAE0
0x821C3E: mov     eax, [esp+398h+var_304]
0x821C45: cmp     eax, ebx
0x821C47: mov     byte ptr [esp+398h+var_4], 1
0x821C4F: jz      short loc_821C63
0x821C51: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821C55: mov     ecx, eax
0x821C57: add     eax, 5Ch ; '\'
0x821C5A: cmp     [eax], ebx
0x821C5C: jnz     short loc_821C63
0x821C5E: call    sub_772560
0x821C63: mov     edi, [esp+398h+a3]
0x821C67: push    ebx
0x821C68: push    3
0x821C6A: push    5
0x821C6C: push    edi
0x821C6D: call    sub_801110
0x821C72: mov     edx, ds:0B43110h
0x821C78: add     esp, 10h
0x821C7B: push    edx; a2
0x821C7C: mov     ecx, edi; this
0x821C7E: call    sub_76C910
0x821C83: push    edi; a3
0x821C84: push    5; a2
0x821C86: mov     ecx, esi; this
0x821C88: call    sub_760010
0x821C8D: lea     eax, [esp+398h+var_CC]
0x821C94: push    eax
0x821C95: call    sub_772630
0x821C9A: add     esp, 4
0x821C9D: push    eax
0x821C9E: lea     ecx, [esp+39Ch+a3]
0x821CA2: mov     byte ptr [esp+39Ch+var_4], 20h ; ' '
0x821CAA: call    sub_75FAE0
0x821CAF: mov     eax, [esp+398h+var_CC]
0x821CB6: cmp     eax, ebx
0x821CB8: mov     byte ptr [esp+398h+var_4], 1
0x821CC0: jz      short loc_821CD4
0x821CC2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821CC6: mov     ecx, eax
0x821CC8: add     eax, 5Ch ; '\'
0x821CCB: cmp     [eax], ebx
0x821CCD: jnz     short loc_821CD4
0x821CCF: call    sub_772560
0x821CD4: mov     edi, [esp+398h+a3]
0x821CD8: push    2
0x821CDA: push    1
0x821CDC: push    6
0x821CDE: push    edi
0x821CDF: call    sub_801110
0x821CE4: add     esp, 10h
0x821CE7: push    edi; a3
0x821CE8: push    6; a2
0x821CEA: mov     ecx, esi; this
0x821CEC: call    sub_760010
0x821CF1: lea     ecx, [esp+398h+var_2FC]
0x821CF8: push    ecx
0x821CF9: call    sub_772630
0x821CFE: add     esp, 4
0x821D01: push    eax
0x821D02: lea     ecx, [esp+39Ch+a3]
0x821D06: mov     byte ptr [esp+39Ch+var_4], 21h ; '!'
0x821D0E: call    sub_75FAE0
0x821D13: mov     eax, [esp+398h+var_2FC]
0x821D1A: cmp     eax, ebx
0x821D1C: mov     byte ptr [esp+398h+var_4], 1
0x821D24: jz      short loc_821D38
0x821D26: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821D2A: mov     ecx, eax
0x821D2C: add     eax, 5Ch ; '\'
0x821D2F: cmp     [eax], ebx
0x821D31: jnz     short loc_821D38
0x821D33: call    sub_772560
0x821D38: mov     edi, [esp+398h+a3]
0x821D3C: push    ebx
0x821D3D: push    3
0x821D3F: push    7
0x821D41: push    edi
0x821D42: call    sub_801110
0x821D47: add     esp, 10h
0x821D4A: push    edi; a3
0x821D4B: push    7; a2
0x821D4D: mov     ecx, esi; this
0x821D4F: call    sub_760010
0x821D54: mov     edx, ds:0B45364h
0x821D5A: push    edx; a2
0x821D5B: mov     ecx, esi; this
0x821D5D: call    sub_7AECB0
0x821D62: mov     eax, ds:0B4514Ch
0x821D67: push    eax; a2
0x821D68: mov     ecx, esi; this
0x821D6A: call    sub_7AEC60
0x821D6F: cmp     [esi+30h], ebx
0x821D72: jnz     short loc_821D7C
0x821D74: call    sub_772DF0
0x821D79: mov     [esi+30h], eax
0x821D7C: mov     ecx, [esi+30h]
0x821D7F: push    ebx
0x821D80: push    ebx
0x821D81: push    1Bh
0x821D83: call    sub_772CD0
0x821D88: cmp     [esi+30h], ebx
0x821D8B: jnz     short loc_821D95
0x821D8D: call    sub_772DF0
0x821D92: mov     [esi+30h], eax
0x821D95: mov     ecx, [esi+30h]
0x821D98: push    ebx
0x821D99: push    ebx
0x821D9A: push    0Fh
0x821D9C: call    sub_772CD0
0x821DA1: cmp     [esi+30h], ebx
0x821DA4: jnz     short loc_821DAE
0x821DA6: call    sub_772DF0
0x821DAB: mov     [esi+30h], eax
0x821DAE: mov     ecx, [esi+30h]
0x821DB1: push    ebx
0x821DB2: push    1
0x821DB4: push    7
0x821DB6: call    sub_772CD0
0x821DBB: cmp     [esi+30h], ebx
0x821DBE: jnz     short loc_821DC8
0x821DC0: call    sub_772DF0
0x821DC5: mov     [esi+30h], eax
0x821DC8: mov     ecx, [esi+30h]
0x821DCB: push    ebx
0x821DCC: push    4
0x821DCE: push    17h
0x821DD0: call    sub_772CD0
0x821DD5: cmp     [esi+30h], ebx
0x821DD8: jnz     short loc_821DE2
0x821DDA: call    sub_772DF0
0x821DDF: mov     [esi+30h], eax
0x821DE2: mov     ecx, [esi+30h]
0x821DE5: push    ebx
0x821DE6: push    1
0x821DE8: push    0Eh
0x821DEA: call    sub_772CD0
0x821DEF: cmp     [esi+30h], ebx
0x821DF2: jnz     short loc_821DFC
0x821DF4: call    sub_772DF0
0x821DF9: mov     [esi+30h], eax
0x821DFC: mov     ecx, [esi+30h]
0x821DFF: push    ebx
0x821E00: push    ebx
0x821E01: push    34h ; '4'
0x821E03: call    sub_772CD0
0x821E08: cmp     esi, ds:0B45790h
0x821E0E: mov     ebp, 18Ch
0x821E13: mov     dword ptr ds:0B43D00h, 18082h
0x821E1D: mov     ds:0B44390h, ebp
0x821E23: mov     dword ptr ds:0B43670h, 18000h
0x821E2D: mov     dword ptr ds:0B44A20h, 0Ch
0x821E37: jz      short loc_821E58
0x821E39: add     dword ptr [esi+60h], 0FFFFFFFFh
0x821E3D: jnz     short loc_821E46
0x821E3F: mov     ecx, esi
0x821E41: call    sub_7604D0
0x821E46: mov     esi, ds:0B45790h
0x821E4C: cmp     esi, ebx
0x821E4E: mov     [esp+398h+var_380], esi
0x821E52: jz      short loc_821E58
0x821E54: add     dword ptr [esi+60h], 1
0x821E58: cmp     dword ptr [esi+18h], 8
0x821E5C: jnb     loc_82218C
0x821E62: lea     ecx, [esp+398h+var_184]
0x821E69: push    ecx
0x821E6A: call    sub_772630
0x821E6F: add     esp, 4
0x821E72: push    eax
0x821E73: lea     ecx, [esp+39Ch+a3]
0x821E77: mov     byte ptr [esp+39Ch+var_4], 22h ; '"'
0x821E7F: call    sub_75FAE0
0x821E84: mov     eax, [esp+398h+var_184]
0x821E8B: cmp     eax, ebx
0x821E8D: mov     byte ptr [esp+398h+var_4], 1
0x821E95: jz      short loc_821EA9
0x821E97: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821E9B: mov     ecx, eax
0x821E9D: add     eax, 5Ch ; '\'
0x821EA0: cmp     [eax], ebx
0x821EA2: jnz     short loc_821EA9
0x821EA4: call    sub_772560
0x821EA9: mov     edi, [esp+398h+a3]
0x821EAD: push    2
0x821EAF: push    1
0x821EB1: push    ebx
0x821EB2: push    edi
0x821EB3: call    sub_801110
0x821EB8: add     esp, 10h
0x821EBB: push    edi; a3
0x821EBC: push    ebx; a2
0x821EBD: mov     ecx, esi; this
0x821EBF: call    sub_760010
0x821EC4: lea     edx, [esp+398h+var_2F4]
0x821ECB: push    edx
0x821ECC: call    sub_772630
0x821ED1: add     esp, 4
0x821ED4: push    eax
0x821ED5: lea     ecx, [esp+39Ch+a3]
0x821ED9: mov     byte ptr [esp+39Ch+var_4], 23h ; '#'
0x821EE1: call    sub_75FAE0
0x821EE6: mov     eax, [esp+398h+var_2F4]
0x821EED: cmp     eax, ebx
0x821EEF: mov     byte ptr [esp+398h+var_4], 1
0x821EF7: jz      short loc_821F0B
0x821EF9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821EFD: mov     ecx, eax
0x821EFF: add     eax, 5Ch ; '\'
0x821F02: cmp     [eax], ebx
0x821F04: jnz     short loc_821F0B
0x821F06: call    sub_772560
0x821F0B: mov     edi, [esp+398h+a3]
0x821F0F: push    2
0x821F11: push    1
0x821F13: push    1
0x821F15: push    edi
0x821F16: call    sub_801110
0x821F1B: add     esp, 10h
0x821F1E: push    edi; a3
0x821F1F: push    1; a2
0x821F21: mov     ecx, esi; this
0x821F23: call    sub_760010
0x821F28: lea     eax, [esp+398h+var_6C]
0x821F2F: push    eax
0x821F30: call    sub_772630
0x821F35: add     esp, 4
0x821F38: push    eax
0x821F39: lea     ecx, [esp+39Ch+a3]
0x821F3D: mov     byte ptr [esp+39Ch+var_4], 24h ; '$'
0x821F45: call    sub_75FAE0
0x821F4A: mov     eax, [esp+398h+var_6C]
0x821F51: cmp     eax, ebx
0x821F53: mov     byte ptr [esp+398h+var_4], 1
0x821F5B: jz      short loc_821F6F
0x821F5D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821F61: mov     ecx, eax
0x821F63: add     eax, 5Ch ; '\'
0x821F66: cmp     [eax], ebx
0x821F68: jnz     short loc_821F6F
0x821F6A: call    sub_772560
0x821F6F: mov     edi, [esp+398h+a3]
0x821F73: push    2
0x821F75: push    1
0x821F77: push    2
0x821F79: push    edi
0x821F7A: call    sub_801110
0x821F7F: add     esp, 10h
0x821F82: push    edi; a3
0x821F83: push    2; a2
0x821F85: mov     ecx, esi; this
0x821F87: call    sub_760010
0x821F8C: lea     ecx, [esp+398h+var_2EC]
0x821F93: push    ecx
0x821F94: call    sub_772630
0x821F99: add     esp, 4
0x821F9C: push    eax
0x821F9D: lea     ecx, [esp+39Ch+a3]
0x821FA1: mov     byte ptr [esp+39Ch+var_4], 25h ; '%'
0x821FA9: call    sub_75FAE0
0x821FAE: mov     eax, [esp+398h+var_2EC]
0x821FB5: cmp     eax, ebx
0x821FB7: mov     byte ptr [esp+398h+var_4], 1
0x821FBF: jz      short loc_821FD3
0x821FC1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x821FC5: mov     ecx, eax
0x821FC7: add     eax, 5Ch ; '\'
0x821FCA: cmp     [eax], ebx
0x821FCC: jnz     short loc_821FD3
0x821FCE: call    sub_772560
0x821FD3: mov     edi, [esp+398h+a3]
0x821FD7: push    2
0x821FD9: push    1
0x821FDB: push    3
0x821FDD: push    edi
0x821FDE: call    sub_801110
0x821FE3: add     esp, 10h
0x821FE6: push    edi; a3
0x821FE7: push    3; a2
0x821FE9: mov     ecx, esi; this
0x821FEB: call    sub_760010
0x821FF0: lea     edx, [esp+398h+var_17C]
0x821FF7: push    edx
0x821FF8: call    sub_772630
0x821FFD: add     esp, 4
0x822000: push    eax
0x822001: lea     ecx, [esp+39Ch+a3]
0x822005: mov     byte ptr [esp+39Ch+var_4], 26h ; '&'
0x82200D: call    sub_75FAE0
0x822012: mov     eax, [esp+398h+var_17C]
0x822019: cmp     eax, ebx
0x82201B: mov     byte ptr [esp+398h+var_4], 1
0x822023: jz      short loc_822037
0x822025: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822029: mov     ecx, eax
0x82202B: add     eax, 5Ch ; '\'
0x82202E: cmp     [eax], ebx
0x822030: jnz     short loc_822037
0x822032: call    sub_772560
0x822037: mov     edi, [esp+398h+a3]
0x82203B: push    2
0x82203D: push    1
0x82203F: push    4
0x822041: push    edi
0x822042: call    sub_801110
0x822047: add     esp, 10h
0x82204A: push    edi; a3
0x82204B: push    4; a2
0x82204D: mov     ecx, esi; this
0x82204F: call    sub_760010
0x822054: lea     eax, [esp+398h+var_2E4]
0x82205B: push    eax
0x82205C: call    sub_772630
0x822061: add     esp, 4
0x822064: push    eax
0x822065: lea     ecx, [esp+39Ch+a3]
0x822069: mov     byte ptr [esp+39Ch+var_4], 27h ; '''
0x822071: call    sub_75FAE0
0x822076: mov     eax, [esp+398h+var_2E4]
0x82207D: cmp     eax, ebx
0x82207F: mov     byte ptr [esp+398h+var_4], 1
0x822087: jz      short loc_82209B
0x822089: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82208D: mov     ecx, eax
0x82208F: add     eax, 5Ch ; '\'
0x822092: cmp     [eax], ebx
0x822094: jnz     short loc_82209B
0x822096: call    sub_772560
0x82209B: mov     edi, [esp+398h+a3]
0x82209F: push    ebx
0x8220A0: push    3
0x8220A2: push    5
0x8220A4: push    edi
0x8220A5: call    sub_801110
0x8220AA: mov     ecx, ds:0B43110h
0x8220B0: add     esp, 10h
0x8220B3: push    ecx; a2
0x8220B4: mov     ecx, edi; this
0x8220B6: call    sub_76C910
0x8220BB: push    edi; a3
0x8220BC: push    5; a2
0x8220BE: mov     ecx, esi; this
0x8220C0: call    sub_760010
0x8220C5: lea     edx, [esp+398h+var_C4]
0x8220CC: push    edx
0x8220CD: call    sub_772630
0x8220D2: add     esp, 4
0x8220D5: push    eax
0x8220D6: lea     ecx, [esp+39Ch+a3]
0x8220DA: mov     byte ptr [esp+39Ch+var_4], 28h ; '('
0x8220E2: call    sub_75FAE0
0x8220E7: mov     eax, [esp+398h+var_C4]
0x8220EE: cmp     eax, ebx
0x8220F0: mov     byte ptr [esp+398h+var_4], 1
0x8220F8: jz      short loc_82210C
0x8220FA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8220FE: mov     ecx, eax
0x822100: add     eax, 5Ch ; '\'
0x822103: cmp     [eax], ebx
0x822105: jnz     short loc_82210C
0x822107: call    sub_772560
0x82210C: mov     edi, [esp+398h+a3]
0x822110: push    2
0x822112: push    1
0x822114: push    6
0x822116: push    edi
0x822117: call    sub_801110
0x82211C: add     esp, 10h
0x82211F: push    edi; a3
0x822120: push    6; a2
0x822122: mov     ecx, esi; this
0x822124: call    sub_760010
0x822129: lea     eax, [esp+398h+var_2DC]
0x822130: push    eax
0x822131: call    sub_772630
0x822136: add     esp, 4
0x822139: push    eax
0x82213A: lea     ecx, [esp+39Ch+a3]
0x82213E: mov     byte ptr [esp+39Ch+var_4], 29h ; ')'
0x822146: call    sub_75FAE0
0x82214B: mov     eax, [esp+398h+var_2DC]
0x822152: cmp     eax, ebx
0x822154: mov     byte ptr [esp+398h+var_4], 1
0x82215C: jz      short loc_822170
0x82215E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822162: mov     ecx, eax
0x822164: add     eax, 5Ch ; '\'
0x822167: cmp     [eax], ebx
0x822169: jnz     short loc_822170
0x82216B: call    sub_772560
0x822170: mov     edi, [esp+398h+a3]
0x822174: push    ebx
0x822175: push    3
0x822177: push    7
0x822179: push    edi
0x82217A: call    sub_801110
0x82217F: add     esp, 10h
0x822182: push    edi; a3
0x822183: push    7; a2
0x822185: mov     ecx, esi; this
0x822187: call    sub_760010
0x82218C: mov     ecx, ds:0B45364h
0x822192: push    ecx; a2
0x822193: mov     ecx, esi; this
0x822195: call    sub_7AECB0
0x82219A: mov     edx, ds:0B45160h
0x8221A0: push    edx; a2
0x8221A1: mov     ecx, esi; this
0x8221A3: call    sub_7AEC60
0x8221A8: cmp     [esi+30h], ebx
0x8221AB: jnz     short loc_8221B5
0x8221AD: call    sub_772DF0
0x8221B2: mov     [esi+30h], eax
0x8221B5: mov     ecx, [esi+30h]
0x8221B8: push    ebx
0x8221B9: push    ebx
0x8221BA: push    1Bh
0x8221BC: call    sub_772CD0
0x8221C1: cmp     [esi+30h], ebx
0x8221C4: jnz     short loc_8221CE
0x8221C6: call    sub_772DF0
0x8221CB: mov     [esi+30h], eax
0x8221CE: mov     ecx, [esi+30h]
0x8221D1: push    ebx
0x8221D2: push    ebx
0x8221D3: push    0Fh
0x8221D5: call    sub_772CD0
0x8221DA: cmp     [esi+30h], ebx
0x8221DD: jnz     short loc_8221E7
0x8221DF: call    sub_772DF0
0x8221E4: mov     [esi+30h], eax
0x8221E7: mov     ecx, [esi+30h]
0x8221EA: push    ebx
0x8221EB: push    1
0x8221ED: push    7
0x8221EF: call    sub_772CD0
0x8221F4: cmp     [esi+30h], ebx
0x8221F7: jnz     short loc_822201
0x8221F9: call    sub_772DF0
0x8221FE: mov     [esi+30h], eax
0x822201: mov     ecx, [esi+30h]
0x822204: push    ebx
0x822205: push    4
0x822207: push    17h
0x822209: call    sub_772CD0
0x82220E: cmp     [esi+30h], ebx
0x822211: jnz     short loc_82221B
0x822213: call    sub_772DF0
0x822218: mov     [esi+30h], eax
0x82221B: mov     ecx, [esi+30h]
0x82221E: push    ebx
0x82221F: push    1
0x822221: push    0Eh
0x822223: call    sub_772CD0
0x822228: cmp     [esi+30h], ebx
0x82222B: jnz     short loc_822235
0x82222D: call    sub_772DF0
0x822232: mov     [esi+30h], eax
0x822235: mov     ecx, [esi+30h]
0x822238: push    ebx
0x822239: push    ebx
0x82223A: push    34h ; '4'
0x82223C: call    sub_772CD0
0x822241: cmp     esi, ds:0B45794h
0x822247: mov     dword ptr ds:0B43D10h, 18082h
0x822251: mov     ds:0B443A0h, ebp
0x822257: mov     dword ptr ds:0B43680h, 18000h
0x822261: mov     dword ptr ds:0B44A30h, 0Ch
0x82226B: jz      short loc_82228C
0x82226D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x822271: jnz     short loc_82227A
0x822273: mov     ecx, esi
0x822275: call    sub_7604D0
0x82227A: mov     esi, ds:0B45794h
0x822280: cmp     esi, ebx
0x822282: mov     [esp+398h+var_380], esi
0x822286: jz      short loc_82228C
0x822288: add     dword ptr [esi+60h], 1
0x82228C: cmp     dword ptr [esi+18h], 8
0x822290: jnb     loc_8225BF
0x822296: lea     eax, [esp+398h+var_174]
0x82229D: push    eax
0x82229E: call    sub_772630
0x8222A3: add     esp, 4
0x8222A6: push    eax
0x8222A7: lea     ecx, [esp+39Ch+a3]
0x8222AB: mov     byte ptr [esp+39Ch+var_4], 2Ah ; '*'
0x8222B3: call    sub_75FAE0
0x8222B8: mov     eax, [esp+398h+var_174]
0x8222BF: cmp     eax, ebx
0x8222C1: mov     byte ptr [esp+398h+var_4], 1
0x8222C9: jz      short loc_8222DD
0x8222CB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8222CF: mov     ecx, eax
0x8222D1: add     eax, 5Ch ; '\'
0x8222D4: cmp     [eax], ebx
0x8222D6: jnz     short loc_8222DD
0x8222D8: call    sub_772560
0x8222DD: mov     edi, [esp+398h+a3]
0x8222E1: push    2
0x8222E3: push    1
0x8222E5: push    ebx
0x8222E6: push    edi
0x8222E7: call    sub_801110
0x8222EC: add     esp, 10h
0x8222EF: push    edi; a3
0x8222F0: push    ebx; a2
0x8222F1: mov     ecx, esi; this
0x8222F3: call    sub_760010
0x8222F8: lea     ecx, [esp+398h+var_2D4]
0x8222FF: push    ecx
0x822300: call    sub_772630
0x822305: add     esp, 4
0x822308: push    eax
0x822309: lea     ecx, [esp+39Ch+a3]
0x82230D: mov     byte ptr [esp+39Ch+var_4], 2Bh ; '+'
0x822315: call    sub_75FAE0
0x82231A: mov     eax, [esp+398h+var_2D4]
0x822321: cmp     eax, ebx
0x822323: mov     byte ptr [esp+398h+var_4], 1
0x82232B: jz      short loc_82233F
0x82232D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822331: mov     ecx, eax
0x822333: add     eax, 5Ch ; '\'
0x822336: cmp     [eax], ebx
0x822338: jnz     short loc_82233F
0x82233A: call    sub_772560
0x82233F: mov     edi, [esp+398h+a3]
0x822343: push    2
0x822345: push    1
0x822347: push    1
0x822349: push    edi
0x82234A: call    sub_801110
0x82234F: add     esp, 10h
0x822352: push    edi; a3
0x822353: push    1; a2
0x822355: mov     ecx, esi; this
0x822357: call    sub_760010
0x82235C: lea     edx, [esp+398h+var_3C]
0x822363: push    edx
0x822364: call    sub_772630
0x822369: add     esp, 4
0x82236C: push    eax
0x82236D: lea     ecx, [esp+39Ch+a3]
0x822371: mov     byte ptr [esp+39Ch+var_4], 2Ch ; ','
0x822379: call    sub_75FAE0
0x82237E: mov     eax, [esp+398h+var_3C]
0x822385: cmp     eax, ebx
0x822387: mov     byte ptr [esp+398h+var_4], 1
0x82238F: jz      short loc_8223A3
0x822391: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822395: mov     ecx, eax
0x822397: add     eax, 5Ch ; '\'
0x82239A: cmp     [eax], ebx
0x82239C: jnz     short loc_8223A3
0x82239E: call    sub_772560
0x8223A3: mov     edi, [esp+398h+a3]
0x8223A7: push    2
0x8223A9: push    1
0x8223AB: push    2
0x8223AD: push    edi
0x8223AE: call    sub_801110
0x8223B3: add     esp, 10h
0x8223B6: push    edi; a3
0x8223B7: push    2; a2
0x8223B9: mov     ecx, esi; this
0x8223BB: call    sub_760010
0x8223C0: lea     eax, [esp+398h+var_2CC]
0x8223C7: push    eax
0x8223C8: call    sub_772630
0x8223CD: add     esp, 4
0x8223D0: push    eax
0x8223D1: lea     ecx, [esp+39Ch+a3]
0x8223D5: mov     byte ptr [esp+39Ch+var_4], 2Dh ; '-'
0x8223DD: call    sub_75FAE0
0x8223E2: mov     eax, [esp+398h+var_2CC]
0x8223E9: cmp     eax, ebx
0x8223EB: mov     byte ptr [esp+398h+var_4], 1
0x8223F3: jz      short loc_822407
0x8223F5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8223F9: mov     ecx, eax
0x8223FB: add     eax, 5Ch ; '\'
0x8223FE: cmp     [eax], ebx
0x822400: jnz     short loc_822407
0x822402: call    sub_772560
0x822407: mov     edi, [esp+398h+a3]
0x82240B: push    2
0x82240D: push    1
0x82240F: push    3
0x822411: push    edi
0x822412: call    sub_801110
0x822417: add     esp, 10h
0x82241A: push    edi; a3
0x82241B: push    3; a2
0x82241D: mov     ecx, esi; this
0x82241F: call    sub_760010
0x822424: lea     ecx, [esp+398h+var_16C]
0x82242B: push    ecx
0x82242C: call    sub_772630
0x822431: add     esp, 4
0x822434: push    eax
0x822435: lea     ecx, [esp+39Ch+a3]
0x822439: mov     byte ptr [esp+39Ch+var_4], 2Eh ; '.'
0x822441: call    sub_75FAE0
0x822446: mov     eax, [esp+398h+var_16C]
0x82244D: cmp     eax, ebx
0x82244F: mov     byte ptr [esp+398h+var_4], 1
0x822457: jz      short loc_82246B
0x822459: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82245D: mov     ecx, eax
0x82245F: add     eax, 5Ch ; '\'
0x822462: cmp     [eax], ebx
0x822464: jnz     short loc_82246B
0x822466: call    sub_772560
0x82246B: mov     edi, [esp+398h+a3]
0x82246F: push    2
0x822471: push    1
0x822473: push    4
0x822475: push    edi
0x822476: call    sub_801110
0x82247B: add     esp, 10h
0x82247E: push    edi; a3
0x82247F: push    4; a2
0x822481: mov     ecx, esi; this
0x822483: call    sub_760010
0x822488: lea     edx, [esp+398h+var_2C4]
0x82248F: push    edx
0x822490: call    sub_772630
0x822495: add     esp, 4
0x822498: push    eax
0x822499: lea     ecx, [esp+39Ch+a3]
0x82249D: mov     byte ptr [esp+39Ch+var_4], 2Fh ; '/'
0x8224A5: call    sub_75FAE0
0x8224AA: mov     eax, [esp+398h+var_2C4]
0x8224B1: cmp     eax, ebx
0x8224B3: mov     byte ptr [esp+398h+var_4], 1
0x8224BB: jz      short loc_8224CF
0x8224BD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8224C1: mov     ecx, eax
0x8224C3: add     eax, 5Ch ; '\'
0x8224C6: cmp     [eax], ebx
0x8224C8: jnz     short loc_8224CF
0x8224CA: call    sub_772560
0x8224CF: mov     edi, [esp+398h+a3]
0x8224D3: push    ebx
0x8224D4: push    3
0x8224D6: push    5
0x8224D8: push    edi
0x8224D9: call    sub_801110
0x8224DE: mov     eax, ds:0B43110h
0x8224E3: add     esp, 10h
0x8224E6: push    eax; a2
0x8224E7: mov     ecx, edi; this
0x8224E9: call    sub_76C910
0x8224EE: push    edi; a3
0x8224EF: push    5; a2
0x8224F1: mov     ecx, esi; this
0x8224F3: call    sub_760010
0x8224F8: lea     ecx, [esp+398h+var_BC]
0x8224FF: push    ecx
0x822500: call    sub_772630
0x822505: add     esp, 4
0x822508: push    eax
0x822509: lea     ecx, [esp+39Ch+a3]
0x82250D: mov     byte ptr [esp+39Ch+var_4], 30h ; '0'
0x822515: call    sub_75FAE0
0x82251A: mov     eax, [esp+398h+var_BC]
0x822521: cmp     eax, ebx
0x822523: mov     byte ptr [esp+398h+var_4], 1
0x82252B: jz      short loc_82253F
0x82252D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822531: mov     ecx, eax
0x822533: add     eax, 5Ch ; '\'
0x822536: cmp     [eax], ebx
0x822538: jnz     short loc_82253F
0x82253A: call    sub_772560
0x82253F: mov     edi, [esp+398h+a3]
0x822543: push    2
0x822545: push    1
0x822547: push    6
0x822549: push    edi
0x82254A: call    sub_801110
0x82254F: add     esp, 10h
0x822552: push    edi; a3
0x822553: push    6; a2
0x822555: mov     ecx, esi; this
0x822557: call    sub_760010
0x82255C: lea     edx, [esp+398h+var_2BC]
0x822563: push    edx
0x822564: call    sub_772630
0x822569: add     esp, 4
0x82256C: push    eax
0x82256D: lea     ecx, [esp+39Ch+a3]
0x822571: mov     byte ptr [esp+39Ch+var_4], 31h ; '1'
0x822579: call    sub_75FAE0
0x82257E: mov     eax, [esp+398h+var_2BC]
0x822585: cmp     eax, ebx
0x822587: mov     byte ptr [esp+398h+var_4], 1
0x82258F: jz      short loc_8225A3
0x822591: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822595: mov     ecx, eax
0x822597: add     eax, 5Ch ; '\'
0x82259A: cmp     [eax], ebx
0x82259C: jnz     short loc_8225A3
0x82259E: call    sub_772560
0x8225A3: mov     edi, [esp+398h+a3]
0x8225A7: push    ebx
0x8225A8: push    3
0x8225AA: push    7
0x8225AC: push    edi
0x8225AD: call    sub_801110
0x8225B2: add     esp, 10h
0x8225B5: push    edi; a3
0x8225B6: push    7; a2
0x8225B8: mov     ecx, esi; this
0x8225BA: call    sub_760010
0x8225BF: mov     eax, ds:0B4536Ch
0x8225C4: push    eax; a2
0x8225C5: mov     ecx, esi; this
0x8225C7: call    sub_7AECB0
0x8225CC: mov     ecx, ds:0B45144h
0x8225D2: push    ecx; a2
0x8225D3: mov     ecx, esi; this
0x8225D5: call    sub_7AEC60
0x8225DA: cmp     [esi+30h], ebx
0x8225DD: jnz     short loc_8225E7
0x8225DF: call    sub_772DF0
0x8225E4: mov     [esi+30h], eax
0x8225E7: mov     ecx, [esi+30h]
0x8225EA: push    ebx
0x8225EB: push    ebx
0x8225EC: push    1Bh
0x8225EE: call    sub_772CD0
0x8225F3: cmp     [esi+30h], ebx
0x8225F6: jnz     short loc_822600
0x8225F8: call    sub_772DF0
0x8225FD: mov     [esi+30h], eax
0x822600: mov     ecx, [esi+30h]
0x822603: push    ebx
0x822604: push    ebx
0x822605: push    0Fh
0x822607: call    sub_772CD0
0x82260C: cmp     [esi+30h], ebx
0x82260F: jnz     short loc_822619
0x822611: call    sub_772DF0
0x822616: mov     [esi+30h], eax
0x822619: mov     ecx, [esi+30h]
0x82261C: push    ebx
0x82261D: push    1
0x82261F: push    7
0x822621: call    sub_772CD0
0x822626: cmp     [esi+30h], ebx
0x822629: jnz     short loc_822633
0x82262B: call    sub_772DF0
0x822630: mov     [esi+30h], eax
0x822633: mov     ecx, [esi+30h]
0x822636: push    ebx
0x822637: push    4
0x822639: push    17h
0x82263B: call    sub_772CD0
0x822640: cmp     [esi+30h], ebx
0x822643: jnz     short loc_82264D
0x822645: call    sub_772DF0
0x82264A: mov     [esi+30h], eax
0x82264D: mov     ecx, [esi+30h]
0x822650: push    ebx
0x822651: push    1
0x822653: push    0Eh
0x822655: call    sub_772CD0
0x82265A: cmp     [esi+30h], ebx
0x82265D: jnz     short loc_822667
0x82265F: call    sub_772DF0
0x822664: mov     [esi+30h], eax
0x822667: mov     ecx, [esi+30h]
0x82266A: push    ebx
0x82266B: push    ebx
0x82266C: push    34h ; '4'
0x82266E: call    sub_772CD0
0x822673: cmp     esi, ds:0B45798h
0x822679: mov     ebp, 58088h
0x82267E: mov     ds:0B43D14h, ebp
0x822684: mov     dword ptr ds:0B443A4h, 10Ch
0x82268E: mov     dword ptr ds:0B43684h, 18000h
0x822698: jz      short loc_8226B9
0x82269A: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82269E: jnz     short loc_8226A7
0x8226A0: mov     ecx, esi
0x8226A2: call    sub_7604D0
0x8226A7: mov     esi, ds:0B45798h
0x8226AD: cmp     esi, ebx
0x8226AF: mov     [esp+398h+var_380], esi
0x8226B3: jz      short loc_8226B9
0x8226B5: add     dword ptr [esi+60h], 1
0x8226B9: cmp     dword ptr [esi+18h], 8
0x8226BD: jnb     loc_8229ED
0x8226C3: lea     edx, [esp+398h+var_164]
0x8226CA: push    edx
0x8226CB: call    sub_772630
0x8226D0: add     esp, 4
0x8226D3: push    eax
0x8226D4: lea     ecx, [esp+39Ch+a3]
0x8226D8: mov     byte ptr [esp+39Ch+var_4], 32h ; '2'
0x8226E0: call    sub_75FAE0
0x8226E5: mov     eax, [esp+398h+var_164]
0x8226EC: cmp     eax, ebx
0x8226EE: mov     byte ptr [esp+398h+var_4], 1
0x8226F6: jz      short loc_82270A
0x8226F8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8226FC: mov     ecx, eax
0x8226FE: add     eax, 5Ch ; '\'
0x822701: cmp     [eax], ebx
0x822703: jnz     short loc_82270A
0x822705: call    sub_772560
0x82270A: mov     edi, [esp+398h+a3]
0x82270E: push    2
0x822710: push    1
0x822712: push    ebx
0x822713: push    edi
0x822714: call    sub_801110
0x822719: add     esp, 10h
0x82271C: push    edi; a3
0x82271D: push    ebx; a2
0x82271E: mov     ecx, esi; this
0x822720: call    sub_760010
0x822725: lea     eax, [esp+398h+var_2B4]
0x82272C: push    eax
0x82272D: call    sub_772630
0x822732: add     esp, 4
0x822735: push    eax
0x822736: lea     ecx, [esp+39Ch+a3]
0x82273A: mov     byte ptr [esp+39Ch+var_4], 33h ; '3'
0x822742: call    sub_75FAE0
0x822747: mov     eax, [esp+398h+var_2B4]
0x82274E: cmp     eax, ebx
0x822750: mov     byte ptr [esp+398h+var_4], 1
0x822758: jz      short loc_82276C
0x82275A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82275E: mov     ecx, eax
0x822760: add     eax, 5Ch ; '\'
0x822763: cmp     [eax], ebx
0x822765: jnz     short loc_82276C
0x822767: call    sub_772560
0x82276C: mov     edi, [esp+398h+a3]
0x822770: push    2
0x822772: push    1
0x822774: push    1
0x822776: push    edi
0x822777: call    sub_801110
0x82277C: add     esp, 10h
0x82277F: push    edi; a3
0x822780: push    1; a2
0x822782: mov     ecx, esi; this
0x822784: call    sub_760010
0x822789: lea     ecx, [esp+398h+var_64]
0x822790: push    ecx
0x822791: call    sub_772630
0x822796: add     esp, 4
0x822799: push    eax
0x82279A: lea     ecx, [esp+39Ch+a3]
0x82279E: mov     byte ptr [esp+39Ch+var_4], 34h ; '4'
0x8227A6: call    sub_75FAE0
0x8227AB: mov     eax, [esp+398h+var_64]
0x8227B2: cmp     eax, ebx
0x8227B4: mov     byte ptr [esp+398h+var_4], 1
0x8227BC: jz      short loc_8227D0
0x8227BE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8227C2: mov     ecx, eax
0x8227C4: add     eax, 5Ch ; '\'
0x8227C7: cmp     [eax], ebx
0x8227C9: jnz     short loc_8227D0
0x8227CB: call    sub_772560
0x8227D0: mov     edi, [esp+398h+a3]
0x8227D4: push    2
0x8227D6: push    1
0x8227D8: push    2
0x8227DA: push    edi
0x8227DB: call    sub_801110
0x8227E0: add     esp, 10h
0x8227E3: push    edi; a3
0x8227E4: push    2; a2
0x8227E6: mov     ecx, esi; this
0x8227E8: call    sub_760010
0x8227ED: lea     edx, [esp+398h+var_2AC]
0x8227F4: push    edx
0x8227F5: call    sub_772630
0x8227FA: add     esp, 4
0x8227FD: push    eax
0x8227FE: lea     ecx, [esp+39Ch+a3]
0x822802: mov     byte ptr [esp+39Ch+var_4], 35h ; '5'
0x82280A: call    sub_75FAE0
0x82280F: mov     eax, [esp+398h+var_2AC]
0x822816: cmp     eax, ebx
0x822818: mov     byte ptr [esp+398h+var_4], 1
0x822820: jz      short loc_822834
0x822822: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822826: mov     ecx, eax
0x822828: add     eax, 5Ch ; '\'
0x82282B: cmp     [eax], ebx
0x82282D: jnz     short loc_822834
0x82282F: call    sub_772560
0x822834: mov     edi, [esp+398h+a3]
0x822838: push    2
0x82283A: push    1
0x82283C: push    3
0x82283E: push    edi
0x82283F: call    sub_801110
0x822844: add     esp, 10h
0x822847: push    edi; a3
0x822848: push    3; a2
0x82284A: mov     ecx, esi; this
0x82284C: call    sub_760010
0x822851: lea     eax, [esp+398h+var_15C]
0x822858: push    eax
0x822859: call    sub_772630
0x82285E: add     esp, 4
0x822861: push    eax
0x822862: lea     ecx, [esp+39Ch+a3]
0x822866: mov     byte ptr [esp+39Ch+var_4], 36h ; '6'
0x82286E: call    sub_75FAE0
0x822873: mov     eax, [esp+398h+var_15C]
0x82287A: cmp     eax, ebx
0x82287C: mov     byte ptr [esp+398h+var_4], 1
0x822884: jz      short loc_822898
0x822886: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82288A: mov     ecx, eax
0x82288C: add     eax, 5Ch ; '\'
0x82288F: cmp     [eax], ebx
0x822891: jnz     short loc_822898
0x822893: call    sub_772560
0x822898: mov     edi, [esp+398h+a3]
0x82289C: push    2
0x82289E: push    1
0x8228A0: push    4
0x8228A2: push    edi
0x8228A3: call    sub_801110
0x8228A8: add     esp, 10h
0x8228AB: push    edi; a3
0x8228AC: push    4; a2
0x8228AE: mov     ecx, esi; this
0x8228B0: call    sub_760010
0x8228B5: lea     ecx, [esp+398h+var_2A4]
0x8228BC: push    ecx
0x8228BD: call    sub_772630
0x8228C2: add     esp, 4
0x8228C5: push    eax
0x8228C6: lea     ecx, [esp+39Ch+a3]
0x8228CA: mov     byte ptr [esp+39Ch+var_4], 37h ; '7'
0x8228D2: call    sub_75FAE0
0x8228D7: mov     eax, [esp+398h+var_2A4]
0x8228DE: cmp     eax, ebx
0x8228E0: mov     byte ptr [esp+398h+var_4], 1
0x8228E8: jz      short loc_8228FC
0x8228EA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8228EE: mov     ecx, eax
0x8228F0: add     eax, 5Ch ; '\'
0x8228F3: cmp     [eax], ebx
0x8228F5: jnz     short loc_8228FC
0x8228F7: call    sub_772560
0x8228FC: mov     edi, [esp+398h+a3]
0x822900: push    ebx
0x822901: push    3
0x822903: push    5
0x822905: push    edi
0x822906: call    sub_801110
0x82290B: mov     edx, ds:0B43110h
0x822911: add     esp, 10h
0x822914: push    edx; a2
0x822915: mov     ecx, edi; this
0x822917: call    sub_76C910
0x82291C: push    edi; a3
0x82291D: push    5; a2
0x82291F: mov     ecx, esi; this
0x822921: call    sub_760010
0x822926: lea     eax, [esp+398h+var_B4]
0x82292D: push    eax
0x82292E: call    sub_772630
0x822933: add     esp, 4
0x822936: push    eax
0x822937: lea     ecx, [esp+39Ch+a3]
0x82293B: mov     byte ptr [esp+39Ch+var_4], 38h ; '8'
0x822943: call    sub_75FAE0
0x822948: mov     eax, [esp+398h+var_B4]
0x82294F: cmp     eax, ebx
0x822951: mov     byte ptr [esp+398h+var_4], 1
0x822959: jz      short loc_82296D
0x82295B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82295F: mov     ecx, eax
0x822961: add     eax, 5Ch ; '\'
0x822964: cmp     [eax], ebx
0x822966: jnz     short loc_82296D
0x822968: call    sub_772560
0x82296D: mov     edi, [esp+398h+a3]
0x822971: push    2
0x822973: push    1
0x822975: push    6
0x822977: push    edi
0x822978: call    sub_801110
0x82297D: add     esp, 10h
0x822980: push    edi; a3
0x822981: push    6; a2
0x822983: mov     ecx, esi; this
0x822985: call    sub_760010
0x82298A: lea     ecx, [esp+398h+var_29C]
0x822991: push    ecx
0x822992: call    sub_772630
0x822997: add     esp, 4
0x82299A: push    eax
0x82299B: lea     ecx, [esp+39Ch+a3]
0x82299F: mov     byte ptr [esp+39Ch+var_4], 39h ; '9'
0x8229A7: call    sub_75FAE0
0x8229AC: mov     eax, [esp+398h+var_29C]
0x8229B3: cmp     eax, ebx
0x8229B5: mov     byte ptr [esp+398h+var_4], 1
0x8229BD: jz      short loc_8229D1
0x8229BF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8229C3: mov     ecx, eax
0x8229C5: add     eax, 5Ch ; '\'
0x8229C8: cmp     [eax], ebx
0x8229CA: jnz     short loc_8229D1
0x8229CC: call    sub_772560
0x8229D1: mov     edi, [esp+398h+a3]
0x8229D5: push    ebx
0x8229D6: push    3
0x8229D8: push    7
0x8229DA: push    edi
0x8229DB: call    sub_801110
0x8229E0: add     esp, 10h
0x8229E3: push    edi; a3
0x8229E4: push    7; a2
0x8229E6: mov     ecx, esi; this
0x8229E8: call    sub_760010
0x8229ED: mov     edx, ds:0B4536Ch
0x8229F3: push    edx; a2
0x8229F4: mov     ecx, esi; this
0x8229F6: call    sub_7AECB0
0x8229FB: mov     eax, ds:0B4514Ch
0x822A00: push    eax; a2
0x822A01: mov     ecx, esi; this
0x822A03: call    sub_7AEC60
0x822A08: cmp     [esi+30h], ebx
0x822A0B: jnz     short loc_822A15
0x822A0D: call    sub_772DF0
0x822A12: mov     [esi+30h], eax
0x822A15: mov     ecx, [esi+30h]
0x822A18: push    ebx
0x822A19: push    ebx
0x822A1A: push    1Bh
0x822A1C: call    sub_772CD0
0x822A21: cmp     [esi+30h], ebx
0x822A24: jnz     short loc_822A2E
0x822A26: call    sub_772DF0
0x822A2B: mov     [esi+30h], eax
0x822A2E: mov     ecx, [esi+30h]
0x822A31: push    ebx
0x822A32: push    ebx
0x822A33: push    0Fh
0x822A35: call    sub_772CD0
0x822A3A: cmp     [esi+30h], ebx
0x822A3D: jnz     short loc_822A47
0x822A3F: call    sub_772DF0
0x822A44: mov     [esi+30h], eax
0x822A47: mov     ecx, [esi+30h]
0x822A4A: push    ebx
0x822A4B: push    1
0x822A4D: push    7
0x822A4F: call    sub_772CD0
0x822A54: cmp     [esi+30h], ebx
0x822A57: jnz     short loc_822A61
0x822A59: call    sub_772DF0
0x822A5E: mov     [esi+30h], eax
0x822A61: mov     ecx, [esi+30h]
0x822A64: push    ebx
0x822A65: push    4
0x822A67: push    17h
0x822A69: call    sub_772CD0
0x822A6E: cmp     [esi+30h], ebx
0x822A71: jnz     short loc_822A7B
0x822A73: call    sub_772DF0
0x822A78: mov     [esi+30h], eax
0x822A7B: mov     ecx, [esi+30h]
0x822A7E: push    ebx
0x822A7F: push    1
0x822A81: push    0Eh
0x822A83: call    sub_772CD0
0x822A88: cmp     [esi+30h], ebx
0x822A8B: jnz     short loc_822A95
0x822A8D: call    sub_772DF0
0x822A92: mov     [esi+30h], eax
0x822A95: mov     ecx, [esi+30h]
0x822A98: push    ebx
0x822A99: push    ebx
0x822A9A: push    34h ; '4'
0x822A9C: call    sub_772CD0
0x822AA1: cmp     esi, ds:0B457ACh
0x822AA7: mov     ds:0B43D18h, ebp
0x822AAD: mov     dword ptr ds:0B443A8h, 18Ch
0x822AB7: mov     dword ptr ds:0B43688h, 18000h
0x822AC1: mov     dword ptr ds:0B44A38h, 0Ch
0x822ACB: jz      short loc_822AEC
0x822ACD: add     dword ptr [esi+60h], 0FFFFFFFFh
0x822AD1: jnz     short loc_822ADA
0x822AD3: mov     ecx, esi
0x822AD5: call    sub_7604D0
0x822ADA: mov     esi, ds:0B457ACh
0x822AE0: cmp     esi, ebx
0x822AE2: mov     [esp+398h+var_380], esi
0x822AE6: jz      short loc_822AEC
0x822AE8: add     dword ptr [esi+60h], 1
0x822AEC: cmp     dword ptr [esi+18h], 8
0x822AF0: jnb     loc_822E20
0x822AF6: lea     ecx, [esp+398h+var_154]
0x822AFD: push    ecx
0x822AFE: call    sub_772630
0x822B03: add     esp, 4
0x822B06: push    eax
0x822B07: lea     ecx, [esp+39Ch+a3]
0x822B0B: mov     byte ptr [esp+39Ch+var_4], 3Ah ; ':'
0x822B13: call    sub_75FAE0
0x822B18: mov     eax, [esp+398h+var_154]
0x822B1F: cmp     eax, ebx
0x822B21: mov     byte ptr [esp+398h+var_4], 1
0x822B29: jz      short loc_822B3D
0x822B2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822B2F: mov     ecx, eax
0x822B31: add     eax, 5Ch ; '\'
0x822B34: cmp     [eax], ebx
0x822B36: jnz     short loc_822B3D
0x822B38: call    sub_772560
0x822B3D: mov     edi, [esp+398h+a3]
0x822B41: push    2
0x822B43: push    1
0x822B45: push    ebx
0x822B46: push    edi
0x822B47: call    sub_801110
0x822B4C: add     esp, 10h
0x822B4F: push    edi; a3
0x822B50: push    ebx; a2
0x822B51: mov     ecx, esi; this
0x822B53: call    sub_760010
0x822B58: lea     edx, [esp+398h+var_294]
0x822B5F: push    edx
0x822B60: call    sub_772630
0x822B65: add     esp, 4
0x822B68: push    eax
0x822B69: lea     ecx, [esp+39Ch+a3]
0x822B6D: mov     byte ptr [esp+39Ch+var_4], 3Bh ; ';'
0x822B75: call    sub_75FAE0
0x822B7A: mov     eax, [esp+398h+var_294]
0x822B81: cmp     eax, ebx
0x822B83: mov     byte ptr [esp+398h+var_4], 1
0x822B8B: jz      short loc_822B9F
0x822B8D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822B91: mov     ecx, eax
0x822B93: add     eax, 5Ch ; '\'
0x822B96: cmp     [eax], ebx
0x822B98: jnz     short loc_822B9F
0x822B9A: call    sub_772560
0x822B9F: mov     edi, [esp+398h+a3]
0x822BA3: push    2
0x822BA5: push    1
0x822BA7: push    1
0x822BA9: push    edi
0x822BAA: call    sub_801110
0x822BAF: add     esp, 10h
0x822BB2: push    edi; a3
0x822BB3: push    1; a2
0x822BB5: mov     ecx, esi; this
0x822BB7: call    sub_760010
0x822BBC: lea     eax, [esp+398h+var_24]
0x822BC3: push    eax
0x822BC4: call    sub_772630
0x822BC9: add     esp, 4
0x822BCC: push    eax
0x822BCD: lea     ecx, [esp+39Ch+a3]
0x822BD1: mov     byte ptr [esp+39Ch+var_4], 3Ch ; '<'
0x822BD9: call    sub_75FAE0
0x822BDE: mov     eax, [esp+398h+var_24]
0x822BE5: cmp     eax, ebx
0x822BE7: mov     byte ptr [esp+398h+var_4], 1
0x822BEF: jz      short loc_822C03
0x822BF1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822BF5: mov     ecx, eax
0x822BF7: add     eax, 5Ch ; '\'
0x822BFA: cmp     [eax], ebx
0x822BFC: jnz     short loc_822C03
0x822BFE: call    sub_772560
0x822C03: mov     edi, [esp+398h+a3]
0x822C07: push    2
0x822C09: push    1
0x822C0B: push    2
0x822C0D: push    edi
0x822C0E: call    sub_801110
0x822C13: add     esp, 10h
0x822C16: push    edi; a3
0x822C17: push    2; a2
0x822C19: mov     ecx, esi; this
0x822C1B: call    sub_760010
0x822C20: lea     ecx, [esp+398h+var_28C]
0x822C27: push    ecx
0x822C28: call    sub_772630
0x822C2D: add     esp, 4
0x822C30: push    eax
0x822C31: lea     ecx, [esp+39Ch+a3]
0x822C35: mov     byte ptr [esp+39Ch+var_4], 3Dh ; '='
0x822C3D: call    sub_75FAE0
0x822C42: mov     eax, [esp+398h+var_28C]
0x822C49: cmp     eax, ebx
0x822C4B: mov     byte ptr [esp+398h+var_4], 1
0x822C53: jz      short loc_822C67
0x822C55: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822C59: mov     ecx, eax
0x822C5B: add     eax, 5Ch ; '\'
0x822C5E: cmp     [eax], ebx
0x822C60: jnz     short loc_822C67
0x822C62: call    sub_772560
0x822C67: mov     edi, [esp+398h+a3]
0x822C6B: push    2
0x822C6D: push    1
0x822C6F: push    3
0x822C71: push    edi
0x822C72: call    sub_801110
0x822C77: add     esp, 10h
0x822C7A: push    edi; a3
0x822C7B: push    3; a2
0x822C7D: mov     ecx, esi; this
0x822C7F: call    sub_760010
0x822C84: lea     edx, [esp+398h+var_14C]
0x822C8B: push    edx
0x822C8C: call    sub_772630
0x822C91: add     esp, 4
0x822C94: push    eax
0x822C95: lea     ecx, [esp+39Ch+a3]
0x822C99: mov     byte ptr [esp+39Ch+var_4], 3Eh ; '>'
0x822CA1: call    sub_75FAE0
0x822CA6: mov     eax, [esp+398h+var_14C]
0x822CAD: cmp     eax, ebx
0x822CAF: mov     byte ptr [esp+398h+var_4], 1
0x822CB7: jz      short loc_822CCB
0x822CB9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822CBD: mov     ecx, eax
0x822CBF: add     eax, 5Ch ; '\'
0x822CC2: cmp     [eax], ebx
0x822CC4: jnz     short loc_822CCB
0x822CC6: call    sub_772560
0x822CCB: mov     edi, [esp+398h+a3]
0x822CCF: push    2
0x822CD1: push    1
0x822CD3: push    4
0x822CD5: push    edi
0x822CD6: call    sub_801110
0x822CDB: add     esp, 10h
0x822CDE: push    edi; a3
0x822CDF: push    4; a2
0x822CE1: mov     ecx, esi; this
0x822CE3: call    sub_760010
0x822CE8: lea     eax, [esp+398h+var_284]
0x822CEF: push    eax
0x822CF0: call    sub_772630
0x822CF5: add     esp, 4
0x822CF8: push    eax
0x822CF9: lea     ecx, [esp+39Ch+a3]
0x822CFD: mov     byte ptr [esp+39Ch+var_4], 3Fh ; '?'
0x822D05: call    sub_75FAE0
0x822D0A: mov     eax, [esp+398h+var_284]
0x822D11: cmp     eax, ebx
0x822D13: mov     byte ptr [esp+398h+var_4], 1
0x822D1B: jz      short loc_822D2F
0x822D1D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822D21: mov     ecx, eax
0x822D23: add     eax, 5Ch ; '\'
0x822D26: cmp     [eax], ebx
0x822D28: jnz     short loc_822D2F
0x822D2A: call    sub_772560
0x822D2F: mov     edi, [esp+398h+a3]
0x822D33: push    ebx
0x822D34: push    3
0x822D36: push    5
0x822D38: push    edi
0x822D39: call    sub_801110
0x822D3E: mov     ecx, ds:0B43110h
0x822D44: add     esp, 10h
0x822D47: push    ecx; a2
0x822D48: mov     ecx, edi; this
0x822D4A: call    sub_76C910
0x822D4F: push    edi; a3
0x822D50: push    5; a2
0x822D52: mov     ecx, esi; this
0x822D54: call    sub_760010
0x822D59: lea     edx, [esp+398h+var_AC]
0x822D60: push    edx
0x822D61: call    sub_772630
0x822D66: add     esp, 4
0x822D69: push    eax
0x822D6A: lea     ecx, [esp+39Ch+a3]
0x822D6E: mov     byte ptr [esp+39Ch+var_4], 40h ; '@'
0x822D76: call    sub_75FAE0
0x822D7B: mov     eax, [esp+398h+var_AC]
0x822D82: cmp     eax, ebx
0x822D84: mov     byte ptr [esp+398h+var_4], 1
0x822D8C: jz      short loc_822DA0
0x822D8E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822D92: mov     ecx, eax
0x822D94: add     eax, 5Ch ; '\'
0x822D97: cmp     [eax], ebx
0x822D99: jnz     short loc_822DA0
0x822D9B: call    sub_772560
0x822DA0: mov     edi, [esp+398h+a3]
0x822DA4: push    2
0x822DA6: push    1
0x822DA8: push    6
0x822DAA: push    edi
0x822DAB: call    sub_801110
0x822DB0: add     esp, 10h
0x822DB3: push    edi; a3
0x822DB4: push    6; a2
0x822DB6: mov     ecx, esi; this
0x822DB8: call    sub_760010
0x822DBD: lea     eax, [esp+398h+var_27C]
0x822DC4: push    eax
0x822DC5: call    sub_772630
0x822DCA: add     esp, 4
0x822DCD: push    eax
0x822DCE: lea     ecx, [esp+39Ch+a3]
0x822DD2: mov     byte ptr [esp+39Ch+var_4], 41h ; 'A'
0x822DDA: call    sub_75FAE0
0x822DDF: mov     eax, [esp+398h+var_27C]
0x822DE6: cmp     eax, ebx
0x822DE8: mov     byte ptr [esp+398h+var_4], 1
0x822DF0: jz      short loc_822E04
0x822DF2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822DF6: mov     ecx, eax
0x822DF8: add     eax, 5Ch ; '\'
0x822DFB: cmp     [eax], ebx
0x822DFD: jnz     short loc_822E04
0x822DFF: call    sub_772560
0x822E04: mov     edi, [esp+398h+a3]
0x822E08: push    ebx
0x822E09: push    3
0x822E0B: push    7
0x822E0D: push    edi
0x822E0E: call    sub_801110
0x822E13: add     esp, 10h
0x822E16: push    edi; a3
0x822E17: push    7; a2
0x822E19: mov     ecx, esi; this
0x822E1B: call    sub_760010
0x822E20: mov     ecx, ds:0B4536Ch
0x822E26: push    ecx; a2
0x822E27: mov     ecx, esi; this
0x822E29: call    sub_7AECB0
0x822E2E: mov     edx, ds:0B45160h
0x822E34: push    edx; a2
0x822E35: mov     ecx, esi; this
0x822E37: call    sub_7AEC60
0x822E3C: cmp     [esi+30h], ebx
0x822E3F: jnz     short loc_822E49
0x822E41: call    sub_772DF0
0x822E46: mov     [esi+30h], eax
0x822E49: mov     ecx, [esi+30h]
0x822E4C: push    ebx
0x822E4D: push    ebx
0x822E4E: push    1Bh
0x822E50: call    sub_772CD0
0x822E55: cmp     [esi+30h], ebx
0x822E58: jnz     short loc_822E62
0x822E5A: call    sub_772DF0
0x822E5F: mov     [esi+30h], eax
0x822E62: mov     ecx, [esi+30h]
0x822E65: push    ebx
0x822E66: push    ebx
0x822E67: push    0Fh
0x822E69: call    sub_772CD0
0x822E6E: cmp     [esi+30h], ebx
0x822E71: jnz     short loc_822E7B
0x822E73: call    sub_772DF0
0x822E78: mov     [esi+30h], eax
0x822E7B: mov     ecx, [esi+30h]
0x822E7E: push    ebx
0x822E7F: push    1
0x822E81: push    7
0x822E83: call    sub_772CD0
0x822E88: cmp     [esi+30h], ebx
0x822E8B: jnz     short loc_822E95
0x822E8D: call    sub_772DF0
0x822E92: mov     [esi+30h], eax
0x822E95: mov     ecx, [esi+30h]
0x822E98: push    ebx
0x822E99: push    4
0x822E9B: push    17h
0x822E9D: call    sub_772CD0
0x822EA2: cmp     [esi+30h], ebx
0x822EA5: jnz     short loc_822EAF
0x822EA7: call    sub_772DF0
0x822EAC: mov     [esi+30h], eax
0x822EAF: mov     ecx, [esi+30h]
0x822EB2: push    ebx
0x822EB3: push    1
0x822EB5: push    0Eh
0x822EB7: call    sub_772CD0
0x822EBC: cmp     [esi+30h], ebx
0x822EBF: jnz     short loc_822EC9
0x822EC1: call    sub_772DF0
0x822EC6: mov     [esi+30h], eax
0x822EC9: mov     ecx, [esi+30h]
0x822ECC: push    ebx
0x822ECD: push    ebx
0x822ECE: push    34h ; '4'
0x822ED0: call    sub_772CD0
0x822ED5: cmp     esi, ds:0B457B0h
0x822EDB: mov     ds:0B43D2Ch, ebp
0x822EE1: mov     dword ptr ds:0B443BCh, 18Ch
0x822EEB: mov     dword ptr ds:0B4369Ch, 18000h
0x822EF5: mov     dword ptr ds:0B44A4Ch, 0Ch
0x822EFF: jz      short loc_822F20
0x822F01: add     dword ptr [esi+60h], 0FFFFFFFFh
0x822F05: jnz     short loc_822F0E
0x822F07: mov     ecx, esi
0x822F09: call    sub_7604D0
0x822F0E: mov     esi, ds:0B457B0h
0x822F14: cmp     esi, ebx
0x822F16: mov     [esp+398h+var_380], esi
0x822F1A: jz      short loc_822F20
0x822F1C: add     dword ptr [esi+60h], 1
0x822F20: cmp     dword ptr [esi+18h], 8
0x822F24: jnb     loc_823253
0x822F2A: lea     eax, [esp+398h+var_144]
0x822F31: push    eax
0x822F32: call    sub_772630
0x822F37: add     esp, 4
0x822F3A: push    eax
0x822F3B: lea     ecx, [esp+39Ch+a3]
0x822F3F: mov     byte ptr [esp+39Ch+var_4], 42h ; 'B'
0x822F47: call    sub_75FAE0
0x822F4C: mov     eax, [esp+398h+var_144]
0x822F53: cmp     eax, ebx
0x822F55: mov     byte ptr [esp+398h+var_4], 1
0x822F5D: jz      short loc_822F71
0x822F5F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822F63: mov     ecx, eax
0x822F65: add     eax, 5Ch ; '\'
0x822F68: cmp     [eax], ebx
0x822F6A: jnz     short loc_822F71
0x822F6C: call    sub_772560
0x822F71: mov     edi, [esp+398h+a3]
0x822F75: push    2
0x822F77: push    1
0x822F79: push    ebx
0x822F7A: push    edi
0x822F7B: call    sub_801110
0x822F80: add     esp, 10h
0x822F83: push    edi; a3
0x822F84: push    ebx; a2
0x822F85: mov     ecx, esi; this
0x822F87: call    sub_760010
0x822F8C: lea     ecx, [esp+398h+var_274]
0x822F93: push    ecx
0x822F94: call    sub_772630
0x822F99: add     esp, 4
0x822F9C: push    eax
0x822F9D: lea     ecx, [esp+39Ch+a3]
0x822FA1: mov     byte ptr [esp+39Ch+var_4], 43h ; 'C'
0x822FA9: call    sub_75FAE0
0x822FAE: mov     eax, [esp+398h+var_274]
0x822FB5: cmp     eax, ebx
0x822FB7: mov     byte ptr [esp+398h+var_4], 1
0x822FBF: jz      short loc_822FD3
0x822FC1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x822FC5: mov     ecx, eax
0x822FC7: add     eax, 5Ch ; '\'
0x822FCA: cmp     [eax], ebx
0x822FCC: jnz     short loc_822FD3
0x822FCE: call    sub_772560
0x822FD3: mov     edi, [esp+398h+a3]
0x822FD7: push    2
0x822FD9: push    1
0x822FDB: push    1
0x822FDD: push    edi
0x822FDE: call    sub_801110
0x822FE3: add     esp, 10h
0x822FE6: push    edi; a3
0x822FE7: push    1; a2
0x822FE9: mov     ecx, esi; this
0x822FEB: call    sub_760010
0x822FF0: lea     edx, [esp+398h+var_5C]
0x822FF7: push    edx
0x822FF8: call    sub_772630
0x822FFD: add     esp, 4
0x823000: push    eax
0x823001: lea     ecx, [esp+39Ch+a3]
0x823005: mov     byte ptr [esp+39Ch+var_4], 44h ; 'D'
0x82300D: call    sub_75FAE0
0x823012: mov     eax, [esp+398h+var_5C]
0x823019: cmp     eax, ebx
0x82301B: mov     byte ptr [esp+398h+var_4], 1
0x823023: jz      short loc_823037
0x823025: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823029: mov     ecx, eax
0x82302B: add     eax, 5Ch ; '\'
0x82302E: cmp     [eax], ebx
0x823030: jnz     short loc_823037
0x823032: call    sub_772560
0x823037: mov     edi, [esp+398h+a3]
0x82303B: push    2
0x82303D: push    1
0x82303F: push    2
0x823041: push    edi
0x823042: call    sub_801110
0x823047: add     esp, 10h
0x82304A: push    edi; a3
0x82304B: push    2; a2
0x82304D: mov     ecx, esi; this
0x82304F: call    sub_760010
0x823054: lea     eax, [esp+398h+var_26C]
0x82305B: push    eax
0x82305C: call    sub_772630
0x823061: add     esp, 4
0x823064: push    eax
0x823065: lea     ecx, [esp+39Ch+a3]
0x823069: mov     byte ptr [esp+39Ch+var_4], 45h ; 'E'
0x823071: call    sub_75FAE0
0x823076: mov     eax, [esp+398h+var_26C]
0x82307D: cmp     eax, ebx
0x82307F: mov     byte ptr [esp+398h+var_4], 1
0x823087: jz      short loc_82309B
0x823089: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82308D: mov     ecx, eax
0x82308F: add     eax, 5Ch ; '\'
0x823092: cmp     [eax], ebx
0x823094: jnz     short loc_82309B
0x823096: call    sub_772560
0x82309B: mov     edi, [esp+398h+a3]
0x82309F: push    2
0x8230A1: push    1
0x8230A3: push    3
0x8230A5: push    edi
0x8230A6: call    sub_801110
0x8230AB: add     esp, 10h
0x8230AE: push    edi; a3
0x8230AF: push    3; a2
0x8230B1: mov     ecx, esi; this
0x8230B3: call    sub_760010
0x8230B8: lea     ecx, [esp+398h+var_13C]
0x8230BF: push    ecx
0x8230C0: call    sub_772630
0x8230C5: add     esp, 4
0x8230C8: push    eax
0x8230C9: lea     ecx, [esp+39Ch+a3]
0x8230CD: mov     byte ptr [esp+39Ch+var_4], 46h ; 'F'
0x8230D5: call    sub_75FAE0
0x8230DA: mov     eax, [esp+398h+var_13C]
0x8230E1: cmp     eax, ebx
0x8230E3: mov     byte ptr [esp+398h+var_4], 1
0x8230EB: jz      short loc_8230FF
0x8230ED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8230F1: mov     ecx, eax
0x8230F3: add     eax, 5Ch ; '\'
0x8230F6: cmp     [eax], ebx
0x8230F8: jnz     short loc_8230FF
0x8230FA: call    sub_772560
0x8230FF: mov     edi, [esp+398h+a3]
0x823103: push    2
0x823105: push    1
0x823107: push    4
0x823109: push    edi
0x82310A: call    sub_801110
0x82310F: add     esp, 10h
0x823112: push    edi; a3
0x823113: push    4; a2
0x823115: mov     ecx, esi; this
0x823117: call    sub_760010
0x82311C: lea     edx, [esp+398h+var_264]
0x823123: push    edx
0x823124: call    sub_772630
0x823129: add     esp, 4
0x82312C: push    eax
0x82312D: lea     ecx, [esp+39Ch+a3]
0x823131: mov     byte ptr [esp+39Ch+var_4], 47h ; 'G'
0x823139: call    sub_75FAE0
0x82313E: mov     eax, [esp+398h+var_264]
0x823145: cmp     eax, ebx
0x823147: mov     byte ptr [esp+398h+var_4], 1
0x82314F: jz      short loc_823163
0x823151: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823155: mov     ecx, eax
0x823157: add     eax, 5Ch ; '\'
0x82315A: cmp     [eax], ebx
0x82315C: jnz     short loc_823163
0x82315E: call    sub_772560
0x823163: mov     edi, [esp+398h+a3]
0x823167: push    ebx
0x823168: push    3
0x82316A: push    5
0x82316C: push    edi
0x82316D: call    sub_801110
0x823172: mov     eax, ds:0B43110h
0x823177: add     esp, 10h
0x82317A: push    eax; a2
0x82317B: mov     ecx, edi; this
0x82317D: call    sub_76C910
0x823182: push    edi; a3
0x823183: push    5; a2
0x823185: mov     ecx, esi; this
0x823187: call    sub_760010
0x82318C: lea     ecx, [esp+398h+var_A4]
0x823193: push    ecx
0x823194: call    sub_772630
0x823199: add     esp, 4
0x82319C: push    eax
0x82319D: lea     ecx, [esp+39Ch+a3]
0x8231A1: mov     byte ptr [esp+39Ch+var_4], 48h ; 'H'
0x8231A9: call    sub_75FAE0
0x8231AE: mov     eax, [esp+398h+var_A4]
0x8231B5: cmp     eax, ebx
0x8231B7: mov     byte ptr [esp+398h+var_4], 1
0x8231BF: jz      short loc_8231D3
0x8231C1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8231C5: mov     ecx, eax
0x8231C7: add     eax, 5Ch ; '\'
0x8231CA: cmp     [eax], ebx
0x8231CC: jnz     short loc_8231D3
0x8231CE: call    sub_772560
0x8231D3: mov     edi, [esp+398h+a3]
0x8231D7: push    2
0x8231D9: push    1
0x8231DB: push    6
0x8231DD: push    edi
0x8231DE: call    sub_801110
0x8231E3: add     esp, 10h
0x8231E6: push    edi; a3
0x8231E7: push    6; a2
0x8231E9: mov     ecx, esi; this
0x8231EB: call    sub_760010
0x8231F0: lea     edx, [esp+398h+var_25C]
0x8231F7: push    edx
0x8231F8: call    sub_772630
0x8231FD: add     esp, 4
0x823200: push    eax
0x823201: lea     ecx, [esp+39Ch+a3]
0x823205: mov     byte ptr [esp+39Ch+var_4], 49h ; 'I'
0x82320D: call    sub_75FAE0
0x823212: mov     eax, [esp+398h+var_25C]
0x823219: cmp     eax, ebx
0x82321B: mov     byte ptr [esp+398h+var_4], 1
0x823223: jz      short loc_823237
0x823225: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823229: mov     ecx, eax
0x82322B: add     eax, 5Ch ; '\'
0x82322E: cmp     [eax], ebx
0x823230: jnz     short loc_823237
0x823232: call    sub_772560
0x823237: mov     edi, [esp+398h+a3]
0x82323B: push    ebx
0x82323C: push    3
0x82323E: push    7
0x823240: push    edi
0x823241: call    sub_801110
0x823246: add     esp, 10h
0x823249: push    edi; a3
0x82324A: push    7; a2
0x82324C: mov     ecx, esi; this
0x82324E: call    sub_760010
0x823253: mov     eax, ds:0B45370h
0x823258: push    eax; a2
0x823259: mov     ecx, esi; this
0x82325B: call    sub_7AECB0
0x823260: mov     ecx, ds:0B45150h
0x823266: push    ecx; a2
0x823267: mov     ecx, esi; this
0x823269: call    sub_7AEC60
0x82326E: cmp     [esi+30h], ebx
0x823271: jnz     short loc_82327B
0x823273: call    sub_772DF0
0x823278: mov     [esi+30h], eax
0x82327B: mov     ecx, [esi+30h]
0x82327E: push    ebx
0x82327F: push    ebx
0x823280: push    1Bh
0x823282: call    sub_772CD0
0x823287: cmp     [esi+30h], ebx
0x82328A: jnz     short loc_823294
0x82328C: call    sub_772DF0
0x823291: mov     [esi+30h], eax
0x823294: mov     ecx, [esi+30h]
0x823297: push    ebx
0x823298: push    ebx
0x823299: push    0Fh
0x82329B: call    sub_772CD0
0x8232A0: cmp     [esi+30h], ebx
0x8232A3: jnz     short loc_8232AD
0x8232A5: call    sub_772DF0
0x8232AA: mov     [esi+30h], eax
0x8232AD: mov     ecx, [esi+30h]
0x8232B0: push    ebx
0x8232B1: push    1
0x8232B3: push    7
0x8232B5: call    sub_772CD0
0x8232BA: cmp     [esi+30h], ebx
0x8232BD: jnz     short loc_8232C7
0x8232BF: call    sub_772DF0
0x8232C4: mov     [esi+30h], eax
0x8232C7: mov     ecx, [esi+30h]
0x8232CA: push    ebx
0x8232CB: push    4
0x8232CD: push    17h
0x8232CF: call    sub_772CD0
0x8232D4: cmp     [esi+30h], ebx
0x8232D7: jnz     short loc_8232E1
0x8232D9: call    sub_772DF0
0x8232DE: mov     [esi+30h], eax
0x8232E1: mov     ecx, [esi+30h]
0x8232E4: push    ebx
0x8232E5: push    1
0x8232E7: push    0Eh
0x8232E9: call    sub_772CD0
0x8232EE: cmp     [esi+30h], ebx
0x8232F1: jnz     short loc_8232FB
0x8232F3: call    sub_772DF0
0x8232F8: mov     [esi+30h], eax
0x8232FB: mov     ecx, [esi+30h]
0x8232FE: push    ebx
0x8232FF: push    ebx
0x823300: push    34h ; '4'
0x823302: call    sub_772CD0
0x823307: cmp     esi, ds:0B457B4h
0x82330D: mov     ebp, 180F2h
0x823312: mov     ds:0B43D30h, ebp
0x823318: mov     dword ptr ds:0B443C0h, 10Ch
0x823322: mov     dword ptr ds:0B436A0h, 18060h
0x82332C: mov     dword ptr ds:0B44A50h, 8
0x823336: jz      short loc_823357
0x823338: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82333C: jnz     short loc_823345
0x82333E: mov     ecx, esi
0x823340: call    sub_7604D0
0x823345: mov     esi, ds:0B457B4h
0x82334B: cmp     esi, ebx
0x82334D: mov     [esp+398h+var_380], esi
0x823351: jz      short loc_823357
0x823353: add     dword ptr [esi+60h], 1
0x823357: cmp     dword ptr [esi+18h], 8
0x82335B: jnb     loc_82368B
0x823361: lea     edx, [esp+398h+var_134]
0x823368: push    edx
0x823369: call    sub_772630
0x82336E: add     esp, 4
0x823371: push    eax
0x823372: lea     ecx, [esp+39Ch+a3]
0x823376: mov     byte ptr [esp+39Ch+var_4], 4Ah ; 'J'
0x82337E: call    sub_75FAE0
0x823383: mov     eax, [esp+398h+var_134]
0x82338A: cmp     eax, ebx
0x82338C: mov     byte ptr [esp+398h+var_4], 1
0x823394: jz      short loc_8233A8
0x823396: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82339A: mov     ecx, eax
0x82339C: add     eax, 5Ch ; '\'
0x82339F: cmp     [eax], ebx
0x8233A1: jnz     short loc_8233A8
0x8233A3: call    sub_772560
0x8233A8: mov     edi, [esp+398h+a3]
0x8233AC: push    2
0x8233AE: push    1
0x8233B0: push    ebx
0x8233B1: push    edi
0x8233B2: call    sub_801110
0x8233B7: add     esp, 10h
0x8233BA: push    edi; a3
0x8233BB: push    ebx; a2
0x8233BC: mov     ecx, esi; this
0x8233BE: call    sub_760010
0x8233C3: lea     eax, [esp+398h+var_254]
0x8233CA: push    eax
0x8233CB: call    sub_772630
0x8233D0: add     esp, 4
0x8233D3: push    eax
0x8233D4: lea     ecx, [esp+39Ch+a3]
0x8233D8: mov     byte ptr [esp+39Ch+var_4], 4Bh ; 'K'
0x8233E0: call    sub_75FAE0
0x8233E5: mov     eax, [esp+398h+var_254]
0x8233EC: cmp     eax, ebx
0x8233EE: mov     byte ptr [esp+398h+var_4], 1
0x8233F6: jz      short loc_82340A
0x8233F8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8233FC: mov     ecx, eax
0x8233FE: add     eax, 5Ch ; '\'
0x823401: cmp     [eax], ebx
0x823403: jnz     short loc_82340A
0x823405: call    sub_772560
0x82340A: mov     edi, [esp+398h+a3]
0x82340E: push    2
0x823410: push    1
0x823412: push    1
0x823414: push    edi
0x823415: call    sub_801110
0x82341A: add     esp, 10h
0x82341D: push    edi; a3
0x82341E: push    1; a2
0x823420: mov     ecx, esi; this
0x823422: call    sub_760010
0x823427: lea     ecx, [esp+398h+var_34]
0x82342E: push    ecx
0x82342F: call    sub_772630
0x823434: add     esp, 4
0x823437: push    eax
0x823438: lea     ecx, [esp+39Ch+a3]
0x82343C: mov     byte ptr [esp+39Ch+var_4], 4Ch ; 'L'
0x823444: call    sub_75FAE0
0x823449: mov     eax, [esp+398h+var_34]
0x823450: cmp     eax, ebx
0x823452: mov     byte ptr [esp+398h+var_4], 1
0x82345A: jz      short loc_82346E
0x82345C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823460: mov     ecx, eax
0x823462: add     eax, 5Ch ; '\'
0x823465: cmp     [eax], ebx
0x823467: jnz     short loc_82346E
0x823469: call    sub_772560
0x82346E: mov     edi, [esp+398h+a3]
0x823472: push    2
0x823474: push    1
0x823476: push    2
0x823478: push    edi
0x823479: call    sub_801110
0x82347E: add     esp, 10h
0x823481: push    edi; a3
0x823482: push    2; a2
0x823484: mov     ecx, esi; this
0x823486: call    sub_760010
0x82348B: lea     edx, [esp+398h+var_24C]
0x823492: push    edx
0x823493: call    sub_772630
0x823498: add     esp, 4
0x82349B: push    eax
0x82349C: lea     ecx, [esp+39Ch+a3]
0x8234A0: mov     byte ptr [esp+39Ch+var_4], 4Dh ; 'M'
0x8234A8: call    sub_75FAE0
0x8234AD: mov     eax, [esp+398h+var_24C]
0x8234B4: cmp     eax, ebx
0x8234B6: mov     byte ptr [esp+398h+var_4], 1
0x8234BE: jz      short loc_8234D2
0x8234C0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8234C4: mov     ecx, eax
0x8234C6: add     eax, 5Ch ; '\'
0x8234C9: cmp     [eax], ebx
0x8234CB: jnz     short loc_8234D2
0x8234CD: call    sub_772560
0x8234D2: mov     edi, [esp+398h+a3]
0x8234D6: push    2
0x8234D8: push    1
0x8234DA: push    3
0x8234DC: push    edi
0x8234DD: call    sub_801110
0x8234E2: add     esp, 10h
0x8234E5: push    edi; a3
0x8234E6: push    3; a2
0x8234E8: mov     ecx, esi; this
0x8234EA: call    sub_760010
0x8234EF: lea     eax, [esp+398h+var_12C]
0x8234F6: push    eax
0x8234F7: call    sub_772630
0x8234FC: add     esp, 4
0x8234FF: push    eax
0x823500: lea     ecx, [esp+39Ch+a3]
0x823504: mov     byte ptr [esp+39Ch+var_4], 4Eh ; 'N'
0x82350C: call    sub_75FAE0
0x823511: mov     eax, [esp+398h+var_12C]
0x823518: cmp     eax, ebx
0x82351A: mov     byte ptr [esp+398h+var_4], 1
0x823522: jz      short loc_823536
0x823524: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823528: mov     ecx, eax
0x82352A: add     eax, 5Ch ; '\'
0x82352D: cmp     [eax], ebx
0x82352F: jnz     short loc_823536
0x823531: call    sub_772560
0x823536: mov     edi, [esp+398h+a3]
0x82353A: push    2
0x82353C: push    1
0x82353E: push    4
0x823540: push    edi
0x823541: call    sub_801110
0x823546: add     esp, 10h
0x823549: push    edi; a3
0x82354A: push    4; a2
0x82354C: mov     ecx, esi; this
0x82354E: call    sub_760010
0x823553: lea     ecx, [esp+398h+var_244]
0x82355A: push    ecx
0x82355B: call    sub_772630
0x823560: add     esp, 4
0x823563: push    eax
0x823564: lea     ecx, [esp+39Ch+a3]
0x823568: mov     byte ptr [esp+39Ch+var_4], 4Fh ; 'O'
0x823570: call    sub_75FAE0
0x823575: mov     eax, [esp+398h+var_244]
0x82357C: cmp     eax, ebx
0x82357E: mov     byte ptr [esp+398h+var_4], 1
0x823586: jz      short loc_82359A
0x823588: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82358C: mov     ecx, eax
0x82358E: add     eax, 5Ch ; '\'
0x823591: cmp     [eax], ebx
0x823593: jnz     short loc_82359A
0x823595: call    sub_772560
0x82359A: mov     edi, [esp+398h+a3]
0x82359E: push    ebx
0x82359F: push    3
0x8235A1: push    5
0x8235A3: push    edi
0x8235A4: call    sub_801110
0x8235A9: mov     edx, ds:0B43110h
0x8235AF: add     esp, 10h
0x8235B2: push    edx; a2
0x8235B3: mov     ecx, edi; this
0x8235B5: call    sub_76C910
0x8235BA: push    edi; a3
0x8235BB: push    5; a2
0x8235BD: mov     ecx, esi; this
0x8235BF: call    sub_760010
0x8235C4: lea     eax, [esp+398h+var_9C]
0x8235CB: push    eax
0x8235CC: call    sub_772630
0x8235D1: add     esp, 4
0x8235D4: push    eax
0x8235D5: lea     ecx, [esp+39Ch+a3]
0x8235D9: mov     byte ptr [esp+39Ch+var_4], 50h ; 'P'
0x8235E1: call    sub_75FAE0
0x8235E6: mov     eax, [esp+398h+var_9C]
0x8235ED: cmp     eax, ebx
0x8235EF: mov     byte ptr [esp+398h+var_4], 1
0x8235F7: jz      short loc_82360B
0x8235F9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8235FD: mov     ecx, eax
0x8235FF: add     eax, 5Ch ; '\'
0x823602: cmp     [eax], ebx
0x823604: jnz     short loc_82360B
0x823606: call    sub_772560
0x82360B: mov     edi, [esp+398h+a3]
0x82360F: push    2
0x823611: push    1
0x823613: push    6
0x823615: push    edi
0x823616: call    sub_801110
0x82361B: add     esp, 10h
0x82361E: push    edi; a3
0x82361F: push    6; a2
0x823621: mov     ecx, esi; this
0x823623: call    sub_760010
0x823628: lea     ecx, [esp+398h+var_23C]
0x82362F: push    ecx
0x823630: call    sub_772630
0x823635: add     esp, 4
0x823638: push    eax
0x823639: lea     ecx, [esp+39Ch+a3]
0x82363D: mov     byte ptr [esp+39Ch+var_4], 51h ; 'Q'
0x823645: call    sub_75FAE0
0x82364A: mov     eax, [esp+398h+var_23C]
0x823651: cmp     eax, ebx
0x823653: mov     byte ptr [esp+398h+var_4], 1
0x82365B: jz      short loc_82366F
0x82365D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823661: mov     ecx, eax
0x823663: add     eax, 5Ch ; '\'
0x823666: cmp     [eax], ebx
0x823668: jnz     short loc_82366F
0x82366A: call    sub_772560
0x82366F: mov     edi, [esp+398h+a3]
0x823673: push    ebx
0x823674: push    3
0x823676: push    7
0x823678: push    edi
0x823679: call    sub_801110
0x82367E: add     esp, 10h
0x823681: push    edi; a3
0x823682: push    7; a2
0x823684: mov     ecx, esi; this
0x823686: call    sub_760010
0x82368B: mov     edx, ds:0B45374h
0x823691: push    edx; a2
0x823692: mov     ecx, esi; this
0x823694: call    sub_7AECB0
0x823699: mov     eax, ds:0B45154h
0x82369E: push    eax; a2
0x82369F: mov     ecx, esi; this
0x8236A1: call    sub_7AEC60
0x8236A6: cmp     [esi+30h], ebx
0x8236A9: jnz     short loc_8236B3
0x8236AB: call    sub_772DF0
0x8236B0: mov     [esi+30h], eax
0x8236B3: mov     ecx, [esi+30h]
0x8236B6: push    ebx
0x8236B7: push    ebx
0x8236B8: push    1Bh
0x8236BA: call    sub_772CD0
0x8236BF: cmp     [esi+30h], ebx
0x8236C2: jnz     short loc_8236CC
0x8236C4: call    sub_772DF0
0x8236C9: mov     [esi+30h], eax
0x8236CC: mov     ecx, [esi+30h]
0x8236CF: push    ebx
0x8236D0: push    ebx
0x8236D1: push    0Fh
0x8236D3: call    sub_772CD0
0x8236D8: cmp     [esi+30h], ebx
0x8236DB: jnz     short loc_8236E5
0x8236DD: call    sub_772DF0
0x8236E2: mov     [esi+30h], eax
0x8236E5: mov     ecx, [esi+30h]
0x8236E8: push    ebx
0x8236E9: push    1
0x8236EB: push    7
0x8236ED: call    sub_772CD0
0x8236F2: cmp     [esi+30h], ebx
0x8236F5: jnz     short loc_8236FF
0x8236F7: call    sub_772DF0
0x8236FC: mov     [esi+30h], eax
0x8236FF: mov     ecx, [esi+30h]
0x823702: push    ebx
0x823703: push    4
0x823705: push    17h
0x823707: call    sub_772CD0
0x82370C: cmp     [esi+30h], ebx
0x82370F: jnz     short loc_823719
0x823711: call    sub_772DF0
0x823716: mov     [esi+30h], eax
0x823719: mov     ecx, [esi+30h]
0x82371C: push    ebx
0x82371D: push    1
0x82371F: push    0Eh
0x823721: call    sub_772CD0
0x823726: cmp     [esi+30h], ebx
0x823729: jnz     short loc_823733
0x82372B: call    sub_772DF0
0x823730: mov     [esi+30h], eax
0x823733: mov     ecx, [esi+30h]
0x823736: push    ebx
0x823737: push    ebx
0x823738: push    34h ; '4'
0x82373A: call    sub_772CD0
0x82373F: push    offset dword_B457B8
0x823744: lea     ecx, [esp+39Ch+var_380]
0x823748: mov     dword ptr ds:0B43D34h, 0A0180F2h
0x823752: mov     dword ptr ds:0B443C4h, 10Ch
0x82375C: mov     dword ptr ds:0B436A4h, 0A018060h
0x823766: mov     dword ptr ds:0B44A54h, 8
0x823770: call    sub_76C890
0x823775: mov     esi, [esp+398h+var_380]
0x823779: cmp     dword ptr [esi+18h], 8
0x82377D: jnb     loc_823AAD
0x823783: lea     ecx, [esp+398h+var_124]
0x82378A: push    ecx
0x82378B: call    sub_772630
0x823790: add     esp, 4
0x823793: push    eax
0x823794: lea     ecx, [esp+39Ch+a3]
0x823798: mov     byte ptr [esp+39Ch+var_4], 52h ; 'R'
0x8237A0: call    sub_75FAE0
0x8237A5: mov     eax, [esp+398h+var_124]
0x8237AC: cmp     eax, ebx
0x8237AE: mov     byte ptr [esp+398h+var_4], 1
0x8237B6: jz      short loc_8237CA
0x8237B8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8237BC: mov     ecx, eax
0x8237BE: add     eax, 5Ch ; '\'
0x8237C1: cmp     [eax], ebx
0x8237C3: jnz     short loc_8237CA
0x8237C5: call    sub_772560
0x8237CA: mov     edi, [esp+398h+a3]
0x8237CE: push    2
0x8237D0: push    1
0x8237D2: push    ebx
0x8237D3: push    edi
0x8237D4: call    sub_801110
0x8237D9: add     esp, 10h
0x8237DC: push    edi; a3
0x8237DD: push    ebx; a2
0x8237DE: mov     ecx, esi; this
0x8237E0: call    sub_760010
0x8237E5: lea     edx, [esp+398h+var_234]
0x8237EC: push    edx
0x8237ED: call    sub_772630
0x8237F2: add     esp, 4
0x8237F5: push    eax
0x8237F6: lea     ecx, [esp+39Ch+a3]
0x8237FA: mov     byte ptr [esp+39Ch+var_4], 53h ; 'S'
0x823802: call    sub_75FAE0
0x823807: mov     eax, [esp+398h+var_234]
0x82380E: cmp     eax, ebx
0x823810: mov     byte ptr [esp+398h+var_4], 1
0x823818: jz      short loc_82382C
0x82381A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82381E: mov     ecx, eax
0x823820: add     eax, 5Ch ; '\'
0x823823: cmp     [eax], ebx
0x823825: jnz     short loc_82382C
0x823827: call    sub_772560
0x82382C: mov     edi, [esp+398h+a3]
0x823830: push    2
0x823832: push    1
0x823834: push    1
0x823836: push    edi
0x823837: call    sub_801110
0x82383C: add     esp, 10h
0x82383F: push    edi; a3
0x823840: push    1; a2
0x823842: mov     ecx, esi; this
0x823844: call    sub_760010
0x823849: lea     eax, [esp+398h+var_54]
0x823850: push    eax
0x823851: call    sub_772630
0x823856: add     esp, 4
0x823859: push    eax
0x82385A: lea     ecx, [esp+39Ch+a3]
0x82385E: mov     byte ptr [esp+39Ch+var_4], 54h ; 'T'
0x823866: call    sub_75FAE0
0x82386B: mov     eax, [esp+398h+var_54]
0x823872: cmp     eax, ebx
0x823874: mov     byte ptr [esp+398h+var_4], 1
0x82387C: jz      short loc_823890
0x82387E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823882: mov     ecx, eax
0x823884: add     eax, 5Ch ; '\'
0x823887: cmp     [eax], ebx
0x823889: jnz     short loc_823890
0x82388B: call    sub_772560
0x823890: mov     edi, [esp+398h+a3]
0x823894: push    2
0x823896: push    1
0x823898: push    2
0x82389A: push    edi
0x82389B: call    sub_801110
0x8238A0: add     esp, 10h
0x8238A3: push    edi; a3
0x8238A4: push    2; a2
0x8238A6: mov     ecx, esi; this
0x8238A8: call    sub_760010
0x8238AD: lea     ecx, [esp+398h+var_22C]
0x8238B4: push    ecx
0x8238B5: call    sub_772630
0x8238BA: add     esp, 4
0x8238BD: push    eax
0x8238BE: lea     ecx, [esp+39Ch+a3]
0x8238C2: mov     byte ptr [esp+39Ch+var_4], 55h ; 'U'
0x8238CA: call    sub_75FAE0
0x8238CF: mov     eax, [esp+398h+var_22C]
0x8238D6: cmp     eax, ebx
0x8238D8: mov     byte ptr [esp+398h+var_4], 1
0x8238E0: jz      short loc_8238F4
0x8238E2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8238E6: mov     ecx, eax
0x8238E8: add     eax, 5Ch ; '\'
0x8238EB: cmp     [eax], ebx
0x8238ED: jnz     short loc_8238F4
0x8238EF: call    sub_772560
0x8238F4: mov     edi, [esp+398h+a3]
0x8238F8: push    2
0x8238FA: push    1
0x8238FC: push    3
0x8238FE: push    edi
0x8238FF: call    sub_801110
0x823904: add     esp, 10h
0x823907: push    edi; a3
0x823908: push    3; a2
0x82390A: mov     ecx, esi; this
0x82390C: call    sub_760010
0x823911: lea     edx, [esp+398h+var_11C]
0x823918: push    edx
0x823919: call    sub_772630
0x82391E: add     esp, 4
0x823921: push    eax
0x823922: lea     ecx, [esp+39Ch+a3]
0x823926: mov     byte ptr [esp+39Ch+var_4], 56h ; 'V'
0x82392E: call    sub_75FAE0
0x823933: mov     eax, [esp+398h+var_11C]
0x82393A: cmp     eax, ebx
0x82393C: mov     byte ptr [esp+398h+var_4], 1
0x823944: jz      short loc_823958
0x823946: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82394A: mov     ecx, eax
0x82394C: add     eax, 5Ch ; '\'
0x82394F: cmp     [eax], ebx
0x823951: jnz     short loc_823958
0x823953: call    sub_772560
0x823958: mov     edi, [esp+398h+a3]
0x82395C: push    2
0x82395E: push    1
0x823960: push    4
0x823962: push    edi
0x823963: call    sub_801110
0x823968: add     esp, 10h
0x82396B: push    edi; a3
0x82396C: push    4; a2
0x82396E: mov     ecx, esi; this
0x823970: call    sub_760010
0x823975: lea     eax, [esp+398h+var_224]
0x82397C: push    eax
0x82397D: call    sub_772630
0x823982: add     esp, 4
0x823985: push    eax
0x823986: lea     ecx, [esp+39Ch+a3]
0x82398A: mov     byte ptr [esp+39Ch+var_4], 57h ; 'W'
0x823992: call    sub_75FAE0
0x823997: mov     eax, [esp+398h+var_224]
0x82399E: cmp     eax, ebx
0x8239A0: mov     byte ptr [esp+398h+var_4], 1
0x8239A8: jz      short loc_8239BC
0x8239AA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8239AE: mov     ecx, eax
0x8239B0: add     eax, 5Ch ; '\'
0x8239B3: cmp     [eax], ebx
0x8239B5: jnz     short loc_8239BC
0x8239B7: call    sub_772560
0x8239BC: mov     edi, [esp+398h+a3]
0x8239C0: push    ebx
0x8239C1: push    3
0x8239C3: push    5
0x8239C5: push    edi
0x8239C6: call    sub_801110
0x8239CB: mov     ecx, ds:0B43110h
0x8239D1: add     esp, 10h
0x8239D4: push    ecx; a2
0x8239D5: mov     ecx, edi; this
0x8239D7: call    sub_76C910
0x8239DC: push    edi; a3
0x8239DD: push    5; a2
0x8239DF: mov     ecx, esi; this
0x8239E1: call    sub_760010
0x8239E6: lea     edx, [esp+398h+var_94]
0x8239ED: push    edx
0x8239EE: call    sub_772630
0x8239F3: add     esp, 4
0x8239F6: push    eax
0x8239F7: lea     ecx, [esp+39Ch+a3]
0x8239FB: mov     byte ptr [esp+39Ch+var_4], 58h ; 'X'
0x823A03: call    sub_75FAE0
0x823A08: mov     eax, [esp+398h+var_94]
0x823A0F: cmp     eax, ebx
0x823A11: mov     byte ptr [esp+398h+var_4], 1
0x823A19: jz      short loc_823A2D
0x823A1B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823A1F: mov     ecx, eax
0x823A21: add     eax, 5Ch ; '\'
0x823A24: cmp     [eax], ebx
0x823A26: jnz     short loc_823A2D
0x823A28: call    sub_772560
0x823A2D: mov     edi, [esp+398h+a3]
0x823A31: push    2
0x823A33: push    1
0x823A35: push    6
0x823A37: push    edi
0x823A38: call    sub_801110
0x823A3D: add     esp, 10h
0x823A40: push    edi; a3
0x823A41: push    6; a2
0x823A43: mov     ecx, esi; this
0x823A45: call    sub_760010
0x823A4A: lea     eax, [esp+398h+var_21C]
0x823A51: push    eax
0x823A52: call    sub_772630
0x823A57: add     esp, 4
0x823A5A: push    eax
0x823A5B: lea     ecx, [esp+39Ch+a3]
0x823A5F: mov     byte ptr [esp+39Ch+var_4], 59h ; 'Y'
0x823A67: call    sub_75FAE0
0x823A6C: mov     eax, [esp+398h+var_21C]
0x823A73: cmp     eax, ebx
0x823A75: mov     byte ptr [esp+398h+var_4], 1
0x823A7D: jz      short loc_823A91
0x823A7F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823A83: mov     ecx, eax
0x823A85: add     eax, 5Ch ; '\'
0x823A88: cmp     [eax], ebx
0x823A8A: jnz     short loc_823A91
0x823A8C: call    sub_772560
0x823A91: mov     edi, [esp+398h+a3]
0x823A95: push    ebx
0x823A96: push    3
0x823A98: push    7
0x823A9A: push    edi
0x823A9B: call    sub_801110
0x823AA0: add     esp, 10h
0x823AA3: push    edi; a3
0x823AA4: push    7; a2
0x823AA6: mov     ecx, esi; this
0x823AA8: call    sub_760010
0x823AAD: mov     ecx, ds:0B45370h
0x823AB3: push    ecx; a2
0x823AB4: mov     ecx, esi; this
0x823AB6: call    sub_7AECB0
0x823ABB: mov     edx, ds:0B45158h
0x823AC1: push    edx; a2
0x823AC2: mov     ecx, esi; this
0x823AC4: call    sub_7AEC60
0x823AC9: cmp     [esi+30h], ebx
0x823ACC: jnz     short loc_823AD6
0x823ACE: call    sub_772DF0
0x823AD3: mov     [esi+30h], eax
0x823AD6: mov     ecx, [esi+30h]
0x823AD9: push    ebx
0x823ADA: push    ebx
0x823ADB: push    1Bh
0x823ADD: call    sub_772CD0
0x823AE2: cmp     [esi+30h], ebx
0x823AE5: jnz     short loc_823AEF
0x823AE7: call    sub_772DF0
0x823AEC: mov     [esi+30h], eax
0x823AEF: mov     ecx, [esi+30h]
0x823AF2: push    ebx
0x823AF3: push    ebx
0x823AF4: push    0Fh
0x823AF6: call    sub_772CD0
0x823AFB: cmp     [esi+30h], ebx
0x823AFE: jnz     short loc_823B08
0x823B00: call    sub_772DF0
0x823B05: mov     [esi+30h], eax
0x823B08: mov     ecx, [esi+30h]
0x823B0B: push    ebx
0x823B0C: push    1
0x823B0E: push    7
0x823B10: call    sub_772CD0
0x823B15: cmp     [esi+30h], ebx
0x823B18: jnz     short loc_823B22
0x823B1A: call    sub_772DF0
0x823B1F: mov     [esi+30h], eax
0x823B22: mov     ecx, [esi+30h]
0x823B25: push    ebx
0x823B26: push    4
0x823B28: push    17h
0x823B2A: call    sub_772CD0
0x823B2F: cmp     [esi+30h], ebx
0x823B32: jnz     short loc_823B3C
0x823B34: call    sub_772DF0
0x823B39: mov     [esi+30h], eax
0x823B3C: mov     ecx, [esi+30h]
0x823B3F: push    ebx
0x823B40: push    1
0x823B42: push    0Eh
0x823B44: call    sub_772CD0
0x823B49: cmp     [esi+30h], ebx
0x823B4C: jnz     short loc_823B56
0x823B4E: call    sub_772DF0
0x823B53: mov     [esi+30h], eax
0x823B56: mov     ecx, [esi+30h]
0x823B59: push    ebx
0x823B5A: push    ebx
0x823B5B: push    34h ; '4'
0x823B5D: call    sub_772CD0
0x823B62: push    offset dword_B457C8
0x823B67: lea     ecx, [esp+39Ch+var_380]
0x823B6B: mov     ds:0B43D38h, ebp
0x823B71: mov     dword ptr ds:0B443C8h, 18Ch
0x823B7B: mov     dword ptr ds:0B436A8h, 18060h
0x823B85: mov     dword ptr ds:0B44A58h, 0Ch
0x823B8F: call    sub_76C890
0x823B94: mov     esi, [esp+398h+var_380]
0x823B98: cmp     dword ptr [esi+18h], 8
0x823B9C: jnb     loc_823ECB
0x823BA2: lea     eax, [esp+398h+var_114]
0x823BA9: push    eax
0x823BAA: call    sub_772630
0x823BAF: add     esp, 4
0x823BB2: push    eax
0x823BB3: lea     ecx, [esp+39Ch+a3]
0x823BB7: mov     byte ptr [esp+39Ch+var_4], 5Ah ; 'Z'
0x823BBF: call    sub_75FAE0
0x823BC4: mov     eax, [esp+398h+var_114]
0x823BCB: cmp     eax, ebx
0x823BCD: mov     byte ptr [esp+398h+var_4], 1
0x823BD5: jz      short loc_823BE9
0x823BD7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823BDB: mov     ecx, eax
0x823BDD: add     eax, 5Ch ; '\'
0x823BE0: cmp     [eax], ebx
0x823BE2: jnz     short loc_823BE9
0x823BE4: call    sub_772560
0x823BE9: mov     edi, [esp+398h+a3]
0x823BED: push    2
0x823BEF: push    1
0x823BF1: push    ebx
0x823BF2: push    edi
0x823BF3: call    sub_801110
0x823BF8: add     esp, 10h
0x823BFB: push    edi; a3
0x823BFC: push    ebx; a2
0x823BFD: mov     ecx, esi; this
0x823BFF: call    sub_760010
0x823C04: lea     ecx, [esp+398h+var_214]
0x823C0B: push    ecx
0x823C0C: call    sub_772630
0x823C11: add     esp, 4
0x823C14: push    eax
0x823C15: lea     ecx, [esp+39Ch+a3]
0x823C19: mov     byte ptr [esp+39Ch+var_4], 5Bh ; '['
0x823C21: call    sub_75FAE0
0x823C26: mov     eax, [esp+398h+var_214]
0x823C2D: cmp     eax, ebx
0x823C2F: mov     byte ptr [esp+398h+var_4], 1
0x823C37: jz      short loc_823C4B
0x823C39: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823C3D: mov     ecx, eax
0x823C3F: add     eax, 5Ch ; '\'
0x823C42: cmp     [eax], ebx
0x823C44: jnz     short loc_823C4B
0x823C46: call    sub_772560
0x823C4B: mov     edi, [esp+398h+a3]
0x823C4F: push    2
0x823C51: push    1
0x823C53: push    1
0x823C55: push    edi
0x823C56: call    sub_801110
0x823C5B: add     esp, 10h
0x823C5E: push    edi; a3
0x823C5F: push    1; a2
0x823C61: mov     ecx, esi; this
0x823C63: call    sub_760010
0x823C68: lea     edx, [esp+398h+var_14]
0x823C6F: push    edx
0x823C70: call    sub_772630
0x823C75: add     esp, 4
0x823C78: push    eax
0x823C79: lea     ecx, [esp+39Ch+a3]
0x823C7D: mov     byte ptr [esp+39Ch+var_4], 5Ch ; '\'
0x823C85: call    sub_75FAE0
0x823C8A: mov     eax, [esp+398h+var_14]
0x823C91: cmp     eax, ebx
0x823C93: mov     byte ptr [esp+398h+var_4], 1
0x823C9B: jz      short loc_823CAF
0x823C9D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823CA1: mov     ecx, eax
0x823CA3: add     eax, 5Ch ; '\'
0x823CA6: cmp     [eax], ebx
0x823CA8: jnz     short loc_823CAF
0x823CAA: call    sub_772560
0x823CAF: mov     edi, [esp+398h+a3]
0x823CB3: push    2
0x823CB5: push    1
0x823CB7: push    2
0x823CB9: push    edi
0x823CBA: call    sub_801110
0x823CBF: add     esp, 10h
0x823CC2: push    edi; a3
0x823CC3: push    2; a2
0x823CC5: mov     ecx, esi; this
0x823CC7: call    sub_760010
0x823CCC: lea     eax, [esp+398h+var_20C]
0x823CD3: push    eax
0x823CD4: call    sub_772630
0x823CD9: add     esp, 4
0x823CDC: push    eax
0x823CDD: lea     ecx, [esp+39Ch+a3]
0x823CE1: mov     byte ptr [esp+39Ch+var_4], 5Dh ; ']'
0x823CE9: call    sub_75FAE0
0x823CEE: mov     eax, [esp+398h+var_20C]
0x823CF5: cmp     eax, ebx
0x823CF7: mov     byte ptr [esp+398h+var_4], 1
0x823CFF: jz      short loc_823D13
0x823D01: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823D05: mov     ecx, eax
0x823D07: add     eax, 5Ch ; '\'
0x823D0A: cmp     [eax], ebx
0x823D0C: jnz     short loc_823D13
0x823D0E: call    sub_772560
0x823D13: mov     edi, [esp+398h+a3]
0x823D17: push    2
0x823D19: push    1
0x823D1B: push    3
0x823D1D: push    edi
0x823D1E: call    sub_801110
0x823D23: add     esp, 10h
0x823D26: push    edi; a3
0x823D27: push    3; a2
0x823D29: mov     ecx, esi; this
0x823D2B: call    sub_760010
0x823D30: lea     ecx, [esp+398h+var_10C]
0x823D37: push    ecx
0x823D38: call    sub_772630
0x823D3D: add     esp, 4
0x823D40: push    eax
0x823D41: lea     ecx, [esp+39Ch+a3]
0x823D45: mov     byte ptr [esp+39Ch+var_4], 5Eh ; '^'
0x823D4D: call    sub_75FAE0
0x823D52: mov     eax, [esp+398h+var_10C]
0x823D59: cmp     eax, ebx
0x823D5B: mov     byte ptr [esp+398h+var_4], 1
0x823D63: jz      short loc_823D77
0x823D65: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823D69: mov     ecx, eax
0x823D6B: add     eax, 5Ch ; '\'
0x823D6E: cmp     [eax], ebx
0x823D70: jnz     short loc_823D77
0x823D72: call    sub_772560
0x823D77: mov     edi, [esp+398h+a3]
0x823D7B: push    2
0x823D7D: push    1
0x823D7F: push    4
0x823D81: push    edi
0x823D82: call    sub_801110
0x823D87: add     esp, 10h
0x823D8A: push    edi; a3
0x823D8B: push    4; a2
0x823D8D: mov     ecx, esi; this
0x823D8F: call    sub_760010
0x823D94: lea     edx, [esp+398h+var_204]
0x823D9B: push    edx
0x823D9C: call    sub_772630
0x823DA1: add     esp, 4
0x823DA4: push    eax
0x823DA5: lea     ecx, [esp+39Ch+a3]
0x823DA9: mov     byte ptr [esp+39Ch+var_4], 5Fh ; '_'
0x823DB1: call    sub_75FAE0
0x823DB6: mov     eax, [esp+398h+var_204]
0x823DBD: cmp     eax, ebx
0x823DBF: mov     byte ptr [esp+398h+var_4], 1
0x823DC7: jz      short loc_823DDB
0x823DC9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823DCD: mov     ecx, eax
0x823DCF: add     eax, 5Ch ; '\'
0x823DD2: cmp     [eax], ebx
0x823DD4: jnz     short loc_823DDB
0x823DD6: call    sub_772560
0x823DDB: mov     edi, [esp+398h+a3]
0x823DDF: push    ebx
0x823DE0: push    3
0x823DE2: push    5
0x823DE4: push    edi
0x823DE5: call    sub_801110
0x823DEA: mov     eax, ds:0B43110h
0x823DEF: add     esp, 10h
0x823DF2: push    eax; a2
0x823DF3: mov     ecx, edi; this
0x823DF5: call    sub_76C910
0x823DFA: push    edi; a3
0x823DFB: push    5; a2
0x823DFD: mov     ecx, esi; this
0x823DFF: call    sub_760010
0x823E04: lea     ecx, [esp+398h+var_8C]
0x823E0B: push    ecx
0x823E0C: call    sub_772630
0x823E11: add     esp, 4
0x823E14: push    eax
0x823E15: lea     ecx, [esp+39Ch+a3]
0x823E19: mov     byte ptr [esp+39Ch+var_4], 60h ; '`'
0x823E21: call    sub_75FAE0
0x823E26: mov     eax, [esp+398h+var_8C]
0x823E2D: cmp     eax, ebx
0x823E2F: mov     byte ptr [esp+398h+var_4], 1
0x823E37: jz      short loc_823E4B
0x823E39: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823E3D: mov     ecx, eax
0x823E3F: add     eax, 5Ch ; '\'
0x823E42: cmp     [eax], ebx
0x823E44: jnz     short loc_823E4B
0x823E46: call    sub_772560
0x823E4B: mov     edi, [esp+398h+a3]
0x823E4F: push    2
0x823E51: push    1
0x823E53: push    6
0x823E55: push    edi
0x823E56: call    sub_801110
0x823E5B: add     esp, 10h
0x823E5E: push    edi; a3
0x823E5F: push    6; a2
0x823E61: mov     ecx, esi; this
0x823E63: call    sub_760010
0x823E68: lea     edx, [esp+398h+var_1FC]
0x823E6F: push    edx
0x823E70: call    sub_772630
0x823E75: add     esp, 4
0x823E78: push    eax
0x823E79: lea     ecx, [esp+39Ch+a3]
0x823E7D: mov     byte ptr [esp+39Ch+var_4], 61h ; 'a'
0x823E85: call    sub_75FAE0
0x823E8A: mov     eax, [esp+398h+var_1FC]
0x823E91: cmp     eax, ebx
0x823E93: mov     byte ptr [esp+398h+var_4], 1
0x823E9B: jz      short loc_823EAF
0x823E9D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823EA1: mov     ecx, eax
0x823EA3: add     eax, 5Ch ; '\'
0x823EA6: cmp     [eax], ebx
0x823EA8: jnz     short loc_823EAF
0x823EAA: call    sub_772560
0x823EAF: mov     edi, [esp+398h+a3]
0x823EB3: push    ebx
0x823EB4: push    3
0x823EB6: push    7
0x823EB8: push    edi
0x823EB9: call    sub_801110
0x823EBE: add     esp, 10h
0x823EC1: push    edi; a3
0x823EC2: push    7; a2
0x823EC4: mov     ecx, esi; this
0x823EC6: call    sub_760010
0x823ECB: mov     eax, ds:0B45370h
0x823ED0: push    eax; a2
0x823ED1: mov     ecx, esi; this
0x823ED3: call    sub_7AECB0
0x823ED8: mov     ecx, ds:0B45164h
0x823EDE: push    ecx; a2
0x823EDF: mov     ecx, esi; this
0x823EE1: call    sub_7AEC60
0x823EE6: cmp     [esi+30h], ebx
0x823EE9: jnz     short loc_823EF3
0x823EEB: call    sub_772DF0
0x823EF0: mov     [esi+30h], eax
0x823EF3: mov     ecx, [esi+30h]
0x823EF6: push    ebx
0x823EF7: push    ebx
0x823EF8: push    1Bh
0x823EFA: call    sub_772CD0
0x823EFF: cmp     [esi+30h], ebx
0x823F02: jnz     short loc_823F0C
0x823F04: call    sub_772DF0
0x823F09: mov     [esi+30h], eax
0x823F0C: mov     ecx, [esi+30h]
0x823F0F: push    ebx
0x823F10: push    ebx
0x823F11: push    0Fh
0x823F13: call    sub_772CD0
0x823F18: cmp     [esi+30h], ebx
0x823F1B: jnz     short loc_823F25
0x823F1D: call    sub_772DF0
0x823F22: mov     [esi+30h], eax
0x823F25: mov     ecx, [esi+30h]
0x823F28: push    ebx
0x823F29: push    1
0x823F2B: push    7
0x823F2D: call    sub_772CD0
0x823F32: cmp     [esi+30h], ebx
0x823F35: jnz     short loc_823F3F
0x823F37: call    sub_772DF0
0x823F3C: mov     [esi+30h], eax
0x823F3F: mov     ecx, [esi+30h]
0x823F42: push    ebx
0x823F43: push    4
0x823F45: push    17h
0x823F47: call    sub_772CD0
0x823F4C: cmp     [esi+30h], ebx
0x823F4F: jnz     short loc_823F59
0x823F51: call    sub_772DF0
0x823F56: mov     [esi+30h], eax
0x823F59: mov     ecx, [esi+30h]
0x823F5C: push    ebx
0x823F5D: push    1
0x823F5F: push    0Eh
0x823F61: call    sub_772CD0
0x823F66: cmp     [esi+30h], ebx
0x823F69: jnz     short loc_823F73
0x823F6B: call    sub_772DF0
0x823F70: mov     [esi+30h], eax
0x823F73: mov     ecx, [esi+30h]
0x823F76: push    ebx
0x823F77: push    ebx
0x823F78: push    34h ; '4'
0x823F7A: call    sub_772CD0
0x823F7F: push    offset dword_B457CC
0x823F84: lea     ecx, [esp+39Ch+var_380]
0x823F88: mov     ds:0B43D48h, ebp
0x823F8E: mov     dword ptr ds:0B443D8h, 18Ch
0x823F98: mov     dword ptr ds:0B436B8h, 18060h
0x823FA2: mov     dword ptr ds:0B44A68h, 0Ch
0x823FAC: call    sub_76C890
0x823FB1: mov     esi, [esp+398h+var_380]
0x823FB5: cmp     dword ptr [esi+18h], 8
0x823FB9: jnb     loc_8242E9
0x823FBF: lea     edx, [esp+398h+var_104]
0x823FC6: push    edx
0x823FC7: call    sub_772630
0x823FCC: add     esp, 4
0x823FCF: push    eax
0x823FD0: lea     ecx, [esp+39Ch+a3]
0x823FD4: mov     byte ptr [esp+39Ch+var_4], 62h ; 'b'
0x823FDC: call    sub_75FAE0
0x823FE1: mov     eax, [esp+398h+var_104]
0x823FE8: cmp     eax, ebx
0x823FEA: mov     byte ptr [esp+398h+var_4], 1
0x823FF2: jz      short loc_824006
0x823FF4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x823FF8: mov     ecx, eax
0x823FFA: add     eax, 5Ch ; '\'
0x823FFD: cmp     [eax], ebx
0x823FFF: jnz     short loc_824006
0x824001: call    sub_772560
0x824006: mov     edi, [esp+398h+a3]
0x82400A: push    2
0x82400C: push    1
0x82400E: push    ebx
0x82400F: push    edi
0x824010: call    sub_801110
0x824015: add     esp, 10h
0x824018: push    edi; a3
0x824019: push    ebx; a2
0x82401A: mov     ecx, esi; this
0x82401C: call    sub_760010
0x824021: lea     eax, [esp+398h+var_1F4]
0x824028: push    eax
0x824029: call    sub_772630
0x82402E: add     esp, 4
0x824031: push    eax
0x824032: lea     ecx, [esp+39Ch+a3]
0x824036: mov     byte ptr [esp+39Ch+var_4], 63h ; 'c'
0x82403E: call    sub_75FAE0
0x824043: mov     eax, [esp+398h+var_1F4]
0x82404A: cmp     eax, ebx
0x82404C: mov     byte ptr [esp+398h+var_4], 1
0x824054: jz      short loc_824068
0x824056: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82405A: mov     ecx, eax
0x82405C: add     eax, 5Ch ; '\'
0x82405F: cmp     [eax], ebx
0x824061: jnz     short loc_824068
0x824063: call    sub_772560
0x824068: mov     edi, [esp+398h+a3]
0x82406C: push    2
0x82406E: push    1
0x824070: push    1
0x824072: push    edi
0x824073: call    sub_801110
0x824078: add     esp, 10h
0x82407B: push    edi; a3
0x82407C: push    1; a2
0x82407E: mov     ecx, esi; this
0x824080: call    sub_760010
0x824085: lea     ecx, [esp+398h+var_4C]
0x82408C: push    ecx
0x82408D: call    sub_772630
0x824092: add     esp, 4
0x824095: push    eax
0x824096: lea     ecx, [esp+39Ch+a3]
0x82409A: mov     byte ptr [esp+39Ch+var_4], 64h ; 'd'
0x8240A2: call    sub_75FAE0
0x8240A7: mov     eax, [esp+398h+var_4C]
0x8240AE: cmp     eax, ebx
0x8240B0: mov     byte ptr [esp+398h+var_4], 1
0x8240B8: jz      short loc_8240CC
0x8240BA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8240BE: mov     ecx, eax
0x8240C0: add     eax, 5Ch ; '\'
0x8240C3: cmp     [eax], ebx
0x8240C5: jnz     short loc_8240CC
0x8240C7: call    sub_772560
0x8240CC: mov     edi, [esp+398h+a3]
0x8240D0: push    2
0x8240D2: push    1
0x8240D4: push    2
0x8240D6: push    edi
0x8240D7: call    sub_801110
0x8240DC: add     esp, 10h
0x8240DF: push    edi; a3
0x8240E0: push    2; a2
0x8240E2: mov     ecx, esi; this
0x8240E4: call    sub_760010
0x8240E9: lea     edx, [esp+398h+var_1EC]
0x8240F0: push    edx
0x8240F1: call    sub_772630
0x8240F6: add     esp, 4
0x8240F9: push    eax
0x8240FA: lea     ecx, [esp+39Ch+a3]
0x8240FE: mov     byte ptr [esp+39Ch+var_4], 65h ; 'e'
0x824106: call    sub_75FAE0
0x82410B: mov     eax, [esp+398h+var_1EC]
0x824112: cmp     eax, ebx
0x824114: mov     byte ptr [esp+398h+var_4], 1
0x82411C: jz      short loc_824130
0x82411E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824122: mov     ecx, eax
0x824124: add     eax, 5Ch ; '\'
0x824127: cmp     [eax], ebx
0x824129: jnz     short loc_824130
0x82412B: call    sub_772560
0x824130: mov     edi, [esp+398h+a3]
0x824134: push    2
0x824136: push    1
0x824138: push    3
0x82413A: push    edi
0x82413B: call    sub_801110
0x824140: add     esp, 10h
0x824143: push    edi; a3
0x824144: push    3; a2
0x824146: mov     ecx, esi; this
0x824148: call    sub_760010
0x82414D: lea     eax, [esp+398h+var_FC]
0x824154: push    eax
0x824155: call    sub_772630
0x82415A: add     esp, 4
0x82415D: push    eax
0x82415E: lea     ecx, [esp+39Ch+a3]
0x824162: mov     byte ptr [esp+39Ch+var_4], 66h ; 'f'
0x82416A: call    sub_75FAE0
0x82416F: mov     eax, [esp+398h+var_FC]
0x824176: cmp     eax, ebx
0x824178: mov     byte ptr [esp+398h+var_4], 1
0x824180: jz      short loc_824194
0x824182: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824186: mov     ecx, eax
0x824188: add     eax, 5Ch ; '\'
0x82418B: cmp     [eax], ebx
0x82418D: jnz     short loc_824194
0x82418F: call    sub_772560
0x824194: mov     edi, [esp+398h+a3]
0x824198: push    2
0x82419A: push    1
0x82419C: push    4
0x82419E: push    edi
0x82419F: call    sub_801110
0x8241A4: add     esp, 10h
0x8241A7: push    edi; a3
0x8241A8: push    4; a2
0x8241AA: mov     ecx, esi; this
0x8241AC: call    sub_760010
0x8241B1: lea     ecx, [esp+398h+var_1E4]
0x8241B8: push    ecx
0x8241B9: call    sub_772630
0x8241BE: add     esp, 4
0x8241C1: push    eax
0x8241C2: lea     ecx, [esp+39Ch+a3]
0x8241C6: mov     byte ptr [esp+39Ch+var_4], 67h ; 'g'
0x8241CE: call    sub_75FAE0
0x8241D3: mov     eax, [esp+398h+var_1E4]
0x8241DA: cmp     eax, ebx
0x8241DC: mov     byte ptr [esp+398h+var_4], 1
0x8241E4: jz      short loc_8241F8
0x8241E6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8241EA: mov     ecx, eax
0x8241EC: add     eax, 5Ch ; '\'
0x8241EF: cmp     [eax], ebx
0x8241F1: jnz     short loc_8241F8
0x8241F3: call    sub_772560
0x8241F8: mov     edi, [esp+398h+a3]
0x8241FC: push    ebx
0x8241FD: push    3
0x8241FF: push    5
0x824201: push    edi
0x824202: call    sub_801110
0x824207: mov     edx, ds:0B43110h
0x82420D: add     esp, 10h
0x824210: push    edx; a2
0x824211: mov     ecx, edi; this
0x824213: call    sub_76C910
0x824218: push    edi; a3
0x824219: push    5; a2
0x82421B: mov     ecx, esi; this
0x82421D: call    sub_760010
0x824222: lea     eax, [esp+398h+var_84]
0x824229: push    eax
0x82422A: call    sub_772630
0x82422F: add     esp, 4
0x824232: push    eax
0x824233: lea     ecx, [esp+39Ch+a3]
0x824237: mov     byte ptr [esp+39Ch+var_4], 68h ; 'h'
0x82423F: call    sub_75FAE0
0x824244: mov     eax, [esp+398h+var_84]
0x82424B: cmp     eax, ebx
0x82424D: mov     byte ptr [esp+398h+var_4], 1
0x824255: jz      short loc_824269
0x824257: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82425B: mov     ecx, eax
0x82425D: add     eax, 5Ch ; '\'
0x824260: cmp     [eax], ebx
0x824262: jnz     short loc_824269
0x824264: call    sub_772560
0x824269: mov     edi, [esp+398h+a3]
0x82426D: push    2
0x82426F: push    1
0x824271: push    6
0x824273: push    edi
0x824274: call    sub_801110
0x824279: add     esp, 10h
0x82427C: push    edi; a3
0x82427D: push    6; a2
0x82427F: mov     ecx, esi; this
0x824281: call    sub_760010
0x824286: lea     ecx, [esp+398h+var_1DC]
0x82428D: push    ecx
0x82428E: call    sub_772630
0x824293: add     esp, 4
0x824296: push    eax
0x824297: lea     ecx, [esp+39Ch+a3]
0x82429B: mov     byte ptr [esp+39Ch+var_4], 69h ; 'i'
0x8242A3: call    sub_75FAE0
0x8242A8: mov     eax, [esp+398h+var_1DC]
0x8242AF: cmp     eax, ebx
0x8242B1: mov     byte ptr [esp+398h+var_4], 1
0x8242B9: jz      short loc_8242CD
0x8242BB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8242BF: mov     ecx, eax
0x8242C1: add     eax, 5Ch ; '\'
0x8242C4: cmp     [eax], ebx
0x8242C6: jnz     short loc_8242CD
0x8242C8: call    sub_772560
0x8242CD: mov     edi, [esp+398h+a3]
0x8242D1: push    ebx
0x8242D2: push    3
0x8242D4: push    7
0x8242D6: push    edi
0x8242D7: call    sub_801110
0x8242DC: add     esp, 10h
0x8242DF: push    edi; a3
0x8242E0: push    7; a2
0x8242E2: mov     ecx, esi; this
0x8242E4: call    sub_760010
0x8242E9: mov     edx, ds:0B45378h
0x8242EF: push    edx; a2
0x8242F0: mov     ecx, esi; this
0x8242F2: call    sub_7AECB0
0x8242F7: mov     eax, ds:0B45150h
0x8242FC: push    eax; a2
0x8242FD: mov     ecx, esi; this
0x8242FF: call    sub_7AEC60
0x824304: cmp     [esi+30h], ebx
0x824307: jnz     short loc_824311
0x824309: call    sub_772DF0
0x82430E: mov     [esi+30h], eax
0x824311: mov     ecx, [esi+30h]
0x824314: push    ebx
0x824315: push    ebx
0x824316: push    1Bh
0x824318: call    sub_772CD0
0x82431D: cmp     [esi+30h], ebx
0x824320: jnz     short loc_82432A
0x824322: call    sub_772DF0
0x824327: mov     [esi+30h], eax
0x82432A: mov     ecx, [esi+30h]
0x82432D: push    ebx
0x82432E: push    ebx
0x82432F: push    0Fh
0x824331: call    sub_772CD0
0x824336: cmp     [esi+30h], ebx
0x824339: jnz     short loc_824343
0x82433B: call    sub_772DF0
0x824340: mov     [esi+30h], eax
0x824343: mov     ecx, [esi+30h]
0x824346: push    ebx
0x824347: push    1
0x824349: push    7
0x82434B: call    sub_772CD0
0x824350: cmp     [esi+30h], ebx
0x824353: jnz     short loc_82435D
0x824355: call    sub_772DF0
0x82435A: mov     [esi+30h], eax
0x82435D: mov     ecx, [esi+30h]
0x824360: push    ebx
0x824361: push    4
0x824363: push    17h
0x824365: call    sub_772CD0
0x82436A: cmp     [esi+30h], ebx
0x82436D: jnz     short loc_824377
0x82436F: call    sub_772DF0
0x824374: mov     [esi+30h], eax
0x824377: mov     ecx, [esi+30h]
0x82437A: push    ebx
0x82437B: push    1
0x82437D: push    0Eh
0x82437F: call    sub_772CD0
0x824384: cmp     [esi+30h], ebx
0x824387: jnz     short loc_824391
0x824389: call    sub_772DF0
0x82438E: mov     [esi+30h], eax
0x824391: mov     ecx, [esi+30h]
0x824394: push    ebx
0x824395: push    ebx
0x824396: push    34h ; '4'
0x824398: call    sub_772CD0
0x82439D: mov     ebp, 580F8h
0x8243A2: push    offset dword_B457D0
0x8243A7: lea     ecx, [esp+39Ch+var_380]
0x8243AB: mov     ds:0B43D4Ch, ebp
0x8243B1: mov     dword ptr ds:0B443DCh, 10Ch
0x8243BB: mov     dword ptr ds:0B436BCh, 18060h
0x8243C5: mov     dword ptr ds:0B44A6Ch, 8
0x8243CF: call    sub_76C890
0x8243D4: mov     esi, [esp+398h+var_380]
0x8243D8: cmp     dword ptr [esi+18h], 8
0x8243DC: jnb     loc_8246FA
0x8243E2: lea     ecx, [esp+398h+var_F4]
0x8243E9: push    ecx
0x8243EA: call    sub_772630
0x8243EF: add     esp, 4
0x8243F2: push    eax
0x8243F3: lea     ecx, [esp+39Ch+a3]
0x8243F7: mov     byte ptr [esp+39Ch+var_4], 6Ah ; 'j'
0x8243FF: call    sub_75FAE0
0x824404: mov     eax, [esp+398h+var_F4]
0x82440B: cmp     eax, ebx
0x82440D: mov     byte ptr [esp+398h+var_4], 1
0x824415: jz      short loc_824429
0x824417: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82441B: mov     ecx, eax
0x82441D: add     eax, 5Ch ; '\'
0x824420: cmp     [eax], ebx
0x824422: jnz     short loc_824429
0x824424: call    sub_772560
0x824429: mov     edi, [esp+398h+a3]
0x82442D: push    2
0x82442F: push    1
0x824431: push    ebx
0x824432: push    edi
0x824433: call    sub_801110
0x824438: add     esp, 10h
0x82443B: push    edi; a3
0x82443C: push    ebx; a2
0x82443D: mov     ecx, esi; this
0x82443F: call    sub_760010
0x824444: lea     edx, [esp+398h+var_1D4]
0x82444B: push    edx
0x82444C: call    sub_772630
0x824451: add     esp, 4
0x824454: push    eax
0x824455: lea     ecx, [esp+39Ch+a3]
0x824459: mov     byte ptr [esp+39Ch+var_4], 6Bh ; 'k'
0x824461: call    sub_75FAE0
0x824466: mov     eax, [esp+398h+var_1D4]
0x82446D: cmp     eax, ebx
0x82446F: mov     byte ptr [esp+398h+var_4], 1
0x824477: jz      short loc_82448B
0x824479: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82447D: mov     ecx, eax
0x82447F: add     eax, 5Ch ; '\'
0x824482: cmp     [eax], ebx
0x824484: jnz     short loc_82448B
0x824486: call    sub_772560
0x82448B: mov     edi, [esp+398h+a3]
0x82448F: push    2
0x824491: push    1
0x824493: push    1
0x824495: push    edi
0x824496: call    sub_801110
0x82449B: add     esp, 10h
0x82449E: push    edi; a3
0x82449F: push    1; a2
0x8244A1: mov     ecx, esi; this
0x8244A3: call    sub_760010
0x8244A8: lea     eax, [esp+398h+var_2C]
0x8244AF: push    eax
0x8244B0: call    sub_772630
0x8244B5: add     esp, 4
0x8244B8: push    eax
0x8244B9: lea     ecx, [esp+39Ch+a3]
0x8244BD: mov     byte ptr [esp+39Ch+var_4], 6Ch ; 'l'
0x8244C5: call    sub_75FAE0
0x8244CA: mov     eax, [esp+398h+var_2C]
0x8244D1: cmp     eax, ebx
0x8244D3: mov     byte ptr [esp+398h+var_4], 1
0x8244DB: jz      short loc_8244EF
0x8244DD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8244E1: mov     ecx, eax
0x8244E3: add     eax, 5Ch ; '\'
0x8244E6: cmp     [eax], ebx
0x8244E8: jnz     short loc_8244EF
0x8244EA: call    sub_772560
0x8244EF: mov     edi, [esp+398h+a3]
0x8244F3: push    2
0x8244F5: push    1
0x8244F7: push    2
0x8244F9: push    edi
0x8244FA: call    sub_801110
0x8244FF: add     esp, 10h
0x824502: push    edi; a3
0x824503: push    2; a2
0x824505: mov     ecx, esi; this
0x824507: call    sub_760010
0x82450C: lea     ecx, [esp+398h+var_1CC]
0x824513: push    ecx
0x824514: call    sub_772630
0x824519: add     esp, 4
0x82451C: push    eax
0x82451D: lea     ecx, [esp+39Ch+a3]
0x824521: mov     byte ptr [esp+39Ch+var_4], 6Dh ; 'm'
0x824529: call    sub_75FAE0
0x82452E: mov     eax, [esp+398h+var_1CC]
0x824535: cmp     eax, ebx
0x824537: mov     byte ptr [esp+398h+var_4], 1
0x82453F: jz      short loc_824553
0x824541: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824545: mov     ecx, eax
0x824547: add     eax, 5Ch ; '\'
0x82454A: cmp     [eax], ebx
0x82454C: jnz     short loc_824553
0x82454E: call    sub_772560
0x824553: mov     edi, [esp+398h+a3]
0x824557: push    2
0x824559: push    1
0x82455B: push    3
0x82455D: push    edi
0x82455E: call    sub_801110
0x824563: add     esp, 10h
0x824566: push    edi; a3
0x824567: push    3; a2
0x824569: mov     ecx, esi; this
0x82456B: call    sub_760010
0x824570: lea     edx, [esp+398h+var_37C]
0x824574: push    edx
0x824575: call    sub_772630
0x82457A: add     esp, 4
0x82457D: push    eax
0x82457E: lea     ecx, [esp+39Ch+a3]
0x824582: mov     byte ptr [esp+39Ch+var_4], 6Eh ; 'n'
0x82458A: call    sub_75FAE0
0x82458F: mov     eax, [esp+398h+var_37C]
0x824593: cmp     eax, ebx
0x824595: mov     byte ptr [esp+398h+var_4], 1
0x82459D: jz      short loc_8245B1
0x82459F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8245A3: mov     ecx, eax
0x8245A5: add     eax, 5Ch ; '\'
0x8245A8: cmp     [eax], ebx
0x8245AA: jnz     short loc_8245B1
0x8245AC: call    sub_772560
0x8245B1: mov     edi, [esp+398h+a3]
0x8245B5: push    2
0x8245B7: push    1
0x8245B9: push    4
0x8245BB: push    edi
0x8245BC: call    sub_801110
0x8245C1: add     esp, 10h
0x8245C4: push    edi; a3
0x8245C5: push    4; a2
0x8245C7: mov     ecx, esi; this
0x8245C9: call    sub_760010
0x8245CE: lea     eax, [esp+398h+var_1C4]
0x8245D5: push    eax
0x8245D6: call    sub_772630
0x8245DB: add     esp, 4
0x8245DE: push    eax
0x8245DF: lea     ecx, [esp+39Ch+a3]
0x8245E3: mov     byte ptr [esp+39Ch+var_4], 6Fh ; 'o'
0x8245EB: call    sub_75FAE0
0x8245F0: mov     eax, [esp+398h+var_1C4]
0x8245F7: cmp     eax, ebx
0x8245F9: mov     byte ptr [esp+398h+var_4], 1
0x824601: jz      short loc_824615
0x824603: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824607: mov     ecx, eax
0x824609: add     eax, 5Ch ; '\'
0x82460C: cmp     [eax], ebx
0x82460E: jnz     short loc_824615
0x824610: call    sub_772560
0x824615: mov     edi, [esp+398h+a3]
0x824619: push    ebx
0x82461A: push    3
0x82461C: push    5
0x82461E: push    edi
0x82461F: call    sub_801110
0x824624: mov     ecx, ds:0B43110h
0x82462A: add     esp, 10h
0x82462D: push    ecx; a2
0x82462E: mov     ecx, edi; this
0x824630: call    sub_76C910
0x824635: push    edi; a3
0x824636: push    5; a2
0x824638: mov     ecx, esi; this
0x82463A: call    sub_760010
0x82463F: lea     edx, [esp+398h+var_378]
0x824643: push    edx
0x824644: call    sub_772630
0x824649: add     esp, 4
0x82464C: push    eax
0x82464D: lea     ecx, [esp+39Ch+a3]
0x824651: mov     byte ptr [esp+39Ch+var_4], 70h ; 'p'
0x824659: call    sub_75FAE0
0x82465E: mov     eax, [esp+398h+var_378]
0x824662: cmp     eax, ebx
0x824664: mov     byte ptr [esp+398h+var_4], 1
0x82466C: jz      short loc_824680
0x82466E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824672: mov     ecx, eax
0x824674: add     eax, 5Ch ; '\'
0x824677: cmp     [eax], ebx
0x824679: jnz     short loc_824680
0x82467B: call    sub_772560
0x824680: mov     edi, [esp+398h+a3]
0x824684: push    2
0x824686: push    1
0x824688: push    6
0x82468A: push    edi
0x82468B: call    sub_801110
0x824690: add     esp, 10h
0x824693: push    edi; a3
0x824694: push    6; a2
0x824696: mov     ecx, esi; this
0x824698: call    sub_760010
0x82469D: lea     eax, [esp+398h+var_370]
0x8246A1: push    eax
0x8246A2: call    sub_772630
0x8246A7: add     esp, 4
0x8246AA: push    eax
0x8246AB: lea     ecx, [esp+39Ch+a3]
0x8246AF: mov     byte ptr [esp+39Ch+var_4], 71h ; 'q'
0x8246B7: call    sub_75FAE0
0x8246BC: mov     eax, [esp+398h+var_370]
0x8246C0: cmp     eax, ebx
0x8246C2: mov     byte ptr [esp+398h+var_4], 1
0x8246CA: jz      short loc_8246DE
0x8246CC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8246D0: mov     ecx, eax
0x8246D2: add     eax, 5Ch ; '\'
0x8246D5: cmp     [eax], ebx
0x8246D7: jnz     short loc_8246DE
0x8246D9: call    sub_772560
0x8246DE: mov     edi, [esp+398h+a3]
0x8246E2: push    ebx
0x8246E3: push    3
0x8246E5: push    7
0x8246E7: push    edi
0x8246E8: call    sub_801110
0x8246ED: add     esp, 10h
0x8246F0: push    edi; a3
0x8246F1: push    7; a2
0x8246F3: mov     ecx, esi; this
0x8246F5: call    sub_760010
0x8246FA: mov     ecx, ds:0B45378h
0x824700: push    ecx; a2
0x824701: mov     ecx, esi; this
0x824703: call    sub_7AECB0
0x824708: mov     edx, ds:0B45158h
0x82470E: push    edx; a2
0x82470F: mov     ecx, esi; this
0x824711: call    sub_7AEC60
0x824716: cmp     [esi+30h], ebx
0x824719: jnz     short loc_824723
0x82471B: call    sub_772DF0
0x824720: mov     [esi+30h], eax
0x824723: mov     ecx, [esi+30h]
0x824726: push    ebx
0x824727: push    ebx
0x824728: push    1Bh
0x82472A: call    sub_772CD0
0x82472F: cmp     [esi+30h], ebx
0x824732: jnz     short loc_82473C
0x824734: call    sub_772DF0
0x824739: mov     [esi+30h], eax
0x82473C: mov     ecx, [esi+30h]
0x82473F: push    ebx
0x824740: push    ebx
0x824741: push    0Fh
0x824743: call    sub_772CD0
0x824748: cmp     [esi+30h], ebx
0x82474B: jnz     short loc_824755
0x82474D: call    sub_772DF0
0x824752: mov     [esi+30h], eax
0x824755: mov     ecx, [esi+30h]
0x824758: push    ebx
0x824759: push    1
0x82475B: push    7
0x82475D: call    sub_772CD0
0x824762: cmp     [esi+30h], ebx
0x824765: jnz     short loc_82476F
0x824767: call    sub_772DF0
0x82476C: mov     [esi+30h], eax
0x82476F: mov     ecx, [esi+30h]
0x824772: push    ebx
0x824773: push    4
0x824775: push    17h
0x824777: call    sub_772CD0
0x82477C: cmp     [esi+30h], ebx
0x82477F: jnz     short loc_824789
0x824781: call    sub_772DF0
0x824786: mov     [esi+30h], eax
0x824789: mov     ecx, [esi+30h]
0x82478C: push    ebx
0x82478D: push    1
0x82478F: push    0Eh
0x824791: call    sub_772CD0
0x824796: cmp     [esi+30h], ebx
0x824799: jnz     short loc_8247A3
0x82479B: call    sub_772DF0
0x8247A0: mov     [esi+30h], eax
0x8247A3: mov     ecx, [esi+30h]
0x8247A6: push    ebx
0x8247A7: push    ebx
0x8247A8: push    34h ; '4'
0x8247AA: call    sub_772CD0
0x8247AF: push    offset dword_B457E4
0x8247B4: lea     ecx, [esp+39Ch+var_380]
0x8247B8: mov     ds:0B43D50h, ebp
0x8247BE: mov     dword ptr ds:0B443E0h, 18Ch
0x8247C8: mov     dword ptr ds:0B436C0h, 18060h
0x8247D2: mov     dword ptr ds:0B44A70h, 0Ch
0x8247DC: call    sub_76C890
0x8247E1: mov     esi, [esp+398h+var_380]
0x8247E5: cmp     dword ptr [esi+18h], 8
0x8247E9: jnb     loc_824AE8
0x8247EF: lea     eax, [esp+398h+var_368]
0x8247F3: push    eax
0x8247F4: call    sub_772630
0x8247F9: add     esp, 4
0x8247FC: push    eax
0x8247FD: lea     ecx, [esp+39Ch+a3]
0x824801: mov     byte ptr [esp+39Ch+var_4], 72h ; 'r'
0x824809: call    sub_75FAE0
0x82480E: mov     eax, [esp+398h+var_368]
0x824812: cmp     eax, ebx
0x824814: mov     byte ptr [esp+398h+var_4], 1
0x82481C: jz      short loc_824830
0x82481E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824822: mov     ecx, eax
0x824824: add     eax, 5Ch ; '\'
0x824827: cmp     [eax], ebx
0x824829: jnz     short loc_824830
0x82482B: call    sub_772560
0x824830: mov     edi, [esp+398h+a3]
0x824834: push    2
0x824836: push    1
0x824838: push    ebx
0x824839: push    edi
0x82483A: call    sub_801110
0x82483F: add     esp, 10h
0x824842: push    edi; a3
0x824843: push    ebx; a2
0x824844: mov     ecx, esi; this
0x824846: call    sub_760010
0x82484B: lea     ecx, [esp+398h+var_360]
0x82484F: push    ecx
0x824850: call    sub_772630
0x824855: add     esp, 4
0x824858: push    eax
0x824859: lea     ecx, [esp+39Ch+a3]
0x82485D: mov     byte ptr [esp+39Ch+var_4], 73h ; 's'
0x824865: call    sub_75FAE0
0x82486A: mov     eax, [esp+398h+var_360]
0x82486E: cmp     eax, ebx
0x824870: mov     byte ptr [esp+398h+var_4], 1
0x824878: jz      short loc_82488C
0x82487A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82487E: mov     ecx, eax
0x824880: add     eax, 5Ch ; '\'
0x824883: cmp     [eax], ebx
0x824885: jnz     short loc_82488C
0x824887: call    sub_772560
0x82488C: mov     edi, [esp+398h+a3]
0x824890: push    2
0x824892: push    1
0x824894: push    1
0x824896: push    edi
0x824897: call    sub_801110
0x82489C: add     esp, 10h
0x82489F: push    edi; a3
0x8248A0: push    1; a2
0x8248A2: mov     ecx, esi; this
0x8248A4: call    sub_760010
0x8248A9: lea     edx, [esp+398h+var_358]
0x8248AD: push    edx
0x8248AE: call    sub_772630
0x8248B3: add     esp, 4
0x8248B6: push    eax
0x8248B7: lea     ecx, [esp+39Ch+a3]
0x8248BB: mov     byte ptr [esp+39Ch+var_4], 74h ; 't'
0x8248C3: call    sub_75FAE0
0x8248C8: mov     eax, [esp+398h+var_358]
0x8248CC: cmp     eax, ebx
0x8248CE: mov     byte ptr [esp+398h+var_4], 1
0x8248D6: jz      short loc_8248EA
0x8248D8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8248DC: mov     ecx, eax
0x8248DE: add     eax, 5Ch ; '\'
0x8248E1: cmp     [eax], ebx
0x8248E3: jnz     short loc_8248EA
0x8248E5: call    sub_772560
0x8248EA: mov     edi, [esp+398h+a3]
0x8248EE: push    2
0x8248F0: push    1
0x8248F2: push    2
0x8248F4: push    edi
0x8248F5: call    sub_801110
0x8248FA: add     esp, 10h
0x8248FD: push    edi; a3
0x8248FE: push    2; a2
0x824900: mov     ecx, esi; this
0x824902: call    sub_760010
0x824907: lea     eax, [esp+398h+var_350]
0x82490B: push    eax
0x82490C: call    sub_772630
0x824911: add     esp, 4
0x824914: push    eax
0x824915: lea     ecx, [esp+39Ch+a3]
0x824919: mov     byte ptr [esp+39Ch+var_4], 75h ; 'u'
0x824921: call    sub_75FAE0
0x824926: mov     eax, [esp+398h+var_350]
0x82492A: cmp     eax, ebx
0x82492C: mov     byte ptr [esp+398h+var_4], 1
0x824934: jz      short loc_824948
0x824936: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82493A: mov     ecx, eax
0x82493C: add     eax, 5Ch ; '\'
0x82493F: cmp     [eax], ebx
0x824941: jnz     short loc_824948
0x824943: call    sub_772560
0x824948: mov     edi, [esp+398h+a3]
0x82494C: push    2
0x82494E: push    1
0x824950: push    3
0x824952: push    edi
0x824953: call    sub_801110
0x824958: add     esp, 10h
0x82495B: push    edi; a3
0x82495C: push    3; a2
0x82495E: mov     ecx, esi; this
0x824960: call    sub_760010
0x824965: lea     ecx, [esp+398h+var_348]
0x824969: push    ecx
0x82496A: call    sub_772630
0x82496F: add     esp, 4
0x824972: push    eax
0x824973: lea     ecx, [esp+39Ch+a3]
0x824977: mov     byte ptr [esp+39Ch+var_4], 76h ; 'v'
0x82497F: call    sub_75FAE0
0x824984: mov     eax, [esp+398h+var_348]
0x824988: cmp     eax, ebx
0x82498A: mov     byte ptr [esp+398h+var_4], 1
0x824992: jz      short loc_8249A6
0x824994: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824998: mov     ecx, eax
0x82499A: add     eax, 5Ch ; '\'
0x82499D: cmp     [eax], ebx
0x82499F: jnz     short loc_8249A6
0x8249A1: call    sub_772560
0x8249A6: mov     edi, [esp+398h+a3]
0x8249AA: push    2
0x8249AC: push    1
0x8249AE: push    4
0x8249B0: push    edi
0x8249B1: call    sub_801110
0x8249B6: add     esp, 10h
0x8249B9: push    edi; a3
0x8249BA: push    4; a2
0x8249BC: mov     ecx, esi; this
0x8249BE: call    sub_760010
0x8249C3: lea     edx, [esp+398h+var_340]
0x8249C7: push    edx
0x8249C8: call    sub_772630
0x8249CD: add     esp, 4
0x8249D0: push    eax
0x8249D1: lea     ecx, [esp+39Ch+a3]
0x8249D5: mov     byte ptr [esp+39Ch+var_4], 77h ; 'w'
0x8249DD: call    sub_75FAE0
0x8249E2: mov     eax, [esp+398h+var_340]
0x8249E6: cmp     eax, ebx
0x8249E8: mov     byte ptr [esp+398h+var_4], 1
0x8249F0: jz      short loc_824A04
0x8249F2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8249F6: mov     ecx, eax
0x8249F8: add     eax, 5Ch ; '\'
0x8249FB: cmp     [eax], ebx
0x8249FD: jnz     short loc_824A04
0x8249FF: call    sub_772560
0x824A04: mov     edi, [esp+398h+a3]
0x824A08: push    ebx
0x824A09: push    3
0x824A0B: push    5
0x824A0D: push    edi
0x824A0E: call    sub_801110
0x824A13: mov     eax, ds:0B43110h
0x824A18: add     esp, 10h
0x824A1B: push    eax; a2
0x824A1C: mov     ecx, edi; this
0x824A1E: call    sub_76C910
0x824A23: push    edi; a3
0x824A24: push    5; a2
0x824A26: mov     ecx, esi; this
0x824A28: call    sub_760010
0x824A2D: lea     ecx, [esp+398h+var_338]
0x824A31: push    ecx
0x824A32: call    sub_772630
0x824A37: add     esp, 4
0x824A3A: push    eax
0x824A3B: lea     ecx, [esp+39Ch+a3]
0x824A3F: mov     byte ptr [esp+39Ch+var_4], 78h ; 'x'
0x824A47: call    sub_75FAE0
0x824A4C: mov     eax, [esp+398h+var_338]
0x824A50: cmp     eax, ebx
0x824A52: mov     byte ptr [esp+398h+var_4], 1
0x824A5A: jz      short loc_824A6E
0x824A5C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824A60: mov     ecx, eax
0x824A62: add     eax, 5Ch ; '\'
0x824A65: cmp     [eax], ebx
0x824A67: jnz     short loc_824A6E
0x824A69: call    sub_772560
0x824A6E: mov     edi, [esp+398h+a3]
0x824A72: push    2
0x824A74: push    1
0x824A76: push    6
0x824A78: push    edi
0x824A79: call    sub_801110
0x824A7E: add     esp, 10h
0x824A81: push    edi; a3
0x824A82: push    6; a2
0x824A84: mov     ecx, esi; this
0x824A86: call    sub_760010
0x824A8B: lea     edx, [esp+398h+var_330]
0x824A8F: push    edx
0x824A90: call    sub_772630
0x824A95: add     esp, 4
0x824A98: push    eax
0x824A99: lea     ecx, [esp+39Ch+a3]
0x824A9D: mov     byte ptr [esp+39Ch+var_4], 79h ; 'y'
0x824AA5: call    sub_75FAE0
0x824AAA: mov     eax, [esp+398h+var_330]
0x824AAE: cmp     eax, ebx
0x824AB0: mov     byte ptr [esp+398h+var_4], 1
0x824AB8: jz      short loc_824ACC
0x824ABA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824ABE: mov     ecx, eax
0x824AC0: add     eax, 5Ch ; '\'
0x824AC3: cmp     [eax], ebx
0x824AC5: jnz     short loc_824ACC
0x824AC7: call    sub_772560
0x824ACC: mov     edi, [esp+398h+a3]
0x824AD0: push    ebx
0x824AD1: push    3
0x824AD3: push    7
0x824AD5: push    edi
0x824AD6: call    sub_801110
0x824ADB: add     esp, 10h
0x824ADE: push    edi; a3
0x824ADF: push    7; a2
0x824AE1: mov     ecx, esi; this
0x824AE3: call    sub_760010
0x824AE8: mov     eax, ds:0B45378h
0x824AED: push    eax; a2
0x824AEE: mov     ecx, esi; this
0x824AF0: call    sub_7AECB0
0x824AF5: mov     ecx, ds:0B45164h
0x824AFB: push    ecx; a2
0x824AFC: mov     ecx, esi; this
0x824AFE: call    sub_7AEC60
0x824B03: cmp     [esi+30h], ebx
0x824B06: jnz     short loc_824B10
0x824B08: call    sub_772DF0
0x824B0D: mov     [esi+30h], eax
0x824B10: mov     ecx, [esi+30h]
0x824B13: push    ebx
0x824B14: push    ebx
0x824B15: push    1Bh
0x824B17: call    sub_772CD0
0x824B1C: cmp     [esi+30h], ebx
0x824B1F: jnz     short loc_824B29
0x824B21: call    sub_772DF0
0x824B26: mov     [esi+30h], eax
0x824B29: mov     ecx, [esi+30h]
0x824B2C: push    ebx
0x824B2D: push    ebx
0x824B2E: push    0Fh
0x824B30: call    sub_772CD0
0x824B35: cmp     [esi+30h], ebx
0x824B38: jnz     short loc_824B42
0x824B3A: call    sub_772DF0
0x824B3F: mov     [esi+30h], eax
0x824B42: mov     ecx, [esi+30h]
0x824B45: push    ebx
0x824B46: push    1
0x824B48: push    7
0x824B4A: call    sub_772CD0
0x824B4F: cmp     [esi+30h], ebx
0x824B52: jnz     short loc_824B5C
0x824B54: call    sub_772DF0
0x824B59: mov     [esi+30h], eax
0x824B5C: mov     ecx, [esi+30h]
0x824B5F: push    ebx
0x824B60: push    4
0x824B62: push    17h
0x824B64: call    sub_772CD0
0x824B69: cmp     [esi+30h], ebx
0x824B6C: jnz     short loc_824B76
0x824B6E: call    sub_772DF0
0x824B73: mov     [esi+30h], eax
0x824B76: mov     ecx, [esi+30h]
0x824B79: push    ebx
0x824B7A: push    1
0x824B7C: push    0Eh
0x824B7E: call    sub_772CD0
0x824B83: cmp     [esi+30h], ebx
0x824B86: jnz     short loc_824B90
0x824B88: call    sub_772DF0
0x824B8D: mov     [esi+30h], eax
0x824B90: mov     ecx, [esi+30h]
0x824B93: push    ebx
0x824B94: push    ebx
0x824B95: push    34h ; '4'
0x824B97: call    sub_772CD0
0x824B9C: push    offset dword_B457E8
0x824BA1: lea     ecx, [esp+39Ch+var_380]
0x824BA5: mov     ds:0B43D64h, ebp
0x824BAB: mov     dword ptr ds:0B443F4h, 18Ch
0x824BB5: mov     dword ptr ds:0B436D4h, 18060h
0x824BBF: mov     dword ptr ds:0B44A84h, 0Ch
0x824BC9: call    sub_76C890
0x824BCE: mov     esi, [esp+398h+var_380]
0x824BD2: cmp     dword ptr [esi+18h], 8
0x824BD6: jnb     loc_824EFA
0x824BDC: lea     edx, [esp+398h+var_328]
0x824BE0: push    edx
0x824BE1: call    sub_772630
0x824BE6: add     esp, 4
0x824BE9: push    eax
0x824BEA: lea     ecx, [esp+39Ch+a3]
0x824BEE: mov     byte ptr [esp+39Ch+var_4], 7Ah ; 'z'
0x824BF6: call    sub_75FAE0
0x824BFB: mov     eax, [esp+398h+var_328]
0x824BFF: cmp     eax, ebx
0x824C01: mov     byte ptr [esp+398h+var_4], 1
0x824C09: jz      short loc_824C1D
0x824C0B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824C0F: mov     ecx, eax
0x824C11: add     eax, 5Ch ; '\'
0x824C14: cmp     [eax], ebx
0x824C16: jnz     short loc_824C1D
0x824C18: call    sub_772560
0x824C1D: mov     edi, [esp+398h+a3]
0x824C21: push    2
0x824C23: push    1
0x824C25: push    ebx
0x824C26: push    edi
0x824C27: call    sub_801110
0x824C2C: add     esp, 10h
0x824C2F: push    edi; a3
0x824C30: push    ebx; a2
0x824C31: mov     ecx, esi; this
0x824C33: call    sub_760010
0x824C38: lea     eax, [esp+398h+var_320]
0x824C3C: push    eax
0x824C3D: call    sub_772630
0x824C42: add     esp, 4
0x824C45: push    eax
0x824C46: lea     ecx, [esp+39Ch+a3]
0x824C4A: mov     byte ptr [esp+39Ch+var_4], 7Bh ; '{'
0x824C52: call    sub_75FAE0
0x824C57: mov     eax, [esp+398h+var_320]
0x824C5B: cmp     eax, ebx
0x824C5D: mov     byte ptr [esp+398h+var_4], 1
0x824C65: jz      short loc_824C79
0x824C67: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824C6B: mov     ecx, eax
0x824C6D: add     eax, 5Ch ; '\'
0x824C70: cmp     [eax], ebx
0x824C72: jnz     short loc_824C79
0x824C74: call    sub_772560
0x824C79: mov     edi, [esp+398h+a3]
0x824C7D: push    2
0x824C7F: push    1
0x824C81: push    1
0x824C83: push    edi
0x824C84: call    sub_801110
0x824C89: add     esp, 10h
0x824C8C: push    edi; a3
0x824C8D: push    1; a2
0x824C8F: mov     ecx, esi; this
0x824C91: call    sub_760010
0x824C96: lea     ecx, [esp+398h+var_318]
0x824C9D: push    ecx
0x824C9E: call    sub_772630
0x824CA3: add     esp, 4
0x824CA6: push    eax
0x824CA7: lea     ecx, [esp+39Ch+a3]
0x824CAB: mov     byte ptr [esp+39Ch+var_4], 7Ch ; '|'
0x824CB3: call    sub_75FAE0
0x824CB8: mov     eax, [esp+398h+var_318]
0x824CBF: cmp     eax, ebx
0x824CC1: mov     byte ptr [esp+398h+var_4], 1
0x824CC9: jz      short loc_824CDD
0x824CCB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824CCF: mov     ecx, eax
0x824CD1: add     eax, 5Ch ; '\'
0x824CD4: cmp     [eax], ebx
0x824CD6: jnz     short loc_824CDD
0x824CD8: call    sub_772560
0x824CDD: mov     edi, [esp+398h+a3]
0x824CE1: push    2
0x824CE3: push    1
0x824CE5: push    2
0x824CE7: push    edi
0x824CE8: call    sub_801110
0x824CED: add     esp, 10h
0x824CF0: push    edi; a3
0x824CF1: push    2; a2
0x824CF3: mov     ecx, esi; this
0x824CF5: call    sub_760010
0x824CFA: lea     edx, [esp+398h+var_310]
0x824D01: push    edx
0x824D02: call    sub_772630
0x824D07: add     esp, 4
0x824D0A: push    eax
0x824D0B: lea     ecx, [esp+39Ch+a3]
0x824D0F: mov     byte ptr [esp+39Ch+var_4], 7Dh ; '}'
0x824D17: call    sub_75FAE0
0x824D1C: mov     eax, [esp+398h+var_310]
0x824D23: cmp     eax, ebx
0x824D25: mov     byte ptr [esp+398h+var_4], 1
0x824D2D: jz      short loc_824D41
0x824D2F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824D33: mov     ecx, eax
0x824D35: add     eax, 5Ch ; '\'
0x824D38: cmp     [eax], ebx
0x824D3A: jnz     short loc_824D41
0x824D3C: call    sub_772560
0x824D41: mov     edi, [esp+398h+a3]
0x824D45: push    2
0x824D47: push    1
0x824D49: push    3
0x824D4B: push    edi
0x824D4C: call    sub_801110
0x824D51: add     esp, 10h
0x824D54: push    edi; a3
0x824D55: push    3; a2
0x824D57: mov     ecx, esi; this
0x824D59: call    sub_760010
0x824D5E: lea     eax, [esp+398h+var_308]
0x824D65: push    eax
0x824D66: call    sub_772630
0x824D6B: add     esp, 4
0x824D6E: push    eax
0x824D6F: lea     ecx, [esp+39Ch+a3]
0x824D73: mov     byte ptr [esp+39Ch+var_4], 7Eh ; '~'
0x824D7B: call    sub_75FAE0
0x824D80: mov     eax, [esp+398h+var_308]
0x824D87: cmp     eax, ebx
0x824D89: mov     byte ptr [esp+398h+var_4], 1
0x824D91: jz      short loc_824DA5
0x824D93: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824D97: mov     ecx, eax
0x824D99: add     eax, 5Ch ; '\'
0x824D9C: cmp     [eax], ebx
0x824D9E: jnz     short loc_824DA5
0x824DA0: call    sub_772560
0x824DA5: mov     edi, [esp+398h+a3]
0x824DA9: push    2
0x824DAB: push    1
0x824DAD: push    4
0x824DAF: push    edi
0x824DB0: call    sub_801110
0x824DB5: add     esp, 10h
0x824DB8: push    edi; a3
0x824DB9: push    4; a2
0x824DBB: mov     ecx, esi; this
0x824DBD: call    sub_760010
0x824DC2: lea     ecx, [esp+398h+var_300]
0x824DC9: push    ecx
0x824DCA: call    sub_772630
0x824DCF: add     esp, 4
0x824DD2: push    eax
0x824DD3: lea     ecx, [esp+39Ch+a3]
0x824DD7: mov     byte ptr [esp+39Ch+var_4], 7Fh
0x824DDF: call    sub_75FAE0
0x824DE4: mov     eax, [esp+398h+var_300]
0x824DEB: cmp     eax, ebx
0x824DED: mov     byte ptr [esp+398h+var_4], 1
0x824DF5: jz      short loc_824E09
0x824DF7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824DFB: mov     ecx, eax
0x824DFD: add     eax, 5Ch ; '\'
0x824E00: cmp     [eax], ebx
0x824E02: jnz     short loc_824E09
0x824E04: call    sub_772560
0x824E09: mov     edi, [esp+398h+a3]
0x824E0D: push    ebx
0x824E0E: push    3
0x824E10: push    5
0x824E12: push    edi
0x824E13: call    sub_801110
0x824E18: mov     edx, ds:0B43110h
0x824E1E: add     esp, 10h
0x824E21: push    edx; a2
0x824E22: mov     ecx, edi; this
0x824E24: call    sub_76C910
0x824E29: push    edi; a3
0x824E2A: push    5; a2
0x824E2C: mov     ecx, esi; this
0x824E2E: call    sub_760010
0x824E33: lea     eax, [esp+398h+var_2F8]
0x824E3A: push    eax
0x824E3B: call    sub_772630
0x824E40: add     esp, 4
0x824E43: push    eax
0x824E44: lea     ecx, [esp+39Ch+a3]
0x824E48: mov     byte ptr [esp+39Ch+var_4], 80h ; '€'
0x824E50: call    sub_75FAE0
0x824E55: mov     eax, [esp+398h+var_2F8]
0x824E5C: cmp     eax, ebx
0x824E5E: mov     byte ptr [esp+398h+var_4], 1
0x824E66: jz      short loc_824E7A
0x824E68: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824E6C: mov     ecx, eax
0x824E6E: add     eax, 5Ch ; '\'
0x824E71: cmp     [eax], ebx
0x824E73: jnz     short loc_824E7A
0x824E75: call    sub_772560
0x824E7A: mov     edi, [esp+398h+a3]
0x824E7E: push    2
0x824E80: push    1
0x824E82: push    6
0x824E84: push    edi
0x824E85: call    sub_801110
0x824E8A: add     esp, 10h
0x824E8D: push    edi; a3
0x824E8E: push    6; a2
0x824E90: mov     ecx, esi; this
0x824E92: call    sub_760010
0x824E97: lea     ecx, [esp+398h+var_2F0]
0x824E9E: push    ecx
0x824E9F: call    sub_772630
0x824EA4: add     esp, 4
0x824EA7: push    eax
0x824EA8: lea     ecx, [esp+39Ch+a3]
0x824EAC: mov     byte ptr [esp+39Ch+var_4], 81h
0x824EB4: call    sub_75FAE0
0x824EB9: mov     eax, [esp+398h+var_2F0]
0x824EC0: cmp     eax, ebx
0x824EC2: mov     byte ptr [esp+398h+var_4], 1
0x824ECA: jz      short loc_824EDE
0x824ECC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x824ED0: mov     ecx, eax
0x824ED2: add     eax, 5Ch ; '\'
0x824ED5: cmp     [eax], ebx
0x824ED7: jnz     short loc_824EDE
0x824ED9: call    sub_772560
0x824EDE: mov     edi, [esp+398h+a3]
0x824EE2: push    ebx
0x824EE3: push    3
0x824EE5: push    7
0x824EE7: push    edi
0x824EE8: call    sub_801110
0x824EED: add     esp, 10h
0x824EF0: push    edi; a3
0x824EF1: push    7; a2
0x824EF3: mov     ecx, esi; this
0x824EF5: call    sub_760010
0x824EFA: mov     edx, ds:0B45380h
0x824F00: push    edx; a2
0x824F01: mov     ecx, esi; this
0x824F03: call    sub_7AECB0
0x824F08: mov     eax, ds:0B45168h
0x824F0D: push    eax; a2
0x824F0E: mov     ecx, esi; this
0x824F10: call    sub_7AEC60
0x824F15: cmp     [esi+30h], ebx
0x824F18: jnz     short loc_824F22
0x824F1A: call    sub_772DF0
0x824F1F: mov     [esi+30h], eax
0x824F22: mov     ecx, [esi+30h]
0x824F25: push    ebx
0x824F26: push    ebx
0x824F27: push    1Bh
0x824F29: call    sub_772CD0
0x824F2E: cmp     [esi+30h], ebx
0x824F31: jnz     short loc_824F3B
0x824F33: call    sub_772DF0
0x824F38: mov     [esi+30h], eax
0x824F3B: mov     ecx, [esi+30h]
0x824F3E: push    ebx
0x824F3F: push    ebx
0x824F40: push    0Fh
0x824F42: call    sub_772CD0
0x824F47: cmp     [esi+30h], ebx
0x824F4A: jnz     short loc_824F54
0x824F4C: call    sub_772DF0
0x824F51: mov     [esi+30h], eax
0x824F54: mov     ecx, [esi+30h]
0x824F57: push    ebx
0x824F58: push    1
0x824F5A: push    7
0x824F5C: call    sub_772CD0
0x824F61: cmp     [esi+30h], ebx
0x824F64: jnz     short loc_824F6E
0x824F66: call    sub_772DF0
0x824F6B: mov     [esi+30h], eax
0x824F6E: mov     ecx, [esi+30h]
0x824F71: push    ebx
0x824F72: push    4
0x824F74: push    17h
0x824F76: call    sub_772CD0
0x824F7B: cmp     [esi+30h], ebx
0x824F7E: jnz     short loc_824F88
0x824F80: call    sub_772DF0
0x824F85: mov     [esi+30h], eax
0x824F88: mov     ecx, [esi+30h]
0x824F8B: push    ebx
0x824F8C: push    1
0x824F8E: push    0Eh
0x824F90: call    sub_772CD0
0x824F95: cmp     [esi+30h], ebx
0x824F98: jnz     short loc_824FA2
0x824F9A: call    sub_772DF0
0x824F9F: mov     [esi+30h], eax
0x824FA2: mov     ecx, [esi+30h]
0x824FA5: push    ebx
0x824FA6: push    ebx
0x824FA7: push    34h ; '4'
0x824FA9: call    sub_772CD0
0x824FAE: mov     ebp, 19082h
0x824FB3: push    offset dword_B457EC
0x824FB8: lea     ecx, [esp+39Ch+var_380]
0x824FBC: mov     ds:0B43D68h, ebp
0x824FC2: mov     dword ptr ds:0B443F8h, 11Ch
0x824FCC: mov     dword ptr ds:0B436D8h, 18000h
0x824FD6: mov     dword ptr ds:0B44A88h, 8
0x824FE0: call    sub_76C890
0x824FE5: mov     esi, [esp+398h+var_380]
0x824FE9: cmp     dword ptr [esi+18h], 8
0x824FED: jnb     loc_82531D
0x824FF3: lea     ecx, [esp+398h+var_2E8]
0x824FFA: push    ecx
0x824FFB: call    sub_772630
0x825000: add     esp, 4
0x825003: push    eax
0x825004: lea     ecx, [esp+39Ch+a3]
0x825008: mov     byte ptr [esp+39Ch+var_4], 82h ; '‚'
0x825010: call    sub_75FAE0
0x825015: mov     eax, [esp+398h+var_2E8]
0x82501C: cmp     eax, ebx
0x82501E: mov     byte ptr [esp+398h+var_4], 1
0x825026: jz      short loc_82503A
0x825028: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82502C: mov     ecx, eax
0x82502E: add     eax, 5Ch ; '\'
0x825031: cmp     [eax], ebx
0x825033: jnz     short loc_82503A
0x825035: call    sub_772560
0x82503A: mov     edi, [esp+398h+a3]
0x82503E: push    2
0x825040: push    1
0x825042: push    ebx
0x825043: push    edi
0x825044: call    sub_801110
0x825049: add     esp, 10h
0x82504C: push    edi; a3
0x82504D: push    ebx; a2
0x82504E: mov     ecx, esi; this
0x825050: call    sub_760010
0x825055: lea     edx, [esp+398h+var_2E0]
0x82505C: push    edx
0x82505D: call    sub_772630
0x825062: add     esp, 4
0x825065: push    eax
0x825066: lea     ecx, [esp+39Ch+a3]
0x82506A: mov     byte ptr [esp+39Ch+var_4], 83h ; 'ƒ'
0x825072: call    sub_75FAE0
0x825077: mov     eax, [esp+398h+var_2E0]
0x82507E: cmp     eax, ebx
0x825080: mov     byte ptr [esp+398h+var_4], 1
0x825088: jz      short loc_82509C
0x82508A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82508E: mov     ecx, eax
0x825090: add     eax, 5Ch ; '\'
0x825093: cmp     [eax], ebx
0x825095: jnz     short loc_82509C
0x825097: call    sub_772560
0x82509C: mov     edi, [esp+398h+a3]
0x8250A0: push    2
0x8250A2: push    1
0x8250A4: push    1
0x8250A6: push    edi
0x8250A7: call    sub_801110
0x8250AC: add     esp, 10h
0x8250AF: push    edi; a3
0x8250B0: push    1; a2
0x8250B2: mov     ecx, esi; this
0x8250B4: call    sub_760010
0x8250B9: lea     eax, [esp+398h+var_2D8]
0x8250C0: push    eax
0x8250C1: call    sub_772630
0x8250C6: add     esp, 4
0x8250C9: push    eax
0x8250CA: lea     ecx, [esp+39Ch+a3]
0x8250CE: mov     byte ptr [esp+39Ch+var_4], 84h ; '„'
0x8250D6: call    sub_75FAE0
0x8250DB: mov     eax, [esp+398h+var_2D8]
0x8250E2: cmp     eax, ebx
0x8250E4: mov     byte ptr [esp+398h+var_4], 1
0x8250EC: jz      short loc_825100
0x8250EE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8250F2: mov     ecx, eax
0x8250F4: add     eax, 5Ch ; '\'
0x8250F7: cmp     [eax], ebx
0x8250F9: jnz     short loc_825100
0x8250FB: call    sub_772560
0x825100: mov     edi, [esp+398h+a3]
0x825104: push    2
0x825106: push    1
0x825108: push    2
0x82510A: push    edi
0x82510B: call    sub_801110
0x825110: add     esp, 10h
0x825113: push    edi; a3
0x825114: push    2; a2
0x825116: mov     ecx, esi; this
0x825118: call    sub_760010
0x82511D: lea     ecx, [esp+398h+var_2D0]
0x825124: push    ecx
0x825125: call    sub_772630
0x82512A: add     esp, 4
0x82512D: push    eax
0x82512E: lea     ecx, [esp+39Ch+a3]
0x825132: mov     byte ptr [esp+39Ch+var_4], 85h ; '…'
0x82513A: call    sub_75FAE0
0x82513F: mov     eax, [esp+398h+var_2D0]
0x825146: cmp     eax, ebx
0x825148: mov     byte ptr [esp+398h+var_4], 1
0x825150: jz      short loc_825164
0x825152: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825156: mov     ecx, eax
0x825158: add     eax, 5Ch ; '\'
0x82515B: cmp     [eax], ebx
0x82515D: jnz     short loc_825164
0x82515F: call    sub_772560
0x825164: mov     edi, [esp+398h+a3]
0x825168: push    2
0x82516A: push    1
0x82516C: push    3
0x82516E: push    edi
0x82516F: call    sub_801110
0x825174: add     esp, 10h
0x825177: push    edi; a3
0x825178: push    3; a2
0x82517A: mov     ecx, esi; this
0x82517C: call    sub_760010
0x825181: lea     edx, [esp+398h+var_2C8]
0x825188: push    edx
0x825189: call    sub_772630
0x82518E: add     esp, 4
0x825191: push    eax
0x825192: lea     ecx, [esp+39Ch+a3]
0x825196: mov     byte ptr [esp+39Ch+var_4], 86h ; '†'
0x82519E: call    sub_75FAE0
0x8251A3: mov     eax, [esp+398h+var_2C8]
0x8251AA: cmp     eax, ebx
0x8251AC: mov     byte ptr [esp+398h+var_4], 1
0x8251B4: jz      short loc_8251C8
0x8251B6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8251BA: mov     ecx, eax
0x8251BC: add     eax, 5Ch ; '\'
0x8251BF: cmp     [eax], ebx
0x8251C1: jnz     short loc_8251C8
0x8251C3: call    sub_772560
0x8251C8: mov     edi, [esp+398h+a3]
0x8251CC: push    2
0x8251CE: push    1
0x8251D0: push    4
0x8251D2: push    edi
0x8251D3: call    sub_801110
0x8251D8: add     esp, 10h
0x8251DB: push    edi; a3
0x8251DC: push    4; a2
0x8251DE: mov     ecx, esi; this
0x8251E0: call    sub_760010
0x8251E5: lea     eax, [esp+398h+var_2C0]
0x8251EC: push    eax
0x8251ED: call    sub_772630
0x8251F2: add     esp, 4
0x8251F5: push    eax
0x8251F6: lea     ecx, [esp+39Ch+a3]
0x8251FA: mov     byte ptr [esp+39Ch+var_4], 87h ; '‡'
0x825202: call    sub_75FAE0
0x825207: mov     eax, [esp+398h+var_2C0]
0x82520E: cmp     eax, ebx
0x825210: mov     byte ptr [esp+398h+var_4], 1
0x825218: jz      short loc_82522C
0x82521A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82521E: mov     ecx, eax
0x825220: add     eax, 5Ch ; '\'
0x825223: cmp     [eax], ebx
0x825225: jnz     short loc_82522C
0x825227: call    sub_772560
0x82522C: mov     edi, [esp+398h+a3]
0x825230: push    ebx
0x825231: push    3
0x825233: push    5
0x825235: push    edi
0x825236: call    sub_801110
0x82523B: mov     ecx, ds:0B43110h
0x825241: add     esp, 10h
0x825244: push    ecx; a2
0x825245: mov     ecx, edi; this
0x825247: call    sub_76C910
0x82524C: push    edi; a3
0x82524D: push    5; a2
0x82524F: mov     ecx, esi; this
0x825251: call    sub_760010
0x825256: lea     edx, [esp+398h+var_2B8]
0x82525D: push    edx
0x82525E: call    sub_772630
0x825263: add     esp, 4
0x825266: push    eax
0x825267: lea     ecx, [esp+39Ch+a3]
0x82526B: mov     byte ptr [esp+39Ch+var_4], 88h ; 'ˆ'
0x825273: call    sub_75FAE0
0x825278: mov     eax, [esp+398h+var_2B8]
0x82527F: cmp     eax, ebx
0x825281: mov     byte ptr [esp+398h+var_4], 1
0x825289: jz      short loc_82529D
0x82528B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82528F: mov     ecx, eax
0x825291: add     eax, 5Ch ; '\'
0x825294: cmp     [eax], ebx
0x825296: jnz     short loc_82529D
0x825298: call    sub_772560
0x82529D: mov     edi, [esp+398h+a3]
0x8252A1: push    2
0x8252A3: push    1
0x8252A5: push    6
0x8252A7: push    edi
0x8252A8: call    sub_801110
0x8252AD: add     esp, 10h
0x8252B0: push    edi; a3
0x8252B1: push    6; a2
0x8252B3: mov     ecx, esi; this
0x8252B5: call    sub_760010
0x8252BA: lea     eax, [esp+398h+var_2B0]
0x8252C1: push    eax
0x8252C2: call    sub_772630
0x8252C7: add     esp, 4
0x8252CA: push    eax
0x8252CB: lea     ecx, [esp+39Ch+a3]
0x8252CF: mov     byte ptr [esp+39Ch+var_4], 89h ; '‰'
0x8252D7: call    sub_75FAE0
0x8252DC: mov     eax, [esp+398h+var_2B0]
0x8252E3: cmp     eax, ebx
0x8252E5: mov     byte ptr [esp+398h+var_4], 1
0x8252ED: jz      short loc_825301
0x8252EF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8252F3: mov     ecx, eax
0x8252F5: add     eax, 5Ch ; '\'
0x8252F8: cmp     [eax], ebx
0x8252FA: jnz     short loc_825301
0x8252FC: call    sub_772560
0x825301: mov     edi, [esp+398h+a3]
0x825305: push    ebx
0x825306: push    3
0x825308: push    7
0x82530A: push    edi
0x82530B: call    sub_801110
0x825310: add     esp, 10h
0x825313: push    edi; a3
0x825314: push    7; a2
0x825316: mov     ecx, esi; this
0x825318: call    sub_760010
0x82531D: mov     ecx, ds:0B45380h
0x825323: push    ecx; a2
0x825324: mov     ecx, esi; this
0x825326: call    sub_7AECB0
0x82532B: mov     edx, ds:0B4516Ch
0x825331: push    edx; a2
0x825332: mov     ecx, esi; this
0x825334: call    sub_7AEC60
0x825339: cmp     [esi+30h], ebx
0x82533C: jnz     short loc_825346
0x82533E: call    sub_772DF0
0x825343: mov     [esi+30h], eax
0x825346: mov     ecx, [esi+30h]
0x825349: push    ebx
0x82534A: push    ebx
0x82534B: push    1Bh
0x82534D: call    sub_772CD0
0x825352: cmp     [esi+30h], ebx
0x825355: jnz     short loc_82535F
0x825357: call    sub_772DF0
0x82535C: mov     [esi+30h], eax
0x82535F: mov     ecx, [esi+30h]
0x825362: push    ebx
0x825363: push    ebx
0x825364: push    0Fh
0x825366: call    sub_772CD0
0x82536B: cmp     [esi+30h], ebx
0x82536E: jnz     short loc_825378
0x825370: call    sub_772DF0
0x825375: mov     [esi+30h], eax
0x825378: mov     ecx, [esi+30h]
0x82537B: push    ebx
0x82537C: push    1
0x82537E: push    7
0x825380: call    sub_772CD0
0x825385: cmp     [esi+30h], ebx
0x825388: jnz     short loc_825392
0x82538A: call    sub_772DF0
0x82538F: mov     [esi+30h], eax
0x825392: mov     ecx, [esi+30h]
0x825395: push    ebx
0x825396: push    4
0x825398: push    17h
0x82539A: call    sub_772CD0
0x82539F: cmp     [esi+30h], ebx
0x8253A2: jnz     short loc_8253AC
0x8253A4: call    sub_772DF0
0x8253A9: mov     [esi+30h], eax
0x8253AC: mov     ecx, [esi+30h]
0x8253AF: push    ebx
0x8253B0: push    1
0x8253B2: push    0Eh
0x8253B4: call    sub_772CD0
0x8253B9: cmp     [esi+30h], ebx
0x8253BC: jnz     short loc_8253C6
0x8253BE: call    sub_772DF0
0x8253C3: mov     [esi+30h], eax
0x8253C6: mov     ecx, [esi+30h]
0x8253C9: push    ebx
0x8253CA: push    ebx
0x8253CB: push    34h ; '4'
0x8253CD: call    sub_772CD0
0x8253D2: push    offset dword_B457FC
0x8253D7: lea     ecx, [esp+39Ch+var_380]
0x8253DB: mov     ds:0B43D6Ch, ebp
0x8253E1: mov     dword ptr ds:0B443FCh, 19Ch
0x8253EB: mov     dword ptr ds:0B436DCh, 18000h
0x8253F5: mov     dword ptr ds:0B44A8Ch, 0Ch
0x8253FF: call    sub_76C890
0x825404: mov     esi, [esp+398h+var_380]
0x825408: cmp     dword ptr [esi+18h], 8
0x82540C: jnb     loc_82573B
0x825412: lea     eax, [esp+398h+var_2A8]
0x825419: push    eax
0x82541A: call    sub_772630
0x82541F: add     esp, 4
0x825422: push    eax
0x825423: lea     ecx, [esp+39Ch+a3]
0x825427: mov     byte ptr [esp+39Ch+var_4], 8Ah ; 'Š'
0x82542F: call    sub_75FAE0
0x825434: mov     eax, [esp+398h+var_2A8]
0x82543B: cmp     eax, ebx
0x82543D: mov     byte ptr [esp+398h+var_4], 1
0x825445: jz      short loc_825459
0x825447: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82544B: mov     ecx, eax
0x82544D: add     eax, 5Ch ; '\'
0x825450: cmp     [eax], ebx
0x825452: jnz     short loc_825459
0x825454: call    sub_772560
0x825459: mov     edi, [esp+398h+a3]
0x82545D: push    2
0x82545F: push    1
0x825461: push    ebx
0x825462: push    edi
0x825463: call    sub_801110
0x825468: add     esp, 10h
0x82546B: push    edi; a3
0x82546C: push    ebx; a2
0x82546D: mov     ecx, esi; this
0x82546F: call    sub_760010
0x825474: lea     ecx, [esp+398h+var_2A0]
0x82547B: push    ecx
0x82547C: call    sub_772630
0x825481: add     esp, 4
0x825484: push    eax
0x825485: lea     ecx, [esp+39Ch+a3]
0x825489: mov     byte ptr [esp+39Ch+var_4], 8Bh ; '‹'
0x825491: call    sub_75FAE0
0x825496: mov     eax, [esp+398h+var_2A0]
0x82549D: cmp     eax, ebx
0x82549F: mov     byte ptr [esp+398h+var_4], 1
0x8254A7: jz      short loc_8254BB
0x8254A9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8254AD: mov     ecx, eax
0x8254AF: add     eax, 5Ch ; '\'
0x8254B2: cmp     [eax], ebx
0x8254B4: jnz     short loc_8254BB
0x8254B6: call    sub_772560
0x8254BB: mov     edi, [esp+398h+a3]
0x8254BF: push    2
0x8254C1: push    1
0x8254C3: push    1
0x8254C5: push    edi
0x8254C6: call    sub_801110
0x8254CB: add     esp, 10h
0x8254CE: push    edi; a3
0x8254CF: push    1; a2
0x8254D1: mov     ecx, esi; this
0x8254D3: call    sub_760010
0x8254D8: lea     edx, [esp+398h+var_298]
0x8254DF: push    edx
0x8254E0: call    sub_772630
0x8254E5: add     esp, 4
0x8254E8: push    eax
0x8254E9: lea     ecx, [esp+39Ch+a3]
0x8254ED: mov     byte ptr [esp+39Ch+var_4], 8Ch ; 'Œ'
0x8254F5: call    sub_75FAE0
0x8254FA: mov     eax, [esp+398h+var_298]
0x825501: cmp     eax, ebx
0x825503: mov     byte ptr [esp+398h+var_4], 1
0x82550B: jz      short loc_82551F
0x82550D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825511: mov     ecx, eax
0x825513: add     eax, 5Ch ; '\'
0x825516: cmp     [eax], ebx
0x825518: jnz     short loc_82551F
0x82551A: call    sub_772560
0x82551F: mov     edi, [esp+398h+a3]
0x825523: push    2
0x825525: push    1
0x825527: push    2
0x825529: push    edi
0x82552A: call    sub_801110
0x82552F: add     esp, 10h
0x825532: push    edi; a3
0x825533: push    2; a2
0x825535: mov     ecx, esi; this
0x825537: call    sub_760010
0x82553C: lea     eax, [esp+398h+var_290]
0x825543: push    eax
0x825544: call    sub_772630
0x825549: add     esp, 4
0x82554C: push    eax
0x82554D: lea     ecx, [esp+39Ch+a3]
0x825551: mov     byte ptr [esp+39Ch+var_4], 8Dh
0x825559: call    sub_75FAE0
0x82555E: mov     eax, [esp+398h+var_290]
0x825565: cmp     eax, ebx
0x825567: mov     byte ptr [esp+398h+var_4], 1
0x82556F: jz      short loc_825583
0x825571: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825575: mov     ecx, eax
0x825577: add     eax, 5Ch ; '\'
0x82557A: cmp     [eax], ebx
0x82557C: jnz     short loc_825583
0x82557E: call    sub_772560
0x825583: mov     edi, [esp+398h+a3]
0x825587: push    2
0x825589: push    1
0x82558B: push    3
0x82558D: push    edi
0x82558E: call    sub_801110
0x825593: add     esp, 10h
0x825596: push    edi; a3
0x825597: push    3; a2
0x825599: mov     ecx, esi; this
0x82559B: call    sub_760010
0x8255A0: lea     ecx, [esp+398h+var_288]
0x8255A7: push    ecx
0x8255A8: call    sub_772630
0x8255AD: add     esp, 4
0x8255B0: push    eax
0x8255B1: lea     ecx, [esp+39Ch+a3]
0x8255B5: mov     byte ptr [esp+39Ch+var_4], 8Eh ; 'Ž'
0x8255BD: call    sub_75FAE0
0x8255C2: mov     eax, [esp+398h+var_288]
0x8255C9: cmp     eax, ebx
0x8255CB: mov     byte ptr [esp+398h+var_4], 1
0x8255D3: jz      short loc_8255E7
0x8255D5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8255D9: mov     ecx, eax
0x8255DB: add     eax, 5Ch ; '\'
0x8255DE: cmp     [eax], ebx
0x8255E0: jnz     short loc_8255E7
0x8255E2: call    sub_772560
0x8255E7: mov     edi, [esp+398h+a3]
0x8255EB: push    2
0x8255ED: push    1
0x8255EF: push    4
0x8255F1: push    edi
0x8255F2: call    sub_801110
0x8255F7: add     esp, 10h
0x8255FA: push    edi; a3
0x8255FB: push    4; a2
0x8255FD: mov     ecx, esi; this
0x8255FF: call    sub_760010
0x825604: lea     edx, [esp+398h+var_280]
0x82560B: push    edx
0x82560C: call    sub_772630
0x825611: add     esp, 4
0x825614: push    eax
0x825615: lea     ecx, [esp+39Ch+a3]
0x825619: mov     byte ptr [esp+39Ch+var_4], 8Fh
0x825621: call    sub_75FAE0
0x825626: mov     eax, [esp+398h+var_280]
0x82562D: cmp     eax, ebx
0x82562F: mov     byte ptr [esp+398h+var_4], 1
0x825637: jz      short loc_82564B
0x825639: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82563D: mov     ecx, eax
0x82563F: add     eax, 5Ch ; '\'
0x825642: cmp     [eax], ebx
0x825644: jnz     short loc_82564B
0x825646: call    sub_772560
0x82564B: mov     edi, [esp+398h+a3]
0x82564F: push    ebx
0x825650: push    3
0x825652: push    5
0x825654: push    edi
0x825655: call    sub_801110
0x82565A: mov     eax, ds:0B43110h
0x82565F: add     esp, 10h
0x825662: push    eax; a2
0x825663: mov     ecx, edi; this
0x825665: call    sub_76C910
0x82566A: push    edi; a3
0x82566B: push    5; a2
0x82566D: mov     ecx, esi; this
0x82566F: call    sub_760010
0x825674: lea     ecx, [esp+398h+var_278]
0x82567B: push    ecx
0x82567C: call    sub_772630
0x825681: add     esp, 4
0x825684: push    eax
0x825685: lea     ecx, [esp+39Ch+a3]
0x825689: mov     byte ptr [esp+39Ch+var_4], 90h
0x825691: call    sub_75FAE0
0x825696: mov     eax, [esp+398h+var_278]
0x82569D: cmp     eax, ebx
0x82569F: mov     byte ptr [esp+398h+var_4], 1
0x8256A7: jz      short loc_8256BB
0x8256A9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8256AD: mov     ecx, eax
0x8256AF: add     eax, 5Ch ; '\'
0x8256B2: cmp     [eax], ebx
0x8256B4: jnz     short loc_8256BB
0x8256B6: call    sub_772560
0x8256BB: mov     edi, [esp+398h+a3]
0x8256BF: push    2
0x8256C1: push    1
0x8256C3: push    6
0x8256C5: push    edi
0x8256C6: call    sub_801110
0x8256CB: add     esp, 10h
0x8256CE: push    edi; a3
0x8256CF: push    6; a2
0x8256D1: mov     ecx, esi; this
0x8256D3: call    sub_760010
0x8256D8: lea     edx, [esp+398h+var_270]
0x8256DF: push    edx
0x8256E0: call    sub_772630
0x8256E5: add     esp, 4
0x8256E8: push    eax
0x8256E9: lea     ecx, [esp+39Ch+a3]
0x8256ED: mov     byte ptr [esp+39Ch+var_4], 91h ; '‘'
0x8256F5: call    sub_75FAE0
0x8256FA: mov     eax, [esp+398h+var_270]
0x825701: cmp     eax, ebx
0x825703: mov     byte ptr [esp+398h+var_4], 1
0x82570B: jz      short loc_82571F
0x82570D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825711: mov     ecx, eax
0x825713: add     eax, 5Ch ; '\'
0x825716: cmp     [eax], ebx
0x825718: jnz     short loc_82571F
0x82571A: call    sub_772560
0x82571F: mov     edi, [esp+398h+a3]
0x825723: push    ebx
0x825724: push    3
0x825726: push    7
0x825728: push    edi
0x825729: call    sub_801110
0x82572E: add     esp, 10h
0x825731: push    edi; a3
0x825732: push    7; a2
0x825734: mov     ecx, esi; this
0x825736: call    sub_760010
0x82573B: mov     eax, ds:0B45380h
0x825740: push    eax; a2
0x825741: mov     ecx, esi; this
0x825743: call    sub_7AECB0
0x825748: mov     ecx, ds:0B45170h
0x82574E: push    ecx; a2
0x82574F: mov     ecx, esi; this
0x825751: call    sub_7AEC60
0x825756: cmp     [esi+30h], ebx
0x825759: jnz     short loc_825763
0x82575B: call    sub_772DF0
0x825760: mov     [esi+30h], eax
0x825763: mov     ecx, [esi+30h]
0x825766: push    ebx
0x825767: push    ebx
0x825768: push    1Bh
0x82576A: call    sub_772CD0
0x82576F: cmp     [esi+30h], ebx
0x825772: jnz     short loc_82577C
0x825774: call    sub_772DF0
0x825779: mov     [esi+30h], eax
0x82577C: mov     ecx, [esi+30h]
0x82577F: push    ebx
0x825780: push    ebx
0x825781: push    0Fh
0x825783: call    sub_772CD0
0x825788: cmp     [esi+30h], ebx
0x82578B: jnz     short loc_825795
0x82578D: call    sub_772DF0
0x825792: mov     [esi+30h], eax
0x825795: mov     ecx, [esi+30h]
0x825798: push    ebx
0x825799: push    1
0x82579B: push    7
0x82579D: call    sub_772CD0
0x8257A2: cmp     [esi+30h], ebx
0x8257A5: jnz     short loc_8257AF
0x8257A7: call    sub_772DF0
0x8257AC: mov     [esi+30h], eax
0x8257AF: mov     ecx, [esi+30h]
0x8257B2: push    ebx
0x8257B3: push    4
0x8257B5: push    17h
0x8257B7: call    sub_772CD0
0x8257BC: cmp     [esi+30h], ebx
0x8257BF: jnz     short loc_8257C9
0x8257C1: call    sub_772DF0
0x8257C6: mov     [esi+30h], eax
0x8257C9: mov     ecx, [esi+30h]
0x8257CC: push    ebx
0x8257CD: push    1
0x8257CF: push    0Eh
0x8257D1: call    sub_772CD0
0x8257D6: cmp     [esi+30h], ebx
0x8257D9: jnz     short loc_8257E3
0x8257DB: call    sub_772DF0
0x8257E0: mov     [esi+30h], eax
0x8257E3: mov     ecx, [esi+30h]
0x8257E6: push    ebx
0x8257E7: push    ebx
0x8257E8: push    34h ; '4'
0x8257EA: call    sub_772CD0
0x8257EF: push    offset dword_B45800
0x8257F4: lea     ecx, [esp+39Ch+var_380]
0x8257F8: mov     ds:0B43D7Ch, ebp
0x8257FE: mov     dword ptr ds:0B4440Ch, 19Ch
0x825808: mov     dword ptr ds:0B436ECh, 18000h
0x825812: mov     dword ptr ds:0B44A9Ch, 0Ch
0x82581C: call    sub_76C890
0x825821: mov     esi, [esp+398h+var_380]
0x825825: cmp     dword ptr [esi+18h], 8
0x825829: jnb     loc_825B59
0x82582F: lea     edx, [esp+398h+var_268]
0x825836: push    edx
0x825837: call    sub_772630
0x82583C: add     esp, 4
0x82583F: push    eax
0x825840: lea     ecx, [esp+39Ch+a3]
0x825844: mov     byte ptr [esp+39Ch+var_4], 92h ; '’'
0x82584C: call    sub_75FAE0
0x825851: mov     eax, [esp+398h+var_268]
0x825858: cmp     eax, ebx
0x82585A: mov     byte ptr [esp+398h+var_4], 1
0x825862: jz      short loc_825876
0x825864: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825868: mov     ecx, eax
0x82586A: add     eax, 5Ch ; '\'
0x82586D: cmp     [eax], ebx
0x82586F: jnz     short loc_825876
0x825871: call    sub_772560
0x825876: mov     edi, [esp+398h+a3]
0x82587A: push    2
0x82587C: push    1
0x82587E: push    ebx
0x82587F: push    edi
0x825880: call    sub_801110
0x825885: add     esp, 10h
0x825888: push    edi; a3
0x825889: push    ebx; a2
0x82588A: mov     ecx, esi; this
0x82588C: call    sub_760010
0x825891: lea     eax, [esp+398h+var_260]
0x825898: push    eax
0x825899: call    sub_772630
0x82589E: add     esp, 4
0x8258A1: push    eax
0x8258A2: lea     ecx, [esp+39Ch+a3]
0x8258A6: mov     byte ptr [esp+39Ch+var_4], 93h ; '“'
0x8258AE: call    sub_75FAE0
0x8258B3: mov     eax, [esp+398h+var_260]
0x8258BA: cmp     eax, ebx
0x8258BC: mov     byte ptr [esp+398h+var_4], 1
0x8258C4: jz      short loc_8258D8
0x8258C6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8258CA: mov     ecx, eax
0x8258CC: add     eax, 5Ch ; '\'
0x8258CF: cmp     [eax], ebx
0x8258D1: jnz     short loc_8258D8
0x8258D3: call    sub_772560
0x8258D8: mov     edi, [esp+398h+a3]
0x8258DC: push    2
0x8258DE: push    1
0x8258E0: push    1
0x8258E2: push    edi
0x8258E3: call    sub_801110
0x8258E8: add     esp, 10h
0x8258EB: push    edi; a3
0x8258EC: push    1; a2
0x8258EE: mov     ecx, esi; this
0x8258F0: call    sub_760010
0x8258F5: lea     ecx, [esp+398h+var_258]
0x8258FC: push    ecx
0x8258FD: call    sub_772630
0x825902: add     esp, 4
0x825905: push    eax
0x825906: lea     ecx, [esp+39Ch+a3]
0x82590A: mov     byte ptr [esp+39Ch+var_4], 94h ; '”'
0x825912: call    sub_75FAE0
0x825917: mov     eax, [esp+398h+var_258]
0x82591E: cmp     eax, ebx
0x825920: mov     byte ptr [esp+398h+var_4], 1
0x825928: jz      short loc_82593C
0x82592A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82592E: mov     ecx, eax
0x825930: add     eax, 5Ch ; '\'
0x825933: cmp     [eax], ebx
0x825935: jnz     short loc_82593C
0x825937: call    sub_772560
0x82593C: mov     edi, [esp+398h+a3]
0x825940: push    2
0x825942: push    1
0x825944: push    2
0x825946: push    edi
0x825947: call    sub_801110
0x82594C: add     esp, 10h
0x82594F: push    edi; a3
0x825950: push    2; a2
0x825952: mov     ecx, esi; this
0x825954: call    sub_760010
0x825959: lea     edx, [esp+398h+var_250]
0x825960: push    edx
0x825961: call    sub_772630
0x825966: add     esp, 4
0x825969: push    eax
0x82596A: lea     ecx, [esp+39Ch+a3]
0x82596E: mov     byte ptr [esp+39Ch+var_4], 95h ; '•'
0x825976: call    sub_75FAE0
0x82597B: mov     eax, [esp+398h+var_250]
0x825982: cmp     eax, ebx
0x825984: mov     byte ptr [esp+398h+var_4], 1
0x82598C: jz      short loc_8259A0
0x82598E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825992: mov     ecx, eax
0x825994: add     eax, 5Ch ; '\'
0x825997: cmp     [eax], ebx
0x825999: jnz     short loc_8259A0
0x82599B: call    sub_772560
0x8259A0: mov     edi, [esp+398h+a3]
0x8259A4: push    2
0x8259A6: push    1
0x8259A8: push    3
0x8259AA: push    edi
0x8259AB: call    sub_801110
0x8259B0: add     esp, 10h
0x8259B3: push    edi; a3
0x8259B4: push    3; a2
0x8259B6: mov     ecx, esi; this
0x8259B8: call    sub_760010
0x8259BD: lea     eax, [esp+398h+var_248]
0x8259C4: push    eax
0x8259C5: call    sub_772630
0x8259CA: add     esp, 4
0x8259CD: push    eax
0x8259CE: lea     ecx, [esp+39Ch+a3]
0x8259D2: mov     byte ptr [esp+39Ch+var_4], 96h ; '–'
0x8259DA: call    sub_75FAE0
0x8259DF: mov     eax, [esp+398h+var_248]
0x8259E6: cmp     eax, ebx
0x8259E8: mov     byte ptr [esp+398h+var_4], 1
0x8259F0: jz      short loc_825A04
0x8259F2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8259F6: mov     ecx, eax
0x8259F8: add     eax, 5Ch ; '\'
0x8259FB: cmp     [eax], ebx
0x8259FD: jnz     short loc_825A04
0x8259FF: call    sub_772560
0x825A04: mov     edi, [esp+398h+a3]
0x825A08: push    2
0x825A0A: push    1
0x825A0C: push    4
0x825A0E: push    edi
0x825A0F: call    sub_801110
0x825A14: add     esp, 10h
0x825A17: push    edi; a3
0x825A18: push    4; a2
0x825A1A: mov     ecx, esi; this
0x825A1C: call    sub_760010
0x825A21: lea     ecx, [esp+398h+var_240]
0x825A28: push    ecx
0x825A29: call    sub_772630
0x825A2E: add     esp, 4
0x825A31: push    eax
0x825A32: lea     ecx, [esp+39Ch+a3]
0x825A36: mov     byte ptr [esp+39Ch+var_4], 97h ; '—'
0x825A3E: call    sub_75FAE0
0x825A43: mov     eax, [esp+398h+var_240]
0x825A4A: cmp     eax, ebx
0x825A4C: mov     byte ptr [esp+398h+var_4], 1
0x825A54: jz      short loc_825A68
0x825A56: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825A5A: mov     ecx, eax
0x825A5C: add     eax, 5Ch ; '\'
0x825A5F: cmp     [eax], ebx
0x825A61: jnz     short loc_825A68
0x825A63: call    sub_772560
0x825A68: mov     edi, [esp+398h+a3]
0x825A6C: push    ebx
0x825A6D: push    3
0x825A6F: push    5
0x825A71: push    edi
0x825A72: call    sub_801110
0x825A77: mov     edx, ds:0B43110h
0x825A7D: add     esp, 10h
0x825A80: push    edx; a2
0x825A81: mov     ecx, edi; this
0x825A83: call    sub_76C910
0x825A88: push    edi; a3
0x825A89: push    5; a2
0x825A8B: mov     ecx, esi; this
0x825A8D: call    sub_760010
0x825A92: lea     eax, [esp+398h+var_238]
0x825A99: push    eax
0x825A9A: call    sub_772630
0x825A9F: add     esp, 4
0x825AA2: push    eax
0x825AA3: lea     ecx, [esp+39Ch+a3]
0x825AA7: mov     byte ptr [esp+39Ch+var_4], 98h ; '˜'
0x825AAF: call    sub_75FAE0
0x825AB4: mov     eax, [esp+398h+var_238]
0x825ABB: cmp     eax, ebx
0x825ABD: mov     byte ptr [esp+398h+var_4], 1
0x825AC5: jz      short loc_825AD9
0x825AC7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825ACB: mov     ecx, eax
0x825ACD: add     eax, 5Ch ; '\'
0x825AD0: cmp     [eax], ebx
0x825AD2: jnz     short loc_825AD9
0x825AD4: call    sub_772560
0x825AD9: mov     edi, [esp+398h+a3]
0x825ADD: push    2
0x825ADF: push    1
0x825AE1: push    6
0x825AE3: push    edi
0x825AE4: call    sub_801110
0x825AE9: add     esp, 10h
0x825AEC: push    edi; a3
0x825AED: push    6; a2
0x825AEF: mov     ecx, esi; this
0x825AF1: call    sub_760010
0x825AF6: lea     ecx, [esp+398h+var_230]
0x825AFD: push    ecx
0x825AFE: call    sub_772630
0x825B03: add     esp, 4
0x825B06: push    eax
0x825B07: lea     ecx, [esp+39Ch+a3]
0x825B0B: mov     byte ptr [esp+39Ch+var_4], 99h ; '™'
0x825B13: call    sub_75FAE0
0x825B18: mov     eax, [esp+398h+var_230]
0x825B1F: cmp     eax, ebx
0x825B21: mov     byte ptr [esp+398h+var_4], 1
0x825B29: jz      short loc_825B3D
0x825B2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825B2F: mov     ecx, eax
0x825B31: add     eax, 5Ch ; '\'
0x825B34: cmp     [eax], ebx
0x825B36: jnz     short loc_825B3D
0x825B38: call    sub_772560
0x825B3D: mov     edi, [esp+398h+a3]
0x825B41: push    ebx
0x825B42: push    3
0x825B44: push    7
0x825B46: push    edi
0x825B47: call    sub_801110
0x825B4C: add     esp, 10h
0x825B4F: push    edi; a3
0x825B50: push    7; a2
0x825B52: mov     ecx, esi; this
0x825B54: call    sub_760010
0x825B59: mov     edx, ds:0B45384h
0x825B5F: push    edx; a2
0x825B60: mov     ecx, esi; this
0x825B62: call    sub_7AECB0
0x825B67: mov     eax, ds:0B45168h
0x825B6C: push    eax; a2
0x825B6D: mov     ecx, esi; this
0x825B6F: call    sub_7AEC60
0x825B74: cmp     [esi+30h], ebx
0x825B77: jnz     short loc_825B81
0x825B79: call    sub_772DF0
0x825B7E: mov     [esi+30h], eax
0x825B81: mov     ecx, [esi+30h]
0x825B84: push    ebx
0x825B85: push    ebx
0x825B86: push    1Bh
0x825B88: call    sub_772CD0
0x825B8D: cmp     [esi+30h], ebx
0x825B90: jnz     short loc_825B9A
0x825B92: call    sub_772DF0
0x825B97: mov     [esi+30h], eax
0x825B9A: mov     ecx, [esi+30h]
0x825B9D: push    ebx
0x825B9E: push    ebx
0x825B9F: push    0Fh
0x825BA1: call    sub_772CD0
0x825BA6: cmp     [esi+30h], ebx
0x825BA9: jnz     short loc_825BB3
0x825BAB: call    sub_772DF0
0x825BB0: mov     [esi+30h], eax
0x825BB3: mov     ecx, [esi+30h]
0x825BB6: push    ebx
0x825BB7: push    1
0x825BB9: push    7
0x825BBB: call    sub_772CD0
0x825BC0: cmp     [esi+30h], ebx
0x825BC3: jnz     short loc_825BCD
0x825BC5: call    sub_772DF0
0x825BCA: mov     [esi+30h], eax
0x825BCD: mov     ecx, [esi+30h]
0x825BD0: push    ebx
0x825BD1: push    4
0x825BD3: push    17h
0x825BD5: call    sub_772CD0
0x825BDA: cmp     [esi+30h], ebx
0x825BDD: jnz     short loc_825BE7
0x825BDF: call    sub_772DF0
0x825BE4: mov     [esi+30h], eax
0x825BE7: mov     ecx, [esi+30h]
0x825BEA: push    ebx
0x825BEB: push    1
0x825BED: push    0Eh
0x825BEF: call    sub_772CD0
0x825BF4: cmp     [esi+30h], ebx
0x825BF7: jnz     short loc_825C01
0x825BF9: call    sub_772DF0
0x825BFE: mov     [esi+30h], eax
0x825C01: mov     ecx, [esi+30h]
0x825C04: push    ebx
0x825C05: push    ebx
0x825C06: push    34h ; '4'
0x825C08: call    sub_772CD0
0x825C0D: mov     ebp, 59088h
0x825C12: push    offset dword_B45804
0x825C17: lea     ecx, [esp+39Ch+var_380]
0x825C1B: mov     ds:0B43D80h, ebp
0x825C21: mov     dword ptr ds:0B44410h, 11Ch
0x825C2B: mov     dword ptr ds:0B436F0h, 18000h
0x825C35: mov     dword ptr ds:0B44AA0h, 8
0x825C3F: call    sub_76C890
0x825C44: mov     esi, [esp+398h+var_380]
0x825C48: cmp     dword ptr [esi+18h], 8
0x825C4C: jnb     loc_825F7C
0x825C52: lea     ecx, [esp+398h+var_228]
0x825C59: push    ecx
0x825C5A: call    sub_772630
0x825C5F: add     esp, 4
0x825C62: push    eax
0x825C63: lea     ecx, [esp+39Ch+a3]
0x825C67: mov     byte ptr [esp+39Ch+var_4], 9Ah ; 'š'
0x825C6F: call    sub_75FAE0
0x825C74: mov     eax, [esp+398h+var_228]
0x825C7B: cmp     eax, ebx
0x825C7D: mov     byte ptr [esp+398h+var_4], 1
0x825C85: jz      short loc_825C99
0x825C87: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825C8B: mov     ecx, eax
0x825C8D: add     eax, 5Ch ; '\'
0x825C90: cmp     [eax], ebx
0x825C92: jnz     short loc_825C99
0x825C94: call    sub_772560
0x825C99: mov     edi, [esp+398h+a3]
0x825C9D: push    2
0x825C9F: push    1
0x825CA1: push    ebx
0x825CA2: push    edi
0x825CA3: call    sub_801110
0x825CA8: add     esp, 10h
0x825CAB: push    edi; a3
0x825CAC: push    ebx; a2
0x825CAD: mov     ecx, esi; this
0x825CAF: call    sub_760010
0x825CB4: lea     edx, [esp+398h+var_220]
0x825CBB: push    edx
0x825CBC: call    sub_772630
0x825CC1: add     esp, 4
0x825CC4: push    eax
0x825CC5: lea     ecx, [esp+39Ch+a3]
0x825CC9: mov     byte ptr [esp+39Ch+var_4], 9Bh ; '›'
0x825CD1: call    sub_75FAE0
0x825CD6: mov     eax, [esp+398h+var_220]
0x825CDD: cmp     eax, ebx
0x825CDF: mov     byte ptr [esp+398h+var_4], 1
0x825CE7: jz      short loc_825CFB
0x825CE9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825CED: mov     ecx, eax
0x825CEF: add     eax, 5Ch ; '\'
0x825CF2: cmp     [eax], ebx
0x825CF4: jnz     short loc_825CFB
0x825CF6: call    sub_772560
0x825CFB: mov     edi, [esp+398h+a3]
0x825CFF: push    2
0x825D01: push    1
0x825D03: push    1
0x825D05: push    edi
0x825D06: call    sub_801110
0x825D0B: add     esp, 10h
0x825D0E: push    edi; a3
0x825D0F: push    1; a2
0x825D11: mov     ecx, esi; this
0x825D13: call    sub_760010
0x825D18: lea     eax, [esp+398h+var_218]
0x825D1F: push    eax
0x825D20: call    sub_772630
0x825D25: add     esp, 4
0x825D28: push    eax
0x825D29: lea     ecx, [esp+39Ch+a3]
0x825D2D: mov     byte ptr [esp+39Ch+var_4], 9Ch ; 'œ'
0x825D35: call    sub_75FAE0
0x825D3A: mov     eax, [esp+398h+var_218]
0x825D41: cmp     eax, ebx
0x825D43: mov     byte ptr [esp+398h+var_4], 1
0x825D4B: jz      short loc_825D5F
0x825D4D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825D51: mov     ecx, eax
0x825D53: add     eax, 5Ch ; '\'
0x825D56: cmp     [eax], ebx
0x825D58: jnz     short loc_825D5F
0x825D5A: call    sub_772560
0x825D5F: mov     edi, [esp+398h+a3]
0x825D63: push    2
0x825D65: push    1
0x825D67: push    2
0x825D69: push    edi
0x825D6A: call    sub_801110
0x825D6F: add     esp, 10h
0x825D72: push    edi; a3
0x825D73: push    2; a2
0x825D75: mov     ecx, esi; this
0x825D77: call    sub_760010
0x825D7C: lea     ecx, [esp+398h+var_210]
0x825D83: push    ecx
0x825D84: call    sub_772630
0x825D89: add     esp, 4
0x825D8C: push    eax
0x825D8D: lea     ecx, [esp+39Ch+a3]
0x825D91: mov     byte ptr [esp+39Ch+var_4], 9Dh
0x825D99: call    sub_75FAE0
0x825D9E: mov     eax, [esp+398h+var_210]
0x825DA5: cmp     eax, ebx
0x825DA7: mov     byte ptr [esp+398h+var_4], 1
0x825DAF: jz      short loc_825DC3
0x825DB1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825DB5: mov     ecx, eax
0x825DB7: add     eax, 5Ch ; '\'
0x825DBA: cmp     [eax], ebx
0x825DBC: jnz     short loc_825DC3
0x825DBE: call    sub_772560
0x825DC3: mov     edi, [esp+398h+a3]
0x825DC7: push    2
0x825DC9: push    1
0x825DCB: push    3
0x825DCD: push    edi
0x825DCE: call    sub_801110
0x825DD3: add     esp, 10h
0x825DD6: push    edi; a3
0x825DD7: push    3; a2
0x825DD9: mov     ecx, esi; this
0x825DDB: call    sub_760010
0x825DE0: lea     edx, [esp+398h+var_208]
0x825DE7: push    edx
0x825DE8: call    sub_772630
0x825DED: add     esp, 4
0x825DF0: push    eax
0x825DF1: lea     ecx, [esp+39Ch+a3]
0x825DF5: mov     byte ptr [esp+39Ch+var_4], 9Eh ; 'ž'
0x825DFD: call    sub_75FAE0
0x825E02: mov     eax, [esp+398h+var_208]
0x825E09: cmp     eax, ebx
0x825E0B: mov     byte ptr [esp+398h+var_4], 1
0x825E13: jz      short loc_825E27
0x825E15: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825E19: mov     ecx, eax
0x825E1B: add     eax, 5Ch ; '\'
0x825E1E: cmp     [eax], ebx
0x825E20: jnz     short loc_825E27
0x825E22: call    sub_772560
0x825E27: mov     edi, [esp+398h+a3]
0x825E2B: push    2
0x825E2D: push    1
0x825E2F: push    4
0x825E31: push    edi
0x825E32: call    sub_801110
0x825E37: add     esp, 10h
0x825E3A: push    edi; a3
0x825E3B: push    4; a2
0x825E3D: mov     ecx, esi; this
0x825E3F: call    sub_760010
0x825E44: lea     eax, [esp+398h+var_200]
0x825E4B: push    eax
0x825E4C: call    sub_772630
0x825E51: add     esp, 4
0x825E54: push    eax
0x825E55: lea     ecx, [esp+39Ch+a3]
0x825E59: mov     byte ptr [esp+39Ch+var_4], 9Fh ; 'Ÿ'
0x825E61: call    sub_75FAE0
0x825E66: mov     eax, [esp+398h+var_200]
0x825E6D: cmp     eax, ebx
0x825E6F: mov     byte ptr [esp+398h+var_4], 1
0x825E77: jz      short loc_825E8B
0x825E79: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825E7D: mov     ecx, eax
0x825E7F: add     eax, 5Ch ; '\'
0x825E82: cmp     [eax], ebx
0x825E84: jnz     short loc_825E8B
0x825E86: call    sub_772560
0x825E8B: mov     edi, [esp+398h+a3]
0x825E8F: push    ebx
0x825E90: push    3
0x825E92: push    5
0x825E94: push    edi
0x825E95: call    sub_801110
0x825E9A: mov     ecx, ds:0B43110h
0x825EA0: add     esp, 10h
0x825EA3: push    ecx; a2
0x825EA4: mov     ecx, edi; this
0x825EA6: call    sub_76C910
0x825EAB: push    edi; a3
0x825EAC: push    5; a2
0x825EAE: mov     ecx, esi; this
0x825EB0: call    sub_760010
0x825EB5: lea     edx, [esp+398h+var_1F8]
0x825EBC: push    edx
0x825EBD: call    sub_772630
0x825EC2: add     esp, 4
0x825EC5: push    eax
0x825EC6: lea     ecx, [esp+39Ch+a3]
0x825ECA: mov     byte ptr [esp+39Ch+var_4], 0A0h ; ' '
0x825ED2: call    sub_75FAE0
0x825ED7: mov     eax, [esp+398h+var_1F8]
0x825EDE: cmp     eax, ebx
0x825EE0: mov     byte ptr [esp+398h+var_4], 1
0x825EE8: jz      short loc_825EFC
0x825EEA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825EEE: mov     ecx, eax
0x825EF0: add     eax, 5Ch ; '\'
0x825EF3: cmp     [eax], ebx
0x825EF5: jnz     short loc_825EFC
0x825EF7: call    sub_772560
0x825EFC: mov     edi, [esp+398h+a3]
0x825F00: push    2
0x825F02: push    1
0x825F04: push    6
0x825F06: push    edi
0x825F07: call    sub_801110
0x825F0C: add     esp, 10h
0x825F0F: push    edi; a3
0x825F10: push    6; a2
0x825F12: mov     ecx, esi; this
0x825F14: call    sub_760010
0x825F19: lea     eax, [esp+398h+var_1F0]
0x825F20: push    eax
0x825F21: call    sub_772630
0x825F26: add     esp, 4
0x825F29: push    eax
0x825F2A: lea     ecx, [esp+39Ch+a3]
0x825F2E: mov     byte ptr [esp+39Ch+var_4], 0A1h ; '¡'
0x825F36: call    sub_75FAE0
0x825F3B: mov     eax, [esp+398h+var_1F0]
0x825F42: cmp     eax, ebx
0x825F44: mov     byte ptr [esp+398h+var_4], 1
0x825F4C: jz      short loc_825F60
0x825F4E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x825F52: mov     ecx, eax
0x825F54: add     eax, 5Ch ; '\'
0x825F57: cmp     [eax], ebx
0x825F59: jnz     short loc_825F60
0x825F5B: call    sub_772560
0x825F60: mov     edi, [esp+398h+a3]
0x825F64: push    ebx
0x825F65: push    3
0x825F67: push    7
0x825F69: push    edi
0x825F6A: call    sub_801110
0x825F6F: add     esp, 10h
0x825F72: push    edi; a3
0x825F73: push    7; a2
0x825F75: mov     ecx, esi; this
0x825F77: call    sub_760010
0x825F7C: mov     ecx, ds:0B45384h
0x825F82: push    ecx; a2
0x825F83: mov     ecx, esi; this
0x825F85: call    sub_7AECB0
0x825F8A: mov     edx, ds:0B4516Ch
0x825F90: push    edx; a2
0x825F91: mov     ecx, esi; this
0x825F93: call    sub_7AEC60
0x825F98: cmp     [esi+30h], ebx
0x825F9B: jnz     short loc_825FA5
0x825F9D: call    sub_772DF0
0x825FA2: mov     [esi+30h], eax
0x825FA5: mov     ecx, [esi+30h]
0x825FA8: push    ebx
0x825FA9: push    ebx
0x825FAA: push    1Bh
0x825FAC: call    sub_772CD0
0x825FB1: cmp     [esi+30h], ebx
0x825FB4: jnz     short loc_825FBE
0x825FB6: call    sub_772DF0
0x825FBB: mov     [esi+30h], eax
0x825FBE: mov     ecx, [esi+30h]
0x825FC1: push    ebx
0x825FC2: push    ebx
0x825FC3: push    0Fh
0x825FC5: call    sub_772CD0
0x825FCA: cmp     [esi+30h], ebx
0x825FCD: jnz     short loc_825FD7
0x825FCF: call    sub_772DF0
0x825FD4: mov     [esi+30h], eax
0x825FD7: mov     ecx, [esi+30h]
0x825FDA: push    ebx
0x825FDB: push    1
0x825FDD: push    7
0x825FDF: call    sub_772CD0
0x825FE4: cmp     [esi+30h], ebx
0x825FE7: jnz     short loc_825FF1
0x825FE9: call    sub_772DF0
0x825FEE: mov     [esi+30h], eax
0x825FF1: mov     ecx, [esi+30h]
0x825FF4: push    ebx
0x825FF5: push    4
0x825FF7: push    17h
0x825FF9: call    sub_772CD0
0x825FFE: cmp     [esi+30h], ebx
0x826001: jnz     short loc_82600B
0x826003: call    sub_772DF0
0x826008: mov     [esi+30h], eax
0x82600B: mov     ecx, [esi+30h]
0x82600E: push    ebx
0x82600F: push    1
0x826011: push    0Eh
0x826013: call    sub_772CD0
0x826018: cmp     [esi+30h], ebx
0x82601B: jnz     short loc_826025
0x82601D: call    sub_772DF0
0x826022: mov     [esi+30h], eax
0x826025: mov     ecx, [esi+30h]
0x826028: push    ebx
0x826029: push    ebx
0x82602A: push    34h ; '4'
0x82602C: call    sub_772CD0
0x826031: push    offset dword_B45818
0x826036: lea     ecx, [esp+39Ch+var_380]
0x82603A: mov     ds:0B43D84h, ebp
0x826040: mov     dword ptr ds:0B44414h, 19Ch
0x82604A: mov     dword ptr ds:0B436F4h, 18000h
0x826054: mov     dword ptr ds:0B44AA4h, 0Ch
0x82605E: call    sub_76C890
0x826063: mov     esi, [esp+398h+var_380]
0x826067: cmp     dword ptr [esi+18h], 8
0x82606B: jnb     loc_82639A
0x826071: lea     eax, [esp+398h+var_1E8]
0x826078: push    eax
0x826079: call    sub_772630
0x82607E: add     esp, 4
0x826081: push    eax
0x826082: lea     ecx, [esp+39Ch+a3]
0x826086: mov     byte ptr [esp+39Ch+var_4], 0A2h ; '¢'
0x82608E: call    sub_75FAE0
0x826093: mov     eax, [esp+398h+var_1E8]
0x82609A: cmp     eax, ebx
0x82609C: mov     byte ptr [esp+398h+var_4], 1
0x8260A4: jz      short loc_8260B8
0x8260A6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8260AA: mov     ecx, eax
0x8260AC: add     eax, 5Ch ; '\'
0x8260AF: cmp     [eax], ebx
0x8260B1: jnz     short loc_8260B8
0x8260B3: call    sub_772560
0x8260B8: mov     edi, [esp+398h+a3]
0x8260BC: push    2
0x8260BE: push    1
0x8260C0: push    ebx
0x8260C1: push    edi
0x8260C2: call    sub_801110
0x8260C7: add     esp, 10h
0x8260CA: push    edi; a3
0x8260CB: push    ebx; a2
0x8260CC: mov     ecx, esi; this
0x8260CE: call    sub_760010
0x8260D3: lea     ecx, [esp+398h+var_1E0]
0x8260DA: push    ecx
0x8260DB: call    sub_772630
0x8260E0: add     esp, 4
0x8260E3: push    eax
0x8260E4: lea     ecx, [esp+39Ch+a3]
0x8260E8: mov     byte ptr [esp+39Ch+var_4], 0A3h ; '£'
0x8260F0: call    sub_75FAE0
0x8260F5: mov     eax, [esp+398h+var_1E0]
0x8260FC: cmp     eax, ebx
0x8260FE: mov     byte ptr [esp+398h+var_4], 1
0x826106: jz      short loc_82611A
0x826108: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82610C: mov     ecx, eax
0x82610E: add     eax, 5Ch ; '\'
0x826111: cmp     [eax], ebx
0x826113: jnz     short loc_82611A
0x826115: call    sub_772560
0x82611A: mov     edi, [esp+398h+a3]
0x82611E: push    2
0x826120: push    1
0x826122: push    1
0x826124: push    edi
0x826125: call    sub_801110
0x82612A: add     esp, 10h
0x82612D: push    edi; a3
0x82612E: push    1; a2
0x826130: mov     ecx, esi; this
0x826132: call    sub_760010
0x826137: lea     edx, [esp+398h+var_1D8]
0x82613E: push    edx
0x82613F: call    sub_772630
0x826144: add     esp, 4
0x826147: push    eax
0x826148: lea     ecx, [esp+39Ch+a3]
0x82614C: mov     byte ptr [esp+39Ch+var_4], 0A4h ; '¤'
0x826154: call    sub_75FAE0
0x826159: mov     eax, [esp+398h+var_1D8]
0x826160: cmp     eax, ebx
0x826162: mov     byte ptr [esp+398h+var_4], 1
0x82616A: jz      short loc_82617E
0x82616C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826170: mov     ecx, eax
0x826172: add     eax, 5Ch ; '\'
0x826175: cmp     [eax], ebx
0x826177: jnz     short loc_82617E
0x826179: call    sub_772560
0x82617E: mov     edi, [esp+398h+a3]
0x826182: push    2
0x826184: push    1
0x826186: push    2
0x826188: push    edi
0x826189: call    sub_801110
0x82618E: add     esp, 10h
0x826191: push    edi; a3
0x826192: push    2; a2
0x826194: mov     ecx, esi; this
0x826196: call    sub_760010
0x82619B: lea     eax, [esp+398h+var_1D0]
0x8261A2: push    eax
0x8261A3: call    sub_772630
0x8261A8: add     esp, 4
0x8261AB: push    eax
0x8261AC: lea     ecx, [esp+39Ch+a3]
0x8261B0: mov     byte ptr [esp+39Ch+var_4], 0A5h ; '¥'
0x8261B8: call    sub_75FAE0
0x8261BD: mov     eax, [esp+398h+var_1D0]
0x8261C4: cmp     eax, ebx
0x8261C6: mov     byte ptr [esp+398h+var_4], 1
0x8261CE: jz      short loc_8261E2
0x8261D0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8261D4: mov     ecx, eax
0x8261D6: add     eax, 5Ch ; '\'
0x8261D9: cmp     [eax], ebx
0x8261DB: jnz     short loc_8261E2
0x8261DD: call    sub_772560
0x8261E2: mov     edi, [esp+398h+a3]
0x8261E6: push    2
0x8261E8: push    1
0x8261EA: push    3
0x8261EC: push    edi
0x8261ED: call    sub_801110
0x8261F2: add     esp, 10h
0x8261F5: push    edi; a3
0x8261F6: push    3; a2
0x8261F8: mov     ecx, esi; this
0x8261FA: call    sub_760010
0x8261FF: lea     ecx, [esp+398h+var_1C8]
0x826206: push    ecx
0x826207: call    sub_772630
0x82620C: add     esp, 4
0x82620F: push    eax
0x826210: lea     ecx, [esp+39Ch+a3]
0x826214: mov     byte ptr [esp+39Ch+var_4], 0A6h ; '¦'
0x82621C: call    sub_75FAE0
0x826221: mov     eax, [esp+398h+var_1C8]
0x826228: cmp     eax, ebx
0x82622A: mov     byte ptr [esp+398h+var_4], 1
0x826232: jz      short loc_826246
0x826234: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826238: mov     ecx, eax
0x82623A: add     eax, 5Ch ; '\'
0x82623D: cmp     [eax], ebx
0x82623F: jnz     short loc_826246
0x826241: call    sub_772560
0x826246: mov     edi, [esp+398h+a3]
0x82624A: push    2
0x82624C: push    1
0x82624E: push    4
0x826250: push    edi
0x826251: call    sub_801110
0x826256: add     esp, 10h
0x826259: push    edi; a3
0x82625A: push    4; a2
0x82625C: mov     ecx, esi; this
0x82625E: call    sub_760010
0x826263: lea     edx, [esp+398h+var_1C0]
0x82626A: push    edx
0x82626B: call    sub_772630
0x826270: add     esp, 4
0x826273: push    eax
0x826274: lea     ecx, [esp+39Ch+a3]
0x826278: mov     byte ptr [esp+39Ch+var_4], 0A7h ; '§'
0x826280: call    sub_75FAE0
0x826285: mov     eax, [esp+398h+var_1C0]
0x82628C: cmp     eax, ebx
0x82628E: mov     byte ptr [esp+398h+var_4], 1
0x826296: jz      short loc_8262AA
0x826298: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82629C: mov     ecx, eax
0x82629E: add     eax, 5Ch ; '\'
0x8262A1: cmp     [eax], ebx
0x8262A3: jnz     short loc_8262AA
0x8262A5: call    sub_772560
0x8262AA: mov     edi, [esp+398h+a3]
0x8262AE: push    ebx
0x8262AF: push    3
0x8262B1: push    5
0x8262B3: push    edi
0x8262B4: call    sub_801110
0x8262B9: mov     eax, ds:0B43110h
0x8262BE: add     esp, 10h
0x8262C1: push    eax; a2
0x8262C2: mov     ecx, edi; this
0x8262C4: call    sub_76C910
0x8262C9: push    edi; a3
0x8262CA: push    5; a2
0x8262CC: mov     ecx, esi; this
0x8262CE: call    sub_760010
0x8262D3: lea     ecx, [esp+398h+var_1B8]
0x8262DA: push    ecx
0x8262DB: call    sub_772630
0x8262E0: add     esp, 4
0x8262E3: push    eax
0x8262E4: lea     ecx, [esp+39Ch+a3]
0x8262E8: mov     byte ptr [esp+39Ch+var_4], 0A8h ; '¨'
0x8262F0: call    sub_75FAE0
0x8262F5: mov     eax, [esp+398h+var_1B8]
0x8262FC: cmp     eax, ebx
0x8262FE: mov     byte ptr [esp+398h+var_4], 1
0x826306: jz      short loc_82631A
0x826308: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82630C: mov     ecx, eax
0x82630E: add     eax, 5Ch ; '\'
0x826311: cmp     [eax], ebx
0x826313: jnz     short loc_82631A
0x826315: call    sub_772560
0x82631A: mov     edi, [esp+398h+a3]
0x82631E: push    2
0x826320: push    1
0x826322: push    6
0x826324: push    edi
0x826325: call    sub_801110
0x82632A: add     esp, 10h
0x82632D: push    edi; a3
0x82632E: push    6; a2
0x826330: mov     ecx, esi; this
0x826332: call    sub_760010
0x826337: lea     edx, [esp+398h+var_1B0]
0x82633E: push    edx
0x82633F: call    sub_772630
0x826344: add     esp, 4
0x826347: push    eax
0x826348: lea     ecx, [esp+39Ch+a3]
0x82634C: mov     byte ptr [esp+39Ch+var_4], 0A9h ; '©'
0x826354: call    sub_75FAE0
0x826359: mov     eax, [esp+398h+var_1B0]
0x826360: cmp     eax, ebx
0x826362: mov     byte ptr [esp+398h+var_4], 1
0x82636A: jz      short loc_82637E
0x82636C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826370: mov     ecx, eax
0x826372: add     eax, 5Ch ; '\'
0x826375: cmp     [eax], ebx
0x826377: jnz     short loc_82637E
0x826379: call    sub_772560
0x82637E: mov     edi, [esp+398h+a3]
0x826382: push    ebx
0x826383: push    3
0x826385: push    7
0x826387: push    edi
0x826388: call    sub_801110
0x82638D: add     esp, 10h
0x826390: push    edi; a3
0x826391: push    7; a2
0x826393: mov     ecx, esi; this
0x826395: call    sub_760010
0x82639A: mov     eax, ds:0B45384h
0x82639F: push    eax; a2
0x8263A0: mov     ecx, esi; this
0x8263A2: call    sub_7AECB0
0x8263A7: mov     ecx, ds:0B45170h
0x8263AD: push    ecx; a2
0x8263AE: mov     ecx, esi; this
0x8263B0: call    sub_7AEC60
0x8263B5: cmp     [esi+30h], ebx
0x8263B8: jnz     short loc_8263C2
0x8263BA: call    sub_772DF0
0x8263BF: mov     [esi+30h], eax
0x8263C2: mov     ecx, [esi+30h]
0x8263C5: push    ebx
0x8263C6: push    ebx
0x8263C7: push    1Bh
0x8263C9: call    sub_772CD0
0x8263CE: cmp     [esi+30h], ebx
0x8263D1: jnz     short loc_8263DB
0x8263D3: call    sub_772DF0
0x8263D8: mov     [esi+30h], eax
0x8263DB: mov     ecx, [esi+30h]
0x8263DE: push    ebx
0x8263DF: push    ebx
0x8263E0: push    0Fh
0x8263E2: call    sub_772CD0
0x8263E7: cmp     [esi+30h], ebx
0x8263EA: jnz     short loc_8263F4
0x8263EC: call    sub_772DF0
0x8263F1: mov     [esi+30h], eax
0x8263F4: mov     ecx, [esi+30h]
0x8263F7: push    ebx
0x8263F8: push    1
0x8263FA: push    7
0x8263FC: call    sub_772CD0
0x826401: cmp     [esi+30h], ebx
0x826404: jnz     short loc_82640E
0x826406: call    sub_772DF0
0x82640B: mov     [esi+30h], eax
0x82640E: mov     ecx, [esi+30h]
0x826411: push    ebx
0x826412: push    4
0x826414: push    17h
0x826416: call    sub_772CD0
0x82641B: cmp     [esi+30h], ebx
0x82641E: jnz     short loc_826428
0x826420: call    sub_772DF0
0x826425: mov     [esi+30h], eax
0x826428: mov     ecx, [esi+30h]
0x82642B: push    ebx
0x82642C: push    1
0x82642E: push    0Eh
0x826430: call    sub_772CD0
0x826435: cmp     [esi+30h], ebx
0x826438: jnz     short loc_826442
0x82643A: call    sub_772DF0
0x82643F: mov     [esi+30h], eax
0x826442: mov     ecx, [esi+30h]
0x826445: push    ebx
0x826446: push    ebx
0x826447: push    34h ; '4'
0x826449: call    sub_772CD0
0x82644E: push    offset dword_B4581C
0x826453: lea     ecx, [esp+39Ch+var_380]
0x826457: mov     ds:0B43D98h, ebp
0x82645D: mov     dword ptr ds:0B44428h, 19Ch
0x826467: mov     dword ptr ds:0B43708h, 18000h
0x826471: mov     dword ptr ds:0B44AB8h, 0Ch
0x82647B: call    sub_76C890
0x826480: mov     esi, [esp+398h+var_380]
0x826484: cmp     dword ptr [esi+18h], 8
0x826488: jnb     loc_8267B8
0x82648E: lea     edx, [esp+398h+var_1A8]
0x826495: push    edx
0x826496: call    sub_772630
0x82649B: add     esp, 4
0x82649E: push    eax
0x82649F: lea     ecx, [esp+39Ch+a3]
0x8264A3: mov     byte ptr [esp+39Ch+var_4], 0AAh ; 'ª'
0x8264AB: call    sub_75FAE0
0x8264B0: mov     eax, [esp+398h+var_1A8]
0x8264B7: cmp     eax, ebx
0x8264B9: mov     byte ptr [esp+398h+var_4], 1
0x8264C1: jz      short loc_8264D5
0x8264C3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8264C7: mov     ecx, eax
0x8264C9: add     eax, 5Ch ; '\'
0x8264CC: cmp     [eax], ebx
0x8264CE: jnz     short loc_8264D5
0x8264D0: call    sub_772560
0x8264D5: mov     edi, [esp+398h+a3]
0x8264D9: push    2
0x8264DB: push    1
0x8264DD: push    ebx
0x8264DE: push    edi
0x8264DF: call    sub_801110
0x8264E4: add     esp, 10h
0x8264E7: push    edi; a3
0x8264E8: push    ebx; a2
0x8264E9: mov     ecx, esi; this
0x8264EB: call    sub_760010
0x8264F0: lea     eax, [esp+398h+var_1A0]
0x8264F7: push    eax
0x8264F8: call    sub_772630
0x8264FD: add     esp, 4
0x826500: push    eax
0x826501: lea     ecx, [esp+39Ch+a3]
0x826505: mov     byte ptr [esp+39Ch+var_4], 0ABh ; '«'
0x82650D: call    sub_75FAE0
0x826512: mov     eax, [esp+398h+var_1A0]
0x826519: cmp     eax, ebx
0x82651B: mov     byte ptr [esp+398h+var_4], 1
0x826523: jz      short loc_826537
0x826525: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826529: mov     ecx, eax
0x82652B: add     eax, 5Ch ; '\'
0x82652E: cmp     [eax], ebx
0x826530: jnz     short loc_826537
0x826532: call    sub_772560
0x826537: mov     edi, [esp+398h+a3]
0x82653B: push    2
0x82653D: push    1
0x82653F: push    1
0x826541: push    edi
0x826542: call    sub_801110
0x826547: add     esp, 10h
0x82654A: push    edi; a3
0x82654B: push    1; a2
0x82654D: mov     ecx, esi; this
0x82654F: call    sub_760010
0x826554: lea     ecx, [esp+398h+var_198]
0x82655B: push    ecx
0x82655C: call    sub_772630
0x826561: add     esp, 4
0x826564: push    eax
0x826565: lea     ecx, [esp+39Ch+a3]
0x826569: mov     byte ptr [esp+39Ch+var_4], 0ACh ; '¬'
0x826571: call    sub_75FAE0
0x826576: mov     eax, [esp+398h+var_198]
0x82657D: cmp     eax, ebx
0x82657F: mov     byte ptr [esp+398h+var_4], 1
0x826587: jz      short loc_82659B
0x826589: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82658D: mov     ecx, eax
0x82658F: add     eax, 5Ch ; '\'
0x826592: cmp     [eax], ebx
0x826594: jnz     short loc_82659B
0x826596: call    sub_772560
0x82659B: mov     edi, [esp+398h+a3]
0x82659F: push    2
0x8265A1: push    1
0x8265A3: push    2
0x8265A5: push    edi
0x8265A6: call    sub_801110
0x8265AB: add     esp, 10h
0x8265AE: push    edi; a3
0x8265AF: push    2; a2
0x8265B1: mov     ecx, esi; this
0x8265B3: call    sub_760010
0x8265B8: lea     edx, [esp+398h+var_190]
0x8265BF: push    edx
0x8265C0: call    sub_772630
0x8265C5: add     esp, 4
0x8265C8: push    eax
0x8265C9: lea     ecx, [esp+39Ch+a3]
0x8265CD: mov     byte ptr [esp+39Ch+var_4], 0ADh ; '­'
0x8265D5: call    sub_75FAE0
0x8265DA: mov     eax, [esp+398h+var_190]
0x8265E1: cmp     eax, ebx
0x8265E3: mov     byte ptr [esp+398h+var_4], 1
0x8265EB: jz      short loc_8265FF
0x8265ED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8265F1: mov     ecx, eax
0x8265F3: add     eax, 5Ch ; '\'
0x8265F6: cmp     [eax], ebx
0x8265F8: jnz     short loc_8265FF
0x8265FA: call    sub_772560
0x8265FF: mov     edi, [esp+398h+a3]
0x826603: push    2
0x826605: push    1
0x826607: push    3
0x826609: push    edi
0x82660A: call    sub_801110
0x82660F: add     esp, 10h
0x826612: push    edi; a3
0x826613: push    3; a2
0x826615: mov     ecx, esi; this
0x826617: call    sub_760010
0x82661C: lea     eax, [esp+398h+var_188]
0x826623: push    eax
0x826624: call    sub_772630
0x826629: add     esp, 4
0x82662C: push    eax
0x82662D: lea     ecx, [esp+39Ch+a3]
0x826631: mov     byte ptr [esp+39Ch+var_4], 0AEh ; '®'
0x826639: call    sub_75FAE0
0x82663E: mov     eax, [esp+398h+var_188]
0x826645: cmp     eax, ebx
0x826647: mov     byte ptr [esp+398h+var_4], 1
0x82664F: jz      short loc_826663
0x826651: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826655: mov     ecx, eax
0x826657: add     eax, 5Ch ; '\'
0x82665A: cmp     [eax], ebx
0x82665C: jnz     short loc_826663
0x82665E: call    sub_772560
0x826663: mov     edi, [esp+398h+a3]
0x826667: push    2
0x826669: push    1
0x82666B: push    4
0x82666D: push    edi
0x82666E: call    sub_801110
0x826673: add     esp, 10h
0x826676: push    edi; a3
0x826677: push    4; a2
0x826679: mov     ecx, esi; this
0x82667B: call    sub_760010
0x826680: lea     ecx, [esp+398h+var_180]
0x826687: push    ecx
0x826688: call    sub_772630
0x82668D: add     esp, 4
0x826690: push    eax
0x826691: lea     ecx, [esp+39Ch+a3]
0x826695: mov     byte ptr [esp+39Ch+var_4], 0AFh ; '¯'
0x82669D: call    sub_75FAE0
0x8266A2: mov     eax, [esp+398h+var_180]
0x8266A9: cmp     eax, ebx
0x8266AB: mov     byte ptr [esp+398h+var_4], 1
0x8266B3: jz      short loc_8266C7
0x8266B5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8266B9: mov     ecx, eax
0x8266BB: add     eax, 5Ch ; '\'
0x8266BE: cmp     [eax], ebx
0x8266C0: jnz     short loc_8266C7
0x8266C2: call    sub_772560
0x8266C7: mov     edi, [esp+398h+a3]
0x8266CB: push    ebx
0x8266CC: push    3
0x8266CE: push    5
0x8266D0: push    edi
0x8266D1: call    sub_801110
0x8266D6: mov     edx, ds:0B43110h
0x8266DC: add     esp, 10h
0x8266DF: push    edx; a2
0x8266E0: mov     ecx, edi; this
0x8266E2: call    sub_76C910
0x8266E7: push    edi; a3
0x8266E8: push    5; a2
0x8266EA: mov     ecx, esi; this
0x8266EC: call    sub_760010
0x8266F1: lea     eax, [esp+398h+var_178]
0x8266F8: push    eax
0x8266F9: call    sub_772630
0x8266FE: add     esp, 4
0x826701: push    eax
0x826702: lea     ecx, [esp+39Ch+a3]
0x826706: mov     byte ptr [esp+39Ch+var_4], 0B0h ; '°'
0x82670E: call    sub_75FAE0
0x826713: mov     eax, [esp+398h+var_178]
0x82671A: cmp     eax, ebx
0x82671C: mov     byte ptr [esp+398h+var_4], 1
0x826724: jz      short loc_826738
0x826726: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82672A: mov     ecx, eax
0x82672C: add     eax, 5Ch ; '\'
0x82672F: cmp     [eax], ebx
0x826731: jnz     short loc_826738
0x826733: call    sub_772560
0x826738: mov     edi, [esp+398h+a3]
0x82673C: push    2
0x82673E: push    1
0x826740: push    6
0x826742: push    edi
0x826743: call    sub_801110
0x826748: add     esp, 10h
0x82674B: push    edi; a3
0x82674C: push    6; a2
0x82674E: mov     ecx, esi; this
0x826750: call    sub_760010
0x826755: lea     ecx, [esp+398h+var_170]
0x82675C: push    ecx
0x82675D: call    sub_772630
0x826762: add     esp, 4
0x826765: push    eax
0x826766: lea     ecx, [esp+39Ch+a3]
0x82676A: mov     byte ptr [esp+39Ch+var_4], 0B1h ; '±'
0x826772: call    sub_75FAE0
0x826777: mov     eax, [esp+398h+var_170]
0x82677E: cmp     eax, ebx
0x826780: mov     byte ptr [esp+398h+var_4], 1
0x826788: jz      short loc_82679C
0x82678A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82678E: mov     ecx, eax
0x826790: add     eax, 5Ch ; '\'
0x826793: cmp     [eax], ebx
0x826795: jnz     short loc_82679C
0x826797: call    sub_772560
0x82679C: mov     edi, [esp+398h+a3]
0x8267A0: push    ebx
0x8267A1: push    3
0x8267A3: push    7
0x8267A5: push    edi
0x8267A6: call    sub_801110
0x8267AB: add     esp, 10h
0x8267AE: push    edi; a3
0x8267AF: push    7; a2
0x8267B1: mov     ecx, esi; this
0x8267B3: call    sub_760010
0x8267B8: mov     edx, ds:0B45388h
0x8267BE: push    edx; a2
0x8267BF: mov     ecx, esi; this
0x8267C1: call    sub_7AECB0
0x8267C6: mov     eax, ds:0B45174h
0x8267CB: push    eax; a2
0x8267CC: mov     ecx, esi; this
0x8267CE: call    sub_7AEC60
0x8267D3: cmp     [esi+30h], ebx
0x8267D6: jnz     short loc_8267E0
0x8267D8: call    sub_772DF0
0x8267DD: mov     [esi+30h], eax
0x8267E0: mov     ecx, [esi+30h]
0x8267E3: push    ebx
0x8267E4: push    ebx
0x8267E5: push    1Bh
0x8267E7: call    sub_772CD0
0x8267EC: cmp     [esi+30h], ebx
0x8267EF: jnz     short loc_8267F9
0x8267F1: call    sub_772DF0
0x8267F6: mov     [esi+30h], eax
0x8267F9: mov     ecx, [esi+30h]
0x8267FC: push    ebx
0x8267FD: push    ebx
0x8267FE: push    0Fh
0x826800: call    sub_772CD0
0x826805: cmp     [esi+30h], ebx
0x826808: jnz     short loc_826812
0x82680A: call    sub_772DF0
0x82680F: mov     [esi+30h], eax
0x826812: mov     ecx, [esi+30h]
0x826815: push    ebx
0x826816: push    1
0x826818: push    7
0x82681A: call    sub_772CD0
0x82681F: cmp     [esi+30h], ebx
0x826822: jnz     short loc_82682C
0x826824: call    sub_772DF0
0x826829: mov     [esi+30h], eax
0x82682C: mov     ecx, [esi+30h]
0x82682F: push    ebx
0x826830: push    4
0x826832: push    17h
0x826834: call    sub_772CD0
0x826839: cmp     [esi+30h], ebx
0x82683C: jnz     short loc_826846
0x82683E: call    sub_772DF0
0x826843: mov     [esi+30h], eax
0x826846: mov     ecx, [esi+30h]
0x826849: push    ebx
0x82684A: push    1
0x82684C: push    0Eh
0x82684E: call    sub_772CD0
0x826853: cmp     [esi+30h], ebx
0x826856: jnz     short loc_826860
0x826858: call    sub_772DF0
0x82685D: mov     [esi+30h], eax
0x826860: mov     ecx, [esi+30h]
0x826863: push    ebx
0x826864: push    ebx
0x826865: push    34h ; '4'
0x826867: call    sub_772CD0
0x82686C: mov     ebp, 190F2h
0x826871: push    offset dword_B45820
0x826876: lea     ecx, [esp+39Ch+var_380]
0x82687A: mov     ds:0B43D9Ch, ebp
0x826880: mov     dword ptr ds:0B4442Ch, 11Ch
0x82688A: mov     dword ptr ds:0B4370Ch, 18060h
0x826894: mov     dword ptr ds:0B44ABCh, 8
0x82689E: call    sub_76C890
0x8268A3: mov     esi, [esp+398h+var_380]
0x8268A7: cmp     dword ptr [esi+18h], 8
0x8268AB: jnb     loc_826BDB
0x8268B1: lea     ecx, [esp+398h+var_168]
0x8268B8: push    ecx
0x8268B9: call    sub_772630
0x8268BE: add     esp, 4
0x8268C1: push    eax
0x8268C2: lea     ecx, [esp+39Ch+a3]
0x8268C6: mov     byte ptr [esp+39Ch+var_4], 0B2h ; '²'
0x8268CE: call    sub_75FAE0
0x8268D3: mov     eax, [esp+398h+var_168]
0x8268DA: cmp     eax, ebx
0x8268DC: mov     byte ptr [esp+398h+var_4], 1
0x8268E4: jz      short loc_8268F8
0x8268E6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8268EA: mov     ecx, eax
0x8268EC: add     eax, 5Ch ; '\'
0x8268EF: cmp     [eax], ebx
0x8268F1: jnz     short loc_8268F8
0x8268F3: call    sub_772560
0x8268F8: mov     edi, [esp+398h+a3]
0x8268FC: push    2
0x8268FE: push    1
0x826900: push    ebx
0x826901: push    edi
0x826902: call    sub_801110
0x826907: add     esp, 10h
0x82690A: push    edi; a3
0x82690B: push    ebx; a2
0x82690C: mov     ecx, esi; this
0x82690E: call    sub_760010
0x826913: lea     edx, [esp+398h+var_160]
0x82691A: push    edx
0x82691B: call    sub_772630
0x826920: add     esp, 4
0x826923: push    eax
0x826924: lea     ecx, [esp+39Ch+a3]
0x826928: mov     byte ptr [esp+39Ch+var_4], 0B3h ; '³'
0x826930: call    sub_75FAE0
0x826935: mov     eax, [esp+398h+var_160]
0x82693C: cmp     eax, ebx
0x82693E: mov     byte ptr [esp+398h+var_4], 1
0x826946: jz      short loc_82695A
0x826948: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82694C: mov     ecx, eax
0x82694E: add     eax, 5Ch ; '\'
0x826951: cmp     [eax], ebx
0x826953: jnz     short loc_82695A
0x826955: call    sub_772560
0x82695A: mov     edi, [esp+398h+a3]
0x82695E: push    2
0x826960: push    1
0x826962: push    1
0x826964: push    edi
0x826965: call    sub_801110
0x82696A: add     esp, 10h
0x82696D: push    edi; a3
0x82696E: push    1; a2
0x826970: mov     ecx, esi; this
0x826972: call    sub_760010
0x826977: lea     eax, [esp+398h+var_158]
0x82697E: push    eax
0x82697F: call    sub_772630
0x826984: add     esp, 4
0x826987: push    eax
0x826988: lea     ecx, [esp+39Ch+a3]
0x82698C: mov     byte ptr [esp+39Ch+var_4], 0B4h ; '´'
0x826994: call    sub_75FAE0
0x826999: mov     eax, [esp+398h+var_158]
0x8269A0: cmp     eax, ebx
0x8269A2: mov     byte ptr [esp+398h+var_4], 1
0x8269AA: jz      short loc_8269BE
0x8269AC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8269B0: mov     ecx, eax
0x8269B2: add     eax, 5Ch ; '\'
0x8269B5: cmp     [eax], ebx
0x8269B7: jnz     short loc_8269BE
0x8269B9: call    sub_772560
0x8269BE: mov     edi, [esp+398h+a3]
0x8269C2: push    2
0x8269C4: push    1
0x8269C6: push    2
0x8269C8: push    edi
0x8269C9: call    sub_801110
0x8269CE: add     esp, 10h
0x8269D1: push    edi; a3
0x8269D2: push    2; a2
0x8269D4: mov     ecx, esi; this
0x8269D6: call    sub_760010
0x8269DB: lea     ecx, [esp+398h+var_150]
0x8269E2: push    ecx
0x8269E3: call    sub_772630
0x8269E8: add     esp, 4
0x8269EB: push    eax
0x8269EC: lea     ecx, [esp+39Ch+a3]
0x8269F0: mov     byte ptr [esp+39Ch+var_4], 0B5h ; 'µ'
0x8269F8: call    sub_75FAE0
0x8269FD: mov     eax, [esp+398h+var_150]
0x826A04: cmp     eax, ebx
0x826A06: mov     byte ptr [esp+398h+var_4], 1
0x826A0E: jz      short loc_826A22
0x826A10: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826A14: mov     ecx, eax
0x826A16: add     eax, 5Ch ; '\'
0x826A19: cmp     [eax], ebx
0x826A1B: jnz     short loc_826A22
0x826A1D: call    sub_772560
0x826A22: mov     edi, [esp+398h+a3]
0x826A26: push    2
0x826A28: push    1
0x826A2A: push    3
0x826A2C: push    edi
0x826A2D: call    sub_801110
0x826A32: add     esp, 10h
0x826A35: push    edi; a3
0x826A36: push    3; a2
0x826A38: mov     ecx, esi; this
0x826A3A: call    sub_760010
0x826A3F: lea     edx, [esp+398h+var_148]
0x826A46: push    edx
0x826A47: call    sub_772630
0x826A4C: add     esp, 4
0x826A4F: push    eax
0x826A50: lea     ecx, [esp+39Ch+a3]
0x826A54: mov     byte ptr [esp+39Ch+var_4], 0B6h ; '¶'
0x826A5C: call    sub_75FAE0
0x826A61: mov     eax, [esp+398h+var_148]
0x826A68: cmp     eax, ebx
0x826A6A: mov     byte ptr [esp+398h+var_4], 1
0x826A72: jz      short loc_826A86
0x826A74: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826A78: mov     ecx, eax
0x826A7A: add     eax, 5Ch ; '\'
0x826A7D: cmp     [eax], ebx
0x826A7F: jnz     short loc_826A86
0x826A81: call    sub_772560
0x826A86: mov     edi, [esp+398h+a3]
0x826A8A: push    2
0x826A8C: push    1
0x826A8E: push    4
0x826A90: push    edi
0x826A91: call    sub_801110
0x826A96: add     esp, 10h
0x826A99: push    edi; a3
0x826A9A: push    4; a2
0x826A9C: mov     ecx, esi; this
0x826A9E: call    sub_760010
0x826AA3: lea     eax, [esp+398h+var_140]
0x826AAA: push    eax
0x826AAB: call    sub_772630
0x826AB0: add     esp, 4
0x826AB3: push    eax
0x826AB4: lea     ecx, [esp+39Ch+a3]
0x826AB8: mov     byte ptr [esp+39Ch+var_4], 0B7h ; '·'
0x826AC0: call    sub_75FAE0
0x826AC5: mov     eax, [esp+398h+var_140]
0x826ACC: cmp     eax, ebx
0x826ACE: mov     byte ptr [esp+398h+var_4], 1
0x826AD6: jz      short loc_826AEA
0x826AD8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826ADC: mov     ecx, eax
0x826ADE: add     eax, 5Ch ; '\'
0x826AE1: cmp     [eax], ebx
0x826AE3: jnz     short loc_826AEA
0x826AE5: call    sub_772560
0x826AEA: mov     edi, [esp+398h+a3]
0x826AEE: push    ebx
0x826AEF: push    3
0x826AF1: push    5
0x826AF3: push    edi
0x826AF4: call    sub_801110
0x826AF9: mov     ecx, ds:0B43110h
0x826AFF: add     esp, 10h
0x826B02: push    ecx; a2
0x826B03: mov     ecx, edi; this
0x826B05: call    sub_76C910
0x826B0A: push    edi; a3
0x826B0B: push    5; a2
0x826B0D: mov     ecx, esi; this
0x826B0F: call    sub_760010
0x826B14: lea     edx, [esp+398h+var_138]
0x826B1B: push    edx
0x826B1C: call    sub_772630
0x826B21: add     esp, 4
0x826B24: push    eax
0x826B25: lea     ecx, [esp+39Ch+a3]
0x826B29: mov     byte ptr [esp+39Ch+var_4], 0B8h ; '¸'
0x826B31: call    sub_75FAE0
0x826B36: mov     eax, [esp+398h+var_138]
0x826B3D: cmp     eax, ebx
0x826B3F: mov     byte ptr [esp+398h+var_4], 1
0x826B47: jz      short loc_826B5B
0x826B49: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826B4D: mov     ecx, eax
0x826B4F: add     eax, 5Ch ; '\'
0x826B52: cmp     [eax], ebx
0x826B54: jnz     short loc_826B5B
0x826B56: call    sub_772560
0x826B5B: mov     edi, [esp+398h+a3]
0x826B5F: push    2
0x826B61: push    1
0x826B63: push    6
0x826B65: push    edi
0x826B66: call    sub_801110
0x826B6B: add     esp, 10h
0x826B6E: push    edi; a3
0x826B6F: push    6; a2
0x826B71: mov     ecx, esi; this
0x826B73: call    sub_760010
0x826B78: lea     eax, [esp+398h+var_130]
0x826B7F: push    eax
0x826B80: call    sub_772630
0x826B85: add     esp, 4
0x826B88: push    eax
0x826B89: lea     ecx, [esp+39Ch+a3]
0x826B8D: mov     byte ptr [esp+39Ch+var_4], 0B9h ; '¹'
0x826B95: call    sub_75FAE0
0x826B9A: mov     eax, [esp+398h+var_130]
0x826BA1: cmp     eax, ebx
0x826BA3: mov     byte ptr [esp+398h+var_4], 1
0x826BAB: jz      short loc_826BBF
0x826BAD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826BB1: mov     ecx, eax
0x826BB3: add     eax, 5Ch ; '\'
0x826BB6: cmp     [eax], ebx
0x826BB8: jnz     short loc_826BBF
0x826BBA: call    sub_772560
0x826BBF: mov     edi, [esp+398h+a3]
0x826BC3: push    ebx
0x826BC4: push    3
0x826BC6: push    7
0x826BC8: push    edi
0x826BC9: call    sub_801110
0x826BCE: add     esp, 10h
0x826BD1: push    edi; a3
0x826BD2: push    7; a2
0x826BD4: mov     ecx, esi; this
0x826BD6: call    sub_760010
0x826BDB: mov     ecx, ds:0B45388h
0x826BE1: push    ecx; a2
0x826BE2: mov     ecx, esi; this
0x826BE4: call    sub_7AECB0
0x826BE9: mov     edx, ds:0B45178h
0x826BEF: push    edx; a2
0x826BF0: mov     ecx, esi; this
0x826BF2: call    sub_7AEC60
0x826BF7: cmp     [esi+30h], ebx
0x826BFA: jnz     short loc_826C04
0x826BFC: call    sub_772DF0
0x826C01: mov     [esi+30h], eax
0x826C04: mov     ecx, [esi+30h]
0x826C07: push    ebx
0x826C08: push    ebx
0x826C09: push    1Bh
0x826C0B: call    sub_772CD0
0x826C10: cmp     [esi+30h], ebx
0x826C13: jnz     short loc_826C1D
0x826C15: call    sub_772DF0
0x826C1A: mov     [esi+30h], eax
0x826C1D: mov     ecx, [esi+30h]
0x826C20: push    ebx
0x826C21: push    ebx
0x826C22: push    0Fh
0x826C24: call    sub_772CD0
0x826C29: cmp     [esi+30h], ebx
0x826C2C: jnz     short loc_826C36
0x826C2E: call    sub_772DF0
0x826C33: mov     [esi+30h], eax
0x826C36: mov     ecx, [esi+30h]
0x826C39: push    ebx
0x826C3A: push    1
0x826C3C: push    7
0x826C3E: call    sub_772CD0
0x826C43: cmp     [esi+30h], ebx
0x826C46: jnz     short loc_826C50
0x826C48: call    sub_772DF0
0x826C4D: mov     [esi+30h], eax
0x826C50: mov     ecx, [esi+30h]
0x826C53: push    ebx
0x826C54: push    4
0x826C56: push    17h
0x826C58: call    sub_772CD0
0x826C5D: cmp     [esi+30h], ebx
0x826C60: jnz     short loc_826C6A
0x826C62: call    sub_772DF0
0x826C67: mov     [esi+30h], eax
0x826C6A: mov     ecx, [esi+30h]
0x826C6D: push    ebx
0x826C6E: push    1
0x826C70: push    0Eh
0x826C72: call    sub_772CD0
0x826C77: cmp     [esi+30h], ebx
0x826C7A: jnz     short loc_826C84
0x826C7C: call    sub_772DF0
0x826C81: mov     [esi+30h], eax
0x826C84: mov     ecx, [esi+30h]
0x826C87: push    ebx
0x826C88: push    ebx
0x826C89: push    34h ; '4'
0x826C8B: call    sub_772CD0
0x826C90: push    offset dword_B45830
0x826C95: lea     ecx, [esp+39Ch+var_380]
0x826C99: mov     ds:0B43DA0h, ebp
0x826C9F: mov     dword ptr ds:0B44430h, 19Ch
0x826CA9: mov     dword ptr ds:0B43710h, 18060h
0x826CB3: mov     dword ptr ds:0B44AC0h, 0Ch
0x826CBD: call    sub_76C890
0x826CC2: mov     esi, [esp+398h+var_380]
0x826CC6: cmp     dword ptr [esi+18h], 8
0x826CCA: jnb     loc_826FF9
0x826CD0: lea     eax, [esp+398h+var_128]
0x826CD7: push    eax
0x826CD8: call    sub_772630
0x826CDD: add     esp, 4
0x826CE0: push    eax
0x826CE1: lea     ecx, [esp+39Ch+a3]
0x826CE5: mov     byte ptr [esp+39Ch+var_4], 0BAh ; 'º'
0x826CED: call    sub_75FAE0
0x826CF2: mov     eax, [esp+398h+var_128]
0x826CF9: cmp     eax, ebx
0x826CFB: mov     byte ptr [esp+398h+var_4], 1
0x826D03: jz      short loc_826D17
0x826D05: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826D09: mov     ecx, eax
0x826D0B: add     eax, 5Ch ; '\'
0x826D0E: cmp     [eax], ebx
0x826D10: jnz     short loc_826D17
0x826D12: call    sub_772560
0x826D17: mov     edi, [esp+398h+a3]
0x826D1B: push    2
0x826D1D: push    1
0x826D1F: push    ebx
0x826D20: push    edi
0x826D21: call    sub_801110
0x826D26: add     esp, 10h
0x826D29: push    edi; a3
0x826D2A: push    ebx; a2
0x826D2B: mov     ecx, esi; this
0x826D2D: call    sub_760010
0x826D32: lea     ecx, [esp+398h+var_120]
0x826D39: push    ecx
0x826D3A: call    sub_772630
0x826D3F: add     esp, 4
0x826D42: push    eax
0x826D43: lea     ecx, [esp+39Ch+a3]
0x826D47: mov     byte ptr [esp+39Ch+var_4], 0BBh ; '»'
0x826D4F: call    sub_75FAE0
0x826D54: mov     eax, [esp+398h+var_120]
0x826D5B: cmp     eax, ebx
0x826D5D: mov     byte ptr [esp+398h+var_4], 1
0x826D65: jz      short loc_826D79
0x826D67: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826D6B: mov     ecx, eax
0x826D6D: add     eax, 5Ch ; '\'
0x826D70: cmp     [eax], ebx
0x826D72: jnz     short loc_826D79
0x826D74: call    sub_772560
0x826D79: mov     edi, [esp+398h+a3]
0x826D7D: push    2
0x826D7F: push    1
0x826D81: push    1
0x826D83: push    edi
0x826D84: call    sub_801110
0x826D89: add     esp, 10h
0x826D8C: push    edi; a3
0x826D8D: push    1; a2
0x826D8F: mov     ecx, esi; this
0x826D91: call    sub_760010
0x826D96: lea     edx, [esp+398h+var_118]
0x826D9D: push    edx
0x826D9E: call    sub_772630
0x826DA3: add     esp, 4
0x826DA6: push    eax
0x826DA7: lea     ecx, [esp+39Ch+a3]
0x826DAB: mov     byte ptr [esp+39Ch+var_4], 0BCh ; '¼'
0x826DB3: call    sub_75FAE0
0x826DB8: mov     eax, [esp+398h+var_118]
0x826DBF: cmp     eax, ebx
0x826DC1: mov     byte ptr [esp+398h+var_4], 1
0x826DC9: jz      short loc_826DDD
0x826DCB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826DCF: mov     ecx, eax
0x826DD1: add     eax, 5Ch ; '\'
0x826DD4: cmp     [eax], ebx
0x826DD6: jnz     short loc_826DDD
0x826DD8: call    sub_772560
0x826DDD: mov     edi, [esp+398h+a3]
0x826DE1: push    2
0x826DE3: push    1
0x826DE5: push    2
0x826DE7: push    edi
0x826DE8: call    sub_801110
0x826DED: add     esp, 10h
0x826DF0: push    edi; a3
0x826DF1: push    2; a2
0x826DF3: mov     ecx, esi; this
0x826DF5: call    sub_760010
0x826DFA: lea     eax, [esp+398h+var_110]
0x826E01: push    eax
0x826E02: call    sub_772630
0x826E07: add     esp, 4
0x826E0A: push    eax
0x826E0B: lea     ecx, [esp+39Ch+a3]
0x826E0F: mov     byte ptr [esp+39Ch+var_4], 0BDh ; '½'
0x826E17: call    sub_75FAE0
0x826E1C: mov     eax, [esp+398h+var_110]
0x826E23: cmp     eax, ebx
0x826E25: mov     byte ptr [esp+398h+var_4], 1
0x826E2D: jz      short loc_826E41
0x826E2F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826E33: mov     ecx, eax
0x826E35: add     eax, 5Ch ; '\'
0x826E38: cmp     [eax], ebx
0x826E3A: jnz     short loc_826E41
0x826E3C: call    sub_772560
0x826E41: mov     edi, [esp+398h+a3]
0x826E45: push    2
0x826E47: push    1
0x826E49: push    3
0x826E4B: push    edi
0x826E4C: call    sub_801110
0x826E51: add     esp, 10h
0x826E54: push    edi; a3
0x826E55: push    3; a2
0x826E57: mov     ecx, esi; this
0x826E59: call    sub_760010
0x826E5E: lea     ecx, [esp+398h+var_108]
0x826E65: push    ecx
0x826E66: call    sub_772630
0x826E6B: add     esp, 4
0x826E6E: push    eax
0x826E6F: lea     ecx, [esp+39Ch+a3]
0x826E73: mov     byte ptr [esp+39Ch+var_4], 0BEh ; '¾'
0x826E7B: call    sub_75FAE0
0x826E80: mov     eax, [esp+398h+var_108]
0x826E87: cmp     eax, ebx
0x826E89: mov     byte ptr [esp+398h+var_4], 1
0x826E91: jz      short loc_826EA5
0x826E93: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826E97: mov     ecx, eax
0x826E99: add     eax, 5Ch ; '\'
0x826E9C: cmp     [eax], ebx
0x826E9E: jnz     short loc_826EA5
0x826EA0: call    sub_772560
0x826EA5: mov     edi, [esp+398h+a3]
0x826EA9: push    2
0x826EAB: push    1
0x826EAD: push    4
0x826EAF: push    edi
0x826EB0: call    sub_801110
0x826EB5: add     esp, 10h
0x826EB8: push    edi; a3
0x826EB9: push    4; a2
0x826EBB: mov     ecx, esi; this
0x826EBD: call    sub_760010
0x826EC2: lea     edx, [esp+398h+var_100]
0x826EC9: push    edx
0x826ECA: call    sub_772630
0x826ECF: add     esp, 4
0x826ED2: push    eax
0x826ED3: lea     ecx, [esp+39Ch+a3]
0x826ED7: mov     byte ptr [esp+39Ch+var_4], 0BFh ; '¿'
0x826EDF: call    sub_75FAE0
0x826EE4: mov     eax, [esp+398h+var_100]
0x826EEB: cmp     eax, ebx
0x826EED: mov     byte ptr [esp+398h+var_4], 1
0x826EF5: jz      short loc_826F09
0x826EF7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826EFB: mov     ecx, eax
0x826EFD: add     eax, 5Ch ; '\'
0x826F00: cmp     [eax], ebx
0x826F02: jnz     short loc_826F09
0x826F04: call    sub_772560
0x826F09: mov     edi, [esp+398h+a3]
0x826F0D: push    ebx
0x826F0E: push    3
0x826F10: push    5
0x826F12: push    edi
0x826F13: call    sub_801110
0x826F18: mov     eax, ds:0B43110h
0x826F1D: add     esp, 10h
0x826F20: push    eax; a2
0x826F21: mov     ecx, edi; this
0x826F23: call    sub_76C910
0x826F28: push    edi; a3
0x826F29: push    5; a2
0x826F2B: mov     ecx, esi; this
0x826F2D: call    sub_760010
0x826F32: lea     ecx, [esp+398h+var_F8]
0x826F39: push    ecx
0x826F3A: call    sub_772630
0x826F3F: add     esp, 4
0x826F42: push    eax
0x826F43: lea     ecx, [esp+39Ch+a3]
0x826F47: mov     byte ptr [esp+39Ch+var_4], 0C0h ; 'À'
0x826F4F: call    sub_75FAE0
0x826F54: mov     eax, [esp+398h+var_F8]
0x826F5B: cmp     eax, ebx
0x826F5D: mov     byte ptr [esp+398h+var_4], 1
0x826F65: jz      short loc_826F79
0x826F67: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826F6B: mov     ecx, eax
0x826F6D: add     eax, 5Ch ; '\'
0x826F70: cmp     [eax], ebx
0x826F72: jnz     short loc_826F79
0x826F74: call    sub_772560
0x826F79: mov     edi, [esp+398h+a3]
0x826F7D: push    2
0x826F7F: push    1
0x826F81: push    6
0x826F83: push    edi
0x826F84: call    sub_801110
0x826F89: add     esp, 10h
0x826F8C: push    edi; a3
0x826F8D: push    6; a2
0x826F8F: mov     ecx, esi; this
0x826F91: call    sub_760010
0x826F96: lea     edx, [esp+398h+var_F0]
0x826F9D: push    edx
0x826F9E: call    sub_772630
0x826FA3: add     esp, 4
0x826FA6: push    eax
0x826FA7: lea     ecx, [esp+39Ch+a3]
0x826FAB: mov     byte ptr [esp+39Ch+var_4], 0C1h ; 'Á'
0x826FB3: call    sub_75FAE0
0x826FB8: mov     eax, [esp+398h+var_F0]
0x826FBF: cmp     eax, ebx
0x826FC1: mov     byte ptr [esp+398h+var_4], 1
0x826FC9: jz      short loc_826FDD
0x826FCB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x826FCF: mov     ecx, eax
0x826FD1: add     eax, 5Ch ; '\'
0x826FD4: cmp     [eax], ebx
0x826FD6: jnz     short loc_826FDD
0x826FD8: call    sub_772560
0x826FDD: mov     edi, [esp+398h+a3]
0x826FE1: push    ebx
0x826FE2: push    3
0x826FE4: push    7
0x826FE6: push    edi
0x826FE7: call    sub_801110
0x826FEC: add     esp, 10h
0x826FEF: push    edi; a3
0x826FF0: push    7; a2
0x826FF2: mov     ecx, esi; this
0x826FF4: call    sub_760010
0x826FF9: mov     eax, ds:0B45388h
0x826FFE: push    eax; a2
0x826FFF: mov     ecx, esi; this
0x827001: call    sub_7AECB0
0x827006: mov     ecx, ds:0B4517Ch
0x82700C: push    ecx; a2
0x82700D: mov     ecx, esi; this
0x82700F: call    sub_7AEC60
0x827014: cmp     [esi+30h], ebx
0x827017: jnz     short loc_827021
0x827019: call    sub_772DF0
0x82701E: mov     [esi+30h], eax
0x827021: mov     ecx, [esi+30h]
0x827024: push    ebx
0x827025: push    ebx
0x827026: push    1Bh
0x827028: call    sub_772CD0
0x82702D: cmp     [esi+30h], ebx
0x827030: jnz     short loc_82703A
0x827032: call    sub_772DF0
0x827037: mov     [esi+30h], eax
0x82703A: mov     ecx, [esi+30h]
0x82703D: push    ebx
0x82703E: push    ebx
0x82703F: push    0Fh
0x827041: call    sub_772CD0
0x827046: cmp     [esi+30h], ebx
0x827049: jnz     short loc_827053
0x82704B: call    sub_772DF0
0x827050: mov     [esi+30h], eax
0x827053: mov     ecx, [esi+30h]
0x827056: push    ebx
0x827057: push    1
0x827059: push    7
0x82705B: call    sub_772CD0
0x827060: cmp     [esi+30h], ebx
0x827063: jnz     short loc_82706D
0x827065: call    sub_772DF0
0x82706A: mov     [esi+30h], eax
0x82706D: mov     ecx, [esi+30h]
0x827070: push    ebx
0x827071: push    4
0x827073: push    17h
0x827075: call    sub_772CD0
0x82707A: cmp     [esi+30h], ebx
0x82707D: jnz     short loc_827087
0x82707F: call    sub_772DF0
0x827084: mov     [esi+30h], eax
0x827087: mov     ecx, [esi+30h]
0x82708A: push    ebx
0x82708B: push    1
0x82708D: push    0Eh
0x82708F: call    sub_772CD0
0x827094: cmp     [esi+30h], ebx
0x827097: jnz     short loc_8270A1
0x827099: call    sub_772DF0
0x82709E: mov     [esi+30h], eax
0x8270A1: mov     ecx, [esi+30h]
0x8270A4: push    ebx
0x8270A5: push    ebx
0x8270A6: push    34h ; '4'
0x8270A8: call    sub_772CD0
0x8270AD: push    offset dword_B45834
0x8270B2: lea     ecx, [esp+39Ch+var_380]
0x8270B6: mov     ds:0B43DB0h, ebp
0x8270BC: mov     dword ptr ds:0B44440h, 19Ch
0x8270C6: mov     dword ptr ds:0B43720h, 18060h
0x8270D0: mov     dword ptr ds:0B44AD0h, 0Ch
0x8270DA: call    sub_76C890
0x8270DF: mov     esi, [esp+398h+var_380]
0x8270E3: cmp     dword ptr [esi+18h], 8
0x8270E7: jnb     loc_827417
0x8270ED: lea     edx, [esp+398h+var_E8]
0x8270F4: push    edx
0x8270F5: call    sub_772630
0x8270FA: add     esp, 4
0x8270FD: push    eax
0x8270FE: lea     ecx, [esp+39Ch+a3]
0x827102: mov     byte ptr [esp+39Ch+var_4], 0C2h ; 'Â'
0x82710A: call    sub_75FAE0
0x82710F: mov     eax, [esp+398h+var_E8]
0x827116: cmp     eax, ebx
0x827118: mov     byte ptr [esp+398h+var_4], 1
0x827120: jz      short loc_827134
0x827122: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827126: mov     ecx, eax
0x827128: add     eax, 5Ch ; '\'
0x82712B: cmp     [eax], ebx
0x82712D: jnz     short loc_827134
0x82712F: call    sub_772560
0x827134: mov     edi, [esp+398h+a3]
0x827138: push    2
0x82713A: push    1
0x82713C: push    ebx
0x82713D: push    edi
0x82713E: call    sub_801110
0x827143: add     esp, 10h
0x827146: push    edi; a3
0x827147: push    ebx; a2
0x827148: mov     ecx, esi; this
0x82714A: call    sub_760010
0x82714F: lea     eax, [esp+398h+var_E0]
0x827156: push    eax
0x827157: call    sub_772630
0x82715C: add     esp, 4
0x82715F: push    eax
0x827160: lea     ecx, [esp+39Ch+a3]
0x827164: mov     byte ptr [esp+39Ch+var_4], 0C3h ; 'Ã'
0x82716C: call    sub_75FAE0
0x827171: mov     eax, [esp+398h+var_E0]
0x827178: cmp     eax, ebx
0x82717A: mov     byte ptr [esp+398h+var_4], 1
0x827182: jz      short loc_827196
0x827184: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827188: mov     ecx, eax
0x82718A: add     eax, 5Ch ; '\'
0x82718D: cmp     [eax], ebx
0x82718F: jnz     short loc_827196
0x827191: call    sub_772560
0x827196: mov     edi, [esp+398h+a3]
0x82719A: push    2
0x82719C: push    1
0x82719E: push    1
0x8271A0: push    edi
0x8271A1: call    sub_801110
0x8271A6: add     esp, 10h
0x8271A9: push    edi; a3
0x8271AA: push    1; a2
0x8271AC: mov     ecx, esi; this
0x8271AE: call    sub_760010
0x8271B3: lea     ecx, [esp+398h+var_D8]
0x8271BA: push    ecx
0x8271BB: call    sub_772630
0x8271C0: add     esp, 4
0x8271C3: push    eax
0x8271C4: lea     ecx, [esp+39Ch+a3]
0x8271C8: mov     byte ptr [esp+39Ch+var_4], 0C4h ; 'Ä'
0x8271D0: call    sub_75FAE0
0x8271D5: mov     eax, [esp+398h+var_D8]
0x8271DC: cmp     eax, ebx
0x8271DE: mov     byte ptr [esp+398h+var_4], 1
0x8271E6: jz      short loc_8271FA
0x8271E8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8271EC: mov     ecx, eax
0x8271EE: add     eax, 5Ch ; '\'
0x8271F1: cmp     [eax], ebx
0x8271F3: jnz     short loc_8271FA
0x8271F5: call    sub_772560
0x8271FA: mov     edi, [esp+398h+a3]
0x8271FE: push    2
0x827200: push    1
0x827202: push    2
0x827204: push    edi
0x827205: call    sub_801110
0x82720A: add     esp, 10h
0x82720D: push    edi; a3
0x82720E: push    2; a2
0x827210: mov     ecx, esi; this
0x827212: call    sub_760010
0x827217: lea     edx, [esp+398h+var_D0]
0x82721E: push    edx
0x82721F: call    sub_772630
0x827224: add     esp, 4
0x827227: push    eax
0x827228: lea     ecx, [esp+39Ch+a3]
0x82722C: mov     byte ptr [esp+39Ch+var_4], 0C5h ; 'Å'
0x827234: call    sub_75FAE0
0x827239: mov     eax, [esp+398h+var_D0]
0x827240: cmp     eax, ebx
0x827242: mov     byte ptr [esp+398h+var_4], 1
0x82724A: jz      short loc_82725E
0x82724C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827250: mov     ecx, eax
0x827252: add     eax, 5Ch ; '\'
0x827255: cmp     [eax], ebx
0x827257: jnz     short loc_82725E
0x827259: call    sub_772560
0x82725E: mov     edi, [esp+398h+a3]
0x827262: push    2
0x827264: push    1
0x827266: push    3
0x827268: push    edi
0x827269: call    sub_801110
0x82726E: add     esp, 10h
0x827271: push    edi; a3
0x827272: push    3; a2
0x827274: mov     ecx, esi; this
0x827276: call    sub_760010
0x82727B: lea     eax, [esp+398h+var_C8]
0x827282: push    eax
0x827283: call    sub_772630
0x827288: add     esp, 4
0x82728B: push    eax
0x82728C: lea     ecx, [esp+39Ch+a3]
0x827290: mov     byte ptr [esp+39Ch+var_4], 0C6h ; 'Æ'
0x827298: call    sub_75FAE0
0x82729D: mov     eax, [esp+398h+var_C8]
0x8272A4: cmp     eax, ebx
0x8272A6: mov     byte ptr [esp+398h+var_4], 1
0x8272AE: jz      short loc_8272C2
0x8272B0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8272B4: mov     ecx, eax
0x8272B6: add     eax, 5Ch ; '\'
0x8272B9: cmp     [eax], ebx
0x8272BB: jnz     short loc_8272C2
0x8272BD: call    sub_772560
0x8272C2: mov     edi, [esp+398h+a3]
0x8272C6: push    2
0x8272C8: push    1
0x8272CA: push    4
0x8272CC: push    edi
0x8272CD: call    sub_801110
0x8272D2: add     esp, 10h
0x8272D5: push    edi; a3
0x8272D6: push    4; a2
0x8272D8: mov     ecx, esi; this
0x8272DA: call    sub_760010
0x8272DF: lea     ecx, [esp+398h+var_C0]
0x8272E6: push    ecx
0x8272E7: call    sub_772630
0x8272EC: add     esp, 4
0x8272EF: push    eax
0x8272F0: lea     ecx, [esp+39Ch+a3]
0x8272F4: mov     byte ptr [esp+39Ch+var_4], 0C7h ; 'Ç'
0x8272FC: call    sub_75FAE0
0x827301: mov     eax, [esp+398h+var_C0]
0x827308: cmp     eax, ebx
0x82730A: mov     byte ptr [esp+398h+var_4], 1
0x827312: jz      short loc_827326
0x827314: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827318: mov     ecx, eax
0x82731A: add     eax, 5Ch ; '\'
0x82731D: cmp     [eax], ebx
0x82731F: jnz     short loc_827326
0x827321: call    sub_772560
0x827326: mov     edi, [esp+398h+a3]
0x82732A: push    ebx
0x82732B: push    3
0x82732D: push    5
0x82732F: push    edi
0x827330: call    sub_801110
0x827335: mov     edx, ds:0B43110h
0x82733B: add     esp, 10h
0x82733E: push    edx; a2
0x82733F: mov     ecx, edi; this
0x827341: call    sub_76C910
0x827346: push    edi; a3
0x827347: push    5; a2
0x827349: mov     ecx, esi; this
0x82734B: call    sub_760010
0x827350: lea     eax, [esp+398h+var_B8]
0x827357: push    eax
0x827358: call    sub_772630
0x82735D: add     esp, 4
0x827360: push    eax
0x827361: lea     ecx, [esp+39Ch+a3]
0x827365: mov     byte ptr [esp+39Ch+var_4], 0C8h ; 'È'
0x82736D: call    sub_75FAE0
0x827372: mov     eax, [esp+398h+var_B8]
0x827379: cmp     eax, ebx
0x82737B: mov     byte ptr [esp+398h+var_4], 1
0x827383: jz      short loc_827397
0x827385: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827389: mov     ecx, eax
0x82738B: add     eax, 5Ch ; '\'
0x82738E: cmp     [eax], ebx
0x827390: jnz     short loc_827397
0x827392: call    sub_772560
0x827397: mov     edi, [esp+398h+a3]
0x82739B: push    2
0x82739D: push    1
0x82739F: push    6
0x8273A1: push    edi
0x8273A2: call    sub_801110
0x8273A7: add     esp, 10h
0x8273AA: push    edi; a3
0x8273AB: push    6; a2
0x8273AD: mov     ecx, esi; this
0x8273AF: call    sub_760010
0x8273B4: lea     ecx, [esp+398h+var_B0]
0x8273BB: push    ecx
0x8273BC: call    sub_772630
0x8273C1: add     esp, 4
0x8273C4: push    eax
0x8273C5: lea     ecx, [esp+39Ch+a3]
0x8273C9: mov     byte ptr [esp+39Ch+var_4], 0C9h ; 'É'
0x8273D1: call    sub_75FAE0
0x8273D6: mov     eax, [esp+398h+var_B0]
0x8273DD: cmp     eax, ebx
0x8273DF: mov     byte ptr [esp+398h+var_4], 1
0x8273E7: jz      short loc_8273FB
0x8273E9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8273ED: mov     ecx, eax
0x8273EF: add     eax, 5Ch ; '\'
0x8273F2: cmp     [eax], ebx
0x8273F4: jnz     short loc_8273FB
0x8273F6: call    sub_772560
0x8273FB: mov     edi, [esp+398h+a3]
0x8273FF: push    ebx
0x827400: push    3
0x827402: push    7
0x827404: push    edi
0x827405: call    sub_801110
0x82740A: add     esp, 10h
0x82740D: push    edi; a3
0x82740E: push    7; a2
0x827410: mov     ecx, esi; this
0x827412: call    sub_760010
0x827417: mov     edx, ds:0B4538Ch
0x82741D: push    edx; a2
0x82741E: mov     ecx, esi; this
0x827420: call    sub_7AECB0
0x827425: mov     eax, ds:0B45174h
0x82742A: push    eax; a2
0x82742B: mov     ecx, esi; this
0x82742D: call    sub_7AEC60
0x827432: cmp     [esi+30h], ebx
0x827435: jnz     short loc_82743F
0x827437: call    sub_772DF0
0x82743C: mov     [esi+30h], eax
0x82743F: mov     ecx, [esi+30h]
0x827442: push    ebx
0x827443: push    ebx
0x827444: push    1Bh
0x827446: call    sub_772CD0
0x82744B: cmp     [esi+30h], ebx
0x82744E: jnz     short loc_827458
0x827450: call    sub_772DF0
0x827455: mov     [esi+30h], eax
0x827458: mov     ecx, [esi+30h]
0x82745B: push    ebx
0x82745C: push    ebx
0x82745D: push    0Fh
0x82745F: call    sub_772CD0
0x827464: cmp     [esi+30h], ebx
0x827467: jnz     short loc_827471
0x827469: call    sub_772DF0
0x82746E: mov     [esi+30h], eax
0x827471: mov     ecx, [esi+30h]
0x827474: push    ebx
0x827475: push    1
0x827477: push    7
0x827479: call    sub_772CD0
0x82747E: cmp     [esi+30h], ebx
0x827481: jnz     short loc_82748B
0x827483: call    sub_772DF0
0x827488: mov     [esi+30h], eax
0x82748B: mov     ecx, [esi+30h]
0x82748E: push    ebx
0x82748F: push    4
0x827491: push    17h
0x827493: call    sub_772CD0
0x827498: cmp     [esi+30h], ebx
0x82749B: jnz     short loc_8274A5
0x82749D: call    sub_772DF0
0x8274A2: mov     [esi+30h], eax
0x8274A5: mov     ecx, [esi+30h]
0x8274A8: push    ebx
0x8274A9: push    1
0x8274AB: push    0Eh
0x8274AD: call    sub_772CD0
0x8274B2: cmp     [esi+30h], ebx
0x8274B5: jnz     short loc_8274BF
0x8274B7: call    sub_772DF0
0x8274BC: mov     [esi+30h], eax
0x8274BF: mov     ecx, [esi+30h]
0x8274C2: push    ebx
0x8274C3: push    ebx
0x8274C4: push    34h ; '4'
0x8274C6: call    sub_772CD0
0x8274CB: mov     ebp, 590F8h
0x8274D0: push    offset dword_B45838
0x8274D5: lea     ecx, [esp+39Ch+var_380]
0x8274D9: mov     ds:0B43DB4h, ebp
0x8274DF: mov     dword ptr ds:0B44444h, 11Ch
0x8274E9: mov     dword ptr ds:0B43724h, 18060h
0x8274F3: mov     dword ptr ds:0B44AD4h, 8
0x8274FD: call    sub_76C890
0x827502: mov     esi, [esp+398h+var_380]
0x827506: cmp     dword ptr [esi+18h], 8
0x82750A: jnb     loc_82783A
0x827510: lea     ecx, [esp+398h+var_A8]
0x827517: push    ecx
0x827518: call    sub_772630
0x82751D: add     esp, 4
0x827520: push    eax
0x827521: lea     ecx, [esp+39Ch+a3]
0x827525: mov     byte ptr [esp+39Ch+var_4], 0CAh ; 'Ê'
0x82752D: call    sub_75FAE0
0x827532: mov     eax, [esp+398h+var_A8]
0x827539: cmp     eax, ebx
0x82753B: mov     byte ptr [esp+398h+var_4], 1
0x827543: jz      short loc_827557
0x827545: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827549: mov     ecx, eax
0x82754B: add     eax, 5Ch ; '\'
0x82754E: cmp     [eax], ebx
0x827550: jnz     short loc_827557
0x827552: call    sub_772560
0x827557: mov     edi, [esp+398h+a3]
0x82755B: push    2
0x82755D: push    1
0x82755F: push    ebx
0x827560: push    edi
0x827561: call    sub_801110
0x827566: add     esp, 10h
0x827569: push    edi; a3
0x82756A: push    ebx; a2
0x82756B: mov     ecx, esi; this
0x82756D: call    sub_760010
0x827572: lea     edx, [esp+398h+var_A0]
0x827579: push    edx
0x82757A: call    sub_772630
0x82757F: add     esp, 4
0x827582: push    eax
0x827583: lea     ecx, [esp+39Ch+a3]
0x827587: mov     byte ptr [esp+39Ch+var_4], 0CBh ; 'Ë'
0x82758F: call    sub_75FAE0
0x827594: mov     eax, [esp+398h+var_A0]
0x82759B: cmp     eax, ebx
0x82759D: mov     byte ptr [esp+398h+var_4], 1
0x8275A5: jz      short loc_8275B9
0x8275A7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8275AB: mov     ecx, eax
0x8275AD: add     eax, 5Ch ; '\'
0x8275B0: cmp     [eax], ebx
0x8275B2: jnz     short loc_8275B9
0x8275B4: call    sub_772560
0x8275B9: mov     edi, [esp+398h+a3]
0x8275BD: push    2
0x8275BF: push    1
0x8275C1: push    1
0x8275C3: push    edi
0x8275C4: call    sub_801110
0x8275C9: add     esp, 10h
0x8275CC: push    edi; a3
0x8275CD: push    1; a2
0x8275CF: mov     ecx, esi; this
0x8275D1: call    sub_760010
0x8275D6: lea     eax, [esp+398h+var_98]
0x8275DD: push    eax
0x8275DE: call    sub_772630
0x8275E3: add     esp, 4
0x8275E6: push    eax
0x8275E7: lea     ecx, [esp+39Ch+a3]
0x8275EB: mov     byte ptr [esp+39Ch+var_4], 0CCh ; 'Ì'
0x8275F3: call    sub_75FAE0
0x8275F8: mov     eax, [esp+398h+var_98]
0x8275FF: cmp     eax, ebx
0x827601: mov     byte ptr [esp+398h+var_4], 1
0x827609: jz      short loc_82761D
0x82760B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82760F: mov     ecx, eax
0x827611: add     eax, 5Ch ; '\'
0x827614: cmp     [eax], ebx
0x827616: jnz     short loc_82761D
0x827618: call    sub_772560
0x82761D: mov     edi, [esp+398h+a3]
0x827621: push    2
0x827623: push    1
0x827625: push    2
0x827627: push    edi
0x827628: call    sub_801110
0x82762D: add     esp, 10h
0x827630: push    edi; a3
0x827631: push    2; a2
0x827633: mov     ecx, esi; this
0x827635: call    sub_760010
0x82763A: lea     ecx, [esp+398h+var_90]
0x827641: push    ecx
0x827642: call    sub_772630
0x827647: add     esp, 4
0x82764A: push    eax
0x82764B: lea     ecx, [esp+39Ch+a3]
0x82764F: mov     byte ptr [esp+39Ch+var_4], 0CDh ; 'Í'
0x827657: call    sub_75FAE0
0x82765C: mov     eax, [esp+398h+var_90]
0x827663: cmp     eax, ebx
0x827665: mov     byte ptr [esp+398h+var_4], 1
0x82766D: jz      short loc_827681
0x82766F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827673: mov     ecx, eax
0x827675: add     eax, 5Ch ; '\'
0x827678: cmp     [eax], ebx
0x82767A: jnz     short loc_827681
0x82767C: call    sub_772560
0x827681: mov     edi, [esp+398h+a3]
0x827685: push    2
0x827687: push    1
0x827689: push    3
0x82768B: push    edi
0x82768C: call    sub_801110
0x827691: add     esp, 10h
0x827694: push    edi; a3
0x827695: push    3; a2
0x827697: mov     ecx, esi; this
0x827699: call    sub_760010
0x82769E: lea     edx, [esp+398h+var_88]
0x8276A5: push    edx
0x8276A6: call    sub_772630
0x8276AB: add     esp, 4
0x8276AE: push    eax
0x8276AF: lea     ecx, [esp+39Ch+a3]
0x8276B3: mov     byte ptr [esp+39Ch+var_4], 0CEh ; 'Î'
0x8276BB: call    sub_75FAE0
0x8276C0: mov     eax, [esp+398h+var_88]
0x8276C7: cmp     eax, ebx
0x8276C9: mov     byte ptr [esp+398h+var_4], 1
0x8276D1: jz      short loc_8276E5
0x8276D3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8276D7: mov     ecx, eax
0x8276D9: add     eax, 5Ch ; '\'
0x8276DC: cmp     [eax], ebx
0x8276DE: jnz     short loc_8276E5
0x8276E0: call    sub_772560
0x8276E5: mov     edi, [esp+398h+a3]
0x8276E9: push    2
0x8276EB: push    1
0x8276ED: push    4
0x8276EF: push    edi
0x8276F0: call    sub_801110
0x8276F5: add     esp, 10h
0x8276F8: push    edi; a3
0x8276F9: push    4; a2
0x8276FB: mov     ecx, esi; this
0x8276FD: call    sub_760010
0x827702: lea     eax, [esp+398h+var_80]
0x827709: push    eax
0x82770A: call    sub_772630
0x82770F: add     esp, 4
0x827712: push    eax
0x827713: lea     ecx, [esp+39Ch+a3]
0x827717: mov     byte ptr [esp+39Ch+var_4], 0CFh ; 'Ï'
0x82771F: call    sub_75FAE0
0x827724: mov     eax, [esp+398h+var_80]
0x82772B: cmp     eax, ebx
0x82772D: mov     byte ptr [esp+398h+var_4], 1
0x827735: jz      short loc_827749
0x827737: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82773B: mov     ecx, eax
0x82773D: add     eax, 5Ch ; '\'
0x827740: cmp     [eax], ebx
0x827742: jnz     short loc_827749
0x827744: call    sub_772560
0x827749: mov     edi, [esp+398h+a3]
0x82774D: push    ebx
0x82774E: push    3
0x827750: push    5
0x827752: push    edi
0x827753: call    sub_801110
0x827758: mov     ecx, ds:0B43110h
0x82775E: add     esp, 10h
0x827761: push    ecx; a2
0x827762: mov     ecx, edi; this
0x827764: call    sub_76C910
0x827769: push    edi; a3
0x82776A: push    5; a2
0x82776C: mov     ecx, esi; this
0x82776E: call    sub_760010
0x827773: lea     edx, [esp+398h+var_78]
0x82777A: push    edx
0x82777B: call    sub_772630
0x827780: add     esp, 4
0x827783: push    eax
0x827784: lea     ecx, [esp+39Ch+a3]
0x827788: mov     byte ptr [esp+39Ch+var_4], 0D0h ; 'Ð'
0x827790: call    sub_75FAE0
0x827795: mov     eax, [esp+398h+var_78]
0x82779C: cmp     eax, ebx
0x82779E: mov     byte ptr [esp+398h+var_4], 1
0x8277A6: jz      short loc_8277BA
0x8277A8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8277AC: mov     ecx, eax
0x8277AE: add     eax, 5Ch ; '\'
0x8277B1: cmp     [eax], ebx
0x8277B3: jnz     short loc_8277BA
0x8277B5: call    sub_772560
0x8277BA: mov     edi, [esp+398h+a3]
0x8277BE: push    2
0x8277C0: push    1
0x8277C2: push    6
0x8277C4: push    edi
0x8277C5: call    sub_801110
0x8277CA: add     esp, 10h
0x8277CD: push    edi; a3
0x8277CE: push    6; a2
0x8277D0: mov     ecx, esi; this
0x8277D2: call    sub_760010
0x8277D7: lea     eax, [esp+398h+var_70]
0x8277DE: push    eax
0x8277DF: call    sub_772630
0x8277E4: add     esp, 4
0x8277E7: push    eax
0x8277E8: lea     ecx, [esp+39Ch+a3]
0x8277EC: mov     byte ptr [esp+39Ch+var_4], 0D1h ; 'Ñ'
0x8277F4: call    sub_75FAE0
0x8277F9: mov     eax, [esp+398h+var_70]
0x827800: cmp     eax, ebx
0x827802: mov     byte ptr [esp+398h+var_4], 1
0x82780A: jz      short loc_82781E
0x82780C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827810: mov     ecx, eax
0x827812: add     eax, 5Ch ; '\'
0x827815: cmp     [eax], ebx
0x827817: jnz     short loc_82781E
0x827819: call    sub_772560
0x82781E: mov     edi, [esp+398h+a3]
0x827822: push    ebx
0x827823: push    3
0x827825: push    7
0x827827: push    edi
0x827828: call    sub_801110
0x82782D: add     esp, 10h
0x827830: push    edi; a3
0x827831: push    7; a2
0x827833: mov     ecx, esi; this
0x827835: call    sub_760010
0x82783A: mov     ecx, ds:0B4538Ch
0x827840: push    ecx; a2
0x827841: mov     ecx, esi; this
0x827843: call    sub_7AECB0
0x827848: mov     edx, ds:0B45178h
0x82784E: push    edx; a2
0x82784F: mov     ecx, esi; this
0x827851: call    sub_7AEC60
0x827856: cmp     [esi+30h], ebx
0x827859: jnz     short loc_827863
0x82785B: call    sub_772DF0
0x827860: mov     [esi+30h], eax
0x827863: mov     ecx, [esi+30h]
0x827866: push    ebx
0x827867: push    ebx
0x827868: push    1Bh
0x82786A: call    sub_772CD0
0x82786F: cmp     [esi+30h], ebx
0x827872: jnz     short loc_82787C
0x827874: call    sub_772DF0
0x827879: mov     [esi+30h], eax
0x82787C: mov     ecx, [esi+30h]
0x82787F: push    ebx
0x827880: push    ebx
0x827881: push    0Fh
0x827883: call    sub_772CD0
0x827888: cmp     [esi+30h], ebx
0x82788B: jnz     short loc_827895
0x82788D: call    sub_772DF0
0x827892: mov     [esi+30h], eax
0x827895: mov     ecx, [esi+30h]
0x827898: push    ebx
0x827899: push    1
0x82789B: push    7
0x82789D: call    sub_772CD0
0x8278A2: cmp     [esi+30h], ebx
0x8278A5: jnz     short loc_8278AF
0x8278A7: call    sub_772DF0
0x8278AC: mov     [esi+30h], eax
0x8278AF: mov     ecx, [esi+30h]
0x8278B2: push    ebx
0x8278B3: push    4
0x8278B5: push    17h
0x8278B7: call    sub_772CD0
0x8278BC: cmp     [esi+30h], ebx
0x8278BF: jnz     short loc_8278C9
0x8278C1: call    sub_772DF0
0x8278C6: mov     [esi+30h], eax
0x8278C9: mov     ecx, [esi+30h]
0x8278CC: push    ebx
0x8278CD: push    1
0x8278CF: push    0Eh
0x8278D1: call    sub_772CD0
0x8278D6: cmp     [esi+30h], ebx
0x8278D9: jnz     short loc_8278E3
0x8278DB: call    sub_772DF0
0x8278E0: mov     [esi+30h], eax
0x8278E3: mov     ecx, [esi+30h]
0x8278E6: push    ebx
0x8278E7: push    ebx
0x8278E8: push    34h ; '4'
0x8278EA: call    sub_772CD0
0x8278EF: push    offset dword_B45838
0x8278F4: lea     ecx, [esp+39Ch+var_380]
0x8278F8: mov     ds:0B43DB8h, ebp
0x8278FE: mov     dword ptr ds:0B44448h, 19Ch
0x827908: mov     dword ptr ds:0B43728h, 18060h
0x827912: mov     dword ptr ds:0B44AD8h, 0Ch
0x82791C: call    sub_76C890
0x827921: mov     esi, [esp+398h+var_380]
0x827925: cmp     dword ptr [esi+18h], 8
0x827929: jnb     loc_827C58
0x82792F: lea     eax, [esp+398h+var_68]
0x827936: push    eax
0x827937: call    sub_772630
0x82793C: add     esp, 4
0x82793F: push    eax
0x827940: lea     ecx, [esp+39Ch+a3]
0x827944: mov     byte ptr [esp+39Ch+var_4], 0D2h ; 'Ò'
0x82794C: call    sub_75FAE0
0x827951: mov     eax, [esp+398h+var_68]
0x827958: cmp     eax, ebx
0x82795A: mov     byte ptr [esp+398h+var_4], 1
0x827962: jz      short loc_827976
0x827964: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827968: mov     ecx, eax
0x82796A: add     eax, 5Ch ; '\'
0x82796D: cmp     [eax], ebx
0x82796F: jnz     short loc_827976
0x827971: call    sub_772560
0x827976: mov     edi, [esp+398h+a3]
0x82797A: push    2
0x82797C: push    1
0x82797E: push    ebx
0x82797F: push    edi
0x827980: call    sub_801110
0x827985: add     esp, 10h
0x827988: push    edi; a3
0x827989: push    ebx; a2
0x82798A: mov     ecx, esi; this
0x82798C: call    sub_760010
0x827991: lea     ecx, [esp+398h+var_60]
0x827998: push    ecx
0x827999: call    sub_772630
0x82799E: add     esp, 4
0x8279A1: push    eax
0x8279A2: lea     ecx, [esp+39Ch+a3]
0x8279A6: mov     byte ptr [esp+39Ch+var_4], 0D3h ; 'Ó'
0x8279AE: call    sub_75FAE0
0x8279B3: mov     eax, [esp+398h+var_60]
0x8279BA: cmp     eax, ebx
0x8279BC: mov     byte ptr [esp+398h+var_4], 1
0x8279C4: jz      short loc_8279D8
0x8279C6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8279CA: mov     ecx, eax
0x8279CC: add     eax, 5Ch ; '\'
0x8279CF: cmp     [eax], ebx
0x8279D1: jnz     short loc_8279D8
0x8279D3: call    sub_772560
0x8279D8: mov     edi, [esp+398h+a3]
0x8279DC: push    2
0x8279DE: push    1
0x8279E0: push    1
0x8279E2: push    edi
0x8279E3: call    sub_801110
0x8279E8: add     esp, 10h
0x8279EB: push    edi; a3
0x8279EC: push    1; a2
0x8279EE: mov     ecx, esi; this
0x8279F0: call    sub_760010
0x8279F5: lea     edx, [esp+398h+var_58]
0x8279FC: push    edx
0x8279FD: call    sub_772630
0x827A02: add     esp, 4
0x827A05: push    eax
0x827A06: lea     ecx, [esp+39Ch+a3]
0x827A0A: mov     byte ptr [esp+39Ch+var_4], 0D4h ; 'Ô'
0x827A12: call    sub_75FAE0
0x827A17: mov     eax, [esp+398h+var_58]
0x827A1E: cmp     eax, ebx
0x827A20: mov     byte ptr [esp+398h+var_4], 1
0x827A28: jz      short loc_827A3C
0x827A2A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827A2E: mov     ecx, eax
0x827A30: add     eax, 5Ch ; '\'
0x827A33: cmp     [eax], ebx
0x827A35: jnz     short loc_827A3C
0x827A37: call    sub_772560
0x827A3C: mov     edi, [esp+398h+a3]
0x827A40: push    2
0x827A42: push    1
0x827A44: push    2
0x827A46: push    edi
0x827A47: call    sub_801110
0x827A4C: add     esp, 10h
0x827A4F: push    edi; a3
0x827A50: push    2; a2
0x827A52: mov     ecx, esi; this
0x827A54: call    sub_760010
0x827A59: lea     eax, [esp+398h+var_50]
0x827A60: push    eax
0x827A61: call    sub_772630
0x827A66: add     esp, 4
0x827A69: push    eax
0x827A6A: lea     ecx, [esp+39Ch+a3]
0x827A6E: mov     byte ptr [esp+39Ch+var_4], 0D5h ; 'Õ'
0x827A76: call    sub_75FAE0
0x827A7B: mov     eax, [esp+398h+var_50]
0x827A82: cmp     eax, ebx
0x827A84: mov     byte ptr [esp+398h+var_4], 1
0x827A8C: jz      short loc_827AA0
0x827A8E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827A92: mov     ecx, eax
0x827A94: add     eax, 5Ch ; '\'
0x827A97: cmp     [eax], ebx
0x827A99: jnz     short loc_827AA0
0x827A9B: call    sub_772560
0x827AA0: mov     edi, [esp+398h+a3]
0x827AA4: push    2
0x827AA6: push    1
0x827AA8: push    3
0x827AAA: push    edi
0x827AAB: call    sub_801110
0x827AB0: add     esp, 10h
0x827AB3: push    edi; a3
0x827AB4: push    3; a2
0x827AB6: mov     ecx, esi; this
0x827AB8: call    sub_760010
0x827ABD: lea     ecx, [esp+398h+var_48]
0x827AC4: push    ecx
0x827AC5: call    sub_772630
0x827ACA: add     esp, 4
0x827ACD: push    eax
0x827ACE: lea     ecx, [esp+39Ch+a3]
0x827AD2: mov     byte ptr [esp+39Ch+var_4], 0D6h ; 'Ö'
0x827ADA: call    sub_75FAE0
0x827ADF: mov     eax, [esp+398h+var_48]
0x827AE6: cmp     eax, ebx
0x827AE8: mov     byte ptr [esp+398h+var_4], 1
0x827AF0: jz      short loc_827B04
0x827AF2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827AF6: mov     ecx, eax
0x827AF8: add     eax, 5Ch ; '\'
0x827AFB: cmp     [eax], ebx
0x827AFD: jnz     short loc_827B04
0x827AFF: call    sub_772560
0x827B04: mov     edi, [esp+398h+a3]
0x827B08: push    2
0x827B0A: push    1
0x827B0C: push    4
0x827B0E: push    edi
0x827B0F: call    sub_801110
0x827B14: add     esp, 10h
0x827B17: push    edi; a3
0x827B18: push    4; a2
0x827B1A: mov     ecx, esi; this
0x827B1C: call    sub_760010
0x827B21: lea     edx, [esp+398h+var_40]
0x827B28: push    edx
0x827B29: call    sub_772630
0x827B2E: add     esp, 4
0x827B31: push    eax
0x827B32: lea     ecx, [esp+39Ch+a3]
0x827B36: mov     byte ptr [esp+39Ch+var_4], 0D7h ; '×'
0x827B3E: call    sub_75FAE0
0x827B43: mov     eax, [esp+398h+var_40]
0x827B4A: cmp     eax, ebx
0x827B4C: mov     byte ptr [esp+398h+var_4], 1
0x827B54: jz      short loc_827B68
0x827B56: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827B5A: mov     ecx, eax
0x827B5C: add     eax, 5Ch ; '\'
0x827B5F: cmp     [eax], ebx
0x827B61: jnz     short loc_827B68
0x827B63: call    sub_772560
0x827B68: mov     edi, [esp+398h+a3]
0x827B6C: push    ebx
0x827B6D: push    3
0x827B6F: push    5
0x827B71: push    edi
0x827B72: call    sub_801110
0x827B77: mov     eax, ds:0B43110h
0x827B7C: add     esp, 10h
0x827B7F: push    eax; a2
0x827B80: mov     ecx, edi; this
0x827B82: call    sub_76C910
0x827B87: push    edi; a3
0x827B88: push    5; a2
0x827B8A: mov     ecx, esi; this
0x827B8C: call    sub_760010
0x827B91: lea     ecx, [esp+398h+var_38]
0x827B98: push    ecx
0x827B99: call    sub_772630
0x827B9E: add     esp, 4
0x827BA1: push    eax
0x827BA2: lea     ecx, [esp+39Ch+a3]
0x827BA6: mov     byte ptr [esp+39Ch+var_4], 0D8h ; 'Ø'
0x827BAE: call    sub_75FAE0
0x827BB3: mov     eax, [esp+398h+var_38]
0x827BBA: cmp     eax, ebx
0x827BBC: mov     byte ptr [esp+398h+var_4], 1
0x827BC4: jz      short loc_827BD8
0x827BC6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827BCA: mov     ecx, eax
0x827BCC: add     eax, 5Ch ; '\'
0x827BCF: cmp     [eax], ebx
0x827BD1: jnz     short loc_827BD8
0x827BD3: call    sub_772560
0x827BD8: mov     edi, [esp+398h+a3]
0x827BDC: push    2
0x827BDE: push    1
0x827BE0: push    6
0x827BE2: push    edi
0x827BE3: call    sub_801110
0x827BE8: add     esp, 10h
0x827BEB: push    edi; a3
0x827BEC: push    6; a2
0x827BEE: mov     ecx, esi; this
0x827BF0: call    sub_760010
0x827BF5: lea     edx, [esp+398h+var_30]
0x827BFC: push    edx
0x827BFD: call    sub_772630
0x827C02: add     esp, 4
0x827C05: push    eax
0x827C06: lea     ecx, [esp+39Ch+a3]
0x827C0A: mov     byte ptr [esp+39Ch+var_4], 0D9h ; 'Ù'
0x827C12: call    sub_75FAE0
0x827C17: mov     eax, [esp+398h+var_30]
0x827C1E: cmp     eax, ebx
0x827C20: mov     byte ptr [esp+398h+var_4], 1
0x827C28: jz      short loc_827C3C
0x827C2A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827C2E: mov     ecx, eax
0x827C30: add     eax, 5Ch ; '\'
0x827C33: cmp     [eax], ebx
0x827C35: jnz     short loc_827C3C
0x827C37: call    sub_772560
0x827C3C: mov     edi, [esp+398h+a3]
0x827C40: push    ebx
0x827C41: push    3
0x827C43: push    7
0x827C45: push    edi
0x827C46: call    sub_801110
0x827C4B: add     esp, 10h
0x827C4E: push    edi; a3
0x827C4F: push    7; a2
0x827C51: mov     ecx, esi; this
0x827C53: call    sub_760010
0x827C58: mov     eax, ds:0B4538Ch
0x827C5D: push    eax; a2
0x827C5E: mov     ecx, esi; this
0x827C60: call    sub_7AECB0
0x827C65: mov     ecx, ds:0B45178h
0x827C6B: push    ecx; a2
0x827C6C: mov     ecx, esi; this
0x827C6E: call    sub_7AEC60
0x827C73: cmp     [esi+30h], ebx
0x827C76: jnz     short loc_827C80
0x827C78: call    sub_772DF0
0x827C7D: mov     [esi+30h], eax
0x827C80: mov     ecx, [esi+30h]
0x827C83: push    ebx
0x827C84: push    ebx
0x827C85: push    1Bh
0x827C87: call    sub_772CD0
0x827C8C: cmp     [esi+30h], ebx
0x827C8F: jnz     short loc_827C99
0x827C91: call    sub_772DF0
0x827C96: mov     [esi+30h], eax
0x827C99: mov     ecx, [esi+30h]
0x827C9C: push    ebx
0x827C9D: push    ebx
0x827C9E: push    0Fh
0x827CA0: call    sub_772CD0
0x827CA5: cmp     [esi+30h], ebx
0x827CA8: jnz     short loc_827CB2
0x827CAA: call    sub_772DF0
0x827CAF: mov     [esi+30h], eax
0x827CB2: mov     ecx, [esi+30h]
0x827CB5: push    ebx
0x827CB6: push    1
0x827CB8: push    7
0x827CBA: call    sub_772CD0
0x827CBF: cmp     [esi+30h], ebx
0x827CC2: jnz     short loc_827CCC
0x827CC4: call    sub_772DF0
0x827CC9: mov     [esi+30h], eax
0x827CCC: mov     ecx, [esi+30h]
0x827CCF: push    ebx
0x827CD0: push    4
0x827CD2: push    17h
0x827CD4: call    sub_772CD0
0x827CD9: cmp     [esi+30h], ebx
0x827CDC: jnz     short loc_827CE6
0x827CDE: call    sub_772DF0
0x827CE3: mov     [esi+30h], eax
0x827CE6: mov     ecx, [esi+30h]
0x827CE9: push    ebx
0x827CEA: push    1
0x827CEC: push    0Eh
0x827CEE: call    sub_772CD0
0x827CF3: cmp     [esi+30h], ebx
0x827CF6: jnz     short loc_827D00
0x827CF8: call    sub_772DF0
0x827CFD: mov     [esi+30h], eax
0x827D00: mov     ecx, [esi+30h]
0x827D03: push    ebx
0x827D04: push    ebx
0x827D05: push    34h ; '4'
0x827D07: call    sub_772CD0
0x827D0C: push    offset dword_B455B8
0x827D11: lea     ecx, [esp+39Ch+var_380]
0x827D15: mov     ds:0B43DB8h, ebp
0x827D1B: mov     dword ptr ds:0B44448h, 19Ch
0x827D25: mov     dword ptr ds:0B43728h, 18060h
0x827D2F: mov     dword ptr ds:0B44AD8h, 0Ch
0x827D39: call    sub_76C890
0x827D3E: mov     esi, [esp+398h+var_380]
0x827D42: cmp     dword ptr [esi+18h], 1
0x827D46: jnb     short loc_827DAD
0x827D48: lea     edx, [esp+398h+var_28]
0x827D4F: push    edx
0x827D50: call    sub_772630
0x827D55: add     esp, 4
0x827D58: push    eax
0x827D59: lea     ecx, [esp+39Ch+a3]
0x827D5D: mov     byte ptr [esp+39Ch+var_4], 0DAh ; 'Ú'
0x827D65: call    sub_75FAE0
0x827D6A: mov     eax, [esp+398h+var_28]
0x827D71: cmp     eax, ebx
0x827D73: mov     byte ptr [esp+398h+var_4], 1
0x827D7B: jz      short loc_827D8F
0x827D7D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827D81: mov     ecx, eax
0x827D83: add     eax, 5Ch ; '\'
0x827D86: cmp     [eax], ebx
0x827D88: jnz     short loc_827D8F
0x827D8A: call    sub_772560
0x827D8F: mov     edi, [esp+398h+a3]
0x827D93: push    2
0x827D95: push    1
0x827D97: push    ebx
0x827D98: push    edi
0x827D99: call    sub_801110
0x827D9E: mov     eax, [esi+14h]
0x827DA1: add     esp, 10h
0x827DA4: push    edi; a3
0x827DA5: push    eax; a2
0x827DA6: mov     ecx, esi; this
0x827DA8: call    sub_760010
0x827DAD: mov     ecx, ds:0B45434h
0x827DB3: push    ecx; a2
0x827DB4: mov     ecx, esi; this
0x827DB6: call    sub_7AECB0
0x827DBB: mov     edx, ds:0B4522Ch
0x827DC1: push    edx; a2
0x827DC2: mov     ecx, esi; this
0x827DC4: call    sub_7AEC60
0x827DC9: cmp     [esi+30h], ebx
0x827DCC: jnz     short loc_827DD6
0x827DCE: call    sub_772DF0
0x827DD3: mov     [esi+30h], eax
0x827DD6: mov     ecx, [esi+30h]
0x827DD9: push    ebx
0x827DDA: push    ebx
0x827DDB: push    1Bh
0x827DDD: call    sub_772CD0
0x827DE2: cmp     [esi+30h], ebx
0x827DE5: jnz     short loc_827DEF
0x827DE7: call    sub_772DF0
0x827DEC: mov     [esi+30h], eax
0x827DEF: mov     ecx, [esi+30h]
0x827DF2: push    ebx
0x827DF3: push    ebx
0x827DF4: push    0Fh
0x827DF6: call    sub_772CD0
0x827DFB: cmp     [esi+30h], ebx
0x827DFE: jnz     short loc_827E08
0x827E00: call    sub_772DF0
0x827E05: mov     [esi+30h], eax
0x827E08: mov     ecx, [esi+30h]
0x827E0B: push    ebx
0x827E0C: push    1
0x827E0E: push    7
0x827E10: call    sub_772CD0
0x827E15: cmp     [esi+30h], ebx
0x827E18: jnz     short loc_827E22
0x827E1A: call    sub_772DF0
0x827E1F: mov     [esi+30h], eax
0x827E22: mov     ecx, [esi+30h]
0x827E25: push    ebx
0x827E26: push    4
0x827E28: push    17h
0x827E2A: call    sub_772CD0
0x827E2F: cmp     [esi+30h], ebx
0x827E32: jnz     short loc_827E3C
0x827E34: call    sub_772DF0
0x827E39: mov     [esi+30h], eax
0x827E3C: mov     ecx, [esi+30h]
0x827E3F: push    ebx
0x827E40: push    1
0x827E42: push    0Eh
0x827E44: call    sub_772CD0
0x827E49: cmp     [esi+30h], ebx
0x827E4C: jnz     short loc_827E56
0x827E4E: call    sub_772DF0
0x827E53: mov     [esi+30h], eax
0x827E56: mov     ecx, [esi+30h]
0x827E59: push    ebx
0x827E5A: push    ebx
0x827E5B: push    34h ; '4'
0x827E5D: call    sub_772CD0
0x827E62: mov     ebp, 400802h
0x827E67: push    offset dword_B455BC
0x827E6C: lea     ecx, [esp+39Ch+var_380]
0x827E70: mov     ds:0B43B38h, ebp
0x827E76: mov     ds:0B441C8h, ebx
0x827E7C: call    sub_76C890
0x827E81: mov     esi, [esp+398h+var_380]
0x827E85: cmp     dword ptr [esi+18h], 1
0x827E89: jnb     short loc_827EF0
0x827E8B: lea     eax, [esp+398h+var_20]
0x827E92: push    eax
0x827E93: call    sub_772630
0x827E98: add     esp, 4
0x827E9B: push    eax
0x827E9C: lea     ecx, [esp+39Ch+a3]
0x827EA0: mov     byte ptr [esp+39Ch+var_4], 0DBh ; 'Û'
0x827EA8: call    sub_75FAE0
0x827EAD: mov     eax, [esp+398h+var_20]
0x827EB4: cmp     eax, ebx
0x827EB6: mov     byte ptr [esp+398h+var_4], 1
0x827EBE: jz      short loc_827ED2
0x827EC0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x827EC4: mov     ecx, eax
0x827EC6: add     eax, 5Ch ; '\'
0x827EC9: cmp     [eax], ebx
0x827ECB: jnz     short loc_827ED2
0x827ECD: call    sub_772560
0x827ED2: mov     edi, [esp+398h+a3]
0x827ED6: push    2
0x827ED8: push    1
0x827EDA: push    ebx
0x827EDB: push    edi
0x827EDC: call    sub_801110
0x827EE1: mov     ecx, [esi+14h]
0x827EE4: add     esp, 10h
0x827EE7: push    edi; a3
0x827EE8: push    ecx; a2
0x827EE9: mov     ecx, esi; this
0x827EEB: call    sub_760010
0x827EF0: mov     edx, ds:0B45438h
0x827EF6: push    edx; a2
0x827EF7: mov     ecx, esi; this
0x827EF9: call    sub_7AECB0
0x827EFE: mov     eax, ds:0B45230h
0x827F03: push    eax; a2
0x827F04: mov     ecx, esi; this
0x827F06: call    sub_7AEC60
0x827F0B: cmp     [esi+30h], ebx
0x827F0E: jnz     short loc_827F18
0x827F10: call    sub_772DF0
0x827F15: mov     [esi+30h], eax
0x827F18: mov     ecx, [esi+30h]
0x827F1B: push    ebx
0x827F1C: push    ebx
0x827F1D: push    1Bh
0x827F1F: call    sub_772CD0
0x827F24: cmp     [esi+30h], ebx
0x827F27: jnz     short loc_827F31
0x827F29: call    sub_772DF0
0x827F2E: mov     [esi+30h], eax
0x827F31: mov     ecx, [esi+30h]
0x827F34: push    ebx
0x827F35: push    1
0x827F37: push    0Fh
0x827F39: call    sub_772CD0
0x827F3E: cmp     [esi+30h], ebx
0x827F41: jnz     short loc_827F4B
0x827F43: call    sub_772DF0
0x827F48: mov     [esi+30h], eax
0x827F4B: mov     ecx, [esi+30h]
0x827F4E: push    ebx
0x827F4F: push    1
0x827F51: push    7
0x827F53: call    sub_772CD0
0x827F58: cmp     [esi+30h], ebx
0x827F5B: jnz     short loc_827F65
0x827F5D: call    sub_772DF0
0x827F62: mov     [esi+30h], eax
0x827F65: mov     ecx, [esi+30h]
0x827F68: push    ebx
0x827F69: push    4
0x827F6B: push    17h
0x827F6D: call    sub_772CD0
0x827F72: cmp     [esi+30h], ebx
0x827F75: jnz     short loc_827F7F
0x827F77: call    sub_772DF0
0x827F7C: mov     [esi+30h], eax
0x827F7F: mov     ecx, [esi+30h]
0x827F82: push    ebx
0x827F83: push    1
0x827F85: push    0Eh
0x827F87: call    sub_772CD0
0x827F8C: cmp     [esi+30h], ebx
0x827F8F: jnz     short loc_827F99
0x827F91: call    sub_772DF0
0x827F96: mov     [esi+30h], eax
0x827F99: mov     ecx, [esi+30h]
0x827F9C: push    ebx
0x827F9D: push    ebx
0x827F9E: push    34h ; '4'
0x827FA0: call    sub_772CD0
0x827FA5: push    offset dword_B455C0
0x827FAA: lea     ecx, [esp+39Ch+var_380]
0x827FAE: mov     ds:0B43B3Ch, ebp
0x827FB4: mov     ds:0B441CCh, ebx
0x827FBA: call    sub_76C890
0x827FBF: mov     esi, [esp+398h+var_380]
0x827FC3: cmp     dword ptr [esi+18h], 1
0x827FC7: jnb     short loc_82802E
0x827FC9: lea     ecx, [esp+398h+var_18]
0x827FD0: push    ecx
0x827FD1: call    sub_772630
0x827FD6: add     esp, 4
0x827FD9: push    eax
0x827FDA: lea     ecx, [esp+39Ch+a3]
0x827FDE: mov     byte ptr [esp+39Ch+var_4], 0DCh ; 'Ü'
0x827FE6: call    sub_75FAE0
0x827FEB: mov     eax, [esp+398h+var_18]
0x827FF2: cmp     eax, ebx
0x827FF4: mov     byte ptr [esp+398h+var_4], 1
0x827FFC: jz      short loc_828010
0x827FFE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x828002: mov     ecx, eax
0x828004: add     eax, 5Ch ; '\'
0x828007: cmp     [eax], ebx
0x828009: jnz     short loc_828010
0x82800B: call    sub_772560
0x828010: mov     edi, [esp+398h+a3]
0x828014: push    2
0x828016: push    1
0x828018: push    ebx
0x828019: push    edi
0x82801A: call    sub_801110
0x82801F: mov     edx, [esi+14h]
0x828022: add     esp, 10h
0x828025: push    edi; a3
0x828026: push    edx; a2
0x828027: mov     ecx, esi; this
0x828029: call    sub_760010
0x82802E: mov     eax, ds:0B4543Ch
0x828033: push    eax; a2
0x828034: mov     ecx, esi; this
0x828036: call    sub_7AECB0
0x82803B: mov     ecx, ds:0B45234h
0x828041: push    ecx; a2
0x828042: mov     ecx, esi; this
0x828044: call    sub_7AEC60
0x828049: cmp     [esi+30h], ebx
0x82804C: jnz     short loc_828056
0x82804E: call    sub_772DF0
0x828053: mov     [esi+30h], eax
0x828056: mov     ecx, [esi+30h]
0x828059: push    ebx
0x82805A: push    ebx
0x82805B: push    1Bh
0x82805D: call    sub_772CD0
0x828062: cmp     [esi+30h], ebx
0x828065: jnz     short loc_82806F
0x828067: call    sub_772DF0
0x82806C: mov     [esi+30h], eax
0x82806F: mov     ecx, [esi+30h]
0x828072: push    ebx
0x828073: push    ebx
0x828074: push    0Fh
0x828076: call    sub_772CD0
0x82807B: cmp     [esi+30h], ebx
0x82807E: jnz     short loc_828088
0x828080: call    sub_772DF0
0x828085: mov     [esi+30h], eax
0x828088: mov     ecx, [esi+30h]
0x82808B: push    ebx
0x82808C: push    1
0x82808E: push    7
0x828090: call    sub_772CD0
0x828095: cmp     [esi+30h], ebx
0x828098: jnz     short loc_8280A2
0x82809A: call    sub_772DF0
0x82809F: mov     [esi+30h], eax
0x8280A2: mov     ecx, [esi+30h]
0x8280A5: push    ebx
0x8280A6: push    4
0x8280A8: push    17h
0x8280AA: call    sub_772CD0
0x8280AF: cmp     [esi+30h], ebx
0x8280B2: jnz     short loc_8280BC
0x8280B4: call    sub_772DF0
0x8280B9: mov     [esi+30h], eax
0x8280BC: mov     ecx, [esi+30h]
0x8280BF: push    ebx
0x8280C0: push    1
0x8280C2: push    0Eh
0x8280C4: call    sub_772CD0
0x8280C9: cmp     [esi+30h], ebx
0x8280CC: jnz     short loc_8280D6
0x8280CE: call    sub_772DF0
0x8280D3: mov     [esi+30h], eax
0x8280D6: mov     ecx, [esi+30h]
0x8280D9: push    ebx
0x8280DA: push    ebx
0x8280DB: push    34h ; '4'
0x8280DD: call    sub_772CD0
0x8280E2: mov     ebp, (offset loc_840807+1)
0x8280E7: push    offset dword_B455C4
0x8280EC: lea     ecx, [esp+39Ch+var_380]
0x8280F0: mov     ds:0B43B40h, ebp
0x8280F6: mov     ds:0B441D0h, ebx
0x8280FC: call    sub_76C890
0x828101: mov     esi, [esp+398h+var_380]
0x828105: cmp     dword ptr [esi+18h], 1
0x828109: jnb     short loc_828170
0x82810B: lea     edx, [esp+398h+var_10]
0x828112: push    edx
0x828113: call    sub_772630
0x828118: add     esp, 4
0x82811B: push    eax
0x82811C: lea     ecx, [esp+39Ch+a3]
0x828120: mov     byte ptr [esp+39Ch+var_4], 0DDh ; 'Ý'
0x828128: call    sub_75FAE0
0x82812D: mov     eax, [esp+398h+var_10]
0x828134: cmp     eax, ebx
0x828136: mov     byte ptr [esp+398h+var_4], 1
0x82813E: jz      short loc_828152
0x828140: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x828144: mov     ecx, eax
0x828146: add     eax, 5Ch ; '\'
0x828149: cmp     [eax], ebx
0x82814B: jnz     short loc_828152
0x82814D: call    sub_772560
0x828152: mov     edi, [esp+398h+a3]
0x828156: push    2
0x828158: push    1
0x82815A: push    ebx
0x82815B: push    edi
0x82815C: call    sub_801110
0x828161: mov     eax, [esi+14h]
0x828164: add     esp, 10h
0x828167: push    edi; a3
0x828168: push    eax; a2
0x828169: mov     ecx, esi; this
0x82816B: call    sub_760010
0x828170: mov     ecx, ds:0B45440h
0x828176: push    ecx; a2
0x828177: mov     ecx, esi; this
0x828179: call    sub_7AECB0
0x82817E: mov     edx, ds:0B45238h
0x828184: push    edx; a2
0x828185: mov     ecx, esi; this
0x828187: call    sub_7AEC60
0x82818C: cmp     [esi+30h], ebx
0x82818F: jnz     short loc_828199
0x828191: call    sub_772DF0
0x828196: mov     [esi+30h], eax
0x828199: mov     ecx, [esi+30h]
0x82819C: push    ebx
0x82819D: push    ebx
0x82819E: push    1Bh
0x8281A0: call    sub_772CD0
0x8281A5: cmp     [esi+30h], ebx
0x8281A8: jnz     short loc_8281B2
0x8281AA: call    sub_772DF0
0x8281AF: mov     [esi+30h], eax
0x8281B2: mov     ecx, [esi+30h]
0x8281B5: push    ebx
0x8281B6: push    1
0x8281B8: push    0Fh
0x8281BA: call    sub_772CD0
0x8281BF: cmp     [esi+30h], ebx
0x8281C2: jnz     short loc_8281CC
0x8281C4: call    sub_772DF0
0x8281C9: mov     [esi+30h], eax
0x8281CC: mov     ecx, [esi+30h]
0x8281CF: push    ebx
0x8281D0: push    1
0x8281D2: push    7
0x8281D4: call    sub_772CD0
0x8281D9: cmp     [esi+30h], ebx
0x8281DC: jnz     short loc_8281E6
0x8281DE: call    sub_772DF0
0x8281E3: mov     [esi+30h], eax
0x8281E6: mov     ecx, [esi+30h]
0x8281E9: push    ebx
0x8281EA: push    4
0x8281EC: push    17h
0x8281EE: call    sub_772CD0
0x8281F3: cmp     [esi+30h], ebx
0x8281F6: jnz     short loc_828200
0x8281F8: call    sub_772DF0
0x8281FD: mov     [esi+30h], eax
0x828200: mov     ecx, [esi+30h]
0x828203: push    ebx
0x828204: push    1
0x828206: push    0Eh
0x828208: call    sub_772CD0
0x82820D: cmp     [esi+30h], ebx
0x828210: jnz     short loc_82821A
0x828212: call    sub_772DF0
0x828217: mov     [esi+30h], eax
0x82821A: mov     ecx, [esi+30h]
0x82821D: push    ebx
0x82821E: push    ebx
0x82821F: push    34h ; '4'
0x828221: call    sub_772CD0
0x828226: cmp     edi, ebx
0x828228: mov     ds:0B43B44h, ebp
0x82822E: mov     ds:0B441D4h, ebx
0x828234: mov     byte ptr [esp+398h+var_4], 0
0x82823C: jz      short loc_82824F
0x82823E: or      ebx, 0FFFFFFFFh
0x828241: add     [edi+5Ch], ebx
0x828244: jnz     short loc_828252
0x828246: mov     ecx, edi
0x828248: call    sub_772560
0x82824D: jmp     short loc_828252
0x82824F: or      ebx, 0FFFFFFFFh
0x828252: add     [esi+60h], ebx
0x828255: mov     [esp+398h+var_4], ebx
0x82825C: jnz     short loc_828265
0x82825E: mov     ecx, esi
0x828260: call    sub_7604D0
0x828265: mov     ecx, [esp+398h+var_C]
0x82826C: mov     large fs:0, ecx
0x828273: pop     ecx
0x828274: pop     edi
0x828275: pop     esi
0x828276: pop     ebp
0x828277: pop     ebx
0x828278: add     esp, 384h
0x82827E: retn

0x7A1CD0: push    0FFFFFFFFh
0x7A1CD2: push    offset SEH_7A1CD0
0x7A1CD7: mov     eax, large fs:0
0x7A1CDD: push    eax
0x7A1CDE: sub     esp, 94h
0x7A1CE4: push    ebx
0x7A1CE5: push    ebp
0x7A1CE6: push    esi
0x7A1CE7: push    edi
0x7A1CE8: mov     eax, ds:0B30AACh
0x7A1CED: xor     eax, esp
0x7A1CEF: push    eax
0x7A1CF0: lea     eax, [esp+0B4h+var_C]
0x7A1CF7: mov     large fs:0, eax
0x7A1CFD: mov     esi, ecx
0x7A1CFF: mov     ecx, [esp+0B4h+arg_4]
0x7A1D06: mov     eax, [esp+0B4h+arg_0]
0x7A1D0D: mov     [esi+4], ecx
0x7A1D10: xor     edi, edi
0x7A1D12: mov     ecx, esi
0x7A1D14: mov     [esi], eax
0x7A1D16: mov     [esp+0B4h+var_A0], edi
0x7A1D1A: call    sub_7A1660
0x7A1D1F: xor     ebx, ebx
0x7A1D21: xor     ebp, ebp
0x7A1D23: mov     eax, [esi+1Ch]
0x7A1D26: cmp     eax, edi
0x7A1D28: jz      short loc_7A1D34
0x7A1D2A: mov     edx, [esi+20h]
0x7A1D2D: sub     edx, eax
0x7A1D2F: sar     edx, 4
0x7A1D32: jnz     short loc_7A1D39
0x7A1D34: call    __invalid_parameter_noinfo
0x7A1D39: mov     eax, [esi+1Ch]
0x7A1D3C: mov     edx, [eax+4]
0x7A1D3F: cmp     edx, edi
0x7A1D41: jz      loc_7A1EE1
0x7A1D47: mov     ecx, [eax+8]
0x7A1D4A: sub     ecx, edx
0x7A1D4C: mov     eax, 2AAAAAABh
0x7A1D51: imul    ecx
0x7A1D53: sar     edx, 3
0x7A1D56: mov     eax, edx
0x7A1D58: shr     eax, 1Fh
0x7A1D5B: add     eax, edx
0x7A1D5D: cmp     ebx, eax
0x7A1D5F: jnb     loc_7A1EE1
0x7A1D65: mov     eax, [esi+28h]
0x7A1D68: sub     eax, edi
0x7A1D6A: jz      loc_7A1E15
0x7A1D70: sub     eax, 1
0x7A1D73: jnz     loc_7A1E9B
0x7A1D79: mov     eax, [esi+1Ch]
0x7A1D7C: cmp     eax, edi
0x7A1D7E: jz      short loc_7A1D8A
0x7A1D80: mov     ecx, [esi+20h]
0x7A1D83: sub     ecx, eax
0x7A1D85: sar     ecx, 4
0x7A1D88: jnz     short loc_7A1D8F
0x7A1D8A: call    __invalid_parameter_noinfo
0x7A1D8F: mov     edi, [esi+1Ch]
0x7A1D92: mov     eax, [edi+4]
0x7A1D95: test    eax, eax
0x7A1D97: jz      short loc_7A1DB3
0x7A1D99: mov     ecx, [edi+8]
0x7A1D9C: sub     ecx, eax
0x7A1D9E: mov     eax, 2AAAAAABh
0x7A1DA3: imul    ecx
0x7A1DA5: sar     edx, 3
0x7A1DA8: mov     eax, edx
0x7A1DAA: shr     eax, 1Fh
0x7A1DAD: add     eax, edx
0x7A1DAF: cmp     ebx, eax
0x7A1DB1: jb      short loc_7A1DB8
0x7A1DB3: call    __invalid_parameter_noinfo
0x7A1DB8: mov     eax, [edi+4]
0x7A1DBB: mov     edx, [eax+ebp+4]
0x7A1DBF: add     eax, ebp
0x7A1DC1: test    edx, edx
0x7A1DC3: jnz     short loc_7A1DE2
0x7A1DC5: mov     edx, [esi+34h]
0x7A1DC8: xor     eax, eax
0x7A1DCA: lea     ecx, [edx+edx-1]
0x7A1DCE: imul    ecx, eax
0x7A1DD1: add     [esp+0B4h+var_A0], ecx
0x7A1DD5: add     ebx, 1
0x7A1DD8: add     ebp, 30h ; '0'
0x7A1DDB: xor     edi, edi
0x7A1DDD: jmp     loc_7A1D23
0x7A1DE2: mov     ecx, [eax+8]
0x7A1DE5: sub     ecx, edx
0x7A1DE7: mov     eax, 92492493h
0x7A1DEC: imul    ecx
0x7A1DEE: add     edx, ecx
0x7A1DF0: sar     edx, 5
0x7A1DF3: mov     eax, edx
0x7A1DF5: shr     eax, 1Fh
0x7A1DF8: add     eax, edx
0x7A1DFA: mov     edx, [esi+34h]
0x7A1DFD: lea     ecx, [edx+edx-1]
0x7A1E01: imul    ecx, eax
0x7A1E04: add     [esp+0B4h+var_A0], ecx
0x7A1E08: add     ebx, 1
0x7A1E0B: add     ebp, 30h ; '0'
0x7A1E0E: xor     edi, edi
0x7A1E10: jmp     loc_7A1D23
0x7A1E15: mov     eax, [esi+1Ch]
0x7A1E18: cmp     eax, edi
0x7A1E1A: jz      short loc_7A1E26
0x7A1E1C: mov     edx, [esi+20h]
0x7A1E1F: sub     edx, eax
0x7A1E21: sar     edx, 4
0x7A1E24: jnz     short loc_7A1E2B
0x7A1E26: call    __invalid_parameter_noinfo
0x7A1E2B: mov     edi, [esi+1Ch]
0x7A1E2E: mov     eax, [edi+4]
0x7A1E31: test    eax, eax
0x7A1E33: jz      short loc_7A1E4F
0x7A1E35: mov     ecx, [edi+8]
0x7A1E38: sub     ecx, eax
0x7A1E3A: mov     eax, 2AAAAAABh
0x7A1E3F: imul    ecx
0x7A1E41: sar     edx, 3
0x7A1E44: mov     eax, edx
0x7A1E46: shr     eax, 1Fh
0x7A1E49: add     eax, edx
0x7A1E4B: cmp     ebx, eax
0x7A1E4D: jb      short loc_7A1E54
0x7A1E4F: call    __invalid_parameter_noinfo
0x7A1E54: mov     eax, [edi+4]
0x7A1E57: mov     edx, [eax+ebp+4]
0x7A1E5B: add     eax, ebp
0x7A1E5D: test    edx, edx
0x7A1E5F: jnz     short loc_7A1E65
0x7A1E61: xor     eax, eax
0x7A1E63: jmp     short loc_7A1E7D
0x7A1E65: mov     ecx, [eax+8]
0x7A1E68: sub     ecx, edx
0x7A1E6A: mov     eax, 92492493h
0x7A1E6F: imul    ecx
0x7A1E71: add     edx, ecx
0x7A1E73: sar     edx, 5
0x7A1E76: mov     eax, edx
0x7A1E78: shr     eax, 1Fh
0x7A1E7B: add     eax, edx
0x7A1E7D: mov     ecx, [esi+2Ch]
0x7A1E80: mov     edx, [esp+0B4h+var_A0]
0x7A1E84: imul    ecx, eax
0x7A1E87: lea     eax, [edx+ecx*2]
0x7A1E8A: add     ebx, 1
0x7A1E8D: add     ebp, 30h ; '0'
0x7A1E90: mov     [esp+0B4h+var_A0], eax
0x7A1E94: xor     edi, edi
0x7A1E96: jmp     loc_7A1D23
0x7A1E9B: push    2Ah ; '*'; MaxCount
0x7A1E9D: push    offset aDefaultReached; "default reached in CFrondEngine::Comput"...
0x7A1EA2: lea     ecx, [esp+0BCh+var_94]
0x7A1EA6: mov     [esp+0BCh+var_7C], 0Fh
0x7A1EAE: mov     [esp+0BCh+var_80], edi
0x7A1EB2: mov     [esp+0BCh+var_90], 0
0x7A1EB7: call    sub_414500
0x7A1EBC: push    edi
0x7A1EBD: lea     ecx, [esp+0B8h+var_94]
0x7A1EC1: push    ecx
0x7A1EC2: lea     ecx, [esp+0BCh+var_5C]
0x7A1EC6: mov     [esp+0BCh+var_4], edi
0x7A1ECD: call    sub_789190
0x7A1ED2: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A1ED7: lea     edx, [esp+0B8h+var_5C]
0x7A1EDB: push    edx
0x7A1EDC: call    ThrowException??
0x7A1EE1: cmp     [esp+0B4h+var_A0], 0FFFFh
0x7A1EE9: jle     short loc_7A1F25
0x7A1EEB: push    0FFFFh; ArgList
0x7A1EF0: push    offset aFrondVerticesE; "frond vertices exceed %d"
0x7A1EF5: lea     esi, [esp+0BCh+var_94]
0x7A1EF9: call    sub_7A54A0
0x7A1EFE: add     esp, 8
0x7A1F01: push    eax
0x7A1F02: lea     ecx, [esp+0B8h+var_5C]
0x7A1F06: mov     [esp+0B8h+var_4], 1
0x7A1F11: call    sub_6F7DD0
0x7A1F16: push    offset __TI2?AVruntime_error@std@@; throw info for 'class std::runtime_error'
0x7A1F1B: lea     eax, [esp+0B8h+var_5C]
0x7A1F1F: push    eax
0x7A1F20: call    ThrowException??
0x7A1F25: movzx   ecx, word ptr [esi+50h]
0x7A1F29: push    ecx
0x7A1F2A: mov     ecx, [esi]
0x7A1F2C: call    sub_798090
0x7A1F31: mov     eax, [esi+28h]
0x7A1F34: sub     eax, edi
0x7A1F36: jz      loc_7A220E
0x7A1F3C: sub     eax, 1
0x7A1F3F: jz      short loc_7A1F91
0x7A1F41: push    2Ah ; '*'; MaxCount
0x7A1F43: push    offset aDefaultReached; "default reached in CFrondEngine::Comput"...
0x7A1F48: lea     ecx, [esp+0BCh+var_78]
0x7A1F4C: mov     [esp+0BCh+var_60], 0Fh
0x7A1F54: mov     [esp+0BCh+var_64], edi
0x7A1F58: mov     [esp+0BCh+var_74], 0
0x7A1F5D: call    sub_414500
0x7A1F62: push    edi
0x7A1F63: lea     edx, [esp+0B8h+var_78]
0x7A1F67: push    edx
0x7A1F68: lea     ecx, [esp+0BCh+var_34]
0x7A1F6F: mov     [esp+0BCh+var_4], 2
0x7A1F7A: call    sub_789190
0x7A1F7F: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A1F84: lea     eax, [esp+0B8h+var_34]
0x7A1F8B: push    eax
0x7A1F8C: call    ThrowException??
0x7A1F91: xor     ebx, ebx
0x7A1F93: xor     ebp, ebp
0x7A1F95: mov     eax, [esi+1Ch]
0x7A1F98: test    eax, eax
0x7A1F9A: jz      short loc_7A1FA6
0x7A1F9C: mov     ecx, [esi+20h]
0x7A1F9F: sub     ecx, eax
0x7A1FA1: sar     ecx, 4
0x7A1FA4: jnz     short loc_7A1FAB
0x7A1FA6: call    __invalid_parameter_noinfo
0x7A1FAB: mov     eax, [esi+1Ch]
0x7A1FAE: mov     edx, [eax+4]
0x7A1FB1: test    edx, edx
0x7A1FB3: jz      short loc_7A2026
0x7A1FB5: mov     ecx, [eax+8]
0x7A1FB8: sub     ecx, edx
0x7A1FBA: mov     eax, 2AAAAAABh
0x7A1FBF: imul    ecx
0x7A1FC1: sar     edx, 3
0x7A1FC4: mov     eax, edx
0x7A1FC6: shr     eax, 1Fh
0x7A1FC9: add     eax, edx
0x7A1FCB: cmp     ebx, eax
0x7A1FCD: jnb     short loc_7A2026
0x7A1FCF: mov     eax, [esi+1Ch]
0x7A1FD2: test    eax, eax
0x7A1FD4: jz      short loc_7A1FE0
0x7A1FD6: mov     edx, [esi+20h]
0x7A1FD9: sub     edx, eax
0x7A1FDB: sar     edx, 4
0x7A1FDE: jnz     short loc_7A1FE5
0x7A1FE0: call    __invalid_parameter_noinfo
0x7A1FE5: mov     edi, [esi+1Ch]
0x7A1FE8: mov     eax, [edi+4]
0x7A1FEB: test    eax, eax
0x7A1FED: jz      short loc_7A2009
0x7A1FEF: mov     ecx, [edi+8]
0x7A1FF2: sub     ecx, eax
0x7A1FF4: mov     eax, 2AAAAAABh
0x7A1FF9: imul    ecx
0x7A1FFB: sar     edx, 3
0x7A1FFE: mov     eax, edx
0x7A2000: shr     eax, 1Fh
0x7A2003: add     eax, edx
0x7A2005: cmp     ebx, eax
0x7A2007: jb      short loc_7A200E
0x7A2009: call    __invalid_parameter_noinfo
0x7A200E: mov     eax, [edi+4]
0x7A2011: add     eax, ebp
0x7A2013: push    eax
0x7A2014: mov     ecx, esi
0x7A2016: call    sub_79FD10
0x7A201B: add     ebx, 1
0x7A201E: add     ebp, 30h ; '0'
0x7A2021: jmp     loc_7A1F95
0x7A2026: xor     edi, edi
0x7A2028: mov     ecx, [esi+1Ch]
0x7A202B: test    ecx, ecx
0x7A202D: mov     [esp+0B4h+var_9C], edi
0x7A2031: jnz     short loc_7A2037
0x7A2033: xor     eax, eax
0x7A2035: jmp     short loc_7A203F
0x7A2037: mov     eax, [esi+20h]
0x7A203A: sub     eax, ecx
0x7A203C: sar     eax, 4
0x7A203F: movzx   ecx, di
0x7A2042: cmp     ecx, eax
0x7A2044: jnb     loc_7A23E1
0x7A204A: mov     ecx, [esi]
0x7A204C: push    edi
0x7A204D: call    sub_794A90
0x7A2052: xor     ebx, ebx
0x7A2054: mov     [esp+0B4h+var_A0], ebx
0x7A2058: mov     ecx, [esi+1Ch]
0x7A205B: test    ecx, ecx
0x7A205D: jz      short loc_7A206E
0x7A205F: mov     eax, [esi+20h]
0x7A2062: sub     eax, ecx
0x7A2064: movzx   ecx, di
0x7A2067: sar     eax, 4
0x7A206A: cmp     ecx, eax
0x7A206C: jb      short loc_7A2073
0x7A206E: call    __invalid_parameter_noinfo
0x7A2073: movzx   eax, di
0x7A2076: shl     eax, 4
0x7A2079: add     eax, [esi+1Ch]
0x7A207C: mov     edx, [eax+4]
0x7A207F: test    edx, edx
0x7A2081: jz      loc_7A2206
0x7A2087: mov     ecx, [eax+8]
0x7A208A: sub     ecx, edx
0x7A208C: mov     eax, 2AAAAAABh
0x7A2091: imul    ecx
0x7A2093: sar     edx, 3
0x7A2096: mov     eax, edx
0x7A2098: shr     eax, 1Fh
0x7A209B: add     eax, edx
0x7A209D: cmp     ebx, eax
0x7A209F: jnb     loc_7A2206
0x7A20A5: mov     eax, [esi+1Ch]
0x7A20A8: test    eax, eax
0x7A20AA: jz      short loc_7A20B6
0x7A20AC: mov     ecx, [esi+20h]
0x7A20AF: sub     ecx, eax
0x7A20B1: sar     ecx, 4
0x7A20B4: jnz     short loc_7A20BB
0x7A20B6: call    __invalid_parameter_noinfo
0x7A20BB: mov     edi, [esi+1Ch]
0x7A20BE: mov     eax, [edi+4]
0x7A20C1: test    eax, eax
0x7A20C3: jz      short loc_7A20DF
0x7A20C5: mov     ecx, [edi+8]
0x7A20C8: sub     ecx, eax
0x7A20CA: mov     eax, 2AAAAAABh
0x7A20CF: imul    ecx
0x7A20D1: sar     edx, 3
0x7A20D4: mov     eax, edx
0x7A20D6: shr     eax, 1Fh
0x7A20D9: add     eax, edx
0x7A20DB: cmp     ebx, eax
0x7A20DD: jb      short loc_7A20E4
0x7A20DF: call    __invalid_parameter_noinfo
0x7A20E4: mov     ebp, [edi+4]
0x7A20E7: mov     ecx, [esi+1Ch]
0x7A20EA: add     ebp, [esp+0B4h+var_A0]
0x7A20EE: test    ecx, ecx
0x7A20F0: jz      short loc_7A2103
0x7A20F2: mov     eax, [esi+20h]
0x7A20F5: sub     eax, ecx
0x7A20F7: movzx   ecx, word ptr [esp+0B4h+var_9C]
0x7A20FC: sar     eax, 4
0x7A20FF: cmp     ecx, eax
0x7A2101: jb      short loc_7A2108
0x7A2103: call    __invalid_parameter_noinfo
0x7A2108: movzx   edi, word ptr [esp+0B4h+var_9C]
0x7A210D: shl     edi, 4
0x7A2110: add     edi, [esi+1Ch]
0x7A2113: mov     eax, [edi+4]
0x7A2116: test    eax, eax
0x7A2118: jz      short loc_7A2134
0x7A211A: mov     ecx, [edi+8]
0x7A211D: sub     ecx, eax
0x7A211F: mov     eax, 2AAAAAABh
0x7A2124: imul    ecx
0x7A2126: sar     edx, 3
0x7A2129: mov     eax, edx
0x7A212B: shr     eax, 1Fh
0x7A212E: add     eax, edx
0x7A2130: cmp     ebx, eax
0x7A2132: jb      short loc_7A2139
0x7A2134: call    __invalid_parameter_noinfo
0x7A2139: mov     ecx, [esp+0B4h+var_A0]
0x7A213D: mov     edx, [edi+4]
0x7A2140: mov     eax, [ebp+2Ch]
0x7A2143: mov     [ecx+edx+2Ch], eax
0x7A2147: mov     ecx, [esi+1Ch]
0x7A214A: test    ecx, ecx
0x7A214C: jz      short loc_7A215F
0x7A214E: mov     eax, [esi+20h]
0x7A2151: sub     eax, ecx
0x7A2153: movzx   ecx, word ptr [esp+0B4h+var_9C]
0x7A2158: sar     eax, 4
0x7A215B: cmp     ecx, eax
0x7A215D: jb      short loc_7A2164
0x7A215F: call    __invalid_parameter_noinfo
0x7A2164: movzx   edi, word ptr [esp+0B4h+var_9C]
0x7A2169: shl     edi, 4
0x7A216C: add     edi, [esi+1Ch]
0x7A216F: mov     eax, [edi+4]
0x7A2172: test    eax, eax
0x7A2174: jz      short loc_7A2190
0x7A2176: mov     ecx, [edi+8]
0x7A2179: sub     ecx, eax
0x7A217B: mov     eax, 2AAAAAABh
0x7A2180: imul    ecx
0x7A2182: sar     edx, 3
0x7A2185: mov     eax, edx
0x7A2187: shr     eax, 1Fh
0x7A218A: add     eax, edx
0x7A218C: cmp     ebx, eax
0x7A218E: jb      short loc_7A2195
0x7A2190: call    __invalid_parameter_noinfo
0x7A2195: mov     edi, [edi+4]
0x7A2198: mov     eax, [esi+1Ch]
0x7A219B: add     edi, [esp+0B4h+var_A0]
0x7A219F: test    eax, eax
0x7A21A1: jz      short loc_7A21AD
0x7A21A3: mov     edx, [esi+20h]
0x7A21A6: sub     edx, eax
0x7A21A8: sar     edx, 4
0x7A21AB: jnz     short loc_7A21B2
0x7A21AD: call    __invalid_parameter_noinfo
0x7A21B2: mov     ebp, [esi+1Ch]
0x7A21B5: mov     eax, [ebp+4]
0x7A21B8: test    eax, eax
0x7A21BA: jz      short loc_7A21D6
0x7A21BC: mov     ecx, [ebp+8]
0x7A21BF: sub     ecx, eax
0x7A21C1: mov     eax, 2AAAAAABh
0x7A21C6: imul    ecx
0x7A21C8: sar     edx, 3
0x7A21CB: mov     eax, edx
0x7A21CD: shr     eax, 1Fh
0x7A21D0: add     eax, edx
0x7A21D2: cmp     ebx, eax
0x7A21D4: jb      short loc_7A21DB
0x7A21D6: call    __invalid_parameter_noinfo
0x7A21DB: mov     eax, [ebp+4]
0x7A21DE: mov     ecx, [esp+0B4h+var_A0]
0x7A21E2: mov     edx, [ecx+eax+28h]
0x7A21E6: movzx   eax, word ptr [esp+0B4h+var_9C]
0x7A21EB: push    edi
0x7A21EC: push    edx
0x7A21ED: push    eax
0x7A21EE: mov     ecx, esi
0x7A21F0: call    sub_79A450
0x7A21F5: mov     edi, [esp+0B4h+var_9C]
0x7A21F9: add     ebx, 1
0x7A21FC: add     [esp+0B4h+var_A0], 30h ; '0'
0x7A2201: jmp     loc_7A2058
0x7A2206: add     edi, 1
0x7A2209: jmp     loc_7A2028
0x7A220E: xor     ebx, ebx
0x7A2210: xor     ebp, ebp
0x7A2212: mov     eax, [esi+1Ch]
0x7A2215: test    eax, eax
0x7A2217: jz      short loc_7A2223
0x7A2219: mov     ecx, [esi+20h]
0x7A221C: sub     ecx, eax
0x7A221E: sar     ecx, 4
0x7A2221: jnz     short loc_7A2228
0x7A2223: call    __invalid_parameter_noinfo
0x7A2228: mov     eax, [esi+1Ch]
0x7A222B: mov     edx, [eax+4]
0x7A222E: test    edx, edx
0x7A2230: jz      short loc_7A22A3
0x7A2232: mov     ecx, [eax+8]
0x7A2235: sub     ecx, edx
0x7A2237: mov     eax, 2AAAAAABh
0x7A223C: imul    ecx
0x7A223E: sar     edx, 3
0x7A2241: mov     eax, edx
0x7A2243: shr     eax, 1Fh
0x7A2246: add     eax, edx
0x7A2248: cmp     ebx, eax
0x7A224A: jnb     short loc_7A22A3
0x7A224C: mov     eax, [esi+1Ch]
0x7A224F: test    eax, eax
0x7A2251: jz      short loc_7A225D
0x7A2253: mov     edx, [esi+20h]
0x7A2256: sub     edx, eax
0x7A2258: sar     edx, 4
0x7A225B: jnz     short loc_7A2262
0x7A225D: call    __invalid_parameter_noinfo
0x7A2262: mov     edi, [esi+1Ch]
0x7A2265: mov     eax, [edi+4]
0x7A2268: test    eax, eax
0x7A226A: jz      short loc_7A2286
0x7A226C: mov     ecx, [edi+8]
0x7A226F: sub     ecx, eax
0x7A2271: mov     eax, 2AAAAAABh
0x7A2276: imul    ecx
0x7A2278: sar     edx, 3
0x7A227B: mov     eax, edx
0x7A227D: shr     eax, 1Fh
0x7A2280: add     eax, edx
0x7A2282: cmp     ebx, eax
0x7A2284: jb      short loc_7A228B
0x7A2286: call    __invalid_parameter_noinfo
0x7A228B: mov     eax, [edi+4]
0x7A228E: add     eax, ebp
0x7A2290: push    eax
0x7A2291: mov     ecx, esi
0x7A2293: call    sub_79C540
0x7A2298: add     ebx, 1
0x7A229B: add     ebp, 30h ; '0'
0x7A229E: jmp     loc_7A2212
0x7A22A3: xor     ebp, ebp
0x7A22A5: mov     ecx, [esi+1Ch]
0x7A22A8: xor     ebx, ebx
0x7A22AA: cmp     ecx, ebx
0x7A22AC: mov     [esp+0B4h+var_9C], ebp
0x7A22B0: jnz     short loc_7A22B6
0x7A22B2: xor     eax, eax
0x7A22B4: jmp     short loc_7A22BE
0x7A22B6: mov     eax, [esi+20h]
0x7A22B9: sub     eax, ecx
0x7A22BB: sar     eax, 4
0x7A22BE: movzx   ecx, bp
0x7A22C1: cmp     ecx, eax
0x7A22C3: jnb     loc_7A23E1
0x7A22C9: mov     ecx, [esi]
0x7A22CB: push    ebp
0x7A22CC: call    sub_794A90
0x7A22D1: mov     [esp+0B4h+var_A0], ebx
0x7A22D5: mov     ecx, [esi+1Ch]
0x7A22D8: test    ecx, ecx
0x7A22DA: jz      short loc_7A22EB
0x7A22DC: mov     eax, [esi+20h]
0x7A22DF: sub     eax, ecx
0x7A22E1: movzx   ecx, bp
0x7A22E4: sar     eax, 4
0x7A22E7: cmp     ecx, eax
0x7A22E9: jb      short loc_7A22F0
0x7A22EB: call    __invalid_parameter_noinfo
0x7A22F0: movzx   edi, bp
0x7A22F3: mov     eax, edi
0x7A22F5: shl     eax, 4
0x7A22F8: add     eax, [esi+1Ch]
0x7A22FB: mov     edx, [eax+4]
0x7A22FE: test    edx, edx
0x7A2300: jz      loc_7A23D9
0x7A2306: mov     ecx, [eax+8]
0x7A2309: sub     ecx, edx
0x7A230B: mov     eax, 2AAAAAABh
0x7A2310: imul    ecx
0x7A2312: sar     edx, 3
0x7A2315: mov     eax, edx
0x7A2317: shr     eax, 1Fh
0x7A231A: add     eax, edx
0x7A231C: cmp     ebx, eax
0x7A231E: jnb     loc_7A23D9
0x7A2324: mov     ecx, [esi+1Ch]
0x7A2327: test    ecx, ecx
0x7A2329: jz      short loc_7A2337
0x7A232B: mov     eax, [esi+20h]
0x7A232E: sub     eax, ecx
0x7A2330: sar     eax, 4
0x7A2333: cmp     edi, eax
0x7A2335: jb      short loc_7A233C
0x7A2337: call    __invalid_parameter_noinfo
0x7A233C: shl     edi, 4
0x7A233F: add     edi, [esi+1Ch]
0x7A2342: mov     eax, [edi+4]
0x7A2345: test    eax, eax
0x7A2347: jz      short loc_7A2363
0x7A2349: mov     ecx, [edi+8]
0x7A234C: sub     ecx, eax
0x7A234E: mov     eax, 2AAAAAABh
0x7A2353: imul    ecx
0x7A2355: sar     edx, 3
0x7A2358: mov     eax, edx
0x7A235A: shr     eax, 1Fh
0x7A235D: add     eax, edx
0x7A235F: cmp     ebx, eax
0x7A2361: jb      short loc_7A2368
0x7A2363: call    __invalid_parameter_noinfo
0x7A2368: mov     edi, [edi+4]
0x7A236B: mov     eax, [esi+1Ch]
0x7A236E: add     edi, [esp+0B4h+var_A0]
0x7A2372: test    eax, eax
0x7A2374: jz      short loc_7A2380
0x7A2376: mov     ecx, [esi+20h]
0x7A2379: sub     ecx, eax
0x7A237B: sar     ecx, 4
0x7A237E: jnz     short loc_7A2385
0x7A2380: call    __invalid_parameter_noinfo
0x7A2385: mov     ebp, [esi+1Ch]
0x7A2388: mov     eax, [ebp+4]
0x7A238B: test    eax, eax
0x7A238D: jz      short loc_7A23A9
0x7A238F: mov     ecx, [ebp+8]
0x7A2392: sub     ecx, eax
0x7A2394: mov     eax, 2AAAAAABh
0x7A2399: imul    ecx
0x7A239B: sar     edx, 3
0x7A239E: mov     eax, edx
0x7A23A0: shr     eax, 1Fh
0x7A23A3: add     eax, edx
0x7A23A5: cmp     ebx, eax
0x7A23A7: jb      short loc_7A23AE
0x7A23A9: call    __invalid_parameter_noinfo
0x7A23AE: mov     edx, [ebp+4]
0x7A23B1: mov     eax, [esp+0B4h+var_A0]
0x7A23B5: mov     ecx, [eax+edx+28h]
0x7A23B9: movzx   eax, word ptr [esp+0B4h+var_9C]
0x7A23BE: push    edi
0x7A23BF: push    ecx
0x7A23C0: push    eax
0x7A23C1: mov     ecx, esi
0x7A23C3: call    sub_79A390
0x7A23C8: mov     ebp, [esp+0B4h+var_9C]
0x7A23CC: add     ebx, 1
0x7A23CF: add     [esp+0B4h+var_A0], 30h ; '0'
0x7A23D4: jmp     loc_7A22D5
0x7A23D9: add     ebp, 1
0x7A23DC: jmp     loc_7A22A5
0x7A23E1: mov     ecx, [esp+0B4h+var_C]
0x7A23E8: mov     large fs:0, ecx
0x7A23EF: pop     ecx
0x7A23F0: pop     edi
0x7A23F1: pop     esi
0x7A23F2: pop     ebp
0x7A23F3: pop     ebx
0x7A23F4: add     esp, 0A0h
0x7A23FA: retn    8

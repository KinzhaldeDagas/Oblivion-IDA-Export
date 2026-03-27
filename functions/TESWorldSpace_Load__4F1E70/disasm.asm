0x4F1E70: push    ebp
0x4F1E71: mov     ebp, esp
0x4F1E73: push    0FFFFFFFFh
0x4F1E75: push    offset SEH_4F1E70
0x4F1E7A: mov     eax, large fs:0
0x4F1E80: push    eax
0x4F1E81: sub     esp, 18h
0x4F1E84: mov     eax, ds:0B30AACh
0x4F1E89: xor     eax, ebp
0x4F1E8B: mov     [ebp+var_10], eax
0x4F1E8E: push    ebx
0x4F1E8F: push    esi
0x4F1E90: push    edi
0x4F1E91: push    eax
0x4F1E92: lea     eax, [ebp+var_C]
0x4F1E95: mov     large fs:0, eax
0x4F1E9B: mov     esi, ecx
0x4F1E9D: mov     edi, [ebp+a2]
0x4F1EA0: mov     ecx, edi
0x4F1EA2: call    TESFile_GetRecordType
0x4F1EA7: cmp     al, 35h ; '5'
0x4F1EA9: jz      short loc_4F1EB2
0x4F1EAB: xor     al, al
0x4F1EAD: jmp     loc_4F2242
0x4F1EB2: mov     ecx, edi
0x4F1EB4: call    TESFile_GetIsMaster
0x4F1EB9: test    al, al
0x4F1EBB: jz      short loc_4F1EC9
0x4F1EBD: mov     eax, [edi+25Ch]
0x4F1EC3: mov     [esi+0BCh], eax
0x4F1EC9: push    esi
0x4F1ECA: mov     ecx, edi
0x4F1ECC: call    TESFile_InitializeFormFromRecord
0x4F1ED1: xor     ebx, ebx
0x4F1ED3: push    ebx; a2
0x4F1ED4: mov     ecx, esi; this
0x4F1ED6: call    TESForm_SetIsLinked
0x4F1EDB: mov     ecx, edi
0x4F1EDD: call    TESFile_GetChunkType
0x4F1EE2: cmp     eax, ebx
0x4F1EE4: jz      loc_4F21D0
0x4F1EEA: lea     ebx, [ebx+0]
0x4F1EF0: cmp     eax, 4D414E43h
0x4F1EF5: jg      loc_4F20E2
0x4F1EFB: jz      loc_4F20C9
0x4F1F01: cmp     eax, 41544144h
0x4F1F06: jg      loc_4F2068
0x4F1F0C: jz      loc_4F2055
0x4F1F12: cmp     eax, 304D414Eh
0x4F1F17: jz      loc_4F1FD2
0x4F1F1D: cmp     eax, 324D414Eh
0x4F1F22: jz      loc_4F1FB6
0x4F1F28: cmp     eax, 394D414Eh
0x4F1F2D: jnz     loc_4F21B6
0x4F1F33: push    8; a4
0x4F1F35: lea     eax, [ebp+Dst]
0x4F1F38: push    eax; Dst
0x4F1F39: mov     ecx, edi; a1
0x4F1F3B: call    TESFile_GetChunkData
0x4F1F40: fld     dword ptr [esi+0A0h]
0x4F1F46: fld     dword ptr [ebp+Dst]
0x4F1F49: fcom    st(1)
0x4F1F4B: fnstsw  ax
0x4F1F4D: fstp    st(1)
0x4F1F4F: test    ah, 5
0x4F1F52: jp      short loc_4F1F5C
0x4F1F54: fstp    st
0x4F1F56: fld     dword ptr [esi+0A0h]
0x4F1F5C: fstp    [ebp+var_14]
0x4F1F5F: fld     [ebp+var_14]
0x4F1F62: fstp    dword ptr [esi+0A0h]
0x4F1F68: fld     dword ptr [esi+0A4h]
0x4F1F6E: fld     [ebp+var_18]
0x4F1F71: fcom    st(1)
0x4F1F73: fnstsw  ax
0x4F1F75: fstp    st(1)
0x4F1F77: test    ah, 5
0x4F1F7A: jp      short loc_4F1F84
0x4F1F7C: fstp    st
0x4F1F7E: fld     dword ptr [esi+0A4h]
0x4F1F84: fstp    [ebp+var_14]
0x4F1F87: mov     ecx, edi
0x4F1F89: fld     [ebp+var_14]
0x4F1F8C: fstp    dword ptr [esi+0A4h]
0x4F1F92: call    TESFile_GetIsMaster
0x4F1F97: test    al, al
0x4F1F99: jz      loc_4F21B6
0x4F1F9F: mov     ecx, dword ptr [ebp+Dst]
0x4F1FA2: mov     edx, [ebp+var_18]
0x4F1FA5: mov     [esi+0B4h], ecx
0x4F1FAB: mov     [esi+0B8h], edx
0x4F1FB1: jmp     loc_4F21B6
0x4F1FB6: lea     eax, [ebp+var_14]
0x4F1FB9: push    eax
0x4F1FBA: mov     ecx, edi
0x4F1FBC: mov     [ebp+var_14], ebx
0x4F1FBF: call    TESFile_GetChunkData4
0x4F1FC4: mov     ecx, [ebp+var_14]
0x4F1FC7: mov     [esi+80h], ecx
0x4F1FCD: jmp     loc_4F21B6
0x4F1FD2: push    8; a4
0x4F1FD4: lea     edx, [ebp+var_24]
0x4F1FD7: push    edx; Dst
0x4F1FD8: mov     ecx, edi; a1
0x4F1FDA: call    TESFile_GetChunkData
0x4F1FDF: fld     dword ptr [esi+98h]
0x4F1FE5: fld     dword ptr [ebp+var_24]
0x4F1FE8: fcom    st(1)
0x4F1FEA: fnstsw  ax
0x4F1FEC: fstp    st(1)
0x4F1FEE: test    ah, 41h
0x4F1FF1: jnz     short loc_4F1FFB
0x4F1FF3: fstp    st
0x4F1FF5: fld     dword ptr [esi+98h]
0x4F1FFB: fstp    [ebp+var_14]
0x4F1FFE: fld     [ebp+var_14]
0x4F2001: fstp    dword ptr [esi+98h]
0x4F2007: fld     dword ptr [esi+9Ch]
0x4F200D: fld     [ebp+var_20]
0x4F2010: fcom    st(1)
0x4F2012: fnstsw  ax
0x4F2014: fstp    st(1)
0x4F2016: test    ah, 41h
0x4F2019: jnz     short loc_4F2023
0x4F201B: fstp    st
0x4F201D: fld     dword ptr [esi+9Ch]
0x4F2023: fstp    [ebp+var_14]
0x4F2026: mov     ecx, edi
0x4F2028: fld     [ebp+var_14]
0x4F202B: fstp    dword ptr [esi+9Ch]
0x4F2031: call    TESFile_GetIsMaster
0x4F2036: test    al, al
0x4F2038: jz      loc_4F21B6
0x4F203E: mov     eax, dword ptr [ebp+var_24]
0x4F2041: mov     ecx, [ebp+var_20]
0x4F2044: mov     [esi+0ACh], eax
0x4F204A: mov     [esi+0B0h], ecx
0x4F2050: jmp     loc_4F21B6
0x4F2055: push    1; a4
0x4F2057: lea     edx, [esi+5Ch]
0x4F205A: push    edx; Dst
0x4F205B: push    edi; a2
0x4F205C: mov     ecx, esi; this
0x4F205E: call    TESForm_LoadGenericComponents
0x4F2063: jmp     loc_4F21B6
0x4F2068: cmp     eax, 44494445h
0x4F206D: jz      short loc_4F209B
0x4F206F: cmp     eax, 4C4C5546h
0x4F2074: jnz     loc_4F21B6
0x4F207A: cmp     esi, ebx
0x4F207C: jz      short loc_4F208D
0x4F207E: lea     eax, [esi+18h]
0x4F2081: push    edi
0x4F2082: push    eax
0x4F2083: call    TESFullname_Load
0x4F2088: jmp     loc_4F21B3
0x4F208D: xor     eax, eax
0x4F208F: push    edi
0x4F2090: push    eax
0x4F2091: call    TESFullname_Load
0x4F2096: jmp     loc_4F21B3
0x4F209B: mov     eax, [edi+254h]
0x4F20A1: call    __alloca?
0x4F20A6: mov     ebx, esp
0x4F20A8: push    200h; a4
0x4F20AD: push    ebx; Dst
0x4F20AE: mov     ecx, edi; a1
0x4F20B0: call    TESFile_GetChunkData
0x4F20B5: mov     eax, [esi]
0x4F20B7: mov     edx, [eax+0D8h]
0x4F20BD: push    ebx
0x4F20BE: mov     ecx, esi
0x4F20C0: call    edx
0x4F20C2: xor     ebx, ebx
0x4F20C4: jmp     loc_4F21B6
0x4F20C9: lea     eax, [ebp+var_14]
0x4F20CC: push    eax
0x4F20CD: mov     ecx, edi
0x4F20CF: mov     [ebp+var_14], ebx
0x4F20D2: call    TESFile_GetChunkData4
0x4F20D7: mov     ecx, [ebp+var_14]
0x4F20DA: mov     [esi+58h], ecx
0x4F20DD: jmp     loc_4F21B6
0x4F20E2: cmp     eax, 4D414E57h
0x4F20E7: jg      short loc_4F2142
0x4F20E9: jz      short loc_4F212C
0x4F20EB: sub     eax, 4D414E4Dh
0x4F20F0: jz      short loc_4F2117
0x4F20F2: sub     eax, 6
0x4F20F5: jnz     loc_4F21B6
0x4F20FB: lea     edx, [ebp+var_14]
0x4F20FE: push    edx
0x4F20FF: mov     ecx, edi
0x4F2101: mov     [ebp+var_14], ebx
0x4F2104: call    TESFile_GetChunkData4
0x4F2109: mov     eax, [ebp+var_14]
0x4F210C: mov     [esi+94h], eax
0x4F2112: jmp     loc_4F21B6
0x4F2117: push    10h; a4
0x4F2119: lea     ecx, [esi+84h]
0x4F211F: push    ecx; Dst
0x4F2120: mov     ecx, edi; a1
0x4F2122: call    TESFile_GetChunkData
0x4F2127: jmp     loc_4F21B6
0x4F212C: lea     edx, [ebp+var_14]
0x4F212F: push    edx
0x4F2130: mov     ecx, edi
0x4F2132: mov     [ebp+var_14], ebx
0x4F2135: call    TESFile_GetChunkData4
0x4F213A: mov     eax, [ebp+var_14]
0x4F213D: mov     [esi+7Ch], eax
0x4F2140: jmp     short loc_4F21B6
0x4F2142: cmp     eax, 4E4F4349h
0x4F2147: jz      short loc_4F21A1
0x4F2149: cmp     eax, 5453464Fh
0x4F214E: jnz     short loc_4F21B6
0x4F2150: mov     eax, [edi+254h]
0x4F2156: cmp     eax, ebx
0x4F2158: jz      short loc_4F21B6
0x4F215A: shr     eax, 2
0x4F215D: mov     ebx, eax
0x4F215F: mov     eax, [esi+0A8h]
0x4F2165: test    eax, eax
0x4F2167: jz      short loc_4F2172
0x4F2169: push    eax
0x4F216A: call    FormHeapFree
0x4F216F: add     esp, 4
0x4F2172: xor     ecx, ecx
0x4F2174: mov     eax, ebx
0x4F2176: mov     edx, 4
0x4F217B: mul     edx
0x4F217D: seto    cl
0x4F2180: neg     ecx
0x4F2182: or      ecx, eax
0x4F2184: push    ecx; Size
0x4F2185: call    FormHeapAlloc
0x4F218A: add     esp, 4
0x4F218D: push    0; a4
0x4F218F: push    eax; Dst
0x4F2190: mov     ecx, edi; a1
0x4F2192: mov     [esi+0A8h], eax
0x4F2198: call    TESFile_GetChunkData
0x4F219D: xor     ebx, ebx
0x4F219F: jmp     short loc_4F21B6
0x4F21A1: cmp     esi, ebx
0x4F21A3: jz      short loc_4F21AA
0x4F21A5: lea     eax, [esi+24h]
0x4F21A8: jmp     short loc_4F21AC
0x4F21AA: xor     eax, eax
0x4F21AC: push    edi
0x4F21AD: push    eax
0x4F21AE: call    TESTexture_Load
0x4F21B3: add     esp, 8
0x4F21B6: mov     ecx, edi
0x4F21B8: call    TESFile_GetNextChunk
0x4F21BD: test    al, al
0x4F21BF: jz      short loc_4F21D0
0x4F21C1: mov     ecx, edi
0x4F21C3: call    TESFile_GetChunkType
0x4F21C8: cmp     eax, ebx
0x4F21CA: jnz     loc_4F1EF0
0x4F21D0: mov     ecx, [esi+30h]
0x4F21D3: cmp     [ecx+0Ch], ebx
0x4F21D6: jnz     short loc_4F2240
0x4F21D8: test    byte ptr [esi+5Ch], 1
0x4F21DC: jnz     short loc_4F2240
0x4F21DE: cmp     ecx, ebx
0x4F21E0: jz      short loc_4F21EA
0x4F21E2: mov     eax, [ecx]
0x4F21E4: mov     edx, [eax]
0x4F21E6: push    1
0x4F21E8: call    edx
0x4F21EA: mov     ecx, esi
0x4F21EC: call    sub_46B660
0x4F21F1: test    al, al
0x4F21F3: push    10h; Size
0x4F21F5: jz      short loc_4F2217
0x4F21F7: call    FormHeapAlloc
0x4F21FC: add     esp, 4
0x4F21FF: mov     [ebp+var_14], eax
0x4F2202: cmp     eax, ebx
0x4F2204: mov     [ebp+var_4], ebx
0x4F2207: jz      short loc_4F223B
0x4F2209: push    1B59h
0x4F220E: mov     ecx, eax
0x4F2210: call    ??0?$NiTPointerMap@HPAVTESObjectCELL@@@@QAE@XZ; NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(void)
0x4F2215: jmp     short loc_4F223D
0x4F2217: call    FormHeapAlloc
0x4F221C: add     esp, 4
0x4F221F: mov     [ebp+var_14], eax
0x4F2222: cmp     eax, ebx
0x4F2224: mov     [ebp+var_4], 1
0x4F222B: jz      short loc_4F223B
0x4F222D: push    2BDh
0x4F2232: mov     ecx, eax
0x4F2234: call    ??0?$NiTPointerMap@HPAVTESObjectCELL@@@@QAE@XZ; NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(void)
0x4F2239: jmp     short loc_4F223D
0x4F223B: xor     eax, eax
0x4F223D: mov     [esi+30h], eax
0x4F2240: mov     al, 1
0x4F2242: lea     esp, [ebp-34h]
0x4F2245: mov     ecx, [ebp+var_C]
0x4F2248: mov     large fs:0, ecx
0x4F224F: pop     ecx
0x4F2250: pop     edi
0x4F2251: pop     esi
0x4F2252: pop     ebx
0x4F2253: mov     ecx, [ebp+var_10]
0x4F2256: xor     ecx, ebp
0x4F2258: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F225D: mov     esp, ebp
0x4F225F: pop     ebp
0x4F2260: retn    4

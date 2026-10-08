0x6E1FC0: push    0FFFFFFFFh; Oblivion NiTransformData time-range clone. Creates the destination through the native clone path, slices each nonempty channel to [start,end] through the generic key-range copier (content selectors rotation=2, translation=1, scale=0), then transfers each produced array through the matching ownership setter.
0x6E1FC2: push    offset SEH_6E46A0
0x6E1FC7: mov     eax, large fs:0
0x6E1FCD: push    eax
0x6E1FCE: sub     esp, 10h
0x6E1FD1: push    ebx
0x6E1FD2: push    ebp
0x6E1FD3: push    esi
0x6E1FD4: push    edi
0x6E1FD5: mov     eax, ds:0B30AACh
0x6E1FDA: xor     eax, esp
0x6E1FDC: push    eax
0x6E1FDD: lea     eax, [esp+30h+var_C]
0x6E1FE1: mov     large fs:0, eax
0x6E1FE7: mov     esi, ecx
0x6E1FE9: lea     eax, [esp+30h+var_10]
0x6E1FED: xor     ebp, ebp
0x6E1FEF: push    eax
0x6E1FF0: mov     [esp+34h+var_4], ebp
0x6E1FF4: mov     [esp+34h+var_14], ebp
0x6E1FF8: call    sub_700790
0x6E1FFD: mov     eax, [eax]
0x6E1FFF: cmp     eax, ebp
0x6E2001: mov     edi, [esp+30h+arg_0]
0x6E2005: mov     [edi], eax
0x6E2007: jz      short loc_6E2013
0x6E2009: add     eax, 4
0x6E200C: push    eax; lpAddend
0x6E200D: call    dword ptr ds:0A28078h
0x6E2013: mov     ebx, [esp+30h+var_10]
0x6E2017: cmp     ebx, ebp
0x6E2019: mov     [esp+30h+var_4], ebp
0x6E201D: mov     [esp+30h+var_14], 1
0x6E2025: jz      short loc_6E2043
0x6E2027: lea     ecx, [ebx+4]
0x6E202A: push    ecx; lpAddend
0x6E202B: call    dword ptr ds:0A2807Ch
0x6E2031: test    eax, eax
0x6E2033: jnz     short loc_6E2043
0x6E2035: cmp     ebx, ebp
0x6E2037: jz      short loc_6E2043
0x6E2039: mov     edx, [ebx]
0x6E203B: mov     eax, [edx]
0x6E203D: push    1
0x6E203F: mov     ecx, ebx
0x6E2041: call    eax
0x6E2043: movzx   eax, word ptr [esi+8]
0x6E2047: cmp     ax, bp
0x6E204A: mov     [esp+30h+var_18], ebp
0x6E204E: mov     [esp+30h+var_1C], ebp
0x6E2052: jbe     short loc_6E209B
0x6E2054: fld     [esp+30h+arg_8]
0x6E2058: lea     ecx, [esp+30h+var_1C]
0x6E205C: push    ecx; int
0x6E205D: mov     ecx, [esi+20h]
0x6E2060: lea     edx, [esp+34h+var_18]
0x6E2064: push    edx; int
0x6E2065: mov     edx, [esi+10h]
0x6E2068: sub     esp, 8
0x6E206B: fstp    [esp+40h+var_3C]; float
0x6E206F: movzx   eax, ax
0x6E2072: fld     [esp+40h+arg_4]
0x6E2076: fstp    [esp+40h+var_40]; float
0x6E2079: push    eax; int
0x6E207A: push    ecx; int
0x6E207B: push    edx; int
0x6E207C: push    2; int
0x6E207E: call    NiAnimationKey_CopyRangeRebased; Oblivion generic authored-key range copier. For non-type-4 tracks, counts existing timestamps inclusively in [start,end], allocates through content/type dispatch, type-copies each selected record, and rebases its timestamp to time-start. Does not synthesize boundary samples. For rotation type 4, recursively slices three scalar axes, allocates one 0x4C outer Euler record, and installs the axis results.
0x6E2083: mov     eax, [esi+10h]
0x6E2086: mov     edx, [esp+50h+var_1C]
0x6E208A: mov     ecx, [edi]
0x6E208C: add     esp, 20h
0x6E208F: push    eax
0x6E2090: mov     eax, [esp+34h+var_18]
0x6E2094: push    edx
0x6E2095: push    eax
0x6E2096: call    NiTransformData_SetRotationKeys; Oblivion NiTransformData rotation-key ownership setter. Destroys the previous +0x20 array via the destructor table indexed by type +0x10; type 4 first destroys its three nested scalar-axis tracks. Installs count +8, pointer +0x20, type +0x10, and table-derived stride +0x1C, or clears all four fields for null/zero input.
0x6E209B: movzx   eax, word ptr [esi+0Ah]
0x6E209F: cmp     ax, bp
0x6E20A2: jbe     short loc_6E20EB
0x6E20A4: fld     [esp+30h+arg_8]
0x6E20A8: lea     ecx, [esp+30h+var_1C]
0x6E20AC: push    ecx; int
0x6E20AD: mov     ecx, [esi+24h]
0x6E20B0: lea     edx, [esp+34h+var_18]
0x6E20B4: push    edx; int
0x6E20B5: mov     edx, [esi+14h]
0x6E20B8: sub     esp, 8
0x6E20BB: fstp    [esp+40h+var_3C]; float
0x6E20BF: movzx   eax, ax
0x6E20C2: fld     [esp+40h+arg_4]
0x6E20C6: fstp    [esp+40h+var_40]; float
0x6E20C9: push    eax; int
0x6E20CA: push    ecx; int
0x6E20CB: push    edx; int
0x6E20CC: push    1; int
0x6E20CE: call    NiAnimationKey_CopyRangeRebased; Oblivion generic authored-key range copier. For non-type-4 tracks, counts existing timestamps inclusively in [start,end], allocates through content/type dispatch, type-copies each selected record, and rebases its timestamp to time-start. Does not synthesize boundary samples. For rotation type 4, recursively slices three scalar axes, allocates one 0x4C outer Euler record, and installs the axis results.
0x6E20D3: mov     eax, [esi+14h]
0x6E20D6: mov     edx, [esp+50h+var_1C]
0x6E20DA: mov     ecx, [edi]
0x6E20DC: add     esp, 20h
0x6E20DF: push    eax
0x6E20E0: mov     eax, [esp+34h+var_18]
0x6E20E4: push    edx
0x6E20E5: push    eax
0x6E20E6: call    NiTransformData_SetTranslationKeys; Oblivion NiTransformData translation-key ownership setter. Destroys previous keys +0x24 through the destructor table indexed by type +0x14, then installs count +0x0A, pointer +0x24, type +0x14, and table-derived stride +0x1D. Null pointer or zero count clears the channel fields.
0x6E20EB: movzx   eax, word ptr [esi+0Ch]
0x6E20EF: cmp     ax, bp
0x6E20F2: jbe     short loc_6E213A
0x6E20F4: fld     [esp+30h+arg_8]
0x6E20F8: lea     ecx, [esp+30h+var_1C]
0x6E20FC: push    ecx; int
0x6E20FD: mov     ecx, [esi+28h]
0x6E2100: lea     edx, [esp+34h+var_18]
0x6E2104: push    edx; int
0x6E2105: mov     edx, [esi+18h]
0x6E2108: sub     esp, 8
0x6E210B: fstp    [esp+40h+var_3C]; float
0x6E210F: movzx   eax, ax
0x6E2112: fld     [esp+40h+arg_4]
0x6E2116: fstp    [esp+40h+var_40]; float
0x6E2119: push    eax; int
0x6E211A: push    ecx; int
0x6E211B: push    edx; int
0x6E211C: push    ebp; int
0x6E211D: call    NiAnimationKey_CopyRangeRebased; Oblivion generic authored-key range copier. For non-type-4 tracks, counts existing timestamps inclusively in [start,end], allocates through content/type dispatch, type-copies each selected record, and rebases its timestamp to time-start. Does not synthesize boundary samples. For rotation type 4, recursively slices three scalar axes, allocates one 0x4C outer Euler record, and installs the axis results.
0x6E2122: mov     eax, [esi+18h]
0x6E2125: mov     edx, [esp+50h+var_1C]
0x6E2129: mov     ecx, [edi]
0x6E212B: add     esp, 20h
0x6E212E: push    eax
0x6E212F: mov     eax, [esp+34h+var_18]
0x6E2133: push    edx
0x6E2134: push    eax
0x6E2135: call    NiTransformData_SetScaleKeys; Oblivion NiTransformData scale-key ownership setter. Destroys previous keys +0x28 through the destructor table indexed by type +0x18, then installs count +0x0C, pointer +0x28, type +0x18, and table-derived stride +0x1E. Null pointer or zero count clears the channel fields.
0x6E213A: mov     eax, edi
0x6E213C: mov     ecx, dword ptr [esp+30h+var_C]
0x6E2140: mov     large fs:0, ecx
0x6E2147: pop     ecx
0x6E2148: pop     edi
0x6E2149: pop     esi
0x6E214A: pop     ebp
0x6E214B: pop     ebx
0x6E214C: add     esp, 1Ch
0x6E214F: retn    0Ch
0x9C8120: mov     eax, [ebp-14h]
0x9C8123: and     eax, 1
0x9C8126: jz      locret_9C8138
0x9C812C: and     dword ptr [ebp-14h], 0FFFFFFFEh
0x9C8130: mov     ecx, [ebp+4]; slot
0x9C8133: jmp     NiPointerSlot_Release
0x9C8138: retn
0x9C8139: mov     edx, [esp+arg_4]
0x9C813D: lea     eax, [edx-20h]
0x9C8140: mov     ecx, [edx-24h]
0x9C8143: xor     ecx, eax
0x9C8145: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C814A: mov     eax, offset stru_AF0414
0x9C814F: jmp     ___CxxFrameHandler3

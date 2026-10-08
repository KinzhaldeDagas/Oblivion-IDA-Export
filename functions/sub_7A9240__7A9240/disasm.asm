0x7A9240: push    0FFFFFFFFh; OBLIVION AUTHORITY 2026-08-27: CLeafLodEngine::FindPairs accepts a 16-byte leaf-vector value. For each primary leaf in source order, it scans a contiguous following prefix only until end or the first already-marked candidate, chooses the nearest position within spacing tolerance, and marks only that chosen match. A leaf already used as a match may later be a primary. It never compares textureIndexByte, colorScaleByte, packedColor, or texture record, so pairs may cross leaf textures/layers.
0x7A9242: push    offset SEH_7A9240
0x7A9247: mov     eax, large fs:0
0x7A924D: push    eax
0x7A924E: sub     esp, 74h
0x7A9251: push    ebx
0x7A9252: push    ebp
0x7A9253: push    esi
0x7A9254: push    edi
0x7A9255: mov     eax, ds:0B30AACh
0x7A925A: xor     eax, esp
0x7A925C: push    eax
0x7A925D: lea     eax, [esp+94h+var_C]
0x7A9264: mov     large fs:0, eax
0x7A926A: mov     [esp+94h+var_74], ecx
0x7A926E: mov     ebx, [esp+94h+originalLeaves.begin]
0x7A9275: mov     ebp, [esp+94h+originalLeaves.end]
0x7A927C: xor     eax, eax
0x7A927E: cmp     ebx, eax
0x7A9280: mov     [esp+94h+var_4], eax
0x7A9287: jnz     short loc_7A928D
0x7A9289: xor     esi, esi
0x7A928B: jmp     short loc_7A9294
0x7A928D: mov     esi, ebp
0x7A928F: sub     esi, ebx
0x7A9291: sar     esi, 2
0x7A9294: mov     [esp+94h+var_20.logicalSize], eax
0x7A9298: mov     [esp+94h+value], eax
0x7A929C: lea     eax, [esp+94h+value]
0x7A92A0: lea     ecx, [esi+1Fh]
0x7A92A3: shr     ecx, 5
0x7A92A6: push    eax; value
0x7A92A7: push    ecx; count
0x7A92A8: lea     ecx, [esp+9Ch+var_20.words]; this
0x7A92AF: call    OB_stVectorUInt32_ctor_fill_010201A0; OBLIVION AUTHORITY (2026-08-30): Constructs/fills the vector<unsigned int> backing-word store used by FindPairs' vector<bool> paired-state table.
0x7A92B4: push    esi; newSize
0x7A92B5: lea     ecx, [esp+98h+var_20]; this
0x7A92B9: mov     byte ptr [esp+98h+var_4], 1
0x7A92C1: call    OB_stVectorBool_Resize_010201A0; OBLIVION AUTHORITY (2026-08-30): Resizes the 0x14-byte vector<bool>: logicalSize is followed by a 0x10-byte vector<unsigned int> word store; unused high bits in the last word are cleared.
0x7A92C6: mov     eax, [esp+94h+var_20.words.begin]
0x7A92CA: lea     edx, [esp+94h+var_7D]
0x7A92CE: push    edx; value
0x7A92CF: sub     esp, 0Ch
0x7A92D2: cmp     eax, [esp+0A4h+var_20.words.end]
0x7A92D9: mov     byte ptr [esp+0A4h+var_4], 2
0x7A92E1: mov     [esp+0A4h+var_7D], 0
0x7A92E6: mov     [esp+0A4h+var_68], esp
0x7A92EA: mov     esi, esp
0x7A92EC: mov     edi, eax
0x7A92EE: jbe     short loc_7A92F5
0x7A92F0: call    __invalid_parameter_noinfo
0x7A92F5: lea     eax, [esp+0A4h+var_20]
0x7A92FC: mov     dword ptr [esi], 0
0x7A9302: mov     [esi+4], edi
0x7A9305: mov     dword ptr [esi+8], 0
0x7A930C: mov     [esi], eax
0x7A930E: mov     eax, [esp+0A4h+var_20.logicalSize]
0x7A9315: test    eax, eax
0x7A9317: jbe     short loc_7A9321
0x7A9319: push    eax; delta
0x7A931A: mov     ecx, esi; this
0x7A931C: call    OB_stVectorBoolIterator_Advance_010201A0; OBLIVION AUTHORITY (2026-08-30): Advances the debug vector<bool> iterator by a signed bit distance, carrying across packed 32-bit words and preserving bitOffset 0..31.
0x7A9321: mov     edi, [esp+0A4h+var_20.words.begin]
0x7A9328: sub     esp, 0Ch
0x7A932B: cmp     edi, [esp+0B0h+var_20.words.end]
0x7A9332: mov     [esp+0B0h+var_68], esp
0x7A9336: mov     esi, esp
0x7A9338: jbe     short loc_7A933F
0x7A933A: call    __invalid_parameter_noinfo
0x7A933F: lea     ecx, [esp+0B0h+var_20]
0x7A9346: mov     dword ptr [esi], 0
0x7A934C: mov     [esi+4], edi
0x7A934F: mov     dword ptr [esi+8], 0
0x7A9356: mov     [esi], ecx
0x7A9358: call    OB_stVectorBool_FillRangeChecked_010201A0; OBLIVION AUTHORITY (2026-08-30): Validates the begin/end debug iterators and dispatches the packed vector<bool> range fill.
0x7A935D: add     esp, 1Ch
0x7A9360: cmp     ebx, ebp
0x7A9362: jbe     short loc_7A9369
0x7A9364: call    __invalid_parameter_noinfo
0x7A9369: mov     esi, ebx
0x7A936B: mov     [esp+94h+var_58], esi
0x7A936F: nop
0x7A9370: cmp     ebx, ebp
0x7A9372: jbe     short loc_7A9379
0x7A9374: call    __invalid_parameter_noinfo
0x7A9379: cmp     esi, ebp
0x7A937B: jz      loc_7A96EE
0x7A9381: jb      short loc_7A9388
0x7A9383: call    __invalid_parameter_noinfo
0x7A9388: cmp     ebx, ebp
0x7A938A: fld     dword ptr ds:0A32048h
0x7A9390: mov     edx, [esi]
0x7A9392: fstp    [esp+94h+var_7C]
0x7A9396: mov     [esp+94h+var_54.m_pLeaf], edx
0x7A939A: mov     [esp+94h+var_54.m_pLeafMatch], 0
0x7A93A2: mov     [esp+94h+delta], 0FFFFFFFFh
0x7A93AA: jbe     short loc_7A93B1
0x7A93AC: call    __invalid_parameter_noinfo
0x7A93B1: mov     edi, esi
0x7A93B3: sub     edi, ebx
0x7A93B5: lea     eax, [esp+94h+originalLeaves]
0x7A93BC: sar     edi, 2
0x7A93BF: mov     [esp+94h+var_4C], eax
0x7A93C3: lea     eax, [esi+4]
0x7A93C6: add     edi, 1
0x7A93C9: cmp     eax, ebp
0x7A93CB: mov     [esp+94h+var_48], esi
0x7A93CF: mov     [esp+94h+value], eax
0x7A93D3: ja      short loc_7A93D9
0x7A93D5: cmp     eax, ebx
0x7A93D7: jnb     short loc_7A93DE
0x7A93D9: call    __invalid_parameter_noinfo
0x7A93DE: mov     eax, [esp+94h+var_4C]
0x7A93E2: mov     ecx, [esp+94h+value]
0x7A93E6: mov     [esp+94h+var_64], eax
0x7A93EA: mov     [esp+94h+var_60], ecx
0x7A93EE: mov     edi, edi
0x7A93F0: cmp     ebx, ebp
0x7A93F2: jbe     short loc_7A93F9
0x7A93F4: call    __invalid_parameter_noinfo
0x7A93F9: mov     eax, [esp+94h+var_64]
0x7A93FD: test    eax, eax
0x7A93FF: jz      short loc_7A940C
0x7A9401: lea     edx, [esp+94h+originalLeaves]
0x7A9408: cmp     eax, edx
0x7A940A: jz      short loc_7A9411
0x7A940C: call    __invalid_parameter_noinfo
0x7A9411: cmp     [esp+94h+var_60], ebp
0x7A9415: jz      loc_7A9628
0x7A941B: mov     esi, [esp+94h+var_20.words.begin]
0x7A941F: cmp     esi, [esp+94h+var_20.words.end]
0x7A9426: jbe     short loc_7A942D
0x7A9428: call    __invalid_parameter_noinfo
0x7A942D: lea     eax, [esp+94h+var_20]
0x7A9431: push    edi; delta
0x7A9432: lea     ecx, [esp+98h+var_38]; this
0x7A9436: mov     [esp+98h+var_38.word], esi
0x7A943A: mov     [esp+98h+var_38.bitOffset], 0
0x7A9442: mov     [esp+98h+var_38.owner], eax
0x7A9446: call    OB_stVectorBoolIterator_Advance_010201A0; OBLIVION AUTHORITY (2026-08-30): Advances the debug vector<bool> iterator by a signed bit distance, carrying across packed 32-bit words and preserving bitOffset 0..31.
0x7A944B: mov     esi, [esp+94h+var_38.owner]
0x7A944F: test    esi, esi
0x7A9451: mov     ebp, [esp+94h+var_38.word]
0x7A9455: jnz     short loc_7A9463
0x7A9457: call    __invalid_parameter_noinfo
0x7A945C: call    __invalid_parameter_noinfo
0x7A9461: jmp     short loc_7A9467
0x7A9463: test    ebp, ebp
0x7A9465: jnz     short loc_7A946C
0x7A9467: call    __invalid_parameter_noinfo
0x7A946C: mov     ebx, [esi+8]
0x7A946F: cmp     ebx, [esi+0Ch]
0x7A9472: jbe     short loc_7A9479
0x7A9474: call    __invalid_parameter_noinfo
0x7A9479: mov     ecx, ebp
0x7A947B: sub     ecx, ebx
0x7A947D: mov     ebx, [esp+94h+var_38.bitOffset]
0x7A9481: sar     ecx, 2
0x7A9484: shl     ecx, 5
0x7A9487: add     ecx, ebx
0x7A9489: cmp     ecx, [esi]
0x7A948B: jb      short loc_7A9492
0x7A948D: call    __invalid_parameter_noinfo
0x7A9492: mov     edx, 1
0x7A9497: mov     ecx, ebx
0x7A9499: shl     edx, cl
0x7A949B: test    [ebp+0], edx
0x7A949E: jnz     loc_7A9616; If the current candidate's match bit is already set, breaks the candidate loop. This truncates the scan at the first prior match; it does not skip that entry and continue to later unpaired leaves.
0x7A94A4: mov     esi, [esp+94h+var_20.words.begin]
0x7A94A8: cmp     esi, [esp+94h+var_20.words.end]
0x7A94AF: jbe     short loc_7A94B6
0x7A94B1: call    __invalid_parameter_noinfo
0x7A94B6: lea     eax, [esp+94h+var_20]
0x7A94BA: push    edi; delta
0x7A94BB: lea     ecx, [esp+98h+var_2C]; this
0x7A94BF: mov     [esp+98h+var_2C.word], esi
0x7A94C3: mov     [esp+98h+var_2C.bitOffset], 0
0x7A94CB: mov     [esp+98h+var_2C.owner], eax
0x7A94CF: call    OB_stVectorBoolIterator_Advance_010201A0; OBLIVION AUTHORITY (2026-08-30): Advances the debug vector<bool> iterator by a signed bit distance, carrying across packed 32-bit words and preserving bitOffset 0..31.
0x7A94D4: mov     esi, [esp+94h+var_2C.owner]
0x7A94D8: test    esi, esi
0x7A94DA: mov     ebx, [esp+94h+var_2C.word]
0x7A94DE: jnz     short loc_7A94EC
0x7A94E0: call    __invalid_parameter_noinfo
0x7A94E5: call    __invalid_parameter_noinfo
0x7A94EA: jmp     short loc_7A94F0
0x7A94EC: test    ebx, ebx
0x7A94EE: jnz     short loc_7A94F5
0x7A94F0: call    __invalid_parameter_noinfo
0x7A94F5: mov     ebp, [esi+8]
0x7A94F8: cmp     ebp, [esi+0Ch]
0x7A94FB: jbe     short loc_7A9502
0x7A94FD: call    __invalid_parameter_noinfo
0x7A9502: mov     ecx, ebx
0x7A9504: sub     ecx, ebp
0x7A9506: mov     ebp, [esp+94h+var_2C.bitOffset]
0x7A950A: sar     ecx, 2
0x7A950D: shl     ecx, 5
0x7A9510: add     ecx, ebp
0x7A9512: cmp     ecx, [esi]
0x7A9514: jb      short loc_7A951B
0x7A9516: call    __invalid_parameter_noinfo
0x7A951B: mov     edx, 1
0x7A9520: mov     ecx, ebp
0x7A9522: shl     edx, cl
0x7A9524: test    [ebx], edx
0x7A9526: jnz     loc_7A95D6
0x7A952C: mov     esi, [esp+94h+var_64]
0x7A9530: test    esi, esi
0x7A9532: jnz     short loc_7A9539
0x7A9534: call    __invalid_parameter_noinfo
0x7A9539: mov     ebx, [esp+94h+var_60]
0x7A953D: cmp     ebx, [esi+8]
0x7A9540: jb      short loc_7A9547
0x7A9542: call    __invalid_parameter_noinfo
0x7A9547: mov     esi, [ebx]
0x7A9549: mov     ebp, [esp+94h+var_58]
0x7A954D: add     esi, 4; Candidate pairing input is only the candidate leaf position at +4; no texture-index compatibility test precedes it.
0x7A9550: cmp     ebp, [esp+94h+originalLeaves.end]
0x7A9557: jb      short loc_7A955E
0x7A9559: call    __invalid_parameter_noinfo
0x7A955E: mov     eax, [ebp+0]
0x7A9561: fld     dword ptr [esi+4]
0x7A9564: fsub    dword ptr [eax+8]
0x7A9567: add     eax, 4
0x7A956A: fld     dword ptr [esi]
0x7A956C: mov     ecx, [esp+94h+var_74]
0x7A9570: fsub    dword ptr [eax]
0x7A9572: fld     dword ptr [esi+8]
0x7A9575: fsub    dword ptr [eax+8]
0x7A9578: fld     st(1); Computes Euclidean distance between current and candidate leaf positions. Pair eligibility is geometric, not per-texture.
0x7A957A: fmulp   st(2), st
0x7A957C: fld     st(2)
0x7A957E: fmulp   st(3), st
0x7A9580: fxch    st(1)
0x7A9582: faddp   st(2), st
0x7A9584: fmul    st, st
0x7A9586: faddp   st(1), st
0x7A9588: fstp    [esp+94h+var_6C]
0x7A958C: mov     eax, [esp+94h+var_6C]
0x7A9590: sar     eax, 1
0x7A9592: add     eax, 1FC00000h
0x7A9597: mov     [esp+94h+var_68], eax
0x7A959B: fld     [esp+94h+var_68]
0x7A959F: fld     dword ptr [ecx+10h]
0x7A95A2: fcomp   st(1)
0x7A95A4: fnstsw  ax
0x7A95A6: test    ah, 41h
0x7A95A9: jnz     short loc_7A95DC
0x7A95AB: fld     [esp+94h+var_7C]
0x7A95AF: fcomp   st(1)
0x7A95B1: fnstsw  ax
0x7A95B3: test    ah, 41h
0x7A95B6: jnz     short loc_7A95DC; Within the still-unmarked contiguous candidate prefix, accepts a candidate only when Euclidean position distance is below both spacing tolerance and the current shortest distance. No leaf-texture equality condition exists.
0x7A95B8: mov     edx, [esp+94h+var_64]
0x7A95BC: fstp    [esp+94h+var_7C]
0x7A95C0: cmp     ebx, [edx+8]
0x7A95C3: jb      short loc_7A95CA
0x7A95C5: call    __invalid_parameter_noinfo
0x7A95CA: mov     eax, [ebx]
0x7A95CC: mov     [esp+94h+var_54.m_pLeafMatch], eax
0x7A95D0: mov     [esp+94h+delta], edi
0x7A95D4: jmp     short loc_7A95DE
0x7A95D6: mov     ebx, [esp+94h+var_60]
0x7A95DA: jmp     short loc_7A95DE
0x7A95DC: fstp    st
0x7A95DE: mov     esi, [esp+94h+var_64]
0x7A95E2: add     edi, 1
0x7A95E5: test    esi, esi
0x7A95E7: jnz     short loc_7A95EE
0x7A95E9: call    __invalid_parameter_noinfo
0x7A95EE: cmp     ebx, [esi+8]
0x7A95F1: jb      short loc_7A95F8
0x7A95F3: call    __invalid_parameter_noinfo
0x7A95F8: mov     esi, [esp+94h+var_58]
0x7A95FC: mov     ebp, [esp+94h+originalLeaves.end]
0x7A9603: add     ebx, 4
0x7A9606: mov     [esp+94h+var_60], ebx
0x7A960A: mov     ebx, [esp+94h+originalLeaves.begin]
0x7A9611: jmp     loc_7A93F0
0x7A9616: mov     esi, [esp+94h+var_58]
0x7A961A: mov     ebp, [esp+94h+originalLeaves.end]
0x7A9621: mov     ebx, [esp+94h+originalLeaves.begin]
0x7A9628: cmp     [esp+94h+var_54.m_pLeafMatch], 0
0x7A962D: jz      loc_7A96D6
0x7A9633: mov     edi, [esp+94h+var_20.words.begin]
0x7A9637: cmp     edi, [esp+94h+var_20.words.end]
0x7A963E: jbe     short loc_7A9645
0x7A9640: call    __invalid_parameter_noinfo
0x7A9645: mov     edx, [esp+94h+delta]
0x7A9649: lea     ecx, [esp+94h+var_20]
0x7A964D: mov     [esp+94h+var_44.owner], ecx
0x7A9651: push    edx; delta
0x7A9652: lea     ecx, [esp+98h+var_44]; this
0x7A9656: mov     [esp+98h+var_44.word], edi
0x7A965A: mov     [esp+98h+var_44.bitOffset], 0
0x7A9662: call    OB_stVectorBoolIterator_Advance_010201A0; OBLIVION AUTHORITY (2026-08-30): Advances the debug vector<bool> iterator by a signed bit distance, carrying across packed 32-bit words and preserving bitOffset 0..31.
0x7A9667: mov     ebx, [esp+94h+var_44.owner]
0x7A966B: test    ebx, ebx
0x7A966D: mov     edi, [esp+94h+var_44.word]
0x7A9671: jnz     short loc_7A967F
0x7A9673: call    __invalid_parameter_noinfo
0x7A9678: call    __invalid_parameter_noinfo
0x7A967D: jmp     short loc_7A9683
0x7A967F: test    edi, edi
0x7A9681: jnz     short loc_7A9688
0x7A9683: call    __invalid_parameter_noinfo
0x7A9688: mov     eax, [ebx+8]
0x7A968B: cmp     eax, [ebx+0Ch]
0x7A968E: mov     [esp+94h+var_6C], eax
0x7A9692: jbe     short loc_7A969D
0x7A9694: call    __invalid_parameter_noinfo
0x7A9699: mov     eax, [esp+94h+var_6C]
0x7A969D: mov     ecx, edi
0x7A969F: sub     ecx, eax
0x7A96A1: sar     ecx, 2
0x7A96A4: shl     ecx, 5
0x7A96A7: add     ecx, [esp+94h+var_44.bitOffset]
0x7A96AB: cmp     ecx, [ebx]
0x7A96AD: jb      short loc_7A96B4
0x7A96AF: call    __invalid_parameter_noinfo
0x7A96B4: mov     ecx, [esp+94h+var_44.bitOffset]
0x7A96B8: mov     edx, 1
0x7A96BD: shl     edx, cl
0x7A96BF: mov     ecx, [esp+94h+var_74]; this
0x7A96C3: lea     eax, [esp+94h+var_54]
0x7A96C7: push    eax; value
0x7A96C8: or      [edi], edx; Marks only the selected matching candidate. The current primary leaf is not marked, so a leaf used earlier as a match can later act as a primary.
0x7A96CA: call    OB_stVectorLeafLodEntry_PushBack_010201A0; Pushes {primaryLeaf, nearestLeaf} pair. Because selection never reads +0x40 textureIndexByte, the pair may cross leaf texture/layer records.
0x7A96CF: mov     ebx, [esp+94h+originalLeaves.begin]
0x7A96D6: cmp     esi, ebp
0x7A96D8: jb      short loc_7A96DF
0x7A96DA: call    __invalid_parameter_noinfo
0x7A96DF: mov     ecx, [esp+94h+value]
0x7A96E3: mov     [esp+94h+var_58], ecx
0x7A96E7: mov     esi, ecx
0x7A96E9: jmp     loc_7A9370
0x7A96EE: mov     eax, [esp+94h+var_20.words.begin]
0x7A96F2: xor     esi, esi
0x7A96F4: cmp     eax, esi
0x7A96F6: mov     [esp+94h+var_20.logicalSize], esi
0x7A96FA: jz      short loc_7A9705
0x7A96FC: push    eax
0x7A96FD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A9702: add     esp, 4
0x7A9705: cmp     ebx, esi
0x7A9707: mov     [esp+94h+var_20.words.begin], esi
0x7A970B: mov     [esp+94h+var_20.words.end], esi
0x7A9712: mov     [esp+94h+var_20.words.capacity], esi
0x7A9719: jz      short loc_7A9724
0x7A971B: push    ebx
0x7A971C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A9721: add     esp, 4
0x7A9724: mov     ecx, [esp+94h+var_C]
0x7A972B: mov     large fs:0, ecx
0x7A9732: pop     ecx
0x7A9733: pop     edi
0x7A9734: pop     esi
0x7A9735: pop     ebp
0x7A9736: pop     ebx
0x7A9737: add     esp, 80h
0x7A973D: retn    10h
0x7A87D0: push    esi
0x7A87D1: mov     esi, ecx
0x7A87D3: mov     dword ptr [esi], 0
0x7A87D9: mov     eax, [esi+8]
0x7A87DC: test    eax, eax
0x7A87DE: jz      short loc_7A87E9
0x7A87E0: push    eax
0x7A87E1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A87E6: add     esp, 4
0x7A87E9: mov     dword ptr [esi+8], 0
0x7A87F0: mov     dword ptr [esi+0Ch], 0
0x7A87F7: mov     dword ptr [esi+10h], 0
0x7A87FE: pop     esi
0x7A87FF: retn
0x9CCF30: lea     ecx, [ebp+4]; this
0x9CCF33: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CCF38: lea     ecx, [ebp-1Ch]; this
0x9CCF3B: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CCF40: lea     ecx, [ebp-20h]
0x9CCF43: jmp     loc_7A87D0
0x9CCF48: mov     edx, [esp+originalLeaves.begin]
0x9CCF4C: lea     eax, [edx-84h]
0x9CCF52: mov     ecx, [edx-88h]
0x9CCF58: xor     ecx, eax
0x9CCF5A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCF5F: mov     eax, offset stru_AF636C
0x9CCF64: jmp     ___CxxFrameHandler3

0x785050: push    ebp; Oblivion 1.2.0.416: vector<stVec>::insert(position,count,value); preserves aliasing with a local 24-byte copy, uses 1.5x growth, and handles in-place or reallocated insertion. False FUNC_NORET cleared.
0x785051: mov     ebp, esp
0x785053: push    0FFFFFFFFh
0x785055: push    offset SEH_785050
0x78505A: mov     eax, large fs:0
0x785060: push    eax
0x785061: sub     esp, 28h
0x785064: push    ebx
0x785065: push    esi
0x785066: push    edi
0x785067: mov     eax, ds:0B30AACh
0x78506C: xor     eax, ebp
0x78506E: push    eax
0x78506F: lea     eax, [ebp+var_C]
0x785072: mov     large fs:0, eax
0x785078: mov     [ebp+var_10], esp
0x78507B: mov     esi, ecx
0x78507D: mov     [ebp+var_14], esi
0x785080: mov     eax, [ebp+value]
0x785083: mov     ecx, [eax]
0x785085: mov     edx, [eax+4]
0x785088: mov     dword ptr [ebp+var_34], ecx
0x78508B: mov     ecx, [eax+8]
0x78508E: mov     [ebp+var_30], edx
0x785091: mov     edx, [eax+0Ch]
0x785094: mov     [ebp+var_2C], ecx
0x785097: mov     ecx, [eax+10h]
0x78509A: mov     [ebp+var_28], edx
0x78509D: mov     edx, [eax+14h]
0x7850A0: mov     [ebp+var_24], ecx
0x7850A3: mov     [ebp+var_20], edx
0x7850A6: mov     edi, [esi+4]
0x7850A9: xor     ecx, ecx
0x7850AB: cmp     edi, ecx
0x7850AD: mov     [ebp+var_4], ecx
0x7850B0: jz      short loc_7850C8
0x7850B2: mov     ecx, [esi+0Ch]
0x7850B5: sub     ecx, edi
0x7850B7: mov     eax, 2AAAAAABh
0x7850BC: imul    ecx
0x7850BE: sar     edx, 2
0x7850C1: mov     ecx, edx
0x7850C3: shr     ecx, 1Fh
0x7850C6: add     ecx, edx
0x7850C8: mov     ebx, [ebp+count]
0x7850CB: test    ebx, ebx
0x7850CD: jz      loc_785337
0x7850D3: test    edi, edi
0x7850D5: jnz     short loc_7850DB
0x7850D7: xor     eax, eax
0x7850D9: jmp     short loc_7850F1
0x7850DB: mov     edx, [esi+8]
0x7850DE: sub     edx, edi
0x7850E0: mov     eax, 2AAAAAABh
0x7850E5: imul    edx
0x7850E7: sar     edx, 2
0x7850EA: mov     eax, edx
0x7850EC: shr     eax, 1Fh
0x7850EF: add     eax, edx
0x7850F1: or      edx, 0FFFFFFFFh
0x7850F4: sub     edx, eax
0x7850F6: cmp     edx, ebx
0x7850F8: jnb     short loc_7850FF
0x7850FA: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x7850FF: test    edi, edi
0x785101: jnz     short loc_785107
0x785103: xor     eax, eax
0x785105: jmp     short loc_78511D
0x785107: mov     edx, [esi+8]
0x78510A: sub     edx, edi
0x78510C: mov     eax, 2AAAAAABh
0x785111: imul    edx
0x785113: sar     edx, 2
0x785116: mov     eax, edx
0x785118: shr     eax, 1Fh
0x78511B: add     eax, edx
0x78511D: add     eax, ebx
0x78511F: cmp     ecx, eax
0x785121: jnb     loc_78524F
0x785127: mov     eax, ecx
0x785129: shr     eax, 1
0x78512B: or      edx, 0FFFFFFFFh
0x78512E: sub     edx, eax
0x785130: cmp     edx, ecx
0x785132: jnb     short loc_785138
0x785134: xor     ecx, ecx
0x785136: jmp     short loc_78513A
0x785138: add     ecx, eax
0x78513A: test    edi, edi
0x78513C: jnz     short loc_785142
0x78513E: xor     eax, eax
0x785140: jmp     short loc_785158
0x785142: mov     edx, [esi+8]
0x785145: sub     edx, edi
0x785147: mov     eax, 2AAAAAABh
0x78514C: imul    edx
0x78514E: sar     edx, 2
0x785151: mov     eax, edx
0x785153: shr     eax, 1Fh
0x785156: add     eax, edx
0x785158: add     eax, ebx
0x78515A: cmp     ecx, eax
0x78515C: jnb     short loc_785169
0x78515E: mov     ecx, esi; this
0x785160: call    OB_stVector24_Size_010201A0; Oblivion 1.2.0.416: returns (end-begin)/0x18 for a compiler-folded 24-byte vector specialization; xrefs show both stVec and branch-flare records.
0x785165: mov     ecx, eax
0x785167: add     ecx, ebx
0x785169: lea     ecx, [ecx+ecx*2]
0x78516C: add     ecx, ecx
0x78516E: add     ecx, ecx
0x785170: add     ecx, ecx
0x785172: push    ecx; Size
0x785173: mov     [ebp+var_1C], ecx
0x785176: call    FormHeapAlloc
0x78517B: mov     edi, [ebp+last]
0x78517E: mov     ecx, [esi+4]
0x785181: mov     byte ptr [ebp+var_18], 0
0x785185: mov     edx, [ebp+var_18]
0x785188: push    edx
0x785189: mov     [ebp+count], eax
0x78518C: mov     edx, [ebp+count]
0x78518F: push    edx
0x785190: push    esi
0x785191: push    eax; destination
0x785192: push    edi; last
0x785193: push    ecx; first
0x785194: mov     [ebp+value], eax
0x785197: mov     byte ptr [ebp+var_4], 1
0x78519B: call    OB_stVector24_UninitializedCopyRange_010201A0; Oblivion 1.2.0.416: placement/uninitialized copy of six-dword records; shared by stVec and branch-flare vector paths.
0x7851A0: add     esp, 1Ch
0x7851A3: lea     ecx, [ebp+var_34]
0x7851A6: push    ecx; value
0x7851A7: push    ebx; count
0x7851A8: push    eax; destination
0x7851A9: mov     ecx, esi
0x7851AB: mov     [ebp+count], eax
0x7851AE: call    OB_stVector24_UninitializedFillNThunk_010201A0; Oblivion 1.2.0.416: stdcall checked-template thunk to the shared 24-byte uninitialized-fill primitive; returns destination plus count*0x18.
0x7851B3: mov     ecx, [esi+8]
0x7851B6: mov     byte ptr [ebp+last], 0
0x7851BA: mov     edx, [ebp+last]
0x7851BD: push    edx
0x7851BE: mov     [ebp+count], eax
0x7851C1: mov     edx, [ebp+count]
0x7851C4: push    edx
0x7851C5: push    esi
0x7851C6: push    eax; destination
0x7851C7: push    ecx; last
0x7851C8: push    edi; first
0x7851C9: call    OB_stVector24_UninitializedCopyRange_010201A0; Oblivion 1.2.0.416: placement/uninitialized copy of six-dword records; shared by stVec and branch-flare vector paths.
0x7851CE: mov     edi, [esi+4]
0x7851D1: xor     eax, eax
0x7851D3: add     esp, 18h
0x7851D6: cmp     edi, eax
0x7851D8: mov     [ebp+var_4], eax
0x7851DB: jz      short loc_7851F3
0x7851DD: mov     ecx, [esi+8]
0x7851E0: sub     ecx, edi
0x7851E2: mov     eax, 2AAAAAABh
0x7851E7: imul    ecx
0x7851E9: sar     edx, 2
0x7851EC: mov     eax, edx
0x7851EE: shr     eax, 1Fh
0x7851F1: add     eax, edx
0x7851F3: add     ebx, eax
0x7851F5: test    edi, edi
0x7851F7: jz      short loc_785211
0x7851F9: mov     eax, [esi+8]
0x7851FC: push    eax; last
0x7851FD: push    edi; first
0x7851FE: mov     ecx, esi
0x785200: call    OB_stVector24_DestroyRange_010201A0; Oblivion 1.2.0.416: destroys [first,last) in 0x18-byte steps through the folded trivial record destructor.
0x785205: mov     eax, [esi+4]
0x785208: push    eax
0x785209: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78520E: add     esp, 4
0x785211: mov     eax, [ebp+value]
0x785214: mov     ecx, [ebp+var_1C]
0x785217: add     ecx, eax
0x785219: lea     edx, [ebx+ebx*2]
0x78521C: mov     [esi+0Ch], ecx
0x78521F: lea     ecx, [eax+edx*8]
0x785222: mov     [esi+8], ecx
0x785225: mov     [esi+4], eax
0x785228: jmp     loc_785337
0x78522D: mov     edx, [ebp+count]
0x785230: mov     esi, [ebp+value]
0x785233: mov     ecx, [ebp+var_14]
0x785236: push    edx; last
0x785237: push    esi; first
0x785238: call    OB_stVector24_DestroyRange_010201A0; Oblivion 1.2.0.416: destroys [first,last) in 0x18-byte steps through the folded trivial record destructor.
0x78523D: push    esi
0x78523E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x785243: add     esp, 4
0x785246: push    0
0x785248: push    0
0x78524A: call    ThrowException??
0x78524F: mov     ecx, [esi+8]
0x785252: mov     edi, [ebp+last]
0x785255: mov     edx, ecx
0x785257: sub     edx, edi
0x785259: mov     eax, 2AAAAAABh
0x78525E: imul    edx
0x785260: sar     edx, 2
0x785263: mov     eax, edx
0x785265: shr     eax, 1Fh
0x785268: add     eax, edx
0x78526A: cmp     eax, ebx
0x78526C: mov     [ebp+value], ecx
0x78526F: jnb     loc_7852FC
0x785275: lea     eax, [ebx+ebx*2]
0x785278: add     eax, eax
0x78527A: add     eax, eax
0x78527C: add     eax, eax
0x78527E: mov     [ebp+value], eax
0x785281: add     eax, edi
0x785283: push    eax; destination
0x785284: push    ecx; last
0x785285: push    edi; first
0x785286: mov     ecx, esi
0x785288: call    OB_stVector24_UninitializedCopyRangeThunk_010201A0; Oblivion 1.2.0.416: stdcall adapter to the shared 0x18-byte uninitialized-copy primitive.
0x78528D: mov     ecx, [esi+8]
0x785290: lea     edx, [ebp+var_34]
0x785293: push    edx; value
0x785294: mov     edx, ecx
0x785296: sub     edx, edi
0x785298: mov     eax, 2AAAAAABh
0x78529D: imul    edx
0x78529F: sar     edx, 2
0x7852A2: mov     eax, edx
0x7852A4: shr     eax, 1Fh
0x7852A7: add     eax, edx
0x7852A9: sub     ebx, eax
0x7852AB: push    ebx; count
0x7852AC: push    ecx; destination
0x7852AD: mov     ecx, esi
0x7852AF: mov     byte ptr [ebp+var_4], 3
0x7852B3: call    OB_stVector24_UninitializedFillNThunk_010201A0; Oblivion 1.2.0.416: stdcall checked-template thunk to the shared 24-byte uninitialized-fill primitive; returns destination plus count*0x18.
0x7852B8: mov     eax, [ebp+value]
0x7852BB: add     [esi+8], eax
0x7852BE: mov     esi, [esi+8]
0x7852C1: lea     ecx, [ebp+var_34]
0x7852C4: push    ecx; value
0x7852C5: sub     esi, eax
0x7852C7: push    esi; last
0x7852C8: push    edi; first
0x7852C9: call    OB_stVector24_CopyFillRange_010201A0; Oblivion 1.2.0.416: assigns one six-dword value across [first,last); shared 0x18-byte vector primitive.
0x7852CE: add     esp, 0Ch
0x7852D1: jmp     short loc_785337
0x7852D3: mov     eax, [ebp+count]
0x7852D6: mov     ecx, [ebp+var_14]
0x7852D9: mov     edx, [ecx+8]
0x7852DC: lea     eax, [eax+eax*2]
0x7852DF: add     eax, eax
0x7852E1: add     eax, eax
0x7852E3: add     eax, eax
0x7852E5: add     edx, eax
0x7852E7: push    edx; last
0x7852E8: mov     edx, [ebp+last]
0x7852EB: add     eax, edx
0x7852ED: push    eax; first
0x7852EE: call    OB_stVector24_DestroyRange_010201A0; Oblivion 1.2.0.416: destroys [first,last) in 0x18-byte steps through the folded trivial record destructor.
0x7852F3: push    0
0x7852F5: push    0
0x7852F7: call    ThrowException??
0x7852FC: lea     ebx, [ebx+ebx*2]
0x7852FF: add     ebx, ebx
0x785301: push    ecx; destination
0x785302: add     ebx, ebx
0x785304: mov     eax, ecx
0x785306: add     ebx, ebx
0x785308: sub     eax, ebx
0x78530A: push    ecx; last
0x78530B: push    eax; first
0x78530C: mov     ecx, esi
0x78530E: mov     [ebp+count], eax
0x785311: call    OB_stVector24_UninitializedCopyRangeThunk_010201A0; Oblivion 1.2.0.416: stdcall adapter to the shared 0x18-byte uninitialized-copy primitive.
0x785316: mov     ecx, [ebp+count]
0x785319: mov     [esi+8], eax
0x78531C: mov     eax, [ebp+value]
0x78531F: push    eax; destinationEnd
0x785320: push    ecx; last
0x785321: push    edi; first
0x785322: call    OB_stVector24_CopyBackwardRangeThunk_010201A0; Oblivion 1.2.0.416: checked-template thunk to the shared 24-byte copy-backward adapter; used by both vector<stVec> and branch-flare insert-fill paths.
0x785327: lea     edx, [ebp+var_34]
0x78532A: push    edx; value
0x78532B: add     ebx, edi
0x78532D: push    ebx; last
0x78532E: push    edi; first
0x78532F: call    OB_stVector24_CopyFillRange_010201A0; Oblivion 1.2.0.416: assigns one six-dword value across [first,last); shared 0x18-byte vector primitive.
0x785334: add     esp, 18h
0x785337: lea     ecx, [ebp+var_34]; this
0x78533A: mov     [ebp+var_4], 0FFFFFFFFh
0x785341: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x785346: mov     ecx, [ebp+var_C]
0x785349: mov     large fs:0, ecx
0x785350: pop     ecx
0x785351: pop     edi
0x785352: pop     esi
0x785353: pop     ebx
0x785354: mov     esp, ebp
0x785356: pop     ebp
0x785357: retn    10h
0x9CAFD0: lea     ecx, [ebp+var_34]; this
0x9CAFD3: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CAFD8: mov     edx, [esp-4+last]
0x9CAFDC: lea     eax, [edx+0Ch]
0x9CAFDF: mov     ecx, [edx-38h]
0x9CAFE2: xor     ecx, eax
0x9CAFE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAFE9: mov     eax, offset stru_AF362C
0x9CAFEE: jmp     ___CxxFrameHandler3

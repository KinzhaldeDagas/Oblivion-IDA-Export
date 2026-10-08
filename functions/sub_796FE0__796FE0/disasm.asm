0x796FE0: push    ebp; OBLIVION AUTHORITY (2026-08-30): Insert-fill core for vector<vector<unsigned short>>. Copies the fill value, uses 0x10-byte owner arithmetic, 1.5x growth, exception-safe move/fill construction, and normal epilogue at 0x797267; prior noreturn metadata was false.
0x796FE1: mov     ebp, esp
0x796FE3: push    0FFFFFFFFh
0x796FE5: push    offset SEH_796FE0
0x796FEA: mov     eax, large fs:0
0x796FF0: push    eax
0x796FF1: sub     esp, 1Ch
0x796FF4: push    ebx
0x796FF5: push    esi
0x796FF6: push    edi
0x796FF7: mov     eax, ds:0B30AACh
0x796FFC: xor     eax, ebp
0x796FFE: push    eax
0x796FFF: lea     eax, [ebp+var_C]
0x797002: mov     large fs:0, eax
0x797008: mov     [ebp+var_10], esp
0x79700B: mov     esi, ecx
0x79700D: mov     [ebp+var_14], esi
0x797010: mov     eax, [ebp+first]
0x797013: push    eax; source
0x797014: lea     ecx, [ebp+var_28]; this
0x797017: call    OB_stVectorUShort_CopyCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy constructor for vector<unsigned short>; allocates exact source size and copies its 2-byte elements.
0x79701C: mov     ecx, [esi+4]
0x79701F: xor     eax, eax
0x797021: cmp     ecx, eax
0x797023: mov     [ebp+var_4], eax
0x797026: jnz     short loc_79702C
0x797028: xor     ebx, ebx
0x79702A: jmp     short loc_797034
0x79702C: mov     ebx, [esi+0Ch]
0x79702F: sub     ebx, ecx
0x797031: sar     ebx, 4
0x797034: mov     edi, [ebp+last]
0x797037: cmp     edi, eax
0x797039: jz      loc_797246
0x79703F: cmp     ecx, eax
0x797041: jz      short loc_79704B
0x797043: mov     eax, [esi+8]
0x797046: sub     eax, ecx
0x797048: sar     eax, 4
0x79704B: mov     edx, 0FFFFFFFh
0x797050: sub     edx, eax
0x797052: cmp     edx, edi
0x797054: jnb     short loc_79705B
0x797056: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x79705B: test    ecx, ecx
0x79705D: jnz     short loc_797063
0x79705F: xor     eax, eax
0x797061: jmp     short loc_79706B
0x797063: mov     eax, [esi+8]
0x797066: sub     eax, ecx
0x797068: sar     eax, 4
0x79706B: add     eax, edi
0x79706D: cmp     ebx, eax
0x79706F: jnb     loc_797185
0x797075: mov     eax, ebx
0x797077: shr     eax, 1
0x797079: mov     edx, 0FFFFFFFh
0x79707E: sub     edx, eax
0x797080: cmp     edx, ebx
0x797082: jnb     short loc_797088
0x797084: xor     ebx, ebx
0x797086: jmp     short loc_79708A
0x797088: add     ebx, eax
0x79708A: test    ecx, ecx
0x79708C: jnz     short loc_797092
0x79708E: xor     eax, eax
0x797090: jmp     short loc_79709A
0x797092: mov     eax, [esi+8]
0x797095: sub     eax, ecx
0x797097: sar     eax, 4
0x79709A: add     eax, edi
0x79709C: cmp     ebx, eax
0x79709E: jnb     short loc_7970B3
0x7970A0: test    ecx, ecx
0x7970A2: jnz     short loc_7970A8
0x7970A4: xor     eax, eax
0x7970A6: jmp     short loc_7970B0
0x7970A8: mov     eax, [esi+8]
0x7970AB: sub     eax, ecx
0x7970AD: sar     eax, 4
0x7970B0: lea     ebx, [eax+edi]
0x7970B3: push    0
0x7970B5: push    ebx; count
0x7970B6: call    OB_stVector16_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for arrays of 0x10-byte elements. Checks count*0x10 overflow, throws std::bad_alloc on overflow, and allocates through FormHeapAlloc; used by multiple outer-vector specializations including vector<vector<float>> and vector<vector<SFrondGuide>>.
0x7970BB: mov     ecx, [esi+4]
0x7970BE: mov     byte ptr [ebp+destinationEnd], 0
0x7970C2: mov     edx, [ebp+destinationEnd]
0x7970C5: push    edx
0x7970C6: mov     [ebp+last], eax
0x7970C9: mov     edx, [ebp+last]
0x7970CC: push    edx
0x7970CD: push    esi
0x7970CE: push    eax; destination
0x7970CF: mov     [ebp+first], eax
0x7970D2: mov     eax, [ebp+position]
0x7970D5: push    eax; last
0x7970D6: push    ecx; first
0x7970D7: mov     byte ptr [ebp+var_4], 1
0x7970DB: call    OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move for vector<unsigned short> owners. Constructs empty destinations then swaps their buffers with sources, leaving sources empty; normal return is at 0x795EA8.
0x7970E0: add     esp, 20h
0x7970E3: lea     ecx, [ebp+var_28]
0x7970E6: push    ecx; value
0x7970E7: push    edi; count
0x7970E8: push    eax; destination
0x7970E9: mov     ecx, esi
0x7970EB: mov     [ebp+last], eax
0x7970EE: call    OB_stVector_stVectorUShort_UninitializedFillNThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): Stdcall uninitialized_fill_n adapter for vector<unsigned short> owners. Boundary repaired through its pointer-result epilogue and ret 0x0C at 0x796904.
0x7970F3: mov     ecx, [esi+8]
0x7970F6: mov     byte ptr [ebp+destinationEnd], 0
0x7970FA: mov     edx, [ebp+destinationEnd]
0x7970FD: push    edx
0x7970FE: mov     [ebp+last], eax
0x797101: mov     edx, [ebp+last]
0x797104: push    edx
0x797105: push    esi
0x797106: push    eax; destination
0x797107: mov     eax, [ebp+position]
0x79710A: push    ecx; last
0x79710B: push    eax; first
0x79710C: call    OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move for vector<unsigned short> owners. Constructs empty destinations then swaps their buffers with sources, leaving sources empty; normal return is at 0x795EA8.
0x797111: mov     ecx, [esi+4]
0x797114: add     esp, 18h
0x797117: test    ecx, ecx
0x797119: jnz     short loc_79711F
0x79711B: xor     eax, eax
0x79711D: jmp     short loc_797127
0x79711F: mov     eax, [esi+8]
0x797122: sub     eax, ecx
0x797124: sar     eax, 4
0x797127: add     edi, eax
0x797129: test    ecx, ecx
0x79712B: jz      short loc_797148
0x79712D: mov     edx, [ebp+last]
0x797130: mov     eax, [esi+8]
0x797133: push    edx
0x797134: push    esi
0x797135: push    eax; last
0x797136: push    ecx; first
0x797137: call    OB_stVector4_DestroyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
0x79713C: mov     ecx, [esi+4]
0x79713F: push    ecx
0x797140: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797145: add     esp, 14h
0x797148: mov     eax, [ebp+first]
0x79714B: shl     ebx, 4
0x79714E: add     ebx, eax
0x797150: shl     edi, 4
0x797153: add     edi, eax
0x797155: mov     [esi+0Ch], ebx
0x797158: mov     [esi+8], edi
0x79715B: mov     [esi+4], eax
0x79715E: jmp     loc_797246
0x797163: mov     edx, [ebp+last]
0x797166: mov     esi, [ebp+first]
0x797169: mov     ecx, [ebp+var_14]
0x79716C: push    edx; last
0x79716D: push    esi; first
0x79716E: call    OB_stVector4_DestroyRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for the compiler-folded 0x10-byte vector-owner destruction range.
0x797173: push    esi
0x797174: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797179: add     esp, 4
0x79717C: push    0
0x79717E: push    0
0x797180: call    ThrowException??
0x797185: mov     eax, [esi+8]
0x797188: mov     ebx, [ebp+position]
0x79718B: mov     ecx, eax
0x79718D: sub     ecx, ebx
0x79718F: sar     ecx, 4
0x797192: cmp     ecx, edi
0x797194: mov     [ebp+destinationEnd], eax
0x797197: jnb     short loc_79720F
0x797199: mov     ecx, edi
0x79719B: shl     ecx, 4
0x79719E: mov     [ebp+first], ecx
0x7971A1: add     ecx, ebx
0x7971A3: push    ecx; destination
0x7971A4: push    eax; last
0x7971A5: push    ebx; first
0x7971A6: mov     ecx, esi
0x7971A8: call    OB_stVector_stVectorUShort_UninitializedMoveRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for uninitialized moving vector<unsigned short> owners. Boundary repaired through ret 0x0C at 0x796936 and noreturn cleared.
0x7971AD: mov     eax, [esi+8]
0x7971B0: mov     ecx, eax
0x7971B2: sub     ecx, ebx
0x7971B4: sar     ecx, 4
0x7971B7: lea     edx, [ebp+var_28]
0x7971BA: push    edx; value
0x7971BB: sub     edi, ecx
0x7971BD: push    edi; count
0x7971BE: push    eax; destination
0x7971BF: mov     ecx, esi
0x7971C1: mov     byte ptr [ebp+var_4], 3
0x7971C5: call    OB_stVector_stVectorUShort_UninitializedFillNThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): Stdcall uninitialized_fill_n adapter for vector<unsigned short> owners. Boundary repaired through its pointer-result epilogue and ret 0x0C at 0x796904.
0x7971CA: mov     eax, [ebp+first]
0x7971CD: add     [esi+8], eax
0x7971D0: mov     esi, [esi+8]
0x7971D3: lea     edx, [ebp+var_28]
0x7971D6: push    edx; value
0x7971D7: sub     esi, eax
0x7971D9: push    esi; last
0x7971DA: push    ebx; first
0x7971DB: mov     [ebp+var_4], 0
0x7971E2: call    OB_stVector_stVectorUShort_CopyAssignFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<unsigned short> value across an initialized owner range by repeated deep copy assignment.
0x7971E7: add     esp, 0Ch
0x7971EA: jmp     short loc_797246
0x7971EC: mov     ecx, [ebp+var_14]
0x7971EF: mov     eax, [ebp+last]
0x7971F2: mov     edx, [ecx+8]
0x7971F5: shl     eax, 4
0x7971F8: add     edx, eax
0x7971FA: push    edx; last
0x7971FB: mov     edx, [ebp+position]
0x7971FE: add     eax, edx
0x797200: push    eax; first
0x797201: call    OB_stVector4_DestroyRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for the compiler-folded 0x10-byte vector-owner destruction range.
0x797206: push    0
0x797208: push    0
0x79720A: call    ThrowException??
0x79720F: shl     edi, 4
0x797212: mov     ecx, edi
0x797214: push    eax; destination
0x797215: mov     edi, eax
0x797217: sub     edi, ecx
0x797219: push    eax; last
0x79721A: mov     [ebp+first], ecx
0x79721D: push    edi; first
0x79721E: mov     ecx, esi
0x797220: call    OB_stVector_stVectorUShort_UninitializedMoveRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for uninitialized moving vector<unsigned short> owners. Boundary repaired through ret 0x0C at 0x796936 and noreturn cleared.
0x797225: mov     [esi+8], eax
0x797228: mov     eax, [ebp+destinationEnd]
0x79722B: push    eax; destinationEnd
0x79722C: push    edi; last
0x79722D: push    ebx; first
0x79722E: call    OB_stVector_stVectorUShort_MoveAssignRangeBackward_010201A0; OBLIVION AUTHORITY (2026-08-30): Backward move-assignment of vector<unsigned short> owners, implemented by swapping pointer triplets from the range end toward destinationEnd.
0x797233: mov     edx, [ebp+first]
0x797236: lea     ecx, [ebp+var_28]
0x797239: push    ecx; value
0x79723A: add     edx, ebx
0x79723C: push    edx; last
0x79723D: push    ebx; first
0x79723E: call    OB_stVector_stVectorUShort_CopyAssignFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<unsigned short> value across an initialized owner range by repeated deep copy assignment.
0x797243: add     esp, 18h
0x797246: mov     eax, [ebp+var_28.begin]
0x797249: test    eax, eax
0x79724B: jz      short loc_797256
0x79724D: push    eax
0x79724E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797253: add     esp, 4
0x797256: mov     ecx, [ebp+var_C]
0x797259: mov     large fs:0, ecx
0x797260: pop     ecx
0x797261: pop     edi
0x797262: pop     esi
0x797263: pop     ebx
0x797264: mov     esp, ebp
0x797266: pop     ebp
0x797267: retn    10h
0x9CBFB0: lea     ecx, [ebp+var_28]; this
0x9CBFB3: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBFB8: mov     edx, [esp-4+position]
0x9CBFBC: lea     eax, [edx+0Ch]
0x9CBFBF: mov     ecx, [edx-2Ch]
0x9CBFC2: xor     ecx, eax
0x9CBFC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBFC9: mov     eax, offset stru_AF5020
0x9CBFCE: jmp     ___CxxFrameHandler3

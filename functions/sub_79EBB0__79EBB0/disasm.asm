0x79EBB0: push    ebp; OBLIVION AUTHORITY (2026-08-30): Checked insert-fill implementation for vector<vector<float>>. Deep-copies the fill value, reuses capacity or grows by roughly 1.5x, moves existing inner-vector owners with ownership transfer, and preserves exception cleanup. Oblivion call flow establishes the specialization; RT4.1 FrondEngine.cpp lines 768-779 corroborate its m_vRunningLengths resize role.
0x79EBB1: mov     ebp, esp
0x79EBB3: push    0FFFFFFFFh
0x79EBB5: push    offset SEH_79EBB0
0x79EBBA: mov     eax, large fs:0
0x79EBC0: push    eax
0x79EBC1: sub     esp, 1Ch
0x79EBC4: push    ebx
0x79EBC5: push    esi
0x79EBC6: push    edi
0x79EBC7: mov     eax, ds:0B30AACh
0x79EBCC: xor     eax, ebp
0x79EBCE: push    eax
0x79EBCF: lea     eax, [ebp+var_C]
0x79EBD2: mov     large fs:0, eax
0x79EBD8: mov     [ebp+var_10], esp
0x79EBDB: mov     esi, ecx
0x79EBDD: mov     [ebp+var_14], esi
0x79EBE0: mov     eax, [ebp+source]
0x79EBE3: push    eax; source
0x79EBE4: lea     ecx, [ebp+var_28]; this
0x79EBE7: call    OB_stVector4_CopyCtor_010201A0; Oblivion binary evidence: compiler-folded copy constructor for the exact 0x10 four-byte vector layout. Allocates count*4 bytes, memmoves the source range, then initializes begin/end/capacity. Pointer-vector copies are intentionally shallow; pointed-object ownership remains with higher-level tree/LOD code.
0x79EBEC: mov     ecx, [esi+4]
0x79EBEF: xor     eax, eax
0x79EBF1: cmp     ecx, eax
0x79EBF3: mov     [ebp+var_4], eax
0x79EBF6: jnz     short loc_79EBFC
0x79EBF8: xor     ebx, ebx
0x79EBFA: jmp     short loc_79EC04
0x79EBFC: mov     ebx, [esi+0Ch]
0x79EBFF: sub     ebx, ecx
0x79EC01: sar     ebx, 4
0x79EC04: mov     edi, [ebp+count]
0x79EC07: cmp     edi, eax
0x79EC09: jz      loc_79EE16
0x79EC0F: cmp     ecx, eax
0x79EC11: jz      short loc_79EC1B
0x79EC13: mov     eax, [esi+8]
0x79EC16: sub     eax, ecx
0x79EC18: sar     eax, 4
0x79EC1B: mov     edx, 0FFFFFFFh
0x79EC20: sub     edx, eax
0x79EC22: cmp     edx, edi
0x79EC24: jnb     short loc_79EC2B
0x79EC26: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x79EC2B: test    ecx, ecx
0x79EC2D: jnz     short loc_79EC33
0x79EC2F: xor     eax, eax
0x79EC31: jmp     short loc_79EC3B
0x79EC33: mov     eax, [esi+8]
0x79EC36: sub     eax, ecx
0x79EC38: sar     eax, 4
0x79EC3B: add     eax, edi
0x79EC3D: cmp     ebx, eax
0x79EC3F: jnb     loc_79ED55
0x79EC45: mov     eax, ebx
0x79EC47: shr     eax, 1
0x79EC49: mov     edx, 0FFFFFFFh
0x79EC4E: sub     edx, eax
0x79EC50: cmp     edx, ebx
0x79EC52: jnb     short loc_79EC58
0x79EC54: xor     ebx, ebx
0x79EC56: jmp     short loc_79EC5A
0x79EC58: add     ebx, eax
0x79EC5A: test    ecx, ecx
0x79EC5C: jnz     short loc_79EC62
0x79EC5E: xor     eax, eax
0x79EC60: jmp     short loc_79EC6A
0x79EC62: mov     eax, [esi+8]
0x79EC65: sub     eax, ecx
0x79EC67: sar     eax, 4
0x79EC6A: add     eax, edi
0x79EC6C: cmp     ebx, eax
0x79EC6E: jnb     short loc_79EC83
0x79EC70: test    ecx, ecx
0x79EC72: jnz     short loc_79EC78
0x79EC74: xor     eax, eax
0x79EC76: jmp     short loc_79EC80
0x79EC78: mov     eax, [esi+8]
0x79EC7B: sub     eax, ecx
0x79EC7D: sar     eax, 4
0x79EC80: lea     ebx, [eax+edi]
0x79EC83: push    0
0x79EC85: push    ebx; count
0x79EC86: call    OB_stVector16_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for arrays of 0x10-byte elements. Checks count*0x10 overflow, throws std::bad_alloc on overflow, and allocates through FormHeapAlloc; used by multiple outer-vector specializations including vector<vector<float>> and vector<vector<SFrondGuide>>.
0x79EC8B: mov     ecx, [esi+4]
0x79EC8E: mov     byte ptr [ebp+destinationEnd], 0
0x79EC92: mov     edx, [ebp+destinationEnd]
0x79EC95: push    edx
0x79EC96: mov     [ebp+count], eax
0x79EC99: mov     edx, [ebp+count]
0x79EC9C: push    edx
0x79EC9D: push    esi
0x79EC9E: push    eax; destinationFirst
0x79EC9F: mov     [ebp+source], eax
0x79ECA2: mov     eax, [ebp+position]
0x79ECA5: push    eax; last
0x79ECA6: push    ecx; first
0x79ECA7: mov     byte ptr [ebp+var_4], 1
0x79ECAB: call    OB_stVector4_UninitializedMoveRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move of 0x10-byte vector owners. Constructs empty destinations, swaps begin/end/capacity ownership from each source, leaves sources empty, returns destinationFirst+count, and destroys the constructed prefix only on unwind. The prior noreturn annotation was false.
0x79ECB0: add     esp, 20h
0x79ECB3: lea     ecx, [ebp+var_28]
0x79ECB6: push    ecx; value
0x79ECB7: push    edi; count
0x79ECB8: push    eax; destination
0x79ECB9: mov     ecx, esi
0x79ECBB: mov     [ebp+count], eax
0x79ECBE: call    OB_stVector_stVectorFloat_UninitializedFillNThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for vector<vector<float>> uninitialized_fill_n. Corrected boundary includes the pointer-result calculation and ret 0x0C normal tail through 0x79E3F6.
0x79ECC3: mov     ecx, [esi+8]
0x79ECC6: mov     byte ptr [ebp+destinationEnd], 0
0x79ECCA: mov     edx, [ebp+destinationEnd]
0x79ECCD: push    edx
0x79ECCE: mov     [ebp+count], eax
0x79ECD1: mov     edx, [ebp+count]
0x79ECD4: push    edx
0x79ECD5: push    esi
0x79ECD6: push    eax; destinationFirst
0x79ECD7: mov     eax, [ebp+position]
0x79ECDA: push    ecx; last
0x79ECDB: push    eax; first
0x79ECDC: call    OB_stVector4_UninitializedMoveRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move of 0x10-byte vector owners. Constructs empty destinations, swaps begin/end/capacity ownership from each source, leaves sources empty, returns destinationFirst+count, and destroys the constructed prefix only on unwind. The prior noreturn annotation was false.
0x79ECE1: mov     ecx, [esi+4]
0x79ECE4: add     esp, 18h
0x79ECE7: test    ecx, ecx
0x79ECE9: jnz     short loc_79ECEF
0x79ECEB: xor     eax, eax
0x79ECED: jmp     short loc_79ECF7
0x79ECEF: mov     eax, [esi+8]
0x79ECF2: sub     eax, ecx
0x79ECF4: sar     eax, 4
0x79ECF7: add     edi, eax
0x79ECF9: test    ecx, ecx
0x79ECFB: jz      short loc_79ED18
0x79ECFD: mov     edx, [ebp+count]
0x79ED00: mov     eax, [esi+8]
0x79ED03: push    edx
0x79ED04: push    esi
0x79ED05: push    eax; last
0x79ED06: push    ecx; first
0x79ED07: call    OB_stVector4_DestroyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
0x79ED0C: mov     ecx, [esi+4]
0x79ED0F: push    ecx
0x79ED10: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79ED15: add     esp, 14h
0x79ED18: mov     eax, [ebp+source]
0x79ED1B: shl     ebx, 4
0x79ED1E: add     ebx, eax
0x79ED20: shl     edi, 4
0x79ED23: add     edi, eax
0x79ED25: mov     [esi+0Ch], ebx
0x79ED28: mov     [esi+8], edi
0x79ED2B: mov     [esi+4], eax
0x79ED2E: jmp     loc_79EE16
0x79ED33: mov     edx, [ebp+count]
0x79ED36: mov     esi, [ebp+source]
0x79ED39: mov     ecx, [ebp+var_14]
0x79ED3C: push    edx; last
0x79ED3D: push    esi; first
0x79ED3E: call    OB_stVector4_DestroyRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for the compiler-folded 0x10-byte vector-owner destruction range.
0x79ED43: push    esi
0x79ED44: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79ED49: add     esp, 4
0x79ED4C: push    0
0x79ED4E: push    0
0x79ED50: call    ThrowException??
0x79ED55: mov     eax, [esi+8]
0x79ED58: mov     ebx, [ebp+position]
0x79ED5B: mov     ecx, eax
0x79ED5D: sub     ecx, ebx
0x79ED5F: sar     ecx, 4
0x79ED62: cmp     ecx, edi
0x79ED64: mov     [ebp+destinationEnd], eax
0x79ED67: jnb     short loc_79EDDF
0x79ED69: mov     ecx, edi
0x79ED6B: shl     ecx, 4
0x79ED6E: mov     [ebp+source], ecx
0x79ED71: add     ecx, ebx
0x79ED73: push    ecx; destinationFirst
0x79ED74: push    eax; last
0x79ED75: push    ebx; first
0x79ED76: mov     ecx, esi
0x79ED78: call    OB_stVector4_UninitializedMoveRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for uninitialized move of 0x10-byte vector owners. Function boundary now includes the add-esp/ret 0x0C normal tail through 0x7969A8.
0x79ED7D: mov     eax, [esi+8]
0x79ED80: mov     ecx, eax
0x79ED82: sub     ecx, ebx
0x79ED84: sar     ecx, 4
0x79ED87: lea     edx, [ebp+var_28]
0x79ED8A: push    edx; value
0x79ED8B: sub     edi, ecx
0x79ED8D: push    edi; count
0x79ED8E: push    eax; destination
0x79ED8F: mov     ecx, esi
0x79ED91: mov     byte ptr [ebp+var_4], 3
0x79ED95: call    OB_stVector_stVectorFloat_UninitializedFillNThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for vector<vector<float>> uninitialized_fill_n. Corrected boundary includes the pointer-result calculation and ret 0x0C normal tail through 0x79E3F6.
0x79ED9A: mov     eax, [ebp+source]
0x79ED9D: add     [esi+8], eax
0x79EDA0: mov     esi, [esi+8]
0x79EDA3: lea     edx, [ebp+var_28]
0x79EDA6: push    edx; value
0x79EDA7: sub     esi, eax
0x79EDA9: push    esi; last
0x79EDAA: push    ebx; first
0x79EDAB: mov     [ebp+var_4], 0
0x79EDB2: call    OB_stVectorFloat_CopyAssignFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<float> value into every initialized element in [first,last), advancing by one 0x10-byte vector owner per iteration.
0x79EDB7: add     esp, 0Ch
0x79EDBA: jmp     short loc_79EE16
0x79EDBC: mov     ecx, [ebp+var_14]
0x79EDBF: mov     eax, [ebp+count]
0x79EDC2: mov     edx, [ecx+8]
0x79EDC5: shl     eax, 4
0x79EDC8: add     edx, eax
0x79EDCA: push    edx; last
0x79EDCB: mov     edx, [ebp+position]
0x79EDCE: add     eax, edx
0x79EDD0: push    eax; first
0x79EDD1: call    OB_stVector4_DestroyRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for the compiler-folded 0x10-byte vector-owner destruction range.
0x79EDD6: push    0
0x79EDD8: push    0
0x79EDDA: call    ThrowException??
0x79EDDF: shl     edi, 4
0x79EDE2: mov     ecx, edi
0x79EDE4: push    eax; destinationFirst
0x79EDE5: mov     edi, eax
0x79EDE7: sub     edi, ecx
0x79EDE9: push    eax; last
0x79EDEA: mov     [ebp+source], ecx
0x79EDED: push    edi; first
0x79EDEE: mov     ecx, esi
0x79EDF0: call    OB_stVector4_UninitializedMoveRangeThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for uninitialized move of 0x10-byte vector owners. Function boundary now includes the add-esp/ret 0x0C normal tail through 0x7969A8.
0x79EDF5: mov     [esi+8], eax
0x79EDF8: mov     eax, [ebp+destinationEnd]
0x79EDFB: push    eax; destinationEnd
0x79EDFC: push    edi; last
0x79EDFD: push    ebx; first
0x79EDFE: call    OB_stVector_stVectorFloat_MoveAssignRangeBackwardThunk_010201A0; OBLIVION AUTHORITY (2026-08-30): Adapter for backward ownership-moving of inner vector<float> elements.
0x79EE03: mov     edx, [ebp+source]
0x79EE06: lea     ecx, [ebp+var_28]
0x79EE09: push    ecx; value
0x79EE0A: add     edx, ebx
0x79EE0C: push    edx; last
0x79EE0D: push    ebx; first
0x79EE0E: call    OB_stVectorFloat_CopyAssignFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<float> value into every initialized element in [first,last), advancing by one 0x10-byte vector owner per iteration.
0x79EE13: add     esp, 18h
0x79EE16: mov     eax, [ebp+var_28.begin]
0x79EE19: test    eax, eax
0x79EE1B: jz      short loc_79EE26
0x79EE1D: push    eax
0x79EE1E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79EE23: add     esp, 4
0x79EE26: mov     ecx, [ebp+var_C]
0x79EE29: mov     large fs:0, ecx
0x79EE30: pop     ecx
0x79EE31: pop     edi
0x79EE32: pop     esi
0x79EE33: pop     ebx
0x79EE34: mov     esp, ebp
0x79EE36: pop     ebp
0x79EE37: retn    10h
0x9CC450: lea     ecx, [ebp+var_28]; this
0x9CC453: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC458: mov     edx, [esp-4+position]
0x9CC45C: lea     eax, [edx+0Ch]
0x9CC45F: mov     ecx, [edx-2Ch]
0x9CC462: xor     ecx, eax
0x9CC464: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC469: mov     eax, offset stru_AF56A8
0x9CC46E: jmp     ___CxxFrameHandler3

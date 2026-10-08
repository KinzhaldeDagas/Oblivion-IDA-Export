0x796E60: push    ebp; OBLIVION AUTHORITY (2026-08-30): Fill constructor for vector<vector<unsigned short>>; allocates count outer owners and exception-safely deep-copies the supplied inner vector.
0x796E61: mov     ebp, esp
0x796E63: push    0FFFFFFFFh
0x796E65: push    offset SEH_796E60
0x796E6A: mov     eax, large fs:0
0x796E70: push    eax
0x796E71: sub     esp, 0Ch
0x796E74: push    ebx
0x796E75: push    esi
0x796E76: push    edi
0x796E77: mov     eax, ds:0B30AACh
0x796E7C: xor     eax, ebp
0x796E7E: push    eax
0x796E7F: lea     eax, [ebp+var_C]
0x796E82: mov     large fs:0, eax
0x796E88: mov     [ebp+var_10], esp
0x796E8B: mov     esi, ecx
0x796E8D: mov     [ebp+var_18], esi
0x796E90: mov     ebx, [ebp+arg_0]
0x796E93: xor     eax, eax
0x796E95: cmp     ebx, eax
0x796E97: mov     [esi+4], eax
0x796E9A: mov     [esi+8], eax
0x796E9D: mov     [esi+0Ch], eax
0x796EA0: jz      short loc_796EF1
0x796EA2: cmp     ebx, 0FFFFFFFh
0x796EA8: jbe     short loc_796EAF
0x796EAA: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x796EAF: push    eax
0x796EB0: push    ebx; count
0x796EB1: call    OB_stVector16_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for arrays of 0x10-byte elements. Checks count*0x10 overflow, throws std::bad_alloc on overflow, and allocates through FormHeapAlloc; used by multiple outer-vector specializations including vector<vector<float>> and vector<vector<SFrondGuide>>.
0x796EB6: mov     edx, [ebp+arg_0]
0x796EB9: mov     edi, eax
0x796EBB: mov     byte ptr [ebp+var_14], 0
0x796EBF: mov     ecx, [ebp+var_14]
0x796EC2: push    ecx
0x796EC3: mov     ecx, [ebp+arg_0]
0x796EC6: push    edx
0x796EC7: shl     ebx, 4
0x796ECA: lea     eax, [ebx+edi]
0x796ECD: mov     [esi+0Ch], eax
0x796ED0: mov     eax, [ebp+value]
0x796ED3: push    esi
0x796ED4: push    eax; value
0x796ED5: push    ecx; count
0x796ED6: push    edi; destination
0x796ED7: mov     [esi+4], edi
0x796EDA: mov     [esi+8], edi
0x796EDD: mov     [ebp+var_4], 0
0x796EE4: call    OB_stVector_stVectorUShort_UninitializedFillN_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<unsigned short> owners. Deep-copy-constructs count values and normally returns at 0x795DE0; prior noreturn metadata was false.
0x796EE9: add     esp, 20h
0x796EEC: add     ebx, edi
0x796EEE: mov     [esi+8], ebx
0x796EF1: mov     ecx, [ebp+var_C]
0x796EF4: mov     large fs:0, ecx
0x796EFB: pop     ecx
0x796EFC: pop     edi
0x796EFD: pop     esi
0x796EFE: pop     ebx
0x796EFF: mov     esp, ebp
0x796F01: pop     ebp
0x796F02: retn    8
0x796F05: mov     ecx, [ebp+var_18]; this
0x796F08: call    OB_stVector_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Full destructor for an outer vector of 0x10-byte vector owners. Destroys every inner owner, frees outer storage, and clears the triplet; structurally shared by multiple specializations.
0x796F0D: push    0
0x796F0F: push    0
0x796F11: call    ThrowException??
0x9CBF70: mov     edx, [esp-4+value]
0x9CBF74: lea     eax, [edx+0Ch]
0x9CBF77: mov     ecx, [edx-1Ch]
0x9CBF7A: xor     ecx, eax
0x9CBF7C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBF81: mov     eax, offset stru_AF4F84
0x9CBF86: jmp     ___CxxFrameHandler3

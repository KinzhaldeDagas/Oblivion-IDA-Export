0x7A8E20: push    ebx; OBLIVION AUTHORITY (2026-08-30): Constructs/fills the vector<unsigned int> backing-word store used by FindPairs' vector<bool> paired-state table.
0x7A8E21: push    esi
0x7A8E22: xor     ebx, ebx
0x7A8E24: push    edi
0x7A8E25: mov     edi, [esp+0Ch+arg_0]
0x7A8E29: cmp     edi, ebx
0x7A8E2B: mov     esi, ecx
0x7A8E2D: mov     [esi+4], ebx
0x7A8E30: mov     [esi+8], ebx
0x7A8E33: mov     [esi+0Ch], ebx
0x7A8E36: jz      short loc_7A8E7D
0x7A8E38: cmp     edi, 3FFFFFFFh
0x7A8E3E: jbe     short loc_7A8E45
0x7A8E40: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x7A8E45: push    ebx
0x7A8E46: push    edi; count
0x7A8E47: call    OB_stVector4_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for vectors with 4-byte elements. Validates count*4 overflow, throws bad_alloc on overflow, and allocates through FormHeapAlloc; FindPairs uses it for vector<bool>'s uint32 backing words.
0x7A8E4C: lea     ecx, [eax+edi*4]
0x7A8E4F: add     esp, 8
0x7A8E52: cmp     edi, ebx
0x7A8E54: mov     [esi+0Ch], ecx
0x7A8E57: mov     [esi+4], eax
0x7A8E5A: mov     [esi+8], eax
0x7A8E5D: mov     ecx, edi
0x7A8E5F: mov     edx, eax
0x7A8E61: jbe     short loc_7A8E77
0x7A8E63: mov     ebx, [esp+0Ch+value]
0x7A8E67: push    ebp
0x7A8E68: mov     ebp, [ebx]
0x7A8E6A: mov     [edx], ebp
0x7A8E6C: sub     ecx, 1
0x7A8E6F: add     edx, 4
0x7A8E72: test    ecx, ecx
0x7A8E74: ja      short loc_7A8E68
0x7A8E76: pop     ebp
0x7A8E77: lea     edx, [eax+edi*4]
0x7A8E7A: mov     [esi+8], edx
0x7A8E7D: pop     edi
0x7A8E7E: pop     esi
0x7A8E7F: pop     ebx
0x7A8E80: retn    8

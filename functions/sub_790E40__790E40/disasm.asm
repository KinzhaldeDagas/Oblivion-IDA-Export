0x790E40: push    esi; Resets an OB_stVector4 pointer triplet and allocates capacity for exactly the requested number of 4-byte elements while leaving end==begin. Returns false for zero capacity; OB_stVector4_CopyAssign uses it after freeing insufficient storage.
0x790E41: xor     eax, eax
0x790E43: push    edi
0x790E44: mov     edi, [esp+8+arg_0]
0x790E48: cmp     edi, eax
0x790E4A: mov     esi, ecx
0x790E4C: mov     [esi+4], eax
0x790E4F: mov     [esi+8], eax
0x790E52: mov     [esi+0Ch], eax
0x790E55: jnz     short loc_790E5E
0x790E57: pop     edi
0x790E58: xor     al, al
0x790E5A: pop     esi
0x790E5B: retn    4
0x790E5E: cmp     edi, 3FFFFFFFh
0x790E64: jbe     short loc_790E6B
0x790E66: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x790E6B: push    eax
0x790E6C: push    edi; count
0x790E6D: call    OB_stVector4_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for vectors with 4-byte elements. Validates count*4 overflow, throws bad_alloc on overflow, and allocates through FormHeapAlloc; FindPairs uses it for vector<bool>'s uint32 backing words.
0x790E72: mov     [esi+4], eax
0x790E75: mov     [esi+8], eax
0x790E78: add     esp, 8
0x790E7B: lea     eax, [eax+edi*4]
0x790E7E: mov     [esi+0Ch], eax
0x790E81: pop     edi
0x790E82: mov     al, 1
0x790E84: pop     esi
0x790E85: retn    4

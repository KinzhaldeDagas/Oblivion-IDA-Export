0x795050: push    esi; OBLIVION AUTHORITY (2026-08-30): Initializes raw storage for a vector whose elements are 0x10-byte vector owners. Enforces max_size 0x0FFFFFFF and allocates count*0x10.
0x795051: mov     esi, [esp+4+arg_0]
0x795055: xor     eax, eax
0x795057: cmp     esi, eax
0x795059: push    edi
0x79505A: mov     edi, ecx
0x79505C: mov     [edi+4], eax
0x79505F: mov     [edi+8], eax
0x795062: mov     [edi+0Ch], eax
0x795065: jnz     short loc_79506E
0x795067: pop     edi
0x795068: xor     al, al
0x79506A: pop     esi
0x79506B: retn    4
0x79506E: cmp     esi, 0FFFFFFFh
0x795074: jbe     short loc_79507B
0x795076: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x79507B: push    eax
0x79507C: push    esi; count
0x79507D: call    OB_stVector16_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for arrays of 0x10-byte elements. Checks count*0x10 overflow, throws std::bad_alloc on overflow, and allocates through FormHeapAlloc; used by multiple outer-vector specializations including vector<vector<float>> and vector<vector<SFrondGuide>>.
0x795082: shl     esi, 4
0x795085: add     esi, eax
0x795087: add     esp, 8
0x79508A: mov     [edi+4], eax
0x79508D: mov     [edi+8], eax
0x795090: mov     [edi+0Ch], esi
0x795093: pop     edi
0x795094: mov     al, 1
0x795096: pop     esi
0x795097: retn    4

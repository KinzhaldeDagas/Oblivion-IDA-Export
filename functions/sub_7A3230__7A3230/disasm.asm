0x7A3230: push    esi; Initializes an empty typed leaf-texture vector and, when count is nonzero, allocates capacity for exactly count 0x54-byte elements.
0x7A3231: mov     esi, [esp+4+arg_0]
0x7A3235: xor     eax, eax
0x7A3237: cmp     esi, eax
0x7A3239: push    edi
0x7A323A: mov     edi, ecx
0x7A323C: mov     [edi+4], eax
0x7A323F: mov     [edi+8], eax
0x7A3242: mov     [edi+0Ch], eax
0x7A3245: jnz     short loc_7A324E
0x7A3247: pop     edi
0x7A3248: xor     al, al
0x7A324A: pop     esi
0x7A324B: retn    4
0x7A324E: cmp     esi, 30C30C3h
0x7A3254: jbe     short loc_7A325B
0x7A3256: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x7A325B: push    eax
0x7A325C: push    esi; count
0x7A325D: call    OB_stVector_SIdvLeafTexture_Allocate_010201A0; Oblivion leaf-texture vector allocator: rejects count*0x54 overflow, then allocates exactly count 0x54-byte records through FormHeap.
0x7A3262: imul    esi, 54h ; 'T'
0x7A3265: add     esi, eax
0x7A3267: add     esp, 8
0x7A326A: mov     [edi+4], eax
0x7A326D: mov     [edi+8], eax
0x7A3270: mov     [edi+0Ch], esi
0x7A3273: pop     edi
0x7A3274: mov     al, 1
0x7A3276: pop     esi
0x7A3277: retn    4

0x79ACC0: push    esi; Initializes an empty 16-byte SFrondVertex vector wrapper and, when count is nonzero, buys exact count capacity. Maximum count is 0x04924924 (0xFFFFFFFF/0x38).
0x79ACC1: xor     eax, eax
0x79ACC3: push    edi
0x79ACC4: mov     edi, [esp+8+arg_0]
0x79ACC8: cmp     edi, eax
0x79ACCA: mov     esi, ecx
0x79ACCC: mov     [esi+4], eax
0x79ACCF: mov     [esi+8], eax
0x79ACD2: mov     [esi+0Ch], eax
0x79ACD5: jnz     short loc_79ACDE
0x79ACD7: pop     edi
0x79ACD8: xor     al, al
0x79ACDA: pop     esi
0x79ACDB: retn    4
0x79ACDE: cmp     edi, 4924924h
0x79ACE4: jbe     short loc_79ACEB
0x79ACE6: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x79ACEB: push    eax
0x79ACEC: push    edi; count
0x79ACED: call    OB_stVector_SFrondVertex_Allocate_010201A0; Oblivion-authoritative allocator for count SFrondVertex elements. Allocates count*0x38 bytes from FormHeap and throws std::bad_alloc on multiplication overflow.
0x79ACF2: lea     ecx, ds:0[edi*8]
0x79ACF9: sub     ecx, edi
0x79ACFB: add     esp, 8
0x79ACFE: lea     edx, [eax+ecx*8]
0x79AD01: mov     [esi+4], eax
0x79AD04: mov     [esi+8], eax
0x79AD07: pop     edi
0x79AD08: mov     [esi+0Ch], edx
0x79AD0B: mov     al, 1
0x79AD0D: pop     esi
0x79AD0E: retn    4

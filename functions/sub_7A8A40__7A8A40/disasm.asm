0x7A8A40: push    ebp; OBLIVION AUTHORITY (2026-08-30): Core fill-insert for the 0x10-byte vector<CLeafLodEngine::SLodEntry>; handles capacity growth, relocation, and repeated 8-byte pair insertion.
0x7A8A41: mov     ebp, esp
0x7A8A43: push    0FFFFFFFFh
0x7A8A45: push    offset SEH_7A8A40
0x7A8A4A: mov     eax, large fs:0
0x7A8A50: push    eax
0x7A8A51: sub     esp, 10h
0x7A8A54: push    ebx
0x7A8A55: push    esi
0x7A8A56: push    edi
0x7A8A57: mov     eax, ds:0B30AACh
0x7A8A5C: xor     eax, ebp
0x7A8A5E: push    eax
0x7A8A5F: lea     eax, [ebp+var_C]
0x7A8A62: mov     large fs:0, eax
0x7A8A68: mov     [ebp+var_10], esp
0x7A8A6B: mov     esi, ecx
0x7A8A6D: mov     eax, [ebp+value]
0x7A8A70: mov     ecx, [eax]
0x7A8A72: mov     edx, [eax+4]
0x7A8A75: mov     eax, [esi+4]
0x7A8A78: test    eax, eax
0x7A8A7A: mov     [ebp+var_1C.m_pLeaf], ecx
0x7A8A7D: mov     [ebp+var_1C.m_pLeafMatch], edx
0x7A8A80: jnz     short loc_7A8A86
0x7A8A82: xor     edi, edi
0x7A8A84: jmp     short loc_7A8A8E
0x7A8A86: mov     edi, [esi+0Ch]
0x7A8A89: sub     edi, eax
0x7A8A8B: sar     edi, 3
0x7A8A8E: mov     edx, [ebp+count]
0x7A8A91: test    edx, edx
0x7A8A93: jz      loc_7A8C82
0x7A8A99: test    eax, eax
0x7A8A9B: jnz     short loc_7A8AA1
0x7A8A9D: xor     ecx, ecx
0x7A8A9F: jmp     short loc_7A8AA9
0x7A8AA1: mov     ecx, [esi+8]
0x7A8AA4: sub     ecx, eax
0x7A8AA6: sar     ecx, 3
0x7A8AA9: mov     ebx, 1FFFFFFFh
0x7A8AAE: sub     ebx, ecx
0x7A8AB0: cmp     ebx, edx
0x7A8AB2: jnb     short loc_7A8AB9
0x7A8AB4: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x7A8AB9: test    eax, eax
0x7A8ABB: jnz     short loc_7A8AC1
0x7A8ABD: xor     ecx, ecx
0x7A8ABF: jmp     short loc_7A8AC9
0x7A8AC1: mov     ecx, [esi+8]
0x7A8AC4: sub     ecx, eax
0x7A8AC6: sar     ecx, 3
0x7A8AC9: add     ecx, edx
0x7A8ACB: cmp     edi, ecx
0x7A8ACD: jnb     loc_7A8BCF
0x7A8AD3: mov     ecx, edi
0x7A8AD5: shr     ecx, 1
0x7A8AD7: mov     ebx, 1FFFFFFFh
0x7A8ADC: sub     ebx, ecx
0x7A8ADE: cmp     ebx, edi
0x7A8AE0: jnb     short loc_7A8AE6
0x7A8AE2: xor     edi, edi
0x7A8AE4: jmp     short loc_7A8AE8
0x7A8AE6: add     edi, ecx
0x7A8AE8: test    eax, eax
0x7A8AEA: jnz     short loc_7A8AF0
0x7A8AEC: xor     ecx, ecx
0x7A8AEE: jmp     short loc_7A8AF8
0x7A8AF0: mov     ecx, [esi+8]
0x7A8AF3: sub     ecx, eax
0x7A8AF5: sar     ecx, 3
0x7A8AF8: add     ecx, edx
0x7A8AFA: cmp     edi, ecx
0x7A8AFC: jnb     short loc_7A8B11
0x7A8AFE: test    eax, eax
0x7A8B00: jnz     short loc_7A8B06
0x7A8B02: xor     ecx, ecx
0x7A8B04: jmp     short loc_7A8B0E
0x7A8B06: mov     ecx, [esi+8]
0x7A8B09: sub     ecx, eax
0x7A8B0B: sar     ecx, 3
0x7A8B0E: lea     edi, [ecx+edx]
0x7A8B11: push    0
0x7A8B13: push    edi; count
0x7A8B14: call    OB_stVectorLeafLodEntry_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Allocates count*8 bytes from the FormHeap for CLeafLodEngine::SLodEntry storage; each entry is {primaryLeaf, matchedLeaf}.
0x7A8B19: mov     edx, [ebp+count]
0x7A8B1C: mov     byte ptr [ebp+value], 0
0x7A8B20: mov     ecx, [ebp+value]
0x7A8B23: push    ecx
0x7A8B24: mov     ecx, [ebp+position]
0x7A8B27: push    edx
0x7A8B28: mov     ebx, eax
0x7A8B2A: mov     eax, [esi+4]
0x7A8B2D: push    esi
0x7A8B2E: push    ebx; destination
0x7A8B2F: push    ecx; last
0x7A8B30: push    eax; first
0x7A8B31: mov     [ebp+var_14], ebx
0x7A8B34: mov     [ebp+var_4], 0
0x7A8B3B: call    OB_LeafLodEntry_UninitializedCopyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Uninitialized forward copy of 8-byte SLodEntry values used while growing m_vPairs.
0x7A8B40: mov     ecx, [ebp+count]
0x7A8B43: add     esp, 20h
0x7A8B46: lea     edx, [ebp+var_1C]
0x7A8B49: push    edx; value
0x7A8B4A: push    ecx; count
0x7A8B4B: push    eax; destination
0x7A8B4C: mov     ecx, esi
0x7A8B4E: call    OB_LeafLodEntry_UninitializedFillN_ReturnEnd_010201A0; OBLIVION AUTHORITY (2026-08-30): Uninitialized fill_n wrapper for SLodEntry; returns destination+count.
0x7A8B53: mov     ecx, [esi+8]
0x7A8B56: mov     byte ptr [ebp+value], 0
0x7A8B5A: mov     edx, [ebp+value]
0x7A8B5D: push    edx
0x7A8B5E: mov     edx, [ebp+count]
0x7A8B61: push    edx
0x7A8B62: push    esi
0x7A8B63: push    eax; destination
0x7A8B64: mov     eax, [ebp+position]
0x7A8B67: push    ecx; last
0x7A8B68: push    eax; first
0x7A8B69: call    OB_LeafLodEntry_UninitializedCopyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Uninitialized forward copy of 8-byte SLodEntry values used while growing m_vPairs.
0x7A8B6E: mov     ecx, [esi+4]
0x7A8B71: add     esp, 18h
0x7A8B74: test    ecx, ecx
0x7A8B76: jnz     short loc_7A8B7C
0x7A8B78: xor     eax, eax
0x7A8B7A: jmp     short loc_7A8B84
0x7A8B7C: mov     eax, [esi+8]
0x7A8B7F: sub     eax, ecx
0x7A8B81: sar     eax, 3
0x7A8B84: add     [ebp+count], eax
0x7A8B87: test    ecx, ecx
0x7A8B89: jz      short loc_7A8B94
0x7A8B8B: push    ecx
0x7A8B8C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A8B91: add     esp, 4
0x7A8B94: mov     edx, [ebp+count]
0x7A8B97: lea     ecx, [ebx+edi*8]
0x7A8B9A: lea     eax, [ebx+edx*8]
0x7A8B9D: mov     [esi+0Ch], ecx
0x7A8BA0: mov     [esi+8], eax
0x7A8BA3: mov     [esi+4], ebx
0x7A8BA6: mov     ecx, [ebp+var_C]
0x7A8BA9: mov     large fs:0, ecx
0x7A8BB0: pop     ecx
0x7A8BB1: pop     edi
0x7A8BB2: pop     esi
0x7A8BB3: pop     ebx
0x7A8BB4: mov     esp, ebp
0x7A8BB6: pop     ebp
0x7A8BB7: retn    10h
0x7A8BBA: mov     ecx, [ebp+var_14]
0x7A8BBD: push    ecx
0x7A8BBE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A8BC3: add     esp, 4
0x7A8BC6: push    0
0x7A8BC8: push    0
0x7A8BCA: call    ThrowException??
0x7A8BCF: mov     ebx, [esi+8]
0x7A8BD2: mov     edi, [ebp+position]
0x7A8BD5: mov     eax, ebx
0x7A8BD7: sub     eax, edi
0x7A8BD9: sar     eax, 3
0x7A8BDC: cmp     eax, edx
0x7A8BDE: jnb     short loc_7A8C46
0x7A8BE0: lea     eax, ds:0[edx*8]
0x7A8BE7: mov     [ebp+value], eax
0x7A8BEA: add     eax, edi
0x7A8BEC: push    eax; destination
0x7A8BED: push    ebx; last
0x7A8BEE: push    edi; first
0x7A8BEF: mov     ecx, esi
0x7A8BF1: call    OB_LeafLodEntry_UninitializedCopyRange_Checked_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked wrapper around the trivial SLodEntry uninitialized-copy range helper.
0x7A8BF6: mov     eax, [esi+8]
0x7A8BF9: mov     edx, eax
0x7A8BFB: lea     ecx, [ebp+var_1C]
0x7A8BFE: push    ecx; value
0x7A8BFF: mov     ecx, [ebp+count]
0x7A8C02: sub     edx, edi
0x7A8C04: sar     edx, 3
0x7A8C07: sub     ecx, edx
0x7A8C09: push    ecx; count
0x7A8C0A: push    eax; destination
0x7A8C0B: mov     ecx, esi
0x7A8C0D: mov     [ebp+var_4], 2
0x7A8C14: call    OB_LeafLodEntry_UninitializedFillN_ReturnEnd_010201A0; OBLIVION AUTHORITY (2026-08-30): Uninitialized fill_n wrapper for SLodEntry; returns destination+count.
0x7A8C19: mov     eax, [ebp+value]
0x7A8C1C: add     [esi+8], eax
0x7A8C1F: mov     esi, [esi+8]
0x7A8C22: lea     ecx, [ebp+var_1C]
0x7A8C25: push    ecx; value
0x7A8C26: sub     esi, eax
0x7A8C28: push    esi; last
0x7A8C29: push    edi; first
0x7A8C2A: call    OB_LeafLodEntry_CopyFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns one 8-byte SLodEntry value across an initialized destination range; compiler-folded trivial pair helper.
0x7A8C2F: add     esp, 0Ch
0x7A8C32: mov     ecx, [ebp+var_C]
0x7A8C35: mov     large fs:0, ecx
0x7A8C3C: pop     ecx
0x7A8C3D: pop     edi
0x7A8C3E: pop     esi
0x7A8C3F: pop     ebx
0x7A8C40: mov     esp, ebp
0x7A8C42: pop     ebp
0x7A8C43: retn    10h
0x7A8C46: lea     ecx, ds:0[edx*8]
0x7A8C4D: push    ebx; destination
0x7A8C4E: mov     eax, ebx
0x7A8C50: sub     eax, ecx
0x7A8C52: push    ebx; last
0x7A8C53: mov     [ebp+value], ecx
0x7A8C56: push    eax; first
0x7A8C57: mov     ecx, esi
0x7A8C59: mov     [ebp+count], eax
0x7A8C5C: call    OB_LeafLodEntry_UninitializedCopyRange_Checked_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked wrapper around the trivial SLodEntry uninitialized-copy range helper.
0x7A8C61: mov     edx, [ebp+count]
0x7A8C64: push    ebx; destinationEnd
0x7A8C65: push    edx; last
0x7A8C66: push    edi; first
0x7A8C67: mov     [esi+8], eax
0x7A8C6A: call    OB_LeafLodEntry_CopyBackwardRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Copies 8-byte SLodEntry values backward for in-place vector insertion.
0x7A8C6F: mov     ecx, [ebp+value]
0x7A8C72: lea     eax, [ebp+var_1C]
0x7A8C75: push    eax; value
0x7A8C76: add     ecx, edi
0x7A8C78: push    ecx; last
0x7A8C79: push    edi; first
0x7A8C7A: call    OB_LeafLodEntry_CopyFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns one 8-byte SLodEntry value across an initialized destination range; compiler-folded trivial pair helper.
0x7A8C7F: add     esp, 18h
0x7A8C82: mov     ecx, [ebp+var_C]
0x7A8C85: mov     large fs:0, ecx
0x7A8C8C: pop     ecx
0x7A8C8D: pop     edi
0x7A8C8E: pop     esi
0x7A8C8F: pop     ebx
0x7A8C90: mov     esp, ebp
0x7A8C92: pop     ebp
0x7A8C93: retn    10h
0x9CCEC0: mov     edx, [esp-4+position]
0x9CCEC4: lea     eax, [edx+0Ch]
0x9CCEC7: mov     ecx, [edx-20h]
0x9CCECA: xor     ecx, eax
0x9CCECC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCED1: mov     eax, offset stru_AF62D4
0x9CCED6: jmp     ___CxxFrameHandler3

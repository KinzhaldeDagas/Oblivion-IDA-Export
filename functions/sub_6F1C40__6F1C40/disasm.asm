0x6F1C40: mov     eax, [esp+value]
0x6F1C44: push    ebx
0x6F1C45: push    esi
0x6F1C46: mov     esi, ecx
0x6F1C48: mov     ecx, [eax]
0x6F1C4A: mov     [esp+8+value], ecx
0x6F1C4E: mov     ecx, [esi+4]
0x6F1C51: test    ecx, ecx
0x6F1C53: push    edi
0x6F1C54: jnz     short loc_6F1C5A
0x6F1C56: xor     edi, edi
0x6F1C58: jmp     short loc_6F1C62
0x6F1C5A: mov     edi, [esi+0Ch]
0x6F1C5D: sub     edi, ecx
0x6F1C5F: sar     edi, 2
0x6F1C62: mov     ebx, [esp+0Ch+count]
0x6F1C66: test    ebx, ebx
0x6F1C68: jz      loc_6F1DEF
0x6F1C6E: test    ecx, ecx
0x6F1C70: jnz     short loc_6F1C76
0x6F1C72: xor     eax, eax
0x6F1C74: jmp     short loc_6F1C7E
0x6F1C76: mov     eax, [esi+8]
0x6F1C79: sub     eax, ecx
0x6F1C7B: sar     eax, 2
0x6F1C7E: mov     edx, 3FFFFFFFh
0x6F1C83: sub     edx, eax
0x6F1C85: cmp     edx, ebx
0x6F1C87: jnb     short loc_6F1C8E
0x6F1C89: call    sub_6F1780
0x6F1C8E: test    ecx, ecx
0x6F1C90: jnz     short loc_6F1C96
0x6F1C92: xor     eax, eax
0x6F1C94: jmp     short loc_6F1C9E
0x6F1C96: mov     eax, [esi+8]
0x6F1C99: sub     eax, ecx
0x6F1C9B: sar     eax, 2
0x6F1C9E: add     eax, ebx
0x6F1CA0: cmp     edi, eax
0x6F1CA2: push    ebp
0x6F1CA3: jnb     loc_6F1D5D
0x6F1CA9: mov     eax, edi
0x6F1CAB: shr     eax, 1
0x6F1CAD: mov     edx, 3FFFFFFFh
0x6F1CB2: sub     edx, eax
0x6F1CB4: cmp     edx, edi
0x6F1CB6: jnb     short loc_6F1CBC
0x6F1CB8: xor     edi, edi
0x6F1CBA: jmp     short loc_6F1CBE
0x6F1CBC: add     edi, eax
0x6F1CBE: test    ecx, ecx
0x6F1CC0: jnz     short loc_6F1CC6
0x6F1CC2: xor     eax, eax
0x6F1CC4: jmp     short loc_6F1CCE
0x6F1CC6: mov     eax, [esi+8]
0x6F1CC9: sub     eax, ecx
0x6F1CCB: sar     eax, 2
0x6F1CCE: add     eax, ebx
0x6F1CD0: cmp     edi, eax
0x6F1CD2: jnb     short loc_6F1CE6
0x6F1CD4: test    ecx, ecx
0x6F1CD6: jnz     short loc_6F1CDC
0x6F1CD8: xor     edi, edi
0x6F1CDA: jmp     short loc_6F1CE4
0x6F1CDC: mov     edi, [esi+8]
0x6F1CDF: sub     edi, ecx
0x6F1CE1: sar     edi, 2
0x6F1CE4: add     edi, ebx
0x6F1CE6: push    0
0x6F1CE8: push    edi; count
0x6F1CE9: call    OB_stVector4_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for vectors with 4-byte elements. Validates count*4 overflow, throws bad_alloc on overflow, and allocates through FormHeapAlloc; FindPairs uses it for vector<bool>'s uint32 backing words.
0x6F1CEE: mov     ecx, [esi+4]
0x6F1CF1: add     esp, 8
0x6F1CF4: mov     ebp, eax
0x6F1CF6: mov     eax, [esp+10h+Src]
0x6F1CFA: push    ebp; destination
0x6F1CFB: push    eax; last
0x6F1CFC: push    ecx; first
0x6F1CFD: mov     ecx, esi
0x6F1CFF: call    OB_stVector4_UninitializedCopyRange_010201A0
0x6F1D04: lea     edx, [esp+10h+value]
0x6F1D08: push    edx; value
0x6F1D09: push    ebx; count
0x6F1D0A: push    eax; destination
0x6F1D0B: mov     ecx, esi
0x6F1D0D: call    OB_stVector4_UninitializedFillN_010201A0; Oblivion binary evidence: uninitialized fill_n for count four-byte slots, returning destination + count. Used by the folded vector insertion implementation.
0x6F1D12: mov     ecx, [esp+10h+Src]
0x6F1D16: push    eax; destination
0x6F1D17: mov     eax, [esi+8]
0x6F1D1A: push    eax; last
0x6F1D1B: push    ecx; first
0x6F1D1C: mov     ecx, esi
0x6F1D1E: call    OB_stVector4_UninitializedCopyRange_010201A0
0x6F1D23: mov     eax, [esi+4]
0x6F1D26: test    eax, eax
0x6F1D28: jnz     short loc_6F1D2E
0x6F1D2A: xor     ecx, ecx
0x6F1D2C: jmp     short loc_6F1D36
0x6F1D2E: mov     ecx, [esi+8]
0x6F1D31: sub     ecx, eax
0x6F1D33: sar     ecx, 2
0x6F1D36: add     ebx, ecx
0x6F1D38: test    eax, eax
0x6F1D3A: jz      short loc_6F1D45
0x6F1D3C: push    eax
0x6F1D3D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F1D42: add     esp, 4
0x6F1D45: lea     edx, [ebp+edi*4+0]
0x6F1D49: lea     eax, [ebp+ebx*4+0]
0x6F1D4D: mov     [esi+4], ebp
0x6F1D50: pop     ebp
0x6F1D51: pop     edi
0x6F1D52: mov     [esi+0Ch], edx
0x6F1D55: mov     [esi+8], eax
0x6F1D58: pop     esi
0x6F1D59: pop     ebx
0x6F1D5A: retn    10h
0x6F1D5D: mov     ebp, [esi+8]
0x6F1D60: mov     edi, [esp+10h+Src]
0x6F1D64: mov     ecx, ebp
0x6F1D66: sub     ecx, edi
0x6F1D68: sar     ecx, 2
0x6F1D6B: lea     eax, ds:0[ebx*4]
0x6F1D72: cmp     ecx, ebx
0x6F1D74: mov     [esp+10h+count], eax
0x6F1D78: mov     ecx, esi
0x6F1D7A: jnb     short loc_6F1DC2
0x6F1D7C: add     eax, edi
0x6F1D7E: push    eax; destination
0x6F1D7F: push    ebp; last
0x6F1D80: push    edi; first
0x6F1D81: call    OB_stVector4_UninitializedCopyRange_010201A0
0x6F1D86: mov     eax, [esi+8]
0x6F1D89: mov     ecx, eax
0x6F1D8B: sub     ecx, edi
0x6F1D8D: sar     ecx, 2
0x6F1D90: lea     edx, [esp+10h+value]
0x6F1D94: push    edx; value
0x6F1D95: sub     ebx, ecx
0x6F1D97: push    ebx; count
0x6F1D98: push    eax; destination
0x6F1D99: mov     ecx, esi
0x6F1D9B: call    OB_stVector4_UninitializedFillN_010201A0; Oblivion binary evidence: uninitialized fill_n for count four-byte slots, returning destination + count. Used by the folded vector insertion implementation.
0x6F1DA0: mov     eax, [esp+10h+count]
0x6F1DA4: add     [esi+8], eax
0x6F1DA7: mov     esi, [esi+8]
0x6F1DAA: lea     edx, [esp+10h+value]
0x6F1DAE: push    edx; value
0x6F1DAF: sub     esi, eax
0x6F1DB1: push    esi; last
0x6F1DB2: push    edi; first
0x6F1DB3: call    OB_stVector4_CopyFillRange_010201A0; Oblivion binary evidence: initialized fill over [first,last), assigning the same four-byte value to each existing slot and returning last.
0x6F1DB8: add     esp, 0Ch
0x6F1DBB: pop     ebp
0x6F1DBC: pop     edi
0x6F1DBD: pop     esi
0x6F1DBE: pop     ebx
0x6F1DBF: retn    10h
0x6F1DC2: push    ebp; destination
0x6F1DC3: mov     ebx, ebp
0x6F1DC5: sub     ebx, eax
0x6F1DC7: push    ebp; last
0x6F1DC8: push    ebx; first
0x6F1DC9: call    OB_stVector4_UninitializedCopyRange_010201A0
0x6F1DCE: push    ebp; destinationEnd
0x6F1DCF: push    ebx; last
0x6F1DD0: push    edi; first
0x6F1DD1: mov     [esi+8], eax
0x6F1DD4: call    OB_stVector4_CopyBackwardRange_010201A0
0x6F1DD9: mov     ecx, [esp+1Ch+count]
0x6F1DDD: lea     eax, [esp+1Ch+value]
0x6F1DE1: push    eax; value
0x6F1DE2: add     ecx, edi
0x6F1DE4: push    ecx; last
0x6F1DE5: push    edi; first
0x6F1DE6: call    OB_stVector4_CopyFillRange_010201A0; Oblivion binary evidence: initialized fill over [first,last), assigning the same four-byte value to each existing slot and returning last.
0x6F1DEB: add     esp, 18h
0x6F1DEE: pop     ebp
0x6F1DEF: pop     edi
0x6F1DF0: pop     esi
0x6F1DF1: pop     ebx
0x6F1DF2: retn    10h

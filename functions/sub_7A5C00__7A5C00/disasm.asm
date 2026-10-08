0x7A5C00: push    ebp; Complete leaf-texture vector fill insertion: snapshots an aliasing value, checks max 0x030C30C3 elements, reuses capacity with overlap-safe movement or reallocates at max(1.5x capacity,size+count), and deep-copies filenames.
0x7A5C01: mov     ebp, esp
0x7A5C03: push    0FFFFFFFFh
0x7A5C05: push    offset SEH_7A5C00
0x7A5C0A: mov     eax, large fs:0
0x7A5C10: push    eax
0x7A5C11: sub     esp, 6Ch
0x7A5C14: mov     eax, ds:0B30AACh
0x7A5C19: xor     eax, ebp
0x7A5C1B: mov     [ebp+var_14], eax
0x7A5C1E: push    ebx
0x7A5C1F: push    esi
0x7A5C20: push    edi
0x7A5C21: push    eax
0x7A5C22: lea     eax, [ebp+var_C]
0x7A5C25: mov     large fs:0, eax
0x7A5C2B: mov     [ebp+var_10], esp
0x7A5C2E: mov     eax, [ebp+value]
0x7A5C31: mov     esi, ecx
0x7A5C33: push    eax; source
0x7A5C34: lea     ecx, [ebp+var_68]; this
0x7A5C37: mov     [ebp+var_70], esi
0x7A5C3A: call    OB_SIdvLeafTexture_CopyCtor_010201A0; Deep copy-constructs one compact 0x54 SIdvLeafTexture, including initialization and assignment of its owned 28-byte small string.
0x7A5C3F: mov     ecx, [esi+4]
0x7A5C42: xor     edi, edi
0x7A5C44: cmp     ecx, edi
0x7A5C46: mov     [ebp+var_4], edi
0x7A5C49: jz      short loc_7A5C61
0x7A5C4B: mov     edx, [esi+0Ch]
0x7A5C4E: sub     edx, ecx
0x7A5C50: mov     eax, 30C30C31h
0x7A5C55: imul    edx
0x7A5C57: sar     edx, 4
0x7A5C5A: mov     edi, edx
0x7A5C5C: shr     edi, 1Fh
0x7A5C5F: add     edi, edx
0x7A5C61: mov     ebx, [ebp+count]
0x7A5C64: test    ebx, ebx
0x7A5C66: jz      loc_7A5EC5
0x7A5C6C: test    ecx, ecx
0x7A5C6E: jnz     short loc_7A5C74
0x7A5C70: xor     eax, eax
0x7A5C72: jmp     short loc_7A5C8A
0x7A5C74: mov     edx, [esi+8]
0x7A5C77: sub     edx, ecx
0x7A5C79: mov     eax, 30C30C31h
0x7A5C7E: imul    edx
0x7A5C80: sar     edx, 4
0x7A5C83: mov     eax, edx
0x7A5C85: shr     eax, 1Fh
0x7A5C88: add     eax, edx
0x7A5C8A: mov     edx, 30C30C3h
0x7A5C8F: sub     edx, eax
0x7A5C91: cmp     edx, ebx
0x7A5C93: jnb     short loc_7A5C9A
0x7A5C95: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x7A5C9A: test    ecx, ecx
0x7A5C9C: jnz     short loc_7A5CA2
0x7A5C9E: xor     eax, eax
0x7A5CA0: jmp     short loc_7A5CB8
0x7A5CA2: mov     edx, [esi+8]
0x7A5CA5: sub     edx, ecx
0x7A5CA7: mov     eax, 30C30C31h
0x7A5CAC: imul    edx
0x7A5CAE: sar     edx, 4
0x7A5CB1: mov     eax, edx
0x7A5CB3: shr     eax, 1Fh
0x7A5CB6: add     eax, edx
0x7A5CB8: add     eax, ebx
0x7A5CBA: cmp     edi, eax
0x7A5CBC: jnb     loc_7A5DE6
0x7A5CC2: mov     eax, edi
0x7A5CC4: shr     eax, 1
0x7A5CC6: mov     edx, 30C30C3h
0x7A5CCB: sub     edx, eax
0x7A5CCD: cmp     edx, edi
0x7A5CCF: jnb     short loc_7A5CD5
0x7A5CD1: xor     edi, edi
0x7A5CD3: jmp     short loc_7A5CD7
0x7A5CD5: add     edi, eax
0x7A5CD7: test    ecx, ecx
0x7A5CD9: jnz     short loc_7A5CDF
0x7A5CDB: xor     eax, eax
0x7A5CDD: jmp     short loc_7A5CF5
0x7A5CDF: mov     edx, [esi+8]
0x7A5CE2: sub     edx, ecx
0x7A5CE4: mov     eax, 30C30C31h
0x7A5CE9: imul    edx
0x7A5CEB: sar     edx, 4
0x7A5CEE: mov     eax, edx
0x7A5CF0: shr     eax, 1Fh
0x7A5CF3: add     eax, edx
0x7A5CF5: add     eax, ebx
0x7A5CF7: cmp     edi, eax
0x7A5CF9: jnb     short loc_7A5D06
0x7A5CFB: mov     ecx, esi; this
0x7A5CFD: call    OB_stVector_SIdvLeafTexture_Size_010201A0; Oblivion checked-vector size helper for 0x54-byte SIdvLeafTexture records: returns (end-begin)/0x54 or zero for null storage.
0x7A5D02: mov     edi, eax
0x7A5D04: add     edi, ebx
0x7A5D06: push    0
0x7A5D08: push    edi; count
0x7A5D09: call    OB_stVector_SIdvLeafTexture_Allocate_010201A0; Oblivion leaf-texture vector allocator: rejects count*0x54 overflow, then allocates exactly count 0x54-byte records through FormHeap.
0x7A5D0E: mov     ecx, [esi+4]
0x7A5D11: mov     byte ptr [ebp+destinationEnd], 0
0x7A5D15: mov     edx, [ebp+destinationEnd]
0x7A5D18: push    edx
0x7A5D19: mov     edx, [ebp+destinationEnd]
0x7A5D1C: push    edx
0x7A5D1D: push    esi
0x7A5D1E: push    eax; destinationFirst
0x7A5D1F: mov     [ebp+first], eax
0x7A5D22: mov     [ebp+last], eax
0x7A5D25: mov     eax, [ebp+position]
0x7A5D28: push    eax; last
0x7A5D29: push    ecx; first
0x7A5D2A: mov     byte ptr [ebp+var_4], 1
0x7A5D2E: call    OB_SIdvLeafTexture_UninitializedCopy_010201A0; Reallocation path deep-copies prefix, inserted values, and suffix into new storage before destroying/freeing the old range.
0x7A5D33: add     esp, 20h
0x7A5D36: lea     ecx, [ebp+var_68]
0x7A5D39: push    ecx; value
0x7A5D3A: push    ebx; count
0x7A5D3B: push    eax; destination
0x7A5D3C: mov     ecx, esi
0x7A5D3E: mov     [ebp+last], eax
0x7A5D41: call    OB_stVector_SIdvLeafTexture_UninitializedFillNThunk_010201A0; Typed uninitialized-fill wrapper returning destination+count. Its former noreturn boundary omitted the real arithmetic epilogue.
0x7A5D46: mov     ecx, [esi+8]
0x7A5D49: mov     byte ptr [ebp+destinationEnd], 0
0x7A5D4D: mov     edx, [ebp+destinationEnd]
0x7A5D50: push    edx
0x7A5D51: mov     edx, [ebp+destinationEnd]
0x7A5D54: push    edx
0x7A5D55: push    esi
0x7A5D56: push    eax; destinationFirst
0x7A5D57: mov     [ebp+last], eax
0x7A5D5A: mov     eax, [ebp+position]
0x7A5D5D: push    ecx; last
0x7A5D5E: push    eax; first
0x7A5D5F: call    OB_SIdvLeafTexture_UninitializedCopy_010201A0; Exception-safe uninitialized deep copy of 0x54-byte SIdvLeafTexture records. Normal completion returns destination end; the separate SEH landing path destroys the constructed prefix and rethrows.
0x7A5D64: mov     ecx, [esi+4]
0x7A5D67: add     esp, 18h
0x7A5D6A: test    ecx, ecx
0x7A5D6C: jnz     short loc_7A5D72
0x7A5D6E: xor     eax, eax
0x7A5D70: jmp     short loc_7A5D88
0x7A5D72: mov     edx, [esi+8]
0x7A5D75: sub     edx, ecx
0x7A5D77: mov     eax, 30C30C31h
0x7A5D7C: imul    edx
0x7A5D7E: sar     edx, 4
0x7A5D81: mov     eax, edx
0x7A5D83: shr     eax, 1Fh
0x7A5D86: add     eax, edx
0x7A5D88: add     ebx, eax
0x7A5D8A: test    ecx, ecx
0x7A5D8C: jz      short loc_7A5DA9
0x7A5D8E: mov     edx, [ebp+destinationEnd]
0x7A5D91: mov     eax, [esi+8]
0x7A5D94: push    edx
0x7A5D95: push    esi
0x7A5D96: push    eax; last
0x7A5D97: push    ecx; first
0x7A5D98: call    OB_SIdvLeafTexture_DestroyRange_010201A0; Destroys [first,last) compact SIdvLeafTexture records at 0x54 stride, releasing each owned filename.
0x7A5D9D: mov     ecx, [esi+4]
0x7A5DA0: push    ecx
0x7A5DA1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A5DA6: add     esp, 14h
0x7A5DA9: mov     eax, [ebp+first]
0x7A5DAC: imul    edi, 54h ; 'T'
0x7A5DAF: imul    ebx, 54h ; 'T'
0x7A5DB2: add     edi, eax
0x7A5DB4: add     ebx, eax
0x7A5DB6: mov     [esi+0Ch], edi
0x7A5DB9: mov     [esi+8], ebx
0x7A5DBC: mov     [esi+4], eax
0x7A5DBF: jmp     loc_7A5EC5
0x7A5DC4: mov     edx, [ebp+last]
0x7A5DC7: mov     esi, [ebp+first]
0x7A5DCA: mov     ecx, [ebp+var_70]
0x7A5DCD: push    edx; last
0x7A5DCE: push    esi; first
0x7A5DCF: call    OB_stVector_SIdvLeafTexture_DestroyRangeThunk_010201A0; Typed vector wrapper for destruction of an initialized SIdvLeafTexture range.
0x7A5DD4: push    esi
0x7A5DD5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A5DDA: add     esp, 4
0x7A5DDD: push    0
0x7A5DDF: push    0
0x7A5DE1: call    ThrowException??
0x7A5DE6: mov     ecx, [esi+8]; In-capacity insertion path handles both tail>=count and tail<count with uninitialized construction plus overlap-safe assignment.
0x7A5DE9: mov     edi, [ebp+position]
0x7A5DEC: mov     edx, ecx
0x7A5DEE: sub     edx, edi
0x7A5DF0: mov     eax, 30C30C31h
0x7A5DF5: imul    edx
0x7A5DF7: sar     edx, 4
0x7A5DFA: mov     eax, edx
0x7A5DFC: shr     eax, 1Fh
0x7A5DFF: add     eax, edx
0x7A5E01: cmp     eax, ebx
0x7A5E03: mov     [ebp+destinationEnd], ecx
0x7A5E06: jnb     loc_7A5E90
0x7A5E0C: mov     eax, ebx
0x7A5E0E: imul    eax, 54h ; 'T'
0x7A5E11: mov     [ebp+destinationEnd], eax
0x7A5E14: add     eax, edi
0x7A5E16: push    eax; destinationFirst
0x7A5E17: push    ecx; last
0x7A5E18: push    edi; first
0x7A5E19: mov     ecx, esi
0x7A5E1B: call    OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0; Typed uninitialized-copy wrapper. The executable continues after the call and returns the constructed destination end; its former noreturn boundary was false.
0x7A5E20: mov     ecx, [esi+8]
0x7A5E23: lea     edx, [ebp+var_68]
0x7A5E26: push    edx; value
0x7A5E27: mov     edx, ecx
0x7A5E29: sub     edx, edi
0x7A5E2B: mov     eax, 30C30C31h
0x7A5E30: imul    edx
0x7A5E32: sar     edx, 4
0x7A5E35: mov     eax, edx
0x7A5E37: shr     eax, 1Fh
0x7A5E3A: add     eax, edx
0x7A5E3C: sub     ebx, eax
0x7A5E3E: push    ebx; count
0x7A5E3F: push    ecx; destination
0x7A5E40: mov     ecx, esi
0x7A5E42: mov     byte ptr [ebp+var_4], 3
0x7A5E46: call    OB_stVector_SIdvLeafTexture_UninitializedFillNThunk_010201A0; Typed uninitialized-fill wrapper returning destination+count. Its former noreturn boundary omitted the real arithmetic epilogue.
0x7A5E4B: mov     eax, [ebp+destinationEnd]
0x7A5E4E: add     [esi+8], eax
0x7A5E51: mov     esi, [esi+8]
0x7A5E54: lea     ecx, [ebp+var_68]
0x7A5E57: push    ecx; value
0x7A5E58: sub     esi, eax
0x7A5E5A: push    esi; last
0x7A5E5B: push    edi; first
0x7A5E5C: mov     [ebp+var_4], 0
0x7A5E63: call    OB_SIdvLeafTexture_CopyAssignFillRange_010201A0; Deep-copy assigns one SIdvLeafTexture value across an existing 0x54-stride range.
0x7A5E68: add     esp, 0Ch
0x7A5E6B: jmp     short loc_7A5EC5
0x7A5E6D: mov     eax, [ebp+count]
0x7A5E70: mov     ecx, [ebp+var_70]
0x7A5E73: imul    eax, 54h ; 'T'
0x7A5E76: mov     edx, [ecx+8]
0x7A5E79: add     edx, eax
0x7A5E7B: push    edx; last
0x7A5E7C: mov     edx, [ebp+position]
0x7A5E7F: add     eax, edx
0x7A5E81: push    eax; first
0x7A5E82: call    OB_stVector_SIdvLeafTexture_DestroyRangeThunk_010201A0; Typed vector wrapper for destruction of an initialized SIdvLeafTexture range.
0x7A5E87: push    0
0x7A5E89: push    0
0x7A5E8B: call    ThrowException??
0x7A5E90: imul    ebx, 54h ; 'T'
0x7A5E93: push    ecx; destinationFirst
0x7A5E94: mov     eax, ecx
0x7A5E96: sub     eax, ebx
0x7A5E98: push    ecx; last
0x7A5E99: push    eax; first
0x7A5E9A: mov     ecx, esi
0x7A5E9C: mov     [ebp+var_70], eax
0x7A5E9F: call    OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0; Typed uninitialized-copy wrapper. The executable continues after the call and returns the constructed destination end; its former noreturn boundary was false.
0x7A5EA4: mov     ecx, [ebp+var_70]
0x7A5EA7: mov     [esi+8], eax
0x7A5EAA: mov     eax, [ebp+destinationEnd]
0x7A5EAD: push    eax; destinationEnd
0x7A5EAE: push    ecx; last
0x7A5EAF: push    edi; first
0x7A5EB0: call    OB_stVector_SIdvLeafTexture_CopyAssignRangeBackwardThunk_010201A0; Typed wrapper for backward SIdvLeafTexture copy assignment.
0x7A5EB5: lea     edx, [ebp+var_68]
0x7A5EB8: push    edx; value
0x7A5EB9: add     ebx, edi
0x7A5EBB: push    ebx; last
0x7A5EBC: push    edi; first
0x7A5EBD: call    OB_SIdvLeafTexture_CopyAssignFillRange_010201A0; Deep-copy assigns one SIdvLeafTexture value across an existing 0x54-stride range.
0x7A5EC2: add     esp, 18h
0x7A5EC5: cmp     [ebp+var_68.filename.capacity], 10h
0x7A5EC9: jb      short loc_7A5ED7
0x7A5ECB: mov     eax, dword ptr [ebp+var_68.filename.storage]
0x7A5ECE: push    eax
0x7A5ECF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A5ED4: add     esp, 4
0x7A5ED7: mov     ecx, [ebp+var_C]
0x7A5EDA: mov     large fs:0, ecx
0x7A5EE1: pop     ecx
0x7A5EE2: pop     edi
0x7A5EE3: pop     esi
0x7A5EE4: pop     ebx
0x7A5EE5: mov     ecx, [ebp+var_14]
0x7A5EE8: xor     ecx, ebp
0x7A5EEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A5EEF: mov     esp, ebp
0x7A5EF1: pop     ebp
0x7A5EF2: retn    10h
0x7A25F0: push    esi
0x7A25F1: mov     esi, ecx
0x7A25F3: cmp     dword ptr [esi+2Ch], 10h
0x7A25F7: jb      short loc_7A2605
0x7A25F9: mov     eax, [esi+18h]
0x7A25FC: push    eax
0x7A25FD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A2602: add     esp, 4
0x7A2605: xor     eax, eax
0x7A2607: mov     dword ptr [esi+2Ch], 0Fh
0x7A260E: mov     [esi+28h], eax
0x7A2611: mov     [esi+18h], al
0x7A2614: pop     esi
0x7A2615: retn
0x9CCC10: lea     ecx, [ebp+var_68]
0x9CCC13: jmp     loc_7A25F0
0x9CCC18: mov     edx, [esp-4+position]
0x9CCC1C: lea     eax, [edx+0Ch]
0x9CCC1F: mov     ecx, [edx-7Ch]
0x9CCC22: xor     ecx, eax
0x9CCC24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCC29: mov     ecx, [edx-8]
0x9CCC2C: xor     ecx, eax
0x9CCC2E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCC33: mov     eax, offset stru_AF5FD4
0x9CCC38: jmp     ___CxxFrameHandler3

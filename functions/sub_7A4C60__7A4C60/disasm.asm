0x7A4C60: push    ebp; Leaf-texture vector deep copy assignment: clear on empty source, reuse initialized/capacity ranges when possible, otherwise destroy/free and allocate exact source size.
0x7A4C61: mov     ebp, [esp+4+source]
0x7A4C65: push    esi
0x7A4C66: mov     esi, ecx
0x7A4C68: cmp     esi, ebp
0x7A4C6A: jz      loc_7A4DDB
0x7A4C70: mov     eax, [ebp+4]
0x7A4C73: test    eax, eax
0x7A4C75: push    edi
0x7A4C76: jz      short loc_7A4C92
0x7A4C78: mov     edi, [ebp+8]
0x7A4C7B: mov     ecx, edi
0x7A4C7D: sub     ecx, eax
0x7A4C7F: mov     eax, 30C30C31h
0x7A4C84: imul    ecx
0x7A4C86: sar     edx, 4
0x7A4C89: mov     ecx, edx
0x7A4C8B: shr     ecx, 1Fh
0x7A4C8E: add     ecx, edx
0x7A4C90: jnz     short loc_7A4CA1
0x7A4C92: mov     ecx, esi; this
0x7A4C94: call    OB_stVector_SIdvLeafTexture_Clear_010201A0; Clears the leaf-texture vector through erase(begin,end), retaining allocated capacity.
0x7A4C99: pop     edi
0x7A4C9A: mov     eax, esi
0x7A4C9C: pop     esi
0x7A4C9D: pop     ebp
0x7A4C9E: retn    4
0x7A4CA1: push    ebx
0x7A4CA2: mov     ebx, [esi+4]
0x7A4CA5: test    ebx, ebx
0x7A4CA7: jnz     short loc_7A4CAD
0x7A4CA9: xor     eax, eax
0x7A4CAB: jmp     short loc_7A4CC3
0x7A4CAD: mov     edx, [esi+8]
0x7A4CB0: sub     edx, ebx
0x7A4CB2: mov     eax, 30C30C31h
0x7A4CB7: imul    edx
0x7A4CB9: sar     edx, 4
0x7A4CBC: mov     eax, edx
0x7A4CBE: shr     eax, 1Fh
0x7A4CC1: add     eax, edx
0x7A4CC3: cmp     ecx, eax
0x7A4CC5: ja      short loc_7A4D3A
0x7A4CC7: mov     byte ptr [esp+10h+source], 0
0x7A4CCC: mov     eax, [esp+10h+source]
0x7A4CD0: mov     ecx, [esp+10h+source]
0x7A4CD4: mov     edx, [esp+10h+source]
0x7A4CD8: push    eax
0x7A4CD9: mov     eax, [ebp+4]
0x7A4CDC: push    ecx
0x7A4CDD: push    edx
0x7A4CDE: push    ebx; destinationFirst
0x7A4CDF: push    edi; last
0x7A4CE0: push    eax; first
0x7A4CE1: call    OB_SIdvLeafTexture_CopyAssignRangeForward_010201A0; Forward deep-copy assignment over existing 0x54-byte SIdvLeafTexture records; returns the destination end.
0x7A4CE6: mov     ecx, [esp+28h+source]
0x7A4CEA: mov     edx, [esi+8]
0x7A4CED: push    ecx
0x7A4CEE: push    esi
0x7A4CEF: push    edx; last
0x7A4CF0: push    eax; first
0x7A4CF1: call    OB_SIdvLeafTexture_DestroyRange_010201A0; Destroys [first,last) compact SIdvLeafTexture records at 0x54 stride, releasing each owned filename.
0x7A4CF6: mov     eax, [ebp+4]
0x7A4CF9: add     esp, 28h
0x7A4CFC: test    eax, eax
0x7A4CFE: jnz     short loc_7A4D12
0x7A4D00: imul    eax, 54h ; 'T'
0x7A4D03: add     eax, [esi+4]
0x7A4D06: pop     ebx
0x7A4D07: mov     [esi+8], eax
0x7A4D0A: pop     edi
0x7A4D0B: mov     eax, esi
0x7A4D0D: pop     esi
0x7A4D0E: pop     ebp
0x7A4D0F: retn    4
0x7A4D12: mov     ecx, [ebp+8]
0x7A4D15: sub     ecx, eax
0x7A4D17: mov     eax, 30C30C31h
0x7A4D1C: imul    ecx
0x7A4D1E: sar     edx, 4
0x7A4D21: mov     eax, edx
0x7A4D23: shr     eax, 1Fh
0x7A4D26: add     eax, edx
0x7A4D28: imul    eax, 54h ; 'T'
0x7A4D2B: add     eax, [esi+4]
0x7A4D2E: pop     ebx
0x7A4D2F: mov     [esi+8], eax
0x7A4D32: pop     edi
0x7A4D33: mov     eax, esi
0x7A4D35: pop     esi
0x7A4D36: pop     ebp
0x7A4D37: retn    4
0x7A4D3A: test    ebx, ebx
0x7A4D3C: jnz     short loc_7A4D42
0x7A4D3E: xor     eax, eax
0x7A4D40: jmp     short loc_7A4D58
0x7A4D42: mov     edx, [esi+0Ch]
0x7A4D45: sub     edx, ebx
0x7A4D47: mov     eax, 30C30C31h
0x7A4D4C: imul    edx
0x7A4D4E: sar     edx, 4
0x7A4D51: mov     eax, edx
0x7A4D53: shr     eax, 1Fh
0x7A4D56: add     eax, edx
0x7A4D58: cmp     ecx, eax
0x7A4D5A: ja      short loc_7A4D94
0x7A4D5C: mov     ecx, esi; this
0x7A4D5E: call    OB_stVector_SIdvLeafTexture_Size_010201A0; Oblivion checked-vector size helper for 0x54-byte SIdvLeafTexture records: returns (end-begin)/0x54 or zero for null storage.
0x7A4D63: mov     edi, eax
0x7A4D65: mov     eax, [ebp+4]
0x7A4D68: imul    edi, 54h ; 'T'
0x7A4D6B: add     edi, eax
0x7A4D6D: push    ebx; destinationFirst
0x7A4D6E: push    edi; last
0x7A4D6F: push    eax; first
0x7A4D70: call    OB_stVector_SIdvLeafTexture_CopyAssignRangeForwardThunk_010201A0; Typed vector wrapper for forward SIdvLeafTexture copy assignment.
0x7A4D75: mov     eax, [esi+8]
0x7A4D78: mov     ecx, [ebp+8]
0x7A4D7B: add     esp, 0Ch
0x7A4D7E: push    eax; destinationFirst
0x7A4D7F: push    ecx; last
0x7A4D80: push    edi; first
0x7A4D81: mov     ecx, esi
0x7A4D83: call    OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0; Typed uninitialized-copy wrapper. The executable continues after the call and returns the constructed destination end; its former noreturn boundary was false.
0x7A4D88: pop     ebx
0x7A4D89: mov     [esi+8], eax
0x7A4D8C: pop     edi
0x7A4D8D: mov     eax, esi
0x7A4D8F: pop     esi
0x7A4D90: pop     ebp
0x7A4D91: retn    4
0x7A4D94: test    ebx, ebx
0x7A4D96: jz      short loc_7A4DB0
0x7A4D98: mov     edx, [esi+8]
0x7A4D9B: push    edx; last
0x7A4D9C: push    ebx; first
0x7A4D9D: mov     ecx, esi
0x7A4D9F: call    OB_stVector_SIdvLeafTexture_DestroyRangeThunk_010201A0; Typed vector wrapper for destruction of an initialized SIdvLeafTexture range.
0x7A4DA4: mov     eax, [esi+4]
0x7A4DA7: push    eax
0x7A4DA8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A4DAD: add     esp, 4
0x7A4DB0: mov     ecx, ebp; this
0x7A4DB2: call    OB_stVector_SIdvLeafTexture_Size_010201A0; Oblivion checked-vector size helper for 0x54-byte SIdvLeafTexture records: returns (end-begin)/0x54 or zero for null storage.
0x7A4DB7: push    eax; count
0x7A4DB8: mov     ecx, esi; this
0x7A4DBA: call    OB_stVector_SIdvLeafTexture_AllocateStorage_010201A0; Initializes an empty typed leaf-texture vector and, when count is nonzero, allocates capacity for exactly count 0x54-byte elements.
0x7A4DBF: test    al, al
0x7A4DC1: jz      short loc_7A4DD9
0x7A4DC3: mov     ecx, [esi+4]
0x7A4DC6: mov     edx, [ebp+8]
0x7A4DC9: mov     eax, [ebp+4]
0x7A4DCC: push    ecx; destinationFirst
0x7A4DCD: push    edx; last
0x7A4DCE: push    eax; first
0x7A4DCF: mov     ecx, esi
0x7A4DD1: call    OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0; Typed uninitialized-copy wrapper. The executable continues after the call and returns the constructed destination end; its former noreturn boundary was false.
0x7A4DD6: mov     [esi+8], eax
0x7A4DD9: pop     ebx
0x7A4DDA: pop     edi
0x7A4DDB: mov     eax, esi
0x7A4DDD: pop     esi
0x7A4DDE: pop     ebp
0x7A4DDF: retn    4

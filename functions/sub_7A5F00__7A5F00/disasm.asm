0x7A5F00: push    0FFFFFFFFh; Leaf-texture vector resize with a by-value default record: fill-inserts when growing, erases/destroys the excess tail when shrinking, then releases the by-value filename copy.
0x7A5F02: push    offset SEH_7A5F00
0x7A5F07: mov     eax, large fs:0
0x7A5F0D: push    eax
0x7A5F0E: sub     esp, 8
0x7A5F11: push    ebx
0x7A5F12: push    ebp
0x7A5F13: push    esi
0x7A5F14: push    edi
0x7A5F15: mov     eax, ds:0B30AACh
0x7A5F1A: xor     eax, esp
0x7A5F1C: push    eax
0x7A5F1D: lea     eax, [esp+28h+var_C]
0x7A5F21: mov     large fs:0, eax
0x7A5F27: mov     esi, ecx
0x7A5F29: mov     ecx, [esi+4]
0x7A5F2C: xor     edi, edi
0x7A5F2E: cmp     ecx, edi
0x7A5F30: mov     [esp+28h+var_4], edi
0x7A5F34: jnz     short loc_7A5F3A
0x7A5F36: xor     eax, eax
0x7A5F38: jmp     short loc_7A5F50
0x7A5F3A: mov     edx, [esi+8]
0x7A5F3D: sub     edx, ecx
0x7A5F3F: mov     eax, 30C30C31h
0x7A5F44: imul    edx
0x7A5F46: sar     edx, 4
0x7A5F49: mov     eax, edx
0x7A5F4B: shr     eax, 1Fh
0x7A5F4E: add     eax, edx
0x7A5F50: mov     ebx, [esp+28h+newSize]
0x7A5F54: cmp     eax, ebx
0x7A5F56: jnb     short loc_7A5F91
0x7A5F58: cmp     ecx, edi
0x7A5F5A: jz      short loc_7A5F72
0x7A5F5C: mov     edx, [esi+8]
0x7A5F5F: sub     edx, ecx
0x7A5F61: mov     eax, 30C30C31h
0x7A5F66: imul    edx
0x7A5F68: sar     edx, 4
0x7A5F6B: mov     edi, edx
0x7A5F6D: shr     edi, 1Fh
0x7A5F70: add     edi, edx
0x7A5F72: mov     ebp, [esi+8]
0x7A5F75: cmp     ecx, ebp
0x7A5F77: jbe     short loc_7A5F7E
0x7A5F79: call    __invalid_parameter_noinfo
0x7A5F7E: lea     eax, [esp+28h+value]
0x7A5F82: push    eax; value
0x7A5F83: sub     ebx, edi
0x7A5F85: push    ebx; count
0x7A5F86: push    ebp; position
0x7A5F87: push    esi; expectedOwner
0x7A5F88: mov     ecx, esi; this
0x7A5F8A: call    OB_stVector_SIdvLeafTexture_InsertFill_010201A0; Complete leaf-texture vector fill insertion: snapshots an aliasing value, checks max 0x030C30C3 elements, reuses capacity with overlap-safe movement or reallocates at max(1.5x capacity,size+count), and deep-copies filenames.
0x7A5F8F: jmp     short loc_7A5FEF
0x7A5F91: cmp     ecx, edi
0x7A5F93: jz      short loc_7A5FEF
0x7A5F95: mov     edi, [esi+8]
0x7A5F98: mov     edx, edi
0x7A5F9A: sub     edx, ecx
0x7A5F9C: mov     eax, 30C30C31h
0x7A5FA1: imul    edx
0x7A5FA3: sar     edx, 4
0x7A5FA6: mov     eax, edx
0x7A5FA8: shr     eax, 1Fh
0x7A5FAB: add     eax, edx
0x7A5FAD: cmp     ebx, eax
0x7A5FAF: jnb     short loc_7A5FEF
0x7A5FB1: cmp     ecx, edi
0x7A5FB3: jbe     short loc_7A5FBA
0x7A5FB5: call    __invalid_parameter_noinfo
0x7A5FBA: mov     ebp, [esi+4]
0x7A5FBD: cmp     ebp, [esi+8]
0x7A5FC0: jbe     short loc_7A5FC7
0x7A5FC2: call    __invalid_parameter_noinfo
0x7A5FC7: imul    ebx, 54h ; 'T'
0x7A5FCA: add     ebx, ebp
0x7A5FCC: cmp     ebx, [esi+8]
0x7A5FCF: mov     [esp+28h+result.current], ebp
0x7A5FD3: ja      short loc_7A5FDA
0x7A5FD5: cmp     ebx, [esi+4]
0x7A5FD8: jnb     short loc_7A5FDF
0x7A5FDA: call    __invalid_parameter_noinfo
0x7A5FDF: push    edi; last
0x7A5FE0: push    esi; lastOwner
0x7A5FE1: push    ebx; first
0x7A5FE2: push    esi; firstOwner
0x7A5FE3: lea     ecx, [esp+38h+result]
0x7A5FE7: push    ecx; result
0x7A5FE8: mov     ecx, esi; this
0x7A5FEA: call    OB_stVector_SIdvLeafTexture_EraseRange_010201A0; Checked leaf-texture vector erase: shifts the tail by deep assignment, destroys the vacated suffix, updates end, and returns {owner,current}.
0x7A5FEF: cmp     [esp+28h+value.filename.capacity], 10h
0x7A5FF4: jb      short loc_7A6003
0x7A5FF6: mov     edx, dword ptr [esp+28h+value.filename.storage]
0x7A5FFA: push    edx
0x7A5FFB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A6000: add     esp, 4
0x7A6003: mov     ecx, [esp+28h+var_C]
0x7A6007: mov     large fs:0, ecx
0x7A600E: pop     ecx
0x7A600F: pop     edi
0x7A6010: pop     esi
0x7A6011: pop     ebp
0x7A6012: pop     ebx
0x7A6013: add     esp, 14h
0x7A6016: retn    58h ; 'X'
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
0x9CCC40: lea     ecx, [ebp+8]
0x9CCC43: jmp     loc_7A25F0
0x9CCC48: mov     edx, dword ptr [esp+value.blossomFlag]
0x9CCC4C: lea     eax, [edx-18h]
0x9CCC4F: mov     ecx, [edx-1Ch]
0x9CCC52: xor     ecx, eax
0x9CCC54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCC59: mov     eax, offset stru_AF6050
0x9CCC5E: jmp     ___CxxFrameHandler3

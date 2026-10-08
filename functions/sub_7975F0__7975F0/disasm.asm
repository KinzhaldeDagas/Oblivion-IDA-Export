0x7975F0: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): Resizes vector<vector<unsigned short>> using an empty inner fill value. Growth delegates to the decoded outer insert-fill; shrink destroys erased inner owners.
0x7975F2: push    offset SEH_7976E0
0x7975F7: mov     eax, large fs:0
0x7975FD: push    eax
0x7975FE: sub     esp, 8
0x797601: push    ebx
0x797602: push    ebp
0x797603: push    esi
0x797604: push    edi
0x797605: mov     eax, ds:0B30AACh
0x79760A: xor     eax, esp
0x79760C: push    eax
0x79760D: lea     eax, [esp+28h+var_C]
0x797611: mov     large fs:0, eax
0x797617: mov     esi, ecx
0x797619: mov     ecx, [esi+4]
0x79761C: xor     ebx, ebx
0x79761E: cmp     ecx, ebx
0x797620: mov     [esp+28h+var_4], ebx
0x797624: jnz     short loc_79762A
0x797626: xor     eax, eax
0x797628: jmp     short loc_797632
0x79762A: mov     eax, [esi+8]
0x79762D: sub     eax, ecx
0x79762F: sar     eax, 4
0x797632: mov     edi, [esp+28h+newSize]
0x797636: cmp     eax, edi
0x797638: jnb     short loc_797665
0x79763A: cmp     ecx, ebx
0x79763C: jz      short loc_797646
0x79763E: mov     ebx, [esi+8]
0x797641: sub     ebx, ecx
0x797643: sar     ebx, 4
0x797646: mov     ebp, [esi+8]
0x797649: cmp     ecx, ebp
0x79764B: jbe     short loc_797652
0x79764D: call    __invalid_parameter_noinfo
0x797652: lea     eax, [esp+28h+value]
0x797656: push    eax; value
0x797657: sub     edi, ebx
0x797659: push    edi; count
0x79765A: push    ebp; position
0x79765B: push    esi; position
0x79765C: mov     ecx, esi; this
0x79765E: call    OB_stVector_stVectorUShort_InsertFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Insert-fill core for vector<vector<unsigned short>>. Copies the fill value, uses 0x10-byte owner arithmetic, 1.5x growth, exception-safe move/fill construction, and normal epilogue at 0x797267; prior noreturn metadata was false.
0x797663: jmp     short loc_7976B5
0x797665: cmp     ecx, ebx
0x797667: jz      short loc_7976B5
0x797669: mov     ebp, [esi+8]
0x79766C: mov     eax, ebp
0x79766E: sub     eax, ecx
0x797670: sar     eax, 4
0x797673: cmp     edi, eax
0x797675: jnb     short loc_7976B5
0x797677: cmp     ecx, ebp
0x797679: jbe     short loc_797680
0x79767B: call    __invalid_parameter_noinfo
0x797680: mov     ebx, [esi+4]
0x797683: cmp     ebx, [esi+8]
0x797686: jbe     short loc_79768D
0x797688: call    __invalid_parameter_noinfo
0x79768D: shl     edi, 4
0x797690: add     edi, ebx
0x797692: cmp     edi, [esi+8]
0x797695: mov     [esp+28h+result.current], ebx
0x797699: ja      short loc_7976A0
0x79769B: cmp     edi, [esi+4]
0x79769E: jnb     short loc_7976A5
0x7976A0: call    __invalid_parameter_noinfo
0x7976A5: push    ebp; last
0x7976A6: push    esi; last
0x7976A7: push    edi; first
0x7976A8: push    esi; first
0x7976A9: lea     ecx, [esp+38h+result]
0x7976AD: push    ecx; result
0x7976AE: mov     ecx, esi; this
0x7976B0: call    OB_stVector_stVectorUShort_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short>>. Move/copy-assigns the suffix, destroys the vacated owner range, updates end, and returns the checked iterator.
0x7976B5: mov     eax, [esp+28h+value.begin]
0x7976B9: test    eax, eax
0x7976BB: jz      short loc_7976C6
0x7976BD: push    eax
0x7976BE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7976C3: add     esp, 4
0x7976C6: mov     ecx, [esp+28h+var_C]
0x7976CA: mov     large fs:0, ecx
0x7976D1: pop     ecx
0x7976D2: pop     edi
0x7976D3: pop     esi
0x7976D4: pop     ebp
0x7976D5: pop     ebx
0x7976D6: add     esp, 14h
0x7976D9: retn    14h
0x9CC0C0: lea     ecx, [ebp+8]; this
0x9CC0C3: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC0C8: mov     edx, [esp+value.allocatorState]
0x9CC0CC: lea     eax, [edx-18h]
0x9CC0CF: mov     ecx, [edx-1Ch]
0x9CC0D2: xor     ecx, eax
0x9CC0D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC0D9: mov     eax, offset stru_AF5138
0x9CC0DE: jmp     ___CxxFrameHandler3

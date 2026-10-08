0x7976E0: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): Resizes vector<vector<unsigned short*>>. Its 4-byte pointer element permits structural reuse of the shared vector<vector<4-byte>> insert helper; the semantic type is fixed by CIndexedGeometry callers.
0x7976E2: push    offset SEH_7976E0
0x7976E7: mov     eax, large fs:0
0x7976ED: push    eax
0x7976EE: sub     esp, 8
0x7976F1: push    ebx
0x7976F2: push    ebp
0x7976F3: push    esi
0x7976F4: push    edi
0x7976F5: mov     eax, ds:0B30AACh
0x7976FA: xor     eax, esp
0x7976FC: push    eax
0x7976FD: lea     eax, [esp+28h+var_C]
0x797701: mov     large fs:0, eax
0x797707: mov     esi, ecx
0x797709: mov     ecx, [esi+4]
0x79770C: xor     ebx, ebx
0x79770E: cmp     ecx, ebx
0x797710: mov     [esp+28h+var_4], ebx
0x797714: jnz     short loc_79771A
0x797716: xor     eax, eax
0x797718: jmp     short loc_797722
0x79771A: mov     eax, [esi+8]
0x79771D: sub     eax, ecx
0x79771F: sar     eax, 4
0x797722: mov     edi, [esp+28h+newSize]
0x797726: cmp     eax, edi
0x797728: jnb     short loc_797755
0x79772A: cmp     ecx, ebx
0x79772C: jz      short loc_797736
0x79772E: mov     ebx, [esi+8]
0x797731: sub     ebx, ecx
0x797733: sar     ebx, 4
0x797736: mov     ebp, [esi+8]
0x797739: cmp     ecx, ebp
0x79773B: jbe     short loc_797742
0x79773D: call    __invalid_parameter_noinfo
0x797742: lea     eax, [esp+28h+value]
0x797746: push    eax; value
0x797747: sub     edi, ebx
0x797749: push    edi; count
0x79774A: push    ebp; position
0x79774B: push    esi; expectedOwner
0x79774C: mov     ecx, esi; this
0x79774E: call    OB_stVector_stVectorFloat_InsertFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked insert-fill implementation for vector<vector<float>>. Deep-copies the fill value, reuses capacity or grows by roughly 1.5x, moves existing inner-vector owners with ownership transfer, and preserves exception cleanup. Oblivion call flow establishes the specialization; RT4.1 FrondEngine.cpp lines 768-779 corroborate its m_vRunningLengths resize role.
0x797753: jmp     short loc_7977A5
0x797755: cmp     ecx, ebx
0x797757: jz      short loc_7977A5
0x797759: mov     ebp, [esi+8]
0x79775C: mov     eax, ebp
0x79775E: sub     eax, ecx
0x797760: sar     eax, 4
0x797763: cmp     edi, eax
0x797765: jnb     short loc_7977A5
0x797767: cmp     ecx, ebp
0x797769: jbe     short loc_797770
0x79776B: call    __invalid_parameter_noinfo
0x797770: mov     ebx, [esi+4]
0x797773: cmp     ebx, [esi+8]
0x797776: jbe     short loc_79777D
0x797778: call    __invalid_parameter_noinfo
0x79777D: shl     edi, 4
0x797780: add     edi, ebx
0x797782: cmp     edi, [esi+8]
0x797785: mov     [esp+28h+result.current], ebx
0x797789: ja      short loc_797790
0x79778B: cmp     edi, [esi+4]
0x79778E: jnb     short loc_797795
0x797790: call    __invalid_parameter_noinfo
0x797795: push    ebp; last
0x797796: push    esi; last
0x797797: push    edi; first
0x797798: push    esi; first
0x797799: lea     ecx, [esp+38h+result]
0x79779D: push    ecx; result
0x79779E: mov     ecx, esi; this
0x7977A0: call    OB_stVector_stVectorUShortPtr_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short*>>. Uses the 4-byte inner-vector assignment family, destroys vacated owners, and updates end.
0x7977A5: mov     eax, [esp+28h+value.begin]
0x7977A9: test    eax, eax
0x7977AB: jz      short loc_7977B6
0x7977AD: push    eax
0x7977AE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7977B3: add     esp, 4
0x7977B6: mov     ecx, [esp+28h+var_C]
0x7977BA: mov     large fs:0, ecx
0x7977C1: pop     ecx
0x7977C2: pop     edi
0x7977C3: pop     esi
0x7977C4: pop     ebp
0x7977C5: pop     ebx
0x7977C6: add     esp, 14h
0x7977C9: retn    14h
0x9CC0C0: lea     ecx, [ebp+8]; this
0x9CC0C3: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC0C8: mov     edx, [esp+value.allocatorState]
0x9CC0CC: lea     eax, [edx-18h]
0x9CC0CF: mov     ecx, [edx-1Ch]
0x9CC0D2: xor     ecx, eax
0x9CC0D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC0D9: mov     eax, offset stru_AF5138
0x9CC0DE: jmp     ___CxxFrameHandler3

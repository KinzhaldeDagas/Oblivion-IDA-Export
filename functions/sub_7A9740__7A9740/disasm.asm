0x7A9740: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-24): CLeafLodEngine::ComputeNextLevel contract recovered from caller/order: prepare/copy source vector, FindPairs at 0x7A979D, then BuildNewLeaves at 0x7A97A9 into the output leaf vector.
0x7A9742: push    offset SEH_7A9740
0x7A9747: mov     eax, large fs:0
0x7A974D: push    eax
0x7A974E: sub     esp, 18h
0x7A9751: push    ebx
0x7A9752: push    esi
0x7A9753: push    edi
0x7A9754: mov     eax, ds:0B30AACh
0x7A9759: xor     eax, esp
0x7A975B: push    eax
0x7A975C: lea     eax, [esp+34h+var_C]
0x7A9760: mov     large fs:0, eax
0x7A9766: mov     edi, ecx
0x7A9768: xor     ebx, ebx
0x7A976A: mov     [esp+34h+var_24], ebx
0x7A976E: mov     esi, [esp+34h+result]
0x7A9772: mov     eax, 1
0x7A9777: mov     [esp+34h+var_4], eax
0x7A977B: mov     [esi+4], ebx
0x7A977E: mov     [esi+8], ebx
0x7A9781: mov     [esi+0Ch], ebx
0x7A9784: sub     esp, 10h
0x7A9787: mov     [esp+44h+var_24], eax
0x7A978B: lea     eax, [esp+44h+originalLeaves]
0x7A978F: mov     ecx, esp; this
0x7A9791: mov     [esp+44h+var_20], esp
0x7A9795: push    eax; source
0x7A9796: call    OB_stVector4_CopyCtor_010201A0; ComputeNextLevel copies the current four-byte pointer vector shallowly before selecting/cloning leaf objects; pointed leaf lifetime is handled separately.
0x7A979B: mov     ecx, edi; this
0x7A979D: call    OB_CLeafLodEngine_FindPairs_010201A0; OBLIVION AUTHORITY 2026-08-27: CLeafLodEngine::FindPairs accepts a 16-byte leaf-vector value. For each primary leaf in source order, it scans a contiguous following prefix only until end or the first already-marked candidate, chooses the nearest position within spacing tolerance, and marks only that chosen match. A leaf already used as a match may later be a primary. It never compares textureIndexByte, colorScaleByte, packedColor, or texture record, so pairs may cross leaf textures/layers.
0x7A97A2: lea     ecx, [esp+34h+var_1C]
0x7A97A6: push    ecx; result
0x7A97A7: mov     ecx, edi; this
0x7A97A9: call    OB_CLeafLodEngine_BuildNewLeaves_010201A0; OBLIVION AUTHORITY (2026-08-24): Calls BuildNewLeaves after pair construction. CTreeEngine_BuildLeafLods invokes this once for each generated LOD after LOD0.
0x7A97AE: push    eax; source
0x7A97AF: mov     ecx, esi; this
0x7A97B1: mov     byte ptr [esp+38h+var_4], 2
0x7A97B6: call    OB_stVector4_CopyAssign_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded copy assignment for a 0x10-byte vector owner with four-byte elements. Handles self-assignment, empty source, capacity reuse, initialized/uninitialized tails, and reallocation.
0x7A97BB: mov     eax, [esp+34h+var_1C.begin]
0x7A97BF: cmp     eax, ebx
0x7A97C1: jz      short loc_7A97CC
0x7A97C3: push    eax
0x7A97C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A97C9: add     esp, 4
0x7A97CC: mov     eax, [esp+34h+originalLeaves.begin]
0x7A97D0: cmp     eax, ebx
0x7A97D2: jz      short loc_7A97DD
0x7A97D4: push    eax
0x7A97D5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A97DA: add     esp, 4
0x7A97DD: mov     eax, esi
0x7A97DF: mov     ecx, [esp+34h+var_C]
0x7A97E3: mov     large fs:0, ecx
0x7A97EA: pop     ecx
0x7A97EB: pop     edi
0x7A97EC: pop     esi
0x7A97ED: pop     ebx
0x7A97EE: add     esp, 24h
0x7A97F1: retn    14h
0x9CCF70: lea     ecx, [ebp+8]; this
0x9CCF73: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CCF78: mov     eax, [ebp-24h]
0x9CCF7B: and     eax, 1
0x9CCF7E: jz      locret_9CCF90
0x9CCF84: and     dword ptr [ebp-24h], 0FFFFFFFEh
0x9CCF88: mov     ecx, [ebp+4]; this
0x9CCF8B: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CCF90: retn
0x9CCF91: lea     ecx, [ebp-1Ch]; this
0x9CCF94: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CCF99: mov     edx, [esp+originalLeaves.allocatorState]
0x9CCF9D: lea     eax, [edx-24h]
0x9CCFA0: mov     ecx, [edx-28h]
0x9CCFA3: xor     ecx, eax
0x9CCFA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCFAA: mov     eax, offset stru_AF63A8
0x9CCFAF: jmp     ___CxxFrameHandler3

0x795ED0: push    ebp; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move of 0x10-byte vector owners. Constructs empty destinations, swaps begin/end/capacity ownership from each source, leaves sources empty, returns destinationFirst+count, and destroys the constructed prefix only on unwind. The prior noreturn annotation was false.
0x795ED1: mov     ebp, esp
0x795ED3: push    0FFFFFFFFh
0x795ED5: push    offset SEH_795ED0
0x795EDA: mov     eax, large fs:0
0x795EE0: push    eax
0x795EE1: sub     esp, 1Ch
0x795EE4: push    ebx
0x795EE5: push    esi
0x795EE6: push    edi
0x795EE7: mov     eax, ds:0B30AACh
0x795EEC: xor     eax, ebp
0x795EEE: push    eax
0x795EEF: lea     eax, [ebp+var_C]
0x795EF2: mov     large fs:0, eax
0x795EF8: mov     [ebp+var_10], esp
0x795EFB: mov     esi, [ebp+destinationFirst]
0x795EFE: xor     ecx, ecx
0x795F00: mov     [ebp+var_14], esi
0x795F03: mov     [ebp+source.begin], ecx
0x795F06: mov     [ebp+source.end], ecx
0x795F09: mov     [ebp+source.capacity], ecx
0x795F0C: mov     edi, [ebp+first]
0x795F0F: mov     [ebp+var_4], ecx
0x795F12: mov     bl, 1
0x795F14: cmp     edi, [ebp+last]
0x795F17: mov     byte ptr [ebp+var_4], bl
0x795F1A: jz      short loc_795F8B
0x795F1C: mov     [ebp+first], esi
0x795F1F: mov     [ebp+var_18], esi
0x795F22: cmp     esi, ecx
0x795F24: mov     byte ptr [ebp+var_4], 2
0x795F28: jz      short loc_795F37
0x795F2A: lea     eax, [ebp+source]
0x795F2D: push    eax; source
0x795F2E: mov     ecx, esi; this
0x795F30: call    OB_stVector4_CopyCtor_010201A0; Oblivion binary evidence: compiler-folded copy constructor for the exact 0x10 four-byte vector layout. Allocates count*4 bytes, memmoves the source range, then initializes begin/end/capacity. Pointer-vector copies are intentionally shallow; pointed-object ownership remains with higher-level tree/LOD code.
0x795F35: xor     ecx, ecx
0x795F37: mov     edx, [edi+4]
0x795F3A: mov     eax, [esi+4]
0x795F3D: mov     [esi+4], edx
0x795F40: mov     [edi+4], eax
0x795F43: mov     edx, [edi+8]
0x795F46: mov     eax, [esi+8]
0x795F49: mov     [esi+8], edx
0x795F4C: mov     [edi+8], eax
0x795F4F: mov     edx, [edi+0Ch]
0x795F52: mov     eax, [esi+0Ch]
0x795F55: mov     [esi+0Ch], edx
0x795F58: add     esi, 10h
0x795F5B: mov     [edi+0Ch], eax
0x795F5E: mov     [ebp+destinationFirst], esi
0x795F61: add     edi, 10h
0x795F64: jmp     short loc_795F14
0x795F66: mov     esi, [ebp+var_14]
0x795F69: mov     edi, [ebp+destinationFirst]
0x795F6C: cmp     esi, edi
0x795F6E: jz      short loc_795F82
0x795F70: mov     ebx, [ebp+arg_C]
0x795F73: push    esi; this
0x795F74: mov     ecx, ebx
0x795F76: call    OB_stVector4_DestroyStdcall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x795F7B: add     esi, 10h
0x795F7E: cmp     esi, edi
0x795F80: jnz     short loc_795F73
0x795F82: push    0
0x795F84: push    0
0x795F86: call    ThrowException??
0x795F8B: mov     eax, [ebp+source.begin]; Normal completion path: releases the temporary empty-owner buffer and returns the advanced destination pointer; the earlier 0x795F66 block is the exception-cleanup funclet, not the only exit.
0x795F8E: cmp     eax, ecx
0x795F90: jz      short loc_795F9B
0x795F92: push    eax
0x795F93: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x795F98: add     esp, 4
0x795F9B: mov     eax, esi
0x795F9D: mov     ecx, [ebp+var_C]
0x795FA0: mov     large fs:0, ecx
0x795FA7: pop     ecx
0x795FA8: pop     edi
0x795FA9: pop     esi
0x795FAA: pop     ebx
0x795FAB: mov     esp, ebp
0x795FAD: pop     ebp
0x795FAE: retn
0x9CBE60: lea     ecx, [ebp+source]; this
0x9CBE63: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBE68: mov     eax, [ebp+first]
0x9CBE6B: push    eax
0x9CBE6C: mov     ecx, [ebp+var_18]; this
0x9CBE6F: push    ecx
0x9CBE70: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CBE75: add     esp, 8
0x9CBE78: retn
0x9CBE79: mov     edx, [esp-4+last]
0x9CBE7D: lea     eax, [edx+0Ch]
0x9CBE80: mov     ecx, [edx-2Ch]
0x9CBE83: xor     ecx, eax
0x9CBE85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBE8A: mov     eax, offset stru_AF4E70
0x9CBE8F: jmp     ___CxxFrameHandler3

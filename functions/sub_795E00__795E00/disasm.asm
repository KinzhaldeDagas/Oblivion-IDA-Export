0x795E00: push    ebp; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move for vector<unsigned short> owners. Constructs empty destinations then swaps their buffers with sources, leaving sources empty; normal return is at 0x795EA8.
0x795E01: mov     ebp, esp
0x795E03: push    0FFFFFFFFh
0x795E05: push    offset SEH_795E00
0x795E0A: mov     eax, large fs:0
0x795E10: push    eax
0x795E11: sub     esp, 1Ch
0x795E14: push    ebx
0x795E15: push    esi
0x795E16: push    edi
0x795E17: mov     eax, ds:0B30AACh
0x795E1C: xor     eax, ebp
0x795E1E: push    eax
0x795E1F: lea     eax, [ebp+var_C]
0x795E22: mov     large fs:0, eax
0x795E28: mov     [ebp+var_10], esp
0x795E2B: mov     esi, [ebp+destination]
0x795E2E: xor     ecx, ecx
0x795E30: mov     [ebp+var_14], esi
0x795E33: mov     [ebp+var_28.begin], ecx
0x795E36: mov     [ebp+var_28.end], ecx
0x795E39: mov     [ebp+var_28.capacity], ecx
0x795E3C: mov     edi, [ebp+first]
0x795E3F: mov     bl, 1
0x795E41: mov     [ebp+var_4], ecx
0x795E44: mov     byte ptr [ebp+var_4], bl
0x795E47: cmp     edi, [ebp+last]
0x795E4A: jz      short loc_795EA8
0x795E4C: mov     [ebp+first], esi
0x795E4F: mov     [ebp+var_18], esi
0x795E52: cmp     esi, ecx
0x795E54: mov     byte ptr [ebp+var_4], 2
0x795E58: jz      short loc_795E65
0x795E5A: lea     eax, [ebp+var_28]
0x795E5D: push    eax; source
0x795E5E: mov     ecx, esi; this
0x795E60: call    OB_stVectorUShort_CopyCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy constructor for vector<unsigned short>; allocates exact source size and copies its 2-byte elements.
0x795E65: push    edi; other
0x795E66: mov     ecx, esi; this
0x795E68: mov     byte ptr [ebp+var_4], bl
0x795E6B: call    OB_stVectorUShort_Swap_010201A0; OBLIVION AUTHORITY (2026-08-30): Swaps two vector<unsigned short> owners via a temporary deep copy and copy assignments; exception cleanup frees the temporary buffer.
0x795E70: add     esi, 10h
0x795E73: add     edi, 10h
0x795E76: mov     [ebp+destination], esi
0x795E79: xor     ecx, ecx
0x795E7B: jmp     short loc_795E47
0x795E7D: mov     esi, [ebp+var_14]
0x795E80: mov     edi, [ebp+destination]
0x795E83: cmp     esi, edi
0x795E85: jz      short loc_795E9F
0x795E87: mov     ebx, [ebp+arg_C]
0x795E8A: lea     ebx, [ebx+0]
0x795E90: push    esi; this
0x795E91: mov     ecx, ebx
0x795E93: call    OB_stVector4_DestroyStdcall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x795E98: add     esi, 10h
0x795E9B: cmp     esi, edi
0x795E9D: jnz     short loc_795E90
0x795E9F: push    0
0x795EA1: push    0
0x795EA3: call    ThrowException??
0x795EA8: mov     eax, [ebp+var_28.begin]
0x795EAB: cmp     eax, ecx
0x795EAD: jz      short loc_795EB8
0x795EAF: push    eax
0x795EB0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x795EB5: add     esp, 4
0x795EB8: mov     eax, esi
0x795EBA: mov     ecx, [ebp+var_C]
0x795EBD: mov     large fs:0, ecx
0x795EC4: pop     ecx
0x795EC5: pop     edi
0x795EC6: pop     esi
0x795EC7: pop     ebx
0x795EC8: mov     esp, ebp
0x795ECA: pop     ebp
0x795ECB: retn
0x9CBE20: lea     ecx, [ebp+var_28]; this
0x9CBE23: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBE28: mov     eax, [ebp+first]
0x9CBE2B: push    eax
0x9CBE2C: mov     ecx, [ebp+var_18]; this
0x9CBE2F: push    ecx
0x9CBE30: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CBE35: add     esp, 8
0x9CBE38: retn
0x9CBE39: mov     edx, [esp-4+last]
0x9CBE3D: lea     eax, [edx+0Ch]
0x9CBE40: mov     ecx, [edx-2Ch]
0x9CBE43: xor     ecx, eax
0x9CBE45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBE4A: mov     eax, offset stru_AF4E28
0x9CBE4F: jmp     ___CxxFrameHandler3

0x795D50: push    ebp; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<unsigned short> owners. Deep-copy-constructs count values and normally returns at 0x795DE0; prior noreturn metadata was false.
0x795D51: mov     ebp, esp
0x795D53: push    0FFFFFFFFh
0x795D55: push    offset SEH_795D50
0x795D5A: mov     eax, large fs:0
0x795D60: push    eax
0x795D61: sub     esp, 0Ch
0x795D64: push    ebx
0x795D65: push    esi
0x795D66: push    edi
0x795D67: mov     eax, ds:0B30AACh
0x795D6C: xor     eax, ebp
0x795D6E: push    eax
0x795D6F: lea     eax, [ebp+var_C]
0x795D72: mov     large fs:0, eax
0x795D78: mov     [ebp+var_10], esp
0x795D7B: mov     esi, [ebp+destination]
0x795D7E: mov     edi, [ebp+count]
0x795D81: xor     ebx, ebx
0x795D83: mov     [ebp+var_14], esi
0x795D86: mov     [ebp+var_4], ebx
0x795D89: lea     esp, [esp+0]
0x795D90: cmp     edi, ebx
0x795D92: jbe     short loc_795DE0
0x795D94: mov     [ebp+count], esi
0x795D97: mov     [ebp+var_18], esi
0x795D9A: cmp     esi, ebx
0x795D9C: mov     byte ptr [ebp+var_4], 1
0x795DA0: jz      short loc_795DAD
0x795DA2: mov     eax, [ebp+value]
0x795DA5: push    eax; source
0x795DA6: mov     ecx, esi; this
0x795DA8: call    OB_stVectorUShort_CopyCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy constructor for vector<unsigned short>; allocates exact source size and copies its 2-byte elements.
0x795DAD: sub     edi, 1
0x795DB0: add     esi, 10h
0x795DB3: mov     byte ptr [ebp+var_4], bl
0x795DB6: mov     [ebp+destination], esi
0x795DB9: jmp     short loc_795D90
0x795DBB: mov     esi, [ebp+var_14]
0x795DBE: mov     edi, [ebp+destination]
0x795DC1: cmp     esi, edi
0x795DC3: jz      short loc_795DD7
0x795DC5: mov     ebx, [ebp+arg_C]
0x795DC8: push    esi; this
0x795DC9: mov     ecx, ebx
0x795DCB: call    OB_stVector4_DestroyStdcall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x795DD0: add     esi, 10h
0x795DD3: cmp     esi, edi
0x795DD5: jnz     short loc_795DC8
0x795DD7: xor     ebx, ebx
0x795DD9: push    ebx
0x795DDA: push    ebx
0x795DDB: call    ThrowException??
0x795DE0: mov     ecx, [ebp+var_C]
0x795DE3: mov     large fs:0, ecx
0x795DEA: pop     ecx
0x795DEB: pop     edi
0x795DEC: pop     esi
0x795DED: pop     ebx
0x795DEE: mov     esp, ebp
0x795DF0: pop     ebp
0x795DF1: retn
0x9CBDF0: mov     eax, [ebp+count]
0x9CBDF3: push    eax
0x9CBDF4: mov     ecx, [ebp+var_18]; this
0x9CBDF7: push    ecx
0x9CBDF8: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CBDFD: add     esp, 8
0x9CBE00: retn
0x9CBE01: mov     edx, [esp-4+count]
0x9CBE05: lea     eax, [edx+0Ch]
0x9CBE08: mov     ecx, [edx-1Ch]
0x9CBE0B: xor     ecx, eax
0x9CBE0D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBE12: mov     eax, offset stru_AF4DC0
0x9CBE17: jmp     ___CxxFrameHandler3

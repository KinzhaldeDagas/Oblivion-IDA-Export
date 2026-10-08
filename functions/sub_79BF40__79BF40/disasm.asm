0x79BF40: push    ebp; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<float> elements of vector<vector<float>>. Deep-copy-constructs each inner vector and destroys only the constructed prefix on unwind. Its normal return at 0x79BFD0 proves the prior noreturn annotation false.
0x79BF41: mov     ebp, esp
0x79BF43: push    0FFFFFFFFh
0x79BF45: push    offset SEH_79BF40
0x79BF4A: mov     eax, large fs:0
0x79BF50: push    eax
0x79BF51: sub     esp, 0Ch
0x79BF54: push    ebx
0x79BF55: push    esi
0x79BF56: push    edi
0x79BF57: mov     eax, ds:0B30AACh
0x79BF5C: xor     eax, ebp
0x79BF5E: push    eax
0x79BF5F: lea     eax, [ebp+var_C]
0x79BF62: mov     large fs:0, eax
0x79BF68: mov     [ebp+var_10], esp
0x79BF6B: mov     esi, [ebp+arg_0]
0x79BF6E: mov     edi, [ebp+count]
0x79BF71: xor     ebx, ebx
0x79BF73: mov     [ebp+var_14], esi
0x79BF76: mov     [ebp+var_4], ebx
0x79BF79: lea     esp, [esp+0]
0x79BF80: cmp     edi, ebx
0x79BF82: jbe     short loc_79BFD0
0x79BF84: mov     [ebp+count], esi
0x79BF87: mov     [ebp+var_18], esi
0x79BF8A: cmp     esi, ebx
0x79BF8C: mov     byte ptr [ebp+var_4], 1
0x79BF90: jz      short loc_79BF9D
0x79BF92: mov     eax, [ebp+source]
0x79BF95: push    eax; source
0x79BF96: mov     ecx, esi; this
0x79BF98: call    OB_stVector4_CopyCtor_010201A0; Oblivion binary evidence: compiler-folded copy constructor for the exact 0x10 four-byte vector layout. Allocates count*4 bytes, memmoves the source range, then initializes begin/end/capacity. Pointer-vector copies are intentionally shallow; pointed-object ownership remains with higher-level tree/LOD code.
0x79BF9D: sub     edi, 1
0x79BFA0: add     esi, 10h
0x79BFA3: mov     byte ptr [ebp+var_4], bl
0x79BFA6: mov     [ebp+arg_0], esi
0x79BFA9: jmp     short loc_79BF80
0x79BFAB: mov     esi, [ebp+var_14]
0x79BFAE: mov     edi, [ebp+arg_0]
0x79BFB1: cmp     esi, edi
0x79BFB3: jz      short loc_79BFC7
0x79BFB5: mov     ebx, [ebp+arg_C]
0x79BFB8: push    esi; this
0x79BFB9: mov     ecx, ebx
0x79BFBB: call    OB_stVector4_DestroyStdcall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x79BFC0: add     esi, 10h
0x79BFC3: cmp     esi, edi
0x79BFC5: jnz     short loc_79BFB8
0x79BFC7: xor     ebx, ebx
0x79BFC9: push    ebx
0x79BFCA: push    ebx
0x79BFCB: call    ThrowException??
0x79BFD0: mov     ecx, [ebp+var_C]
0x79BFD3: mov     large fs:0, ecx
0x79BFDA: pop     ecx
0x79BFDB: pop     edi
0x79BFDC: pop     esi
0x79BFDD: pop     ebx
0x79BFDE: mov     esp, ebp
0x79BFE0: pop     ebp
0x79BFE1: retn
0x9CC330: mov     eax, [ebp+count]
0x9CC333: push    eax
0x9CC334: mov     ecx, [ebp+var_18]; this
0x9CC337: push    ecx
0x9CC338: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC33D: add     esp, 8
0x9CC340: retn
0x9CC341: mov     edx, [esp-4+count]
0x9CC345: lea     eax, [edx+0Ch]
0x9CC348: mov     ecx, [edx-1Ch]
0x9CC34B: xor     ecx, eax
0x9CC34D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC352: mov     eax, offset stru_AF54B8
0x9CC357: jmp     ___CxxFrameHandler3

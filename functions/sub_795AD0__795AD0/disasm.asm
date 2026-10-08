0x795AD0: push    ebp; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized copy of inner vector<unsigned short> owners. Deep-copy-constructs the destination range, destroys only its constructed prefix on unwind, and normally returns the constructed end at 0x795B5E; prior noreturn metadata was false.
0x795AD1: mov     ebp, esp
0x795AD3: push    0FFFFFFFFh
0x795AD5: push    offset SEH_795AD0
0x795ADA: mov     eax, large fs:0
0x795AE0: push    eax
0x795AE1: sub     esp, 0Ch
0x795AE4: push    ebx
0x795AE5: push    esi
0x795AE6: push    edi
0x795AE7: mov     eax, ds:0B30AACh
0x795AEC: xor     eax, ebp
0x795AEE: push    eax
0x795AEF: lea     eax, [ebp+var_C]
0x795AF2: mov     large fs:0, eax
0x795AF8: mov     [ebp+var_10], esp
0x795AFB: mov     esi, [ebp+destination]
0x795AFE: mov     edi, [ebp+first]
0x795B01: xor     ebx, ebx
0x795B03: mov     [ebp+var_14], esi
0x795B06: mov     [ebp+var_4], ebx
0x795B09: lea     esp, [esp+0]
0x795B10: cmp     edi, [ebp+last]
0x795B13: jz      short loc_795B5E
0x795B15: mov     [ebp+first], esi
0x795B18: mov     [ebp+var_18], esi
0x795B1B: cmp     esi, ebx
0x795B1D: mov     byte ptr [ebp+var_4], 1
0x795B21: jz      short loc_795B2B
0x795B23: push    edi; source
0x795B24: mov     ecx, esi; this
0x795B26: call    OB_stVectorUShort_CopyCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy constructor for vector<unsigned short>; allocates exact source size and copies its 2-byte elements.
0x795B2B: add     esi, 10h
0x795B2E: mov     byte ptr [ebp+var_4], bl
0x795B31: mov     [ebp+destination], esi
0x795B34: add     edi, 10h
0x795B37: jmp     short loc_795B10
0x795B39: mov     esi, [ebp+var_14]
0x795B3C: mov     edi, [ebp+destination]
0x795B3F: cmp     esi, edi
0x795B41: jz      short loc_795B55
0x795B43: mov     ebx, [ebp+arg_C]
0x795B46: push    esi; this
0x795B47: mov     ecx, ebx
0x795B49: call    OB_stVector4_DestroyStdcall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x795B4E: add     esi, 10h
0x795B51: cmp     esi, edi
0x795B53: jnz     short loc_795B46
0x795B55: xor     ebx, ebx
0x795B57: push    ebx
0x795B58: push    ebx
0x795B59: call    ThrowException??
0x795B5E: mov     eax, esi
0x795B60: mov     ecx, [ebp+var_C]
0x795B63: mov     large fs:0, ecx
0x795B6A: pop     ecx
0x795B6B: pop     edi
0x795B6C: pop     esi
0x795B6D: pop     ebx
0x795B6E: mov     esp, ebp
0x795B70: pop     ebp
0x795B71: retn
0x9CBD90: mov     eax, [ebp+first]
0x9CBD93: push    eax
0x9CBD94: mov     ecx, [ebp+var_18]; this
0x9CBD97: push    ecx
0x9CBD98: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CBD9D: add     esp, 8
0x9CBDA0: retn
0x9CBDA1: mov     edx, [esp-4+last]
0x9CBDA5: lea     eax, [edx+0Ch]
0x9CBDA8: mov     ecx, [edx-1Ch]
0x9CBDAB: xor     ecx, eax
0x9CBDAD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBDB2: mov     eax, offset stru_AF4D00
0x9CBDB7: jmp     ___CxxFrameHandler3

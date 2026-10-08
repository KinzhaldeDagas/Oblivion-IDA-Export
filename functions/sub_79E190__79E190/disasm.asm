0x79E190: push    ebp; Exception-safe uninitialized_fill_n for compact SFrondGuide records. Placement-copy-constructs count values; unwind cleanup destroys the constructed prefix before rethrowing.
0x79E191: mov     ebp, esp
0x79E193: push    0FFFFFFFFh
0x79E195: push    offset SEH_79E190
0x79E19A: mov     eax, large fs:0
0x79E1A0: push    eax
0x79E1A1: sub     esp, 8
0x79E1A4: push    ebx
0x79E1A5: push    esi
0x79E1A6: push    edi
0x79E1A7: mov     eax, ds:0B30AACh
0x79E1AC: xor     eax, ebp
0x79E1AE: push    eax
0x79E1AF: lea     eax, [ebp+var_C]
0x79E1B2: mov     large fs:0, eax
0x79E1B8: mov     [ebp+var_10], esp
0x79E1BB: mov     edi, [ebp+destination]
0x79E1BE: mov     ebx, [ebp+source]
0x79E1C1: mov     esi, [ebp+count]
0x79E1C4: mov     [ebp+var_14], edi
0x79E1C7: mov     [ebp+var_4], 0
0x79E1CE: mov     edi, edi
0x79E1D0: test    esi, esi
0x79E1D2: jbe     short loc_79E20E
0x79E1D4: push    ebx; source
0x79E1D5: push    edi; destination
0x79E1D6: call    OB_SFrondGuide_PlacementCopyConstruct_010201A0; Placement copy-construction of one Oblivion compact SFrondGuide. Deep-copy-constructs the embedded SFrondVertex vector and copies all scalar fields; no stock RT 4.1 stack-vertex/pointer relinking exists in this layout.
0x79E1DB: add     esp, 8
0x79E1DE: sub     esi, 1
0x79E1E1: add     edi, 30h ; '0'
0x79E1E4: mov     [ebp+destination], edi
0x79E1E7: jmp     short loc_79E1D0
0x79E1E9: mov     esi, [ebp+var_14]
0x79E1EC: mov     edi, [ebp+destination]
0x79E1EF: cmp     esi, edi
0x79E1F1: jz      short loc_79E205
0x79E1F3: mov     ebx, [ebp+arg_C]
0x79E1F6: push    esi; this
0x79E1F7: mov     ecx, ebx
0x79E1F9: call    OB_stVector4_DestroyStdcall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x79E1FE: add     esi, 30h ; '0'
0x79E201: cmp     esi, edi
0x79E203: jnz     short loc_79E1F6
0x79E205: push    0
0x79E207: push    0
0x79E209: call    ThrowException??
0x79E20E: mov     ecx, [ebp+var_C]
0x79E211: mov     large fs:0, ecx
0x79E218: pop     ecx
0x79E219: pop     edi
0x79E21A: pop     esi
0x79E21B: pop     ebx
0x79E21C: mov     esp, ebp
0x79E21E: pop     ebp
0x79E21F: retn
0x9CC400: mov     edx, [esp-4+count]
0x9CC404: lea     eax, [edx+0Ch]
0x9CC407: mov     ecx, [edx-18h]
0x9CC40A: xor     ecx, eax
0x9CC40C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC411: mov     eax, offset stru_AF55D0
0x9CC416: jmp     ___CxxFrameHandler3

0x7A0D40: push    ebp; Exception-safe uninitialized ownership move for guide-LOD level vectors. Constructs an empty destination element, swaps its begin/end/capacity with the source, and advances at 0x10-byte stride; unwind destroys constructed destinations.
0x7A0D41: mov     ebp, esp
0x7A0D43: push    0FFFFFFFFh
0x7A0D45: push    offset SEH_7A0D40
0x7A0D4A: mov     eax, large fs:0
0x7A0D50: push    eax
0x7A0D51: sub     esp, 1Ch
0x7A0D54: push    ebx
0x7A0D55: push    esi
0x7A0D56: push    edi
0x7A0D57: mov     eax, ds:0B30AACh
0x7A0D5C: xor     eax, ebp
0x7A0D5E: push    eax
0x7A0D5F: lea     eax, [ebp+var_C]
0x7A0D62: mov     large fs:0, eax
0x7A0D68: mov     [ebp+var_10], esp
0x7A0D6B: mov     esi, [ebp+destinationFirst]
0x7A0D6E: xor     ecx, ecx
0x7A0D70: mov     [ebp+value], esi
0x7A0D73: mov     [ebp+source.begin], ecx
0x7A0D76: mov     [ebp+source.end], ecx
0x7A0D79: mov     [ebp+source.capacityEnd], ecx
0x7A0D7C: mov     edi, [ebp+first]
0x7A0D7F: mov     [ebp+var_4], ecx
0x7A0D82: mov     bl, 1
0x7A0D84: cmp     edi, [ebp+last]
0x7A0D87: mov     byte ptr [ebp+var_4], bl
0x7A0D8A: jz      short loc_7A0DFB
0x7A0D8C: mov     [ebp+first], esi
0x7A0D8F: mov     [ebp+var_18], esi
0x7A0D92: cmp     esi, ecx
0x7A0D94: mov     byte ptr [ebp+var_4], 2
0x7A0D98: jz      short loc_7A0DA7
0x7A0D9A: lea     eax, [ebp+source]
0x7A0D9D: push    eax; source
0x7A0D9E: mov     ecx, esi; this
0x7A0DA0: call    OB_stVector_SFrondGuide_CopyCtor_010201A0; Oblivion st_vector<SFrondGuide> copy constructor. Allocates sourceCount*0x30 and deep-copy-constructs each compact guide, including its owned SFrondVertex vector. The executable establishes the by-value layout.
0x7A0DA5: xor     ecx, ecx
0x7A0DA7: mov     edx, [edi+4]
0x7A0DAA: mov     eax, [esi+4]
0x7A0DAD: mov     [esi+4], edx
0x7A0DB0: mov     [edi+4], eax
0x7A0DB3: mov     edx, [edi+8]
0x7A0DB6: mov     eax, [esi+8]
0x7A0DB9: mov     [esi+8], edx
0x7A0DBC: mov     [edi+8], eax
0x7A0DBF: mov     edx, [edi+0Ch]
0x7A0DC2: mov     eax, [esi+0Ch]
0x7A0DC5: mov     [esi+0Ch], edx
0x7A0DC8: add     esi, 10h
0x7A0DCB: mov     [edi+0Ch], eax
0x7A0DCE: mov     [ebp+destinationFirst], esi
0x7A0DD1: add     edi, 10h
0x7A0DD4: jmp     short loc_7A0D84
0x7A0DD6: mov     esi, [ebp+value]
0x7A0DD9: mov     edi, [ebp+destinationFirst]
0x7A0DDC: cmp     esi, edi
0x7A0DDE: jz      short loc_7A0DF2
0x7A0DE0: mov     ebx, [ebp+arg_C]
0x7A0DE3: push    esi; value
0x7A0DE4: mov     ecx, ebx
0x7A0DE6: call    OB_stVector_SFrondGuide_DestroyThunk_010201A0; stdcall cleanup thunk for one st_vector<SFrondGuide> element; used by exception unwind in the outer guide-LOD vector helpers.
0x7A0DEB: add     esi, 10h
0x7A0DEE: cmp     esi, edi
0x7A0DF0: jnz     short loc_7A0DE3
0x7A0DF2: push    0
0x7A0DF4: push    0
0x7A0DF6: call    ThrowException??
0x7A0DFB: mov     edi, [ebp+source.begin]
0x7A0DFE: cmp     edi, ecx
0x7A0E00: jz      short loc_7A0E40
0x7A0E02: cmp     edi, [ebp+source.end]
0x7A0E05: jz      short loc_7A0E37
0x7A0E07: add     edi, 4
0x7A0E0A: lea     ebx, [ebx+0]
0x7A0E10: mov     eax, [edi]
0x7A0E12: cmp     eax, ecx
0x7A0E14: jz      short loc_7A0E21
0x7A0E16: push    eax
0x7A0E17: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A0E1C: add     esp, 4
0x7A0E1F: xor     ecx, ecx
0x7A0E21: mov     [edi], ecx
0x7A0E23: mov     [edi+4], ecx
0x7A0E26: mov     [edi+8], ecx
0x7A0E29: add     edi, 30h ; '0'
0x7A0E2C: lea     eax, [edi-4]
0x7A0E2F: cmp     eax, [ebp+source.end]
0x7A0E32: jnz     short loc_7A0E10
0x7A0E34: mov     edi, [ebp+source.begin]
0x7A0E37: push    edi
0x7A0E38: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A0E3D: add     esp, 4
0x7A0E40: mov     eax, esi
0x7A0E42: mov     ecx, [ebp+var_C]
0x7A0E45: mov     large fs:0, ecx
0x7A0E4C: pop     ecx
0x7A0E4D: pop     edi
0x7A0E4E: pop     esi
0x7A0E4F: pop     ebx
0x7A0E50: mov     esp, ebp
0x7A0E52: pop     ebp
0x7A0E53: retn
0x9CC5C0: lea     ecx, [ebp+source]; this
0x9CC5C3: jmp     OB_stVector_SFrondGuide_Destroy_010201A0; Destroys one st_vector<SFrondGuide>: deep-destroys the initialized 0x30 guide range, frees its allocation, and clears begin/end/capacityEnd.
0x9CC5C8: mov     eax, [ebp+first]
0x9CC5CB: push    eax
0x9CC5CC: mov     ecx, [ebp+var_18]; this
0x9CC5CF: push    ecx
0x9CC5D0: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC5D5: add     esp, 8
0x9CC5D8: retn
0x9CC5D9: mov     edx, [esp-4+last]
0x9CC5DD: lea     eax, [edx+0Ch]
0x9CC5E0: mov     ecx, [edx-2Ch]
0x9CC5E3: xor     ecx, eax
0x9CC5E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC5EA: mov     eax, offset stru_AF5924
0x9CC5EF: jmp     ___CxxFrameHandler3

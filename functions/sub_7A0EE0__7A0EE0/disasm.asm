0x7A0EE0: push    0FFFFFFFFh; Oblivion CFrondEngine::StartGuide constructs one zeroed compact 0x30 SFrondGuide and deep-pushes it into CFrondEngine+0x08. Unlike published RT 4.1, the shipped ABI has no vertex-count argument or stack-vertex selection.
0x7A0EE2: push    offset OB_CFrondEngine_StartGuide_010201A0_SEH
0x7A0EE7: mov     eax, large fs:0
0x7A0EED: push    eax
0x7A0EEE: sub     esp, 30h
0x7A0EF1: push    ebx
0x7A0EF2: mov     eax, ds:0B30AACh
0x7A0EF7: xor     eax, esp
0x7A0EF9: push    eax
0x7A0EFA: lea     eax, [esp+44h+var_C]
0x7A0EFE: mov     large fs:0, eax
0x7A0F04: fldz
0x7A0F06: xor     ebx, ebx
0x7A0F08: fst     [esp+44h+value.guideLength]; Computed centerline length.
0x7A0F0C: mov     [esp+44h+value.vertexVector.begin], ebx; Oblivion compact guide storage: direct 16-byte vector of 0x38-byte SFrondVertex records. Local RT 4.1 stock stack-vertex fields are absent.
0x7A0F10: fst     [esp+44h+value.radius]; Frond radius.
0x7A0F14: mov     [esp+44h+value.vertexVector.end], ebx; Oblivion compact guide storage: direct 16-byte vector of 0x38-byte SFrondVertex records. Local RT 4.1 stock stack-vertex fields are absent.
0x7A0F18: fst     [esp+44h+value.offsetAngle]; Rotation offset around the guide centerline.
0x7A0F1C: mov     [esp+44h+value.vertexVector.capacityEnd], ebx; Oblivion compact guide storage: direct 16-byte vector of 0x38-byte SFrondVertex records. Local RT 4.1 stock stack-vertex fields are absent.
0x7A0F20: fst     [esp+44h+value.surfaceArea]; Computed surface area used for LOD.
0x7A0F24: mov     [esp+44h+value.frondMapIndex], bl; Selected frond texture/map index.
0x7A0F28: fstp    [esp+44h+value.fuzzySurfaceArea]; Randomized surface-area key used for guide LOD ordering.
0x7A0F2C: mov     [esp+44h+value.sharedVertexStartIndex], ebx; Start index in shared indexed geometry.
0x7A0F30: mov     [esp+44h+value.verticesPerGuideVertex], ebx; Generated geometry vertices associated with each guide vertex.
0x7A0F34: lea     eax, [esp+44h+value]
0x7A0F38: push    eax; value
0x7A0F39: add     ecx, 8; this
0x7A0F3C: mov     [esp+48h+var_4], ebx
0x7A0F40: call    OB_stVector_SFrondGuide_PushBack_010201A0; Appends the zeroed compact guide through the decoded st_vector<SFrondGuide> push_back and then releases only the temporary guide's owned vertex allocation.
0x7A0F45: mov     eax, [esp+44h+value.vertexVector.begin]; Oblivion compact guide storage: direct 16-byte vector of 0x38-byte SFrondVertex records. Local RT 4.1 stock stack-vertex fields are absent.
0x7A0F49: cmp     eax, ebx
0x7A0F4B: jz      short loc_7A0F56
0x7A0F4D: push    eax
0x7A0F4E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A0F53: add     esp, 4
0x7A0F56: mov     ecx, [esp+44h+var_C]
0x7A0F5A: mov     large fs:0, ecx
0x7A0F61: pop     ecx
0x7A0F62: pop     ebx
0x7A0F63: add     esp, 3Ch
0x7A0F66: retn
0x9CC620: lea     ecx, [ebp-3Ch]; this
0x9CC623: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC628: mov     edx, [esp+arg_4]
0x9CC62C: lea     eax, [edx-34h]
0x9CC62F: mov     ecx, [edx-38h]
0x9CC632: xor     ecx, eax
0x9CC634: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC639: mov     eax, offset stru_AF59A4
0x9CC63E: jmp     ___CxxFrameHandler3

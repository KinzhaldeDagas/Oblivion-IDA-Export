0x4D7D10: push    ebx; Verified MobileObject node setter: invokes the reference's pre-node-update virtual, releases any old NiNode reference, stores the new node in TESObjectREFR+0x40, and AddRefs it. Used by both normal Set3D and the queued distant-tree attach path.
0x4D7D11: push    esi
0x4D7D12: push    edi
0x4D7D13: mov     edi, ecx
0x4D7D15: mov     eax, [edi]
0x4D7D17: mov     edx, [eax+144h]
0x4D7D1D: call    edx
0x4D7D1F: push    3
0x4D7D21: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x4D7D26: mov     esi, [edi+3Ch]
0x4D7D29: mov     ebx, [esp+10h+node]
0x4D7D2D: add     esp, 4
0x4D7D30: cmp     esi, ebx
0x4D7D32: jz      short loc_4D7D65
0x4D7D34: test    esi, esi
0x4D7D36: jz      short loc_4D7D54
0x4D7D38: lea     eax, [esi+4]
0x4D7D3B: push    eax; lpAddend
0x4D7D3C: call    dword ptr ds:0A2807Ch
0x4D7D42: test    eax, eax
0x4D7D44: jnz     short loc_4D7D54
0x4D7D46: test    esi, esi
0x4D7D48: jz      short loc_4D7D54
0x4D7D4A: mov     edx, [esi]
0x4D7D4C: mov     eax, [edx]
0x4D7D4E: push    1
0x4D7D50: mov     ecx, esi
0x4D7D52: call    eax
0x4D7D54: test    ebx, ebx
0x4D7D56: mov     [edi+3Ch], ebx
0x4D7D59: jz      short loc_4D7D65
0x4D7D5B: add     ebx, 4
0x4D7D5E: push    ebx; lpAddend
0x4D7D5F: call    dword ptr ds:0A28078h
0x4D7D65: push    2
0x4D7D67: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x4D7D6C: add     esp, 4
0x4D7D6F: pop     edi
0x4D7D70: pop     esi
0x4D7D71: pop     ebx
0x4D7D72: retn    4

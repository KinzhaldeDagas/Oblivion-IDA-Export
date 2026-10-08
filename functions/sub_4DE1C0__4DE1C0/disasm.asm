0x4DE1C0: push    edi
0x4DE1C1: mov     edi, [esp+4+arg_0]
0x4DE1C5: test    edi, edi
0x4DE1C7: jnz     short loc_4DE1CD
0x4DE1C9: xor     al, al
0x4DE1CB: pop     edi
0x4DE1CC: retn
0x4DE1CD: push    ebx
0x4DE1CE: push    ebp
0x4DE1CF: push    esi
0x4DE1D0: mov     esi, [edi+8]
0x4DE1D3: xor     bl, bl
0x4DE1D5: test    esi, esi
0x4DE1D7: jz      loc_4DE2AD
0x4DE1DD: push    9; MaxCount
0x4DE1DF: push    offset aFlamenode; "FlameNode"
0x4DE1E4: push    esi; Str1
0x4DE1E5: call    __strnicmp
0x4DE1EA: add     esp, 0Ch
0x4DE1ED: test    eax, eax
0x4DE1EF: jnz     loc_4DE296
0x4DE1F5: push    1
0x4DE1F7: push    1
0x4DE1F9: push    edi
0x4DE1FA: call    sub_88CD50
0x4DE1FF: movsx   eax, byte ptr [esi+9]
0x4DE203: push    eax; C
0x4DE204: call    _isdigit
0x4DE209: add     esp, 10h
0x4DE20C: test    eax, eax
0x4DE20E: jz      short loc_4DE222
0x4DE210: movsx   ecx, byte ptr [esi+9]
0x4DE214: sub     ecx, 12h
0x4DE217: push    ecx; a1
0x4DE218: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4DE21D: add     esp, 4
0x4DE220: jmp     short loc_4DE249
0x4DE222: movsx   edx, byte ptr [esi+9]
0x4DE226: push    edx; C
0x4DE227: call    _isalpha
0x4DE22C: add     esp, 4
0x4DE22F: test    eax, eax
0x4DE231: jz      short loc_4DE2AD
0x4DE233: movsx   eax, byte ptr [esi+9]
0x4DE237: push    eax; C
0x4DE238: call    _tolower
0x4DE23D: sub     eax, 39h ; '9'
0x4DE240: push    eax; a1
0x4DE241: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4DE246: add     esp, 8
0x4DE249: mov     esi, eax
0x4DE24B: test    esi, esi
0x4DE24D: jz      short loc_4DE2AD
0x4DE24F: lea     ecx, [esi+24h]; compactString
0x4DE252: call    OB_CompactString_Length_010201A0; Bethesda compact string length helper. If inline length marker is 0xFFFF, strlen(heap string); otherwise returns the 16-bit stored length. Used here to gate optional TESObjectTREE leaf texture.
0x4DE257: test    eax, eax
0x4DE259: jz      short loc_4DE2AD
0x4DE25B: cmp     word ptr [edi+0B8h], 0
0x4DE263: jz      short loc_4DE2AD
0x4DE265: push    3
0x4DE267: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x4DE26C: mov     edx, [esi]
0x4DE26E: mov     eax, [edx+0F0h]
0x4DE274: add     esp, 4
0x4DE277: push    0
0x4DE279: mov     ecx, esi
0x4DE27B: call    eax
0x4DE27D: lea     ecx, [edi+0ACh]; this
0x4DE283: call    NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
0x4DE288: push    2
0x4DE28A: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x4DE28F: add     esp, 4
0x4DE292: mov     bl, 1
0x4DE294: jmp     short loc_4DE2AD
0x4DE296: push    offset aFlamecap; "FlameCap"
0x4DE29B: push    esi; left
0x4DE29C: call    CRT_StricmpLocaleDispatch
0x4DE2A1: add     esp, 8
0x4DE2A4: test    eax, eax
0x4DE2A6: jnz     short loc_4DE2AD
0x4DE2A8: or      word ptr [edi+18h], 1
0x4DE2AD: xor     ebp, ebp
0x4DE2AF: cmp     [edi+0B6h], bp
0x4DE2B6: jbe     short loc_4DE30A
0x4DE2B8: jmp     short loc_4DE2C0
0x4DE2C0: movzx   ecx, word ptr [edi+0B6h]
0x4DE2C7: cmp     ecx, ebp
0x4DE2C9: jbe     short loc_4DE2FC
0x4DE2CB: mov     edx, [edi+0B0h]
0x4DE2D1: mov     esi, [edx+ebp*4]
0x4DE2D4: test    esi, esi
0x4DE2D6: jz      short loc_4DE2FC
0x4DE2D8: mov     eax, [esi]
0x4DE2DA: mov     edx, [eax+4]
0x4DE2DD: mov     ecx, esi
0x4DE2DF: call    edx
0x4DE2E1: cmp     eax, offset parent
0x4DE2E6: setz    al
0x4DE2E9: test    al, al
0x4DE2EB: jz      short loc_4DE2FC
0x4DE2ED: push    esi
0x4DE2EE: call    sub_4DE1C0
0x4DE2F3: add     esp, 4
0x4DE2F6: test    al, al
0x4DE2F8: jz      short loc_4DE2FC
0x4DE2FA: mov     bl, 1
0x4DE2FC: movzx   eax, word ptr [edi+0B6h]
0x4DE303: add     ebp, 1
0x4DE306: cmp     ebp, eax
0x4DE308: jb      short loc_4DE2C0
0x4DE30A: pop     esi
0x4DE30B: pop     ebp
0x4DE30C: mov     al, bl
0x4DE30E: pop     ebx
0x4DE30F: pop     edi
0x4DE310: retn

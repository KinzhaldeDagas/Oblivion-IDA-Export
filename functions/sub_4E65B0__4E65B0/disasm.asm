0x4E65B0: push    0FFFFFFFFh; Verified serialized PGRL chunk processing calls TESPathGrid_AddPointForLinkedReference, populating the reference-to-point index used by runtime enable/disable callbacks. This is separate from modified-form save data, which stores disabled point indices.
0x4E65B2: push    offset SEH_4E65B0
0x4E65B7: mov     eax, large fs:0
0x4E65BD: push    eax
0x4E65BE: sub     esp, 13Ch
0x4E65C4: mov     eax, ds:0B30AACh
0x4E65C9: xor     eax, esp
0x4E65CB: mov     [esp+148h+var_10], eax
0x4E65D2: push    ebx
0x4E65D3: push    ebp
0x4E65D4: push    esi
0x4E65D5: push    edi
0x4E65D6: mov     eax, ds:0B30AACh
0x4E65DB: xor     eax, esp
0x4E65DD: push    eax; Format
0x4E65DE: lea     eax, [esp+15Ch+var_C]
0x4E65E5: mov     large fs:0, eax
0x4E65EB: mov     ebx, [esp+15Ch+a2]
0x4E65F2: xor     ebp, ebp
0x4E65F4: xor     al, al
0x4E65F6: cmp     ebx, ebp
0x4E65F8: mov     esi, ecx
0x4E65FA: mov     [esp+15Ch+a1], ebx
0x4E65FE: mov     [esp+15Ch+var_141], al
0x4E6602: jz      loc_4E6C75
0x4E6608: cmp     [esi+30h], bp
0x4E660C: jz      loc_4E6C75
0x4E6612: mov     eax, [esi+24h]
0x4E6615: cmp     eax, ebp
0x4E6617: mov     [esp+15Ch+worldPosition], ebp
0x4E661B: mov     [esp+15Ch+var_12C], ebp
0x4E661F: mov     [esp+15Ch+var_138], ebp
0x4E6623: jnz     short loc_4E6660
0x4E6625: push    10h; Size
0x4E6627: call    FormHeapAlloc
0x4E662C: add     esp, 4
0x4E662F: cmp     eax, ebp
0x4E6631: jz      short loc_4E6650
0x4E6633: mov     dword ptr [eax], offset ??_7?$NiTArray@PAVTESPathGridPoint@@@@6B@; const NiTArray<TESPathGridPoint *>::`vftable'
0x4E6639: mov     [eax+8], bp
0x4E663D: mov     word ptr [eax+0Eh], 1
0x4E6643: mov     [eax+0Ah], bp
0x4E6647: mov     [eax+0Ch], bp
0x4E664B: mov     [eax+4], ebp
0x4E664E: jmp     short loc_4E6652
0x4E6650: xor     eax, eax
0x4E6652: mov     [esp+15Ch+var_4], 0FFFFFFFFh
0x4E665D: mov     [esi+24h], eax
0x4E6660: mov     ecx, [esi+20h]
0x4E6663: fld     dword ptr ds:0A3B888h
0x4E6669: cmp     ecx, ebp
0x4E666B: fstp    [esp+15Ch+var_120]
0x4E666F: jz      short loc_4E6684
0x4E6671: movzx   eax, byte ptr [ecx+24h]
0x4E6675: shr     eax, 1
0x4E6677: test    al, 1
0x4E6679: jz      short loc_4E6684
0x4E667B: call    TESObjectCELL_GetWaterHeight
0x4E6680: fstp    [esp+15Ch+var_120]
0x4E6684: mov     edi, [esi+20h]
0x4E6687: cmp     edi, ebp
0x4E6689: mov     [esp+15Ch+var_124], ebp
0x4E668D: mov     [esp+15Ch+var_130], edi
0x4E6691: jz      short loc_4E66AD
0x4E6693: mov     ecx, edi; this
0x4E6695: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4E669A: test    al, al
0x4E669C: jnz     short loc_4E66AD
0x4E669E: mov     ecx, edi; this
0x4E66A0: call    TESObjectCELL_GetWorldSpace
0x4E66A5: mov     [esp+15Ch+var_124], eax
0x4E66A9: mov     [esp+15Ch+var_130], ebp
0x4E66AD: mov     [esp+15Ch+Dest], 0
0x4E66B2: mov     ecx, ebx
0x4E66B4: call    TESFile_GetChunkType
0x4E66B9: test    eax, eax
0x4E66BB: jz      loc_4E6C5A
0x4E66C1: cmp     eax, 50524750h
0x4E66C6: jg      loc_4E6A60
0x4E66CC: jz      loc_4E6938
0x4E66D2: cmp     eax, 49524750h
0x4E66D7: jz      loc_4E68B1
0x4E66DD: cmp     eax, 4C524750h
0x4E66E2: jnz     loc_4E6C47
0x4E66E8: mov     edi, [ebx+254h]
0x4E66EE: test    edi, edi
0x4E66F0: jz      loc_4E6C47
0x4E66F6: push    edi; int
0x4E66F7: call    MemoryHeap_Alloc_ZlibCallback
0x4E66FC: add     esp, 4
0x4E66FF: mov     ebp, eax
0x4E6701: push    0; a4
0x4E6703: push    ebp; Dst
0x4E6704: mov     ecx, ebx; a1
0x4E6706: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4E670B: shr     edi, 2
0x4E670E: mov     [esp+15Ch+var_140], edi
0x4E6712: jz      loc_4E68A1
0x4E6718: mov     ecx, [ebp+0]
0x4E671B: lea     edx, [esp+15Ch+ArgList]
0x4E671F: push    ebx; a2
0x4E6720: push    edx; a1
0x4E6721: mov     dword ptr [esp+164h+ArgList], ecx
0x4E6725: mov     edi, 1
0x4E672A: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x4E672F: mov     eax, dword ptr [esp+164h+ArgList]
0x4E6733: add     esp, 8
0x4E6736: push    0; int
0x4E6738: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4E673D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E6742: push    0; int
0x4E6744: push    eax; a1
0x4E6745: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4E674A: add     esp, 4
0x4E674D: push    eax; void *
0x4E674E: call    OblivionDynamicCast
0x4E6753: mov     ebx, eax
0x4E6755: add     esp, 14h
0x4E6758: test    ebx, ebx
0x4E675A: jz      short loc_4E67A5
0x4E675C: cmp     [esp+15Ch+var_140], edi
0x4E6760: jbe     loc_4E68A1
0x4E6766: mov     ecx, [ebp+edi*4+0]
0x4E676A: mov     eax, [esi+24h]
0x4E676D: add     edi, 1
0x4E6770: test    eax, eax
0x4E6772: jz      short loc_4E678F
0x4E6774: movzx   edx, word ptr [esi+30h]
0x4E6778: cmp     ecx, edx
0x4E677A: jnb     short loc_4E678F
0x4E677C: mov     eax, [eax+4]
0x4E677F: mov     ecx, [eax+ecx*4]
0x4E6782: test    ecx, ecx
0x4E6784: jz      short loc_4E678F
0x4E6786: push    ecx; point
0x4E6787: push    ebx; reference
0x4E6788: mov     ecx, esi; this
0x4E678A: call    TESPathGrid_AddPointForLinkedReference; Verified — PGRL loading populates pointsByReference (+0x34): key is a TESObjectREFR* and value is a BSSimpleList of TESPathGridPoint*. Duplicate point pointers are suppressed. Cross-reference from TESPathGrid_LoadSerializedGraphChunks at 0x4E678A.
0x4E678F: cmp     edi, [esp+15Ch+var_140]
0x4E6793: jb      short loc_4E6766
0x4E6795: push    ebp; void *
0x4E6796: mov     ecx, offset FormHeap
0x4E679B: call    MemoryHeap_Free_checked
0x4E67A0: jmp     loc_4E6C47
0x4E67A5: cmp     [esp+15Ch+Dest], 0
0x4E67AA: jnz     loc_4E688A
0x4E67B0: mov     ecx, [esi+20h]; this
0x4E67B3: test    ecx, ecx
0x4E67B5: jnz     short loc_4E67D3
0x4E67B7: push    offset aUnknown; "UNKNOWN"
0x4E67BC: lea     ecx, [esp+160h+Dest]
0x4E67C0: push    104h; Count
0x4E67C5: push    ecx; Dest
0x4E67C6: call    __snprintf
0x4E67CB: add     esp, 0Ch
0x4E67CE: jmp     loc_4E688A
0x4E67D3: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4E67D8: test    al, al
0x4E67DA: mov     ecx, [esi+20h]; this
0x4E67DD: jnz     loc_4E6868
0x4E67E3: call    TESObjectCELL_GetWorldSpace
0x4E67E8: test    eax, eax
0x4E67EA: mov     edi, [esi+20h]
0x4E67ED: jz      short loc_4E6832
0x4E67EF: mov     edx, [eax]
0x4E67F1: mov     ecx, eax
0x4E67F3: mov     eax, [edx+0D4h]
0x4E67F9: call    eax
0x4E67FB: push    eax
0x4E67FC: mov     ecx, edi; this
0x4E67FE: call    TESObjectCELL_GetYCoordinate
0x4E6803: push    eax
0x4E6804: mov     ecx, edi; this
0x4E6806: call    TESObjectCELL_GetXCoordinate
0x4E680B: mov     edx, [edi]
0x4E680D: push    eax
0x4E680E: mov     eax, [edx+0D4h]
0x4E6814: mov     ecx, edi
0x4E6816: call    eax
0x4E6818: push    eax; Format
0x4E6819: push    offset aSDDInWorldS; "%s (%d, %d) in world %s"
0x4E681E: lea     ecx, [esp+170h+Dest]
0x4E6822: push    104h; Count
0x4E6827: push    ecx; Dest
0x4E6828: call    __snprintf
0x4E682D: add     esp, 1Ch
0x4E6830: jmp     short loc_4E688A
0x4E6832: mov     ecx, edi; this
0x4E6834: call    TESObjectCELL_GetYCoordinate
0x4E6839: push    eax
0x4E683A: mov     ecx, edi; this
0x4E683C: call    TESObjectCELL_GetXCoordinate
0x4E6841: mov     edx, [edi]
0x4E6843: push    eax
0x4E6844: mov     eax, [edx+0D4h]
0x4E684A: mov     ecx, edi
0x4E684C: call    eax
0x4E684E: push    eax; Format
0x4E684F: push    offset aSDD; "%s (%d, %d)"
0x4E6854: lea     ecx, [esp+16Ch+Dest]
0x4E6858: push    104h; Count
0x4E685D: push    ecx; Dest
0x4E685E: call    __snprintf
0x4E6863: add     esp, 18h
0x4E6866: jmp     short loc_4E688A
0x4E6868: mov     edx, [ecx]
0x4E686A: mov     eax, [edx+0D4h]
0x4E6870: call    eax
0x4E6872: push    eax; Format
0x4E6873: push    offset aS; "%s"
0x4E6878: lea     ecx, [esp+164h+Dest]
0x4E687C: push    104h; Count
0x4E6881: push    ecx; Dest
0x4E6882: call    __snprintf
0x4E6887: add     esp, 10h
0x4E688A: mov     eax, dword ptr [esp+15Ch+ArgList]
0x4E688E: lea     edx, [esp+15Ch+Dest]
0x4E6892: push    edx
0x4E6893: push    eax; ArgList
0x4E6894: push    offset aCouldNotFindRe; "Could not find reference (%08X) for lin"...
0x4E6899: call    PrintError
0x4E689E: add     esp, 0Ch
0x4E68A1: push    ebp; void *
0x4E68A2: mov     ecx, offset FormHeap
0x4E68A7: call    MemoryHeap_Free_checked
0x4E68AC: jmp     loc_4E6C47
0x4E68B1: mov     eax, [ebx+254h]
0x4E68B7: xor     edx, edx
0x4E68B9: mov     ecx, 10h
0x4E68BE: div     ecx
0x4E68C0: test    edx, edx
0x4E68C2: mov     ebp, eax
0x4E68C4: jnz     loc_4E6C47
0x4E68CA: mov     edi, ebp
0x4E68CC: push    1
0x4E68CE: shl     edi, 4
0x4E68D1: push    edi
0x4E68D2: mov     ecx, offset FormHeap
0x4E68D7: call    j_MemoryHeap_Alloc
0x4E68DC: push    edi; a4
0x4E68DD: push    eax; Dst
0x4E68DE: mov     ecx, ebx; a1
0x4E68E0: mov     [esp+164h+var_140], eax
0x4E68E4: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4E68E9: test    ebp, ebp
0x4E68EB: jbe     short loc_4E6924
0x4E68ED: mov     edi, [esp+15Ch+var_140]
0x4E68F1: lea     ebx, [esi+28h]
0x4E68F4: push    10h; Size
0x4E68F6: call    FormHeapAlloc
0x4E68FB: mov     edx, [edi]
0x4E68FD: mov     [eax], edx
0x4E68FF: mov     ecx, [edi+4]
0x4E6902: mov     [eax+4], ecx
0x4E6905: mov     edx, [edi+8]
0x4E6908: mov     [eax+8], edx
0x4E690B: mov     ecx, [edi+0Ch]
0x4E690E: add     esp, 4
0x4E6911: mov     [eax+0Ch], ecx
0x4E6914: push    eax
0x4E6915: mov     ecx, ebx
0x4E6917: call    BSSimpleList_PushFront
0x4E691C: add     edi, 10h
0x4E691F: sub     ebp, 1
0x4E6922: jnz     short loc_4E68F4
0x4E6924: mov     edx, [esp+15Ch+var_140]
0x4E6928: push    edx; void *
0x4E6929: mov     ecx, offset FormHeap
0x4E692E: call    MemoryHeap_Free_checked
0x4E6933: jmp     loc_4E6C47
0x4E6938: movzx   eax, word ptr [esi+30h]
0x4E693C: mov     ecx, [esi+24h]
0x4E693F: push    eax
0x4E6940: call    NiTArray_SetSize
0x4E6945: movzx   eax, word ptr [esi+30h]
0x4E6949: xor     ecx, ecx
0x4E694B: mov     edx, 10h
0x4E6950: mul     edx
0x4E6952: seto    cl
0x4E6955: neg     ecx
0x4E6957: or      ecx, eax
0x4E6959: push    ecx; Size
0x4E695A: call    FormHeapAlloc
0x4E695F: movzx   ecx, word ptr [esi+30h]
0x4E6963: add     esp, 4
0x4E6966: shl     ecx, 4
0x4E6969: push    ecx; a4
0x4E696A: mov     ecx, [esp+160h+a1]; a1
0x4E696E: push    eax; Dst
0x4E696F: mov     [esp+164h+worldPosition], eax
0x4E6973: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4E6978: xor     ebx, ebx
0x4E697A: cmp     [esi+30h], bx
0x4E697E: jbe     loc_4E6A50
0x4E6984: mov     ebp, [esp+15Ch+worldPosition]
0x4E6988: push    2Ch ; ','; Size
0x4E698A: call    FormHeapAlloc
0x4E698F: add     esp, 4
0x4E6992: mov     [esp+15Ch+var_11C], eax
0x4E6996: test    eax, eax
0x4E6998: mov     [esp+15Ch+var_4], 1
0x4E69A3: jz      short loc_4E69B0
0x4E69A5: mov     ecx, eax; this
0x4E69A7: call    TESPathGridPoint_ctor; Verified TESPathGridPoint constructor initializes the graph-search prefix, adjacency list and position, sets +0x28 to null, and lazily creates two shared NiAVObject templates. The template references are refcounted and selected by integerized point-Z parity in TESPathGridPoint_RebuildRenderGeometry. Material field correction: the formerly `unknown28` member at +0x28 is a per-point NiNode* renderNode; the render builder writes it and the clear helper removes/releases it.
0x4E69AC: mov     edi, eax
0x4E69AE: jmp     short loc_4E69B2
0x4E69B0: xor     edi, edi
0x4E69B2: push    ebp; position
0x4E69B3: mov     ecx, edi; this
0x4E69B5: mov     [esp+160h+var_4], 0FFFFFFFFh
0x4E69C0: mov     [esp+160h+var_140], edi
0x4E69C4: call    PathGraphNode_SetPosition; Verified shared graph-node position setter: writes XYZ into this+0x14; called by both TESRoad and TESPathGrid record loaders.
0x4E69C9: mov     ecx, [esi+24h]
0x4E69CC: lea     edx, [esp+15Ch+var_140]
0x4E69D0: push    edx
0x4E69D1: push    ebx
0x4E69D2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4E69D7: fld     dword ptr [ebp+8]
0x4E69DA: fld     [esp+15Ch+var_120]
0x4E69DE: fcompp
0x4E69E0: fnstsw  ax
0x4E69E2: test    ah, 41h
0x4E69E5: jnz     short loc_4E69F0
0x4E69E7: push    1; value
0x4E69E9: mov     ecx, edi; this
0x4E69EB: call    PathGraphNode_SetBelowWaterFlag; Verified sets/clears stateFlags bit 0x08. TESPathGrid_LoadSerializedGraphChunks sets it when point Z is below the cell water height; actor-aware edge scoring treats it as a boundary trait.
0x4E69F0: cmp     [esp+15Ch+var_130], 0
0x4E69F5: mov     [esp+15Ch+value], 0
0x4E69FA: jz      short loc_4E6A08
0x4E69FC: mov     ecx, [esp+15Ch+var_130]; this
0x4E6A00: push    ebp; worldPosition
0x4E6A01: call    TESObjectCELL_FindSmallestSubSpaceContainingPosition; Verified: locks a cell's object list and returns the smallest-radius TESSubSpace reference containing the query position; this is the interior-cell counterpart to the WorldSpace coordinate-bucket lookup.
0x4E6A06: jmp     short loc_4E6A19
0x4E6A08: cmp     [esp+15Ch+var_124], 0
0x4E6A0D: jz      short loc_4E6A22
0x4E6A0F: mov     ecx, [esp+15Ch+var_124]; this
0x4E6A13: push    ebp; worldPosition
0x4E6A14: call    TESWorldSpace_FindSmallestSubSpaceContainingPosition; Verified: queries the SubSpace candidate list for the position-derived cell key, then returns the smallest-radius TESSubSpace whose exact scaled local bounds contain the point.
0x4E6A19: test    eax, eax
0x4E6A1B: jz      short loc_4E6A22
0x4E6A1D: mov     [esp+15Ch+value], 1
0x4E6A22: mov     eax, dword ptr [esp+15Ch+value]
0x4E6A26: push    eax; value
0x4E6A27: mov     ecx, edi; this
0x4E6A29: call    PathGraphNode_SetSubSpaceMembershipFlag; Verified sets/clears stateFlags bit 0x40. PathGrid graph loading sets it when WorldSpace/Cell SubSpace lookup finds a containing TESSubSpace; actor-aware edge cost adds a penalty when endpoints differ on this bit.
0x4E6A2E: push    edi; point
0x4E6A2F: mov     ecx, esi; this
0x4E6A31: call    TESPathGrid_AddPointToSpatialBucket; Verified insertion into TESPathGrid.pointsByCell (+0x44), which is a per-PathGrid 512-unit X/Y spatial-bucket map despite the legacy member/type spelling. It derives the packed key from the node's NiPoint3, finds or creates a BSSimpleList header, then pushes the point pointer. The graph-chunk loader calls this for each loaded point; FindPointByPositionInCell uses the same key.
0x4E6A36: movzx   ecx, byte ptr [ebp+0Ch]
0x4E6A3A: movzx   edx, word ptr [esi+30h]
0x4E6A3E: add     [esp+15Ch+var_138], ecx; Accumulate total PGRR slot count from each PGRP point's u8 connection-count field.
0x4E6A42: add     ebx, 1
0x4E6A45: add     ebp, 10h
0x4E6A48: cmp     ebx, edx
0x4E6A4A: jl      loc_4E6988
0x4E6A50: cmp     [esp+15Ch+var_138], 0
0x4E6A55: jnz     loc_4E6C47
0x4E6A5B: jmp     loc_4E6C42
0x4E6A60: cmp     eax, 52524750h; PGRR branch. It is ignored until a serialized PGRP point buffer exists.
0x4E6A65: jnz     loc_4E6C47
0x4E6A6B: cmp     [esp+15Ch+worldPosition], 0
0x4E6A70: jz      loc_4E6C47
0x4E6A76: mov     ebp, [esp+15Ch+var_138]
0x4E6A7A: xor     ecx, ecx
0x4E6A7C: mov     eax, ebp
0x4E6A7E: mov     edx, 2
0x4E6A83: mul     edx
0x4E6A85: seto    cl
0x4E6A88: mov     [esp+15Ch+var_11C], 0
0x4E6A90: neg     ecx
0x4E6A92: or      ecx, eax
0x4E6A94: push    ecx; Size
0x4E6A95: call    FormHeapAlloc
0x4E6A9A: mov     ecx, eax
0x4E6A9C: lea     eax, [ebp+ebp+0]
0x4E6AA0: add     esp, 4
0x4E6AA3: cmp     [ebx+254h], eax; Require PGRR byte length == 2 * total declared connection slots. On mismatch Oblivion logs an error and does not read chunk bytes into the allocated buffer.
0x4E6AA9: mov     [esp+15Ch+var_12C], ecx
0x4E6AAD: jz      loc_4E6BBA
0x4E6AB3: cmp     [esp+15Ch+Dest], 0
0x4E6AB8: jnz     loc_4E6B98
0x4E6ABE: mov     ecx, [esi+20h]; this
0x4E6AC1: test    ecx, ecx
0x4E6AC3: jnz     short loc_4E6AE1
0x4E6AC5: push    offset aUnknown; "UNKNOWN"
0x4E6ACA: lea     eax, [esp+160h+Dest]
0x4E6ACE: push    104h; Count
0x4E6AD3: push    eax; Dest
0x4E6AD4: call    __snprintf
0x4E6AD9: add     esp, 0Ch
0x4E6ADC: jmp     loc_4E6B98
0x4E6AE1: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4E6AE6: test    al, al
0x4E6AE8: mov     ecx, [esi+20h]; this
0x4E6AEB: jnz     loc_4E6B76
0x4E6AF1: call    TESObjectCELL_GetWorldSpace
0x4E6AF6: test    eax, eax
0x4E6AF8: mov     edi, [esi+20h]
0x4E6AFB: jz      short loc_4E6B40
0x4E6AFD: mov     edx, [eax]
0x4E6AFF: mov     ecx, eax
0x4E6B01: mov     eax, [edx+0D4h]
0x4E6B07: call    eax
0x4E6B09: push    eax
0x4E6B0A: mov     ecx, edi; this
0x4E6B0C: call    TESObjectCELL_GetYCoordinate
0x4E6B11: push    eax
0x4E6B12: mov     ecx, edi; this
0x4E6B14: call    TESObjectCELL_GetXCoordinate
0x4E6B19: mov     edx, [edi]
0x4E6B1B: push    eax
0x4E6B1C: mov     eax, [edx+0D4h]
0x4E6B22: mov     ecx, edi
0x4E6B24: call    eax
0x4E6B26: push    eax; Format
0x4E6B27: push    offset aSDDInWorldS; "%s (%d, %d) in world %s"
0x4E6B2C: lea     ecx, [esp+170h+Dest]
0x4E6B30: push    104h; Count
0x4E6B35: push    ecx; Dest
0x4E6B36: call    __snprintf
0x4E6B3B: add     esp, 1Ch
0x4E6B3E: jmp     short loc_4E6B98
0x4E6B40: mov     ecx, edi; this
0x4E6B42: call    TESObjectCELL_GetYCoordinate
0x4E6B47: push    eax
0x4E6B48: mov     ecx, edi; this
0x4E6B4A: call    TESObjectCELL_GetXCoordinate
0x4E6B4F: mov     edx, [edi]
0x4E6B51: push    eax
0x4E6B52: mov     eax, [edx+0D4h]
0x4E6B58: mov     ecx, edi
0x4E6B5A: call    eax
0x4E6B5C: push    eax; Format
0x4E6B5D: push    offset aSDD; "%s (%d, %d)"
0x4E6B62: lea     ecx, [esp+16Ch+Dest]
0x4E6B66: push    104h; Count
0x4E6B6B: push    ecx; Dest
0x4E6B6C: call    __snprintf
0x4E6B71: add     esp, 18h
0x4E6B74: jmp     short loc_4E6B98
0x4E6B76: mov     edx, [ecx]
0x4E6B78: mov     eax, [edx+0D4h]
0x4E6B7E: call    eax
0x4E6B80: push    eax; Format
0x4E6B81: push    offset aS; "%s"
0x4E6B86: lea     ecx, [esp+164h+Dest]
0x4E6B8A: push    104h; Count
0x4E6B8F: push    ecx; Dest
0x4E6B90: call    __snprintf
0x4E6B95: add     esp, 10h
0x4E6B98: mov     edx, [ebx+254h]
0x4E6B9E: mov     ecx, [esi+0Ch]
0x4E6BA1: shr     edx, 1
0x4E6BA3: push    edx
0x4E6BA4: push    ebp
0x4E6BA5: lea     eax, [esp+164h+Dest]
0x4E6BA9: push    eax
0x4E6BAA: push    ecx; ArgList
0x4E6BAB: push    offset aPathgrid08xInC; "PathGrid (%08X) in cell %s found differ"...
0x4E6BB0: call    PrintError
0x4E6BB5: add     esp, 14h
0x4E6BB8: jmp     short loc_4E6BC3
0x4E6BBA: push    eax; a4
0x4E6BBB: push    ecx; Dst
0x4E6BBC: mov     ecx, ebx; a1
0x4E6BBE: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4E6BC3: xor     eax, eax
0x4E6BC5: cmp     [esi+30h], ax
0x4E6BC9: mov     [esp+15Ch+var_140], eax
0x4E6BCD: jbe     short loc_4E6C42
0x4E6BCF: mov     edi, [esp+15Ch+worldPosition]
0x4E6BD3: mov     ebp, [esp+15Ch+var_11C]
0x4E6BD7: add     edi, 0Ch
0x4E6BDA: lea     ebx, [ebx+0]
0x4E6BE0: cmp     byte ptr [edi], 0
0x4E6BE3: mov     edx, [esi+24h]
0x4E6BE6: mov     ecx, [edx+4]
0x4E6BE9: mov     ebx, [ecx+eax*4]
0x4E6BEC: jbe     short loc_4E6C30
0x4E6BEE: mov     edi, edi
0x4E6BF0: mov     edx, [esp+15Ch+var_12C]
0x4E6BF4: movzx   eax, word ptr [edx+ebp*2]; Read one PGRR neighbor as unsigned u16 (movzx). Serialized 0xFFFF is 65535, not signed -1.
0x4E6BF8: cmp     ax, [esi+30h]
0x4E6BFC: jnb     short loc_4E6C21; Unsigned range gate: neighbor_index >= point_count skips insertion. This silently filters 0xFFFF and any other out-of-range index.
0x4E6BFE: mov     ecx, [esi+24h]
0x4E6C01: mov     edx, [ecx+4]
0x4E6C04: movzx   eax, ax
0x4E6C07: mov     eax, [edx+eax*4]
0x4E6C0A: test    eax, eax
0x4E6C0C: jz      short loc_4E6C21; Skip a valid-range index whose point-array entry is null.
0x4E6C0E: cmp     eax, ebx
0x4E6C10: jz      short loc_4E6C21; Skip self-edge when target point equals source point.
0x4E6C12: push    eax
0x4E6C13: mov     ecx, ebx; this
0x4E6C15: call    PathGraphNode_GetConnections; Only an in-range, non-null, non-self target reaches adjacency-list insertion.
0x4E6C1A: mov     ecx, eax
0x4E6C1C: call    BSSimpleList_PushFront
0x4E6C21: add     byte ptr [edi], 0FFh; Every serialized PGRR value consumes one source point's declared connection slot, including 0xFFFF/out-of-range/null/self values.
0x4E6C24: add     ebp, 1; Advance the flat PGRR u16 stream index after every slot, even when no edge was inserted.
0x4E6C27: cmp     byte ptr [edi], 0
0x4E6C2A: ja      short loc_4E6BF0
0x4E6C2C: mov     eax, [esp+15Ch+var_140]
0x4E6C30: movzx   ecx, word ptr [esi+30h]
0x4E6C34: add     eax, 1
0x4E6C37: add     edi, 10h
0x4E6C3A: cmp     eax, ecx
0x4E6C3C: mov     [esp+15Ch+var_140], eax
0x4E6C40: jl      short loc_4E6BE0
0x4E6C42: mov     [esp+15Ch+var_141], 1
0x4E6C47: mov     ebx, [esp+15Ch+a1]
0x4E6C4B: mov     ecx, ebx
0x4E6C4D: call    TESFile_GetNextChunk
0x4E6C52: test    al, al
0x4E6C54: jnz     loc_4E66B2
0x4E6C5A: mov     edx, [esp+15Ch+worldPosition]
0x4E6C5E: push    edx
0x4E6C5F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E6C64: mov     eax, [esp+160h+var_12C]
0x4E6C68: push    eax
0x4E6C69: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E6C6E: mov     al, [esp+164h+var_141]
0x4E6C72: add     esp, 8
0x4E6C75: mov     ecx, [esp+15Ch+var_C]
0x4E6C7C: mov     large fs:0, ecx
0x4E6C83: pop     ecx
0x4E6C84: pop     edi
0x4E6C85: pop     esi
0x4E6C86: pop     ebp
0x4E6C87: pop     ebx
0x4E6C88: mov     ecx, [esp+148h+var_10]
0x4E6C8F: xor     ecx, esp
0x4E6C91: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4E6C96: add     esp, 148h
0x4E6C9C: retn    4
0x9B5DE0: mov     eax, [ebp-148h]
0x9B5DE6: push    eax
0x9B5DE7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B5DEC: pop     ecx
0x9B5DED: retn
0x9B5DEE: mov     eax, [ebp-11Ch]
0x9B5DF4: push    eax
0x9B5DF5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B5DFA: pop     ecx
0x9B5DFB: retn
0x9B5DFC: mov     edx, [esp+arg_4]
0x9B5E00: lea     eax, [edx-14Ch]
0x9B5E06: mov     ecx, [edx-150h]
0x9B5E0C: xor     ecx, eax
0x9B5E0E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5E13: add     eax, 10h
0x9B5E16: mov     ecx, [edx-4]
0x9B5E19: xor     ecx, eax
0x9B5E1B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5E20: mov     eax, offset stru_AE0D88
0x9B5E25: jmp     ___CxxFrameHandler3

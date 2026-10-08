0x6836E0: push    0FFFFFFFFh; Verified: path request/cache builder resolves a containing TESSubSpace candidate by interior cell list or WorldSpace +0x60 coordinate lookup, compares candidate identity with the current choice, and rebuilds the path request when it changes.
0x6836E2: push    offset SEH_6CF490
0x6836E7: mov     eax, large fs:0
0x6836ED: push    eax
0x6836EE: push    ebx
0x6836EF: push    ebp
0x6836F0: push    esi
0x6836F1: push    edi
0x6836F2: mov     eax, ds:0B30AACh
0x6836F7: xor     eax, esp
0x6836F9: push    eax
0x6836FA: lea     eax, [esp+20h+var_C]
0x6836FE: mov     large fs:0, eax
0x683704: mov     ebp, ecx
0x683706: mov     edi, [esp+20h+a2]
0x68370A: test    edi, edi
0x68370C: jz      loc_683960
0x683712: mov     ebx, [esp+20h+arg_4]
0x683716: test    ebx, ebx
0x683718: jnz     short loc_683724
0x68371A: cmp     [esp+20h+arg_8], ebx
0x68371E: jz      loc_683960
0x683724: mov     ecx, edi
0x683726: call    sub_5E12E0
0x68372B: test    al, al
0x68372D: jz      short loc_683734
0x68372F: mov     [esp+20h+arg_18], 1
0x683734: test    ebx, ebx
0x683736: jz      short loc_683749
0x683738: mov     ecx, ebx; this
0x68373A: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x68373F: test    al, al
0x683741: jnz     short loc_683749
0x683743: xor     ebx, ebx
0x683745: mov     [esp+20h+arg_4], ebx
0x683749: mov     ecx, offset unk_B3C000
0x68374E: call    sub_49F470
0x683753: lea     eax, [esp+20h+a2]
0x683757: push    eax
0x683758: lea     ecx, [ebp+20h]
0x68375B: push    edi
0x68375C: mov     [esp+28h+a2], 0
0x683764: call    NiTMap_GetAt
0x683769: mov     esi, [esp+20h+a2]
0x68376D: test    esi, esi
0x68376F: jnz     short loc_68379D
0x683771: lea     ecx, [esp+20h+a2]
0x683775: push    ecx
0x683776: push    edi
0x683777: lea     ecx, [ebp+10h]
0x68377A: call    NiTMap_GetAt
0x68377F: mov     esi, [esp+20h+a2]
0x683783: test    esi, esi
0x683785: jnz     short loc_68379D
0x683787: lea     edx, [esp+20h+a2]
0x68378B: push    edx
0x68378C: push    edi
0x68378D: lea     ecx, [ebp+30h]
0x683790: call    NiTMap_GetAt
0x683795: mov     esi, [esp+20h+a2]
0x683799: test    esi, esi
0x68379B: jz      short loc_6837D6
0x68379D: fld     dword ptr ds:0A31E2Ch
0x6837A3: push    ecx
0x6837A4: lea     eax, [esp+24h+worldPosition]
0x6837A8: fstp    [esp+24h+var_24]; float
0x6837AB: push    eax; int
0x6837AC: lea     ecx, [esi+14h]
0x6837AF: push    ecx; int
0x6837B0: call    sub_47D810
0x6837B5: add     esp, 0Ch
0x6837B8: test    al, al
0x6837BA: jz      short loc_6837CE
0x6837BC: cmp     [esi+0Ch], ebx
0x6837BF: jnz     short loc_6837CE
0x6837C1: mov     edx, [esp+20h+arg_8]
0x6837C5: cmp     [esi+10h], edx
0x6837C8: jz      loc_6838F0
0x6837CE: push    edi
0x6837CF: mov     ecx, ebp
0x6837D1: call    sub_6826D0
0x6837D6: push    28h ; '('; Size
0x6837D8: call    FormHeapAlloc
0x6837DD: add     esp, 4
0x6837E0: test    eax, eax
0x6837E2: jz      short loc_6837EF
0x6837E4: mov     ecx, eax
0x6837E6: call    sub_682580
0x6837EB: mov     esi, eax
0x6837ED: jmp     short loc_6837F1
0x6837EF: xor     esi, esi
0x6837F1: mov     eax, [esp+20h+arg_8]
0x6837F5: mov     [esi+0Ch], ebx
0x6837F8: mov     [esi+10h], eax
0x6837FB: mov     ecx, [esp+20h+worldPosition]
0x6837FF: mov     [esi+14h], ecx
0x683802: mov     edx, [esp+20h+arg_10]
0x683806: mov     [esi+18h], edx
0x683809: mov     eax, [esp+20h+arg_14]
0x68380D: mov     [esi+1Ch], eax
0x683810: push    edi
0x683811: mov     ecx, ebp
0x683813: mov     [esi], edi
0x683815: call    sub_6830B0
0x68381A: mov     ecx, edi; this
0x68381C: mov     [esi+4], eax
0x68381F: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x683824: mov     ecx, [esp+20h+arg_4]; this
0x683828: test    ecx, ecx
0x68382A: mov     [esp+20h+a2], eax
0x68382E: jz      short loc_683851
0x683830: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x683835: test    al, al
0x683837: jz      short loc_683851
0x683839: lea     ecx, [esp+20h+worldPosition]
0x68383D: push    ecx; worldPosition
0x68383E: mov     ecx, [esp+24h+arg_4]; this
0x683842: call    TESObjectCELL_FindSmallestSubSpaceContainingPosition; Verified: locks a cell's object list and returns the smallest-radius TESSubSpace reference containing the query position; this is the interior-cell counterpart to the WorldSpace coordinate-bucket lookup.
0x683847: test    eax, eax
0x683849: jnz     short loc_68386F
0x68384B: mov     eax, [esp+20h+arg_4]
0x68384F: jmp     short loc_68386B
0x683851: mov     ecx, [esp+20h+arg_8]; this
0x683855: test    ecx, ecx
0x683857: jz      short loc_6838D8
0x683859: lea     edx, [esp+20h+worldPosition]
0x68385D: push    edx; worldPosition
0x68385E: call    TESWorldSpace_FindSmallestSubSpaceContainingPosition; Verified: queries the SubSpace candidate list for the position-derived cell key, then returns the smallest-radius TESSubSpace whose exact scaled local bounds contain the point.
0x683863: test    eax, eax
0x683865: jnz     short loc_68386F
0x683867: mov     eax, [esp+20h+arg_8]
0x68386B: test    eax, eax
0x68386D: jz      short loc_6838D8
0x68386F: cmp     [esp+20h+a2], eax
0x683873: jnz     short loc_6838D8
0x683875: cmp     dword ptr [esi+8], 0
0x683879: jnz     short loc_6838AB
0x68387B: push    14h; Size
0x68387D: call    FormHeapAlloc
0x683882: add     esp, 4
0x683885: mov     [esp+20h+arg_4], eax
0x683889: test    eax, eax
0x68388B: mov     [esp+20h+var_4], 0
0x683893: jz      short loc_68389E
0x683895: mov     ecx, eax; this
0x683897: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x68389C: jmp     short loc_6838A0
0x68389E: xor     eax, eax
0x6838A0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6838A8: mov     [esi+8], eax
0x6838AB: mov     ecx, [esi+8]; this
0x6838AE: call    TravelPath_ClearNodes; Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
0x6838B3: mov     ecx, [esi+8]; this
0x6838B6: lea     eax, [esp+20h+worldPosition]
0x6838BA: push    eax; position
0x6838BB: call    TravelPath_AppendDestinationPosition; Verified appends the final destination as a kind-1 TravelPathNode with its own copied NiPoint3 payload, even if low-path A* produced no reference nodes.
0x6838C0: mov     ecx, [esi+4]
0x6838C3: push    ecx; sourceRef
0x6838C4: mov     ecx, [esi+8]; this
0x6838C7: call    TravelPath_AddRoadSegmentsForPath; Verified post-A* road augmentation. It walks TravelPath nodes, switches to the linked door's WorldSpace and TeleportData marker position on teleport transitions, then asks that world's TESRoad to add surface-derived position nodes for applicable segments. TravelPath_ComputeDistance subsequently sums the added node segments, so road data changes the measured travel distance; this is route measurement/surface sampling, not the A* route search.
0x6838CC: mov     dword ptr [esi+20h], 2
0x6838D3: lea     ecx, [ebp+30h]
0x6838D6: jmp     short loc_6838E9
0x6838D8: mov     ecx, edi; this
0x6838DA: call    Actor__GetProcessLevel; Return Actor/MobileObject process level through process vslot +0x08; if MobileObject+0x58 is null, return -1. ActorProcessManager_AddMobileObject calls this directly before insertion.
0x6838DF: test    eax, eax
0x6838E1: lea     ecx, [ebp+10h]
0x6838E4: jz      short loc_6838E9
0x6838E6: lea     ecx, [ebp+20h]; this
0x6838E9: push    esi; a3
0x6838EA: push    edi; a2
0x6838EB: call    NiTMap_SetAt
0x6838F0: cmp     [esp+20h+arg_18], 0
0x6838F5: mov     ebx, 2
0x6838FA: jz      short loc_683939
0x6838FC: cmp     [esi+20h], ebx
0x6838FF: jz      short loc_683939
0x683901: cmp     dword ptr [ebp+40h], 0
0x683905: jz      short loc_68390E
0x683907: mov     ecx, ebp
0x683909: call    sub_683490
0x68390E: push    esi
0x68390F: mov     ecx, ebp
0x683911: call    sub_682450
0x683916: cmp     [esi+20h], ebx
0x683919: jnz     short loc_683956
0x68391B: push    edi
0x68391C: lea     ecx, [ebp+10h]
0x68391F: call    NiTMap_RemoveAt
0x683924: push    edi
0x683925: lea     ecx, [ebp+20h]
0x683928: call    NiTMap_RemoveAt
0x68392D: push    esi; a3
0x68392E: push    edi; a2
0x68392F: lea     ecx, [ebp+30h]; this
0x683932: call    NiTMap_SetAt
0x683937: jmp     short loc_683956
0x683939: cmp     dword ptr [ebp+40h], 0
0x68393D: jnz     short loc_683956
0x68393F: cmp     [esi+20h], ebx
0x683942: mov     ecx, ebp
0x683944: jz      short loc_683951
0x683946: push    esi
0x683947: mov     [ebp+40h], esi
0x68394A: call    sub_682500
0x68394F: jmp     short loc_683956
0x683951: call    sub_6829C0
0x683956: mov     ecx, offset unk_B3C000
0x68395B: call    j_NiLeaveCriticalSection_0
0x683960: mov     ecx, dword ptr [esp+20h+var_C]
0x683964: mov     large fs:0, ecx
0x68396B: pop     ecx
0x68396C: pop     edi
0x68396D: pop     esi
0x68396E: pop     ebp
0x68396F: pop     ebx
0x683970: add     esp, 0Ch
0x683973: retn    1Ch
0x9AFB50: mov     eax, [ebp+8]
0x9AFB53: push    eax
0x9AFB54: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFB59: pop     ecx
0x9AFB5A: retn
0x9AFB5B: mov     edx, [esp+referenceFormIDOrZero]
0x9AFB5F: lea     eax, [edx-10h]
0x9AFB62: mov     ecx, [edx-14h]
0x9AFB65: xor     ecx, eax
0x9AFB67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFB6C: mov     eax, offset stru_ADC04C
0x9AFB71: jmp     ___CxxFrameHandler3

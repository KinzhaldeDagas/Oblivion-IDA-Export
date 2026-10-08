0x65D880: push    ebx
0x65D881: push    edi
0x65D882: mov     edi, [esp+8+arg_0]
0x65D886: xor     al, al
0x65D888: test    edi, edi
0x65D88A: mov     ebx, ecx
0x65D88C: jz      short loc_65D8C4
0x65D88E: push    esi
0x65D88F: mov     esi, [esp+0Ch+arg_4]
0x65D893: test    esi, esi
0x65D895: jz      short loc_65D8C3
0x65D897: mov     ecx, edi; this
0x65D899: call    TravelPath_ClearNodes; Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
0x65D89E: mov     ecx, esi; this
0x65D8A0: call    TESObjectREFR_GetWorldSpace
0x65D8A5: push    eax; destinationWorldspace
0x65D8A6: mov     ecx, esi; this
0x65D8A8: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x65D8AD: push    eax; destinationCell
0x65D8AE: mov     eax, [esi]
0x65D8B0: mov     edx, [eax+174h]
0x65D8B6: mov     ecx, esi
0x65D8B8: call    edx
0x65D8BA: push    eax; destinationPosition
0x65D8BB: push    ebx; sourceRef
0x65D8BC: mov     ecx, edi; this
0x65D8BE: call    TravelPath_BuildToDestination; Verified top-level TravelPath build sequence: select the destination's smallest containing interior/exterior SubSpace (fallback to supplied cell/worldspace), call TravelPath_BuildRoute with the source reference and positions, then, on success, augment the route with TESRoad surface samples.
0x65D8C3: pop     esi
0x65D8C4: pop     edi
0x65D8C5: pop     ebx
0x65D8C6: retn    8

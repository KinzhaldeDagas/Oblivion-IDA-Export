0x6862C0: push    esi
0x6862C1: push    edi
0x6862C2: mov     esi, ecx
0x6862C4: call    TravelPath_ClearNodes; Verified clears TravelPath.nodes at +4: frees owned kind-1 position payloads, frees every TravelPathNode record and BSSimpleList link, but leaves kind-0 TESObjectREFR payloads unowned/unreleased.
0x6862C9: mov     ecx, esi
0x6862CB: call    sub_684EC0
0x6862D0: mov     edi, [esp+8+position]
0x6862D4: push    edi; position
0x6862D5: mov     ecx, esi; this
0x6862D7: call    TravelPath_AppendDestinationPosition; Verified appends the final destination as a kind-1 TravelPathNode with its own copied NiPoint3 payload, even if low-path A* produced no reference nodes.
0x6862DC: push    edi
0x6862DD: lea     ecx, [esi+14h]
0x6862E0: call    sub_68BED0
0x6862E5: cmp     byte ptr ds:0B3C08Ah, 0
0x6862EC: jz      short loc_6862F7
0x6862EE: push    0
0x6862F0: mov     ecx, esi
0x6862F2: call    sub_685EA0
0x6862F7: pop     edi
0x6862F8: pop     esi
0x6862F9: retn    4

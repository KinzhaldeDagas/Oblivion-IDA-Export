0x67EB60: mov     eax, ds:0B15450h; Verified shared graph route test used from actor package, combat, PathGrid selection, and fast-travel surface construction. It accepts a valid direct segment; if straight-segment validation fails, it invokes actor-aware connected-point A*.
0x67EB65: push    ebx
0x67EB66: push    esi
0x67EB67: mov     esi, ecx
0x67EB69: mov     [esi], eax
0x67EB6B: mov     ecx, ds:0B15454h
0x67EB71: mov     [esi+4], ecx
0x67EB74: mov     edx, ds:0B15458h
0x67EB7A: mov     [esi+8], edx
0x67EB7D: mov     eax, ds:0B15450h
0x67EB82: mov     [esi+0Ch], eax
0x67EB85: mov     ecx, ds:0B15454h
0x67EB8B: mov     [esi+10h], ecx
0x67EB8E: mov     edx, ds:0B15458h
0x67EB94: xor     eax, eax
0x67EB96: mov     ecx, esi
0x67EB98: mov     [esi+14h], edx
0x67EB9B: mov     [esi+1Ch], eax
0x67EB9E: mov     [esi+20h], eax
0x67EBA1: mov     [esi+24h], eax
0x67EBA4: mov     [esi+28h], eax
0x67EBA7: call    sub_67D7B0
0x67EBAC: mov     eax, [esp+8+start]
0x67EBB0: mov     ecx, [eax]
0x67EBB2: mov     [esi], ecx
0x67EBB4: mov     edx, [eax+4]
0x67EBB7: mov     [esi+4], edx
0x67EBBA: mov     eax, [eax+8]
0x67EBBD: mov     [esi+8], eax
0x67EBC0: fld     dword ptr [esi]
0x67EBC2: mov     eax, [esp+8+end]
0x67EBC6: mov     ecx, [eax]
0x67EBC8: mov     [esi+0Ch], ecx
0x67EBCB: mov     edx, [eax+4]
0x67EBCE: mov     [esi+10h], edx
0x67EBD1: mov     eax, [eax+8]
0x67EBD4: mov     [esi+14h], eax
0x67EBD7: fld     dword ptr [esi+0Ch]
0x67EBDA: fucompp
0x67EBDC: mov     bl, 1
0x67EBDE: fnstsw  ax
0x67EBE0: test    ah, 44h
0x67EBE3: jp      short loc_67EC03
0x67EBE5: fld     dword ptr [esi+4]
0x67EBE8: fld     dword ptr [esi+10h]
0x67EBEB: fucompp
0x67EBED: fnstsw  ax
0x67EBEF: test    ah, 44h
0x67EBF2: jp      short loc_67EC03
0x67EBF4: fld     dword ptr [esi+8]
0x67EBF7: fld     dword ptr [esi+14h]
0x67EBFA: fucompp
0x67EBFC: fnstsw  ax
0x67EBFE: test    ah, 44h
0x67EC01: jnp     short loc_67EC2F
0x67EC03: mov     ecx, [esp+8+extraCost]
0x67EC07: push    edi
0x67EC08: mov     edi, [esp+0Ch+actor]
0x67EC0C: push    ecx; strictMode
0x67EC0D: push    edi; actor
0x67EC0E: mov     ecx, esi; segmentQuery
0x67EC10: call    ConnectedPointGraph_TestStraightSegment; Verified direct-segment test used before actor-aware A*. It locates PathGrid nodes near both endpoints, rejects/defers segments based on distance, water-state mismatch and actor collision-height checks, and reports whether graph fallback should be attempted. Exact meaning of several geometric thresholds remains Unknown.
0x67EC15: test    al, al
0x67EC17: jz      short loc_67EC27
0x67EC19: push    edi; actor
0x67EC1A: mov     ecx, esi; searchContext
0x67EC1C: call    ConnectedPointGraph_FindActorAwarePath; Verified actor-aware A* over graph-node adjacency. It uses TESConnectedPoint_ComputeActorAwareEdgeCost, skips candidates whose PathGrid linkedPointsDisabled bit 0x20 is set, and applies an additional actor-specific path filter. Its pathgrid caller selects a reachable point for actor movement.
0x67EC21: pop     edi
0x67EC22: pop     esi
0x67EC23: pop     ebx
0x67EC24: retn    10h
0x67EC27: pop     edi
0x67EC28: pop     esi
0x67EC29: mov     al, bl
0x67EC2B: pop     ebx
0x67EC2C: retn    10h
0x67EC2F: pop     esi
0x67EC30: mov     al, bl
0x67EC32: pop     ebx
0x67EC33: retn    10h

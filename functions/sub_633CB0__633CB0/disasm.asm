0x633CB0: push    ebp; 3DTheft release decode 2026-05-18: HighProcess vfunc +0x228 returns success/failure as AL. It may trigger SayTopic warning for package type 0x1D, then delegates to MiddleHighProcess_StartCombatPackage; caller should honor return value and should not force Actor::EvaluatePackage after it.
0x633CB1: mov     ebp, [esp+4+arg_4]
0x633CB5: test    ebp, ebp
0x633CB7: push    esi
0x633CB8: mov     esi, ecx
0x633CBA: jnz     short loc_633CC3
0x633CBC: pop     esi
0x633CBD: xor     al, al
0x633CBF: pop     ebp
0x633CC0: retn    28h ; '('
0x633CC3: mov     eax, [esi]
0x633CC5: mov     edx, [eax+184h]
0x633CCB: push    edi
0x633CCC: call    edx
0x633CCE: test    eax, eax
0x633CD0: mov     edi, [esp+0Ch+arg_0]
0x633CD4: jz      short loc_633D1E
0x633CD6: cmp     byte ptr [eax+20h], 1Dh
0x633CDA: jnz     short loc_633D1E
0x633CDC: push    ebx
0x633CDD: push    1; index
0x633CDF: push    4; topicType
0x633CE1: call    TESTopic__GetTopic; Direct fixed-registry lookup: bounds-checks index against g_dialogueTopicBucketCounts[topicType], then returns g_dialogueTopicBuckets[topicType][index].topic. This is not an EDID/name search.
0x633CE6: mov     ecx, ds:0B333C4h
0x633CEC: add     esp, 8
0x633CEF: mov     ebx, eax
0x633CF1: mov     eax, [esi]
0x633CF3: mov     edx, [eax+484h]
0x633CF9: push    ecx
0x633CFA: mov     ecx, esi
0x633CFC: call    edx
0x633CFE: mov     eax, ds:0B333C4h
0x633D03: push    1
0x633D05: push    0
0x633D07: push    0
0x633D09: mov     [edi+0E4h], eax
0x633D0F: mov     edx, [esi]
0x633D11: mov     eax, [edx+1A4h]
0x633D17: push    ebx
0x633D18: push    edi
0x633D19: mov     ecx, esi
0x633D1B: call    eax
0x633D1D: pop     ebx
0x633D1E: mov     ecx, edi
0x633D20: call    sub_5E3290
0x633D25: test    al, al
0x633D27: jz      short loc_633D39
0x633D29: mov     edx, [edi]
0x633D2B: mov     eax, [edx+388h]
0x633D31: mov     ecx, edi
0x633D33: call    eax
0x633D35: test    eax, eax
0x633D37: jnz     short loc_633DA9
0x633D39: cmp     byte ptr [esi+290h], 0
0x633D40: jz      short loc_633D66
0x633D42: mov     edx, [esi]
0x633D44: mov     eax, [edx+588h]
0x633D4A: push    0
0x633D4C: push    0
0x633D4E: push    edi
0x633D4F: mov     ecx, esi
0x633D51: call    eax
0x633D53: mov     byte ptr [esi+290h], 0
0x633D5A: fld     dword ptr ds:0B36C88h
0x633D60: fstp    dword ptr [esi+28Ch]
0x633D66: mov     ecx, [edi+58h]
0x633D69: mov     edx, [ecx]
0x633D6B: mov     eax, [edx+3D0h]
0x633D71: call    eax
0x633D73: test    eax, eax
0x633D75: jnz     short loc_633D90
0x633D77: mov     ecx, edi; reference
0x633D79: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x633D7E: test    eax, eax
0x633D80: jz      short loc_633D90
0x633D82: push    1; useFactionOwnership
0x633D84: push    ebp; actorReference
0x633D85: mov     ecx, edi; reference
0x633D87: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x633D8C: test    al, al
0x633D8E: jnz     short loc_633DA9
0x633D90: mov     ecx, ebp; reference
0x633D92: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x633D97: test    eax, eax
0x633D99: jz      short loc_633DB1
0x633D9B: push    1; useFactionOwnership
0x633D9D: push    edi; actorReference
0x633D9E: mov     ecx, ebp; reference
0x633DA0: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x633DA5: test    al, al
0x633DA7: jz      short loc_633DB1
0x633DA9: pop     edi
0x633DAA: pop     esi
0x633DAB: xor     al, al
0x633DAD: pop     ebp
0x633DAE: retn    28h ; '('
0x633DB1: mov     ecx, [esp+0Ch+arg_24]
0x633DB5: mov     edx, [esp+0Ch+arg_20]
0x633DB9: mov     eax, [esp+0Ch+arg_1C]
0x633DBD: push    ecx; int
0x633DBE: mov     ecx, [esp+10h+arg_18]
0x633DC2: push    edx; int
0x633DC3: mov     edx, [esp+14h+arg_14]
0x633DC7: push    eax; char
0x633DC8: mov     eax, [esp+18h+arg_10]
0x633DCC: push    ecx; int
0x633DCD: mov     ecx, [esp+1Ch+arg_C]
0x633DD1: push    edx; int
0x633DD2: mov     edx, [esp+20h+arg_8]
0x633DD6: push    eax; int
0x633DD7: push    ecx; int
0x633DD8: push    edx; int
0x633DD9: push    ebp; int
0x633DDA: push    edi; Concurrency::details::SchedulerBase *
0x633DDB: mov     ecx, esi
0x633DDD: call    MiddleHighProcess_StartCombatPackage; 3DTheft release decode 2026-05-18: MiddleHighProcess StartCombatPackage returns success/failure as AL and owns active combat-controller/package setup. No observed Actor::EvaluatePackage call is required after this vfunc.
0x633DE2: pop     edi
0x633DE3: pop     esi
0x633DE4: pop     ebp
0x633DE5: retn    28h ; '('

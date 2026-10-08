0x614F80: push    esi; Adds unique non-self actor to CombatController+0x15C ally cache and increments +0x178; caller supplies combat-group friendly entries.
0x614F81: push    edi
0x614F82: mov     edi, [esp+8+a2]; a1
0x614F86: xor     al, al
0x614F88: test    edi, edi
0x614F8A: mov     esi, ecx
0x614F8C: jz      short loc_61500A
0x614F8E: cmp     edi, [esi+3Ch]
0x614F91: jz      short loc_61500A
0x614F93: lea     ecx, [esi+15Ch]
0x614F99: mov     edx, ecx
0x614F9B: test    edx, edx
0x614F9D: jz      short loc_614FAB
0x614F9F: nop
0x614FA0: cmp     [edx], edi
0x614FA2: jz      short loc_61500A
0x614FA4: mov     edx, [edx+4]
0x614FA7: test    edx, edx
0x614FA9: jnz     short loc_614FA0
0x614FAB: push    ebx; a5
0x614FAC: push    edi
0x614FAD: call    BSSimpleList_PushFront
0x614FB2: mov     ecx, [esi+3Ch]
0x614FB5: mov     ebx, 1
0x614FBA: add     [esi+178h], ebx; CombatController+0x178 counts unique cached allies.
0x614FC0: call    Actor_GetEffectiveCombatStyle; If TESCombatStyle::kFlag_IgnoreAlliesInArea (0x04) is set, skip the nearby-ally +0x17C calculation (ally is still cached).
0x614FC5: mov     edx, [eax]
0x614FC7: mov     ecx, eax
0x614FC9: mov     eax, [edx+16Ch]
0x614FCF: push    4
0x614FD1: call    eax
0x614FD3: test    al, al
0x614FD5: jnz     short loc_615007
0x614FD7: push    0; useActorProjection
0x614FD9: mov     ecx, esi
0x614FDB: call    CombatController_GetCurrentTarget
0x614FE0: push    eax; to
0x614FE1: push    edi; from
0x614FE2: call    TESObjectREFR_GetSurfaceDistance; Three-argument cdecl routine: returns float surface distance from 'from' to 'to'. All 24 callers push exactly from, to, and useActorProjection then reclaim 0x0C. The prior EDI register argument, fourth stack byte, and double return were analysis pollution.
0x614FE7: fld     dword ptr ds:0B372B8h; If combat style flag 4 is clear, +0x17C is set when cached ally is closer to current target than fAICombatNoAreaEffectAllyDistance (default 350.0).
0x614FED: fcompp
0x614FEF: add     esp, 0Ch
0x614FF2: fnstsw  ax
0x614FF4: mov     al, bl
0x614FF6: test    ah, 41h
0x614FF9: jnz     short loc_615009
0x614FFB: mov     [esi+17Ch], bl
0x615001: pop     ebx
0x615002: pop     edi
0x615003: pop     esi
0x615004: retn    4
0x615007: mov     al, bl
0x615009: pop     ebx
0x61500A: pop     edi
0x61500B: pop     esi
0x61500C: retn    4

0x624030: push    ecx; Refreshes detection/allies tactical state; allied controllers in active modes 2 (ranged weapon) and 4 (ranged spell) are counted as ranged roles.
0x624031: push    esi
0x624032: mov     esi, ecx
0x624034: cmp     dword ptr [esi+3Ch], 0
0x624038: jz      loc_6243C4
0x62403E: call    CombatController_GetCurrentTarget
0x624043: test    eax, eax
0x624045: jz      loc_6243C4
0x62404B: fld     dword ptr [esi+44h]
0x62404E: push    ebx
0x62404F: fsub    dword ptr [esi+140h]
0x624055: push    edi
0x624056: fld     dword ptr [esi+144h]
0x62405C: fcompp
0x62405E: fnstsw  ax
0x624060: test    ah, 5
0x624063: jnp     short loc_624079
0x624065: cmp     [esp+10h+arg_0], 0
0x62406A: jnz     short loc_624079
0x62406C: cmp     byte ptr [esi+1ACh], 0
0x624073: jl      loc_6242DD
0x624079: cmp     byte ptr [esi+1ACh], 0
0x624080: jge     short loc_624090
0x624082: mov     byte ptr [esi+1ACh], 0
0x624089: cmp     byte ptr [esi+1ACh], 0
0x624090: jnz     short loc_6240B2
0x624092: mov     edi, [esi+3Ch]
0x624095: push    0; char
0x624097: push    0; int
0x624099: push    0; char
0x62409B: mov     ecx, esi
0x62409D: call    CombatController_GetCurrentTarget
0x6240A2: push    eax; int
0x6240A3: push    0; int
0x6240A5: mov     ecx, edi; int
0x6240A7: call    Actor_LineOfSight; Oblivion actor line-of-sight query used by detection, combat reach, tactical refresh, and ray-cast script paths. Performs cell/world-space and Havok visibility tests and can report the viewed actor segment through the output parameter. Fallout corroborates the Actor::LineOfSight family name only.
0x6240AC: mov     [esi+158h], al
0x6240B2: cmp     byte ptr [esi+1ACh], 1
0x6240B9: jnz     short loc_6240E8
0x6240BB: fld     dword ptr ds:0A30634h
0x6240C1: mov     edi, [esi+3Ch]
0x6240C4: push    ecx
0x6240C5: fstp    [esp+14h+var_14]; float
0x6240C8: push    0; int
0x6240CA: push    1; int
0x6240CC: mov     ecx, esi
0x6240CE: call    CombatController_GetCurrentTarget
0x6240D3: push    eax; int
0x6240D4: push    edi; int
0x6240D5: call    Actor_CheckAlliesBlockingRangedTarget; Refresh phase 1 checks firing-lane allies using actor,currentTarget,requireInCombat=1; nonzero result stored as CombatController+0x159.
0x6240DA: add     esp, 14h
0x6240DD: test    eax, eax
0x6240DF: setnz   al
0x6240E2: mov     [esi+159h], al
0x6240E8: cmp     byte ptr [esi+1ACh], 2
0x6240EF: jnz     short loc_62413B
0x6240F1: cmp     [esp+10h+arg_0], 0
0x6240F6: jnz     short loc_624119
0x6240F8: cmp     dword ptr [esi+70h], 0Dh
0x6240FC: jz      short loc_624119
0x6240FE: mov     eax, [esi+6Ch]
0x624101: cmp     eax, 4
0x624104: jz      short loc_624110
0x624106: test    eax, eax
0x624108: jz      short loc_624110
0x62410A: cmp     dword ptr [esi+74h], 0
0x62410E: jnz     short loc_624119
0x624110: mov     byte ptr [esi+1ACh], 3
0x624117: jmp     short loc_62413B
0x624119: movzx   ecx, byte ptr [esi+158h]
0x624120: mov     edi, [esi+3Ch]
0x624123: push    ecx
0x624124: mov     ecx, esi
0x624126: call    CombatController_GetCurrentTarget
0x62412B: push    eax
0x62412C: push    edi
0x62412D: call    sub_617590
0x624132: add     esp, 0Ch
0x624135: mov     [esi+174h], al
0x62413B: mov     al, [esi+1ACh]
0x624141: cmp     al, 3
0x624143: jz      short loc_624151
0x624145: cmp     al, 4
0x624147: jz      short loc_624151
0x624149: cmp     al, 5
0x62414B: jz      short loc_624151
0x62414D: cmp     al, 6
0x62414F: jnz     short loc_624173
0x624151: mov     al, [esi+1ACh]
0x624157: cmp     al, 7
0x624159: jge     short loc_624173
0x62415B: movsx   edx, al
0x62415E: sub     edx, 3
0x624161: push    edx
0x624162: mov     ecx, esi
0x624164: call    sub_614550
0x624169: add     [esi+1ACh], al
0x62416F: test    eax, eax
0x624171: jg      short loc_624151
0x624173: cmp     byte ptr [esi+191h], 0
0x62417A: jz      short loc_624190
0x62417C: cmp     byte ptr [esi+1ACh], 7
0x624183: jnz     loc_624243
0x624189: mov     byte ptr [esi+191h], 0
0x624190: cmp     byte ptr [esi+1ACh], 7
0x624197: jnz     loc_624243
0x62419D: mov     eax, [esi+1A8h]
0x6241A3: cmp     eax, ds:0B372F0h
0x6241A9: mov     edi, [esi+3Ch]
0x6241AC: push    0; int
0x6241AE: push    0; int
0x6241B0: push    1; int
0x6241B2: lea     ecx, [esi+158h]
0x6241B8: push    ecx; int
0x6241B9: mov     ecx, esi
0x6241BB: setl    bl
0x6241BE: call    CombatController_GetCurrentTarget
0x6241C3: push    eax; int
0x6241C4: push    0; int
0x6241C6: mov     ecx, edi; int
0x6241C8: call    Actor_GetDetectionLevelAgainstActor; Oblivion authoritative detection pipeline. Computes this detector's level against a target actor: obtains cached/physical LOS and distance, target light, boot weight, movement/running/sneak/combat/underwater/exterior state, Luck-modified Sneak values, detector Blindness AV 0x2D, target Chameleon AV 0x2E, and target Invisibility AV 0x2F; then calls Calc_DetectionLevel and updates the detector's process entry. Positive means detected. Fallout only corroborates the GetDetectionLevelAgainstActor terminology.
0x6241CD: test    bl, bl
0x6241CF: mov     [esi+1A8h], eax
0x6241D5: jz      short loc_624243
0x6241D7: cmp     eax, ds:0B372F0h
0x6241DD: jl      short loc_624243
0x6241DF: mov     eax, [esi+6Ch]
0x6241E2: cmp     eax, 0Fh
0x6241E5: jz      short loc_6241F6
0x6241E7: cmp     eax, 0Ah
0x6241EA: jz      short loc_6241F6
0x6241EC: cmp     eax, 0Bh
0x6241EF: jz      short loc_6241F6
0x6241F1: cmp     eax, 0Ch
0x6241F4: jnz     short loc_624243
0x6241F6: push    1; index
0x6241F8: push    4; topicType
0x6241FA: call    TESTopic__GetTopic; Direct fixed-registry lookup: bounds-checks index against g_dialogueTopicBucketCounts[topicType], then returns g_dialogueTopicBuckets[topicType][index].topic. This is not an EDID/name search.
0x6241FF: mov     edx, [esi+3Ch]
0x624202: mov     ecx, ds:0B333C4h
0x624208: add     esp, 8
0x62420B: push    1
0x62420D: mov     [edx+0E4h], ecx
0x624213: mov     edx, [esi+3Ch]
0x624216: mov     ecx, [edx+58h]
0x624219: mov     edi, [ecx]
0x62421B: push    0
0x62421D: push    0
0x62421F: push    eax
0x624220: push    edx
0x624221: mov     edx, [edi+1A4h]
0x624227: call    edx
0x624229: push    0
0x62422B: push    0
0x62422D: mov     ecx, esi
0x62422F: call    sub_6239D0
0x624234: push    eax
0x624235: mov     ecx, esi
0x624237: call    CombatController_SetCombatMode; Sets CombatController+0x70 active mode (0 H2H, 1 melee weapon, 2 ranged weapon, 3 touch spell, 4 ranged spell, 5 yield, 7 flee, 0xA switch weapon, 0xC leave water) and invalidates desired-distance cache +0x188.
0x62423C: mov     ecx, esi
0x62423E: call    sub_61D320
0x624243: add     byte ptr [esi+1ACh], 1
0x62424A: cmp     byte ptr [esi+1ACh], 7
0x624251: jle     loc_6242DD
0x624257: cmp     byte ptr [esi+1BDh], 0
0x62425E: jz      short loc_624267
0x624260: mov     byte ptr [esi+1BDh], 0
0x624267: mov     ecx, esi
0x624269: mov     byte ptr [esi+1ACh], 0FFh
0x624270: call    CombatController_GetCurrentTarget
0x624275: mov     ecx, eax
0x624277: call    Actor_IsPlayer
0x62427C: test    al, al
0x62427E: jz      short loc_62429B
0x624280: mov     eax, ds:0B3B914h
0x624285: cmp     eax, ds:0B14B94h
0x62428B: jg      short loc_624294
0x62428D: mov     ecx, offset unk_B14B9C
0x624292: jmp     short loc_6242B3
0x624294: mov     ecx, offset unk_B14BA4
0x624299: jmp     short loc_6242B3
0x62429B: mov     ecx, ds:0B3B914h
0x6242A1: cmp     ecx, ds:0B14BB4h
0x6242A7: mov     ecx, offset unk_B14BBC
0x6242AC: jle     short loc_6242B3
0x6242AE: mov     ecx, offset unk_B14BC4
0x6242B3: call    GameSetting_GetSafeFloatPointer
0x6242B8: fld     dword ptr [eax]
0x6242BA: fstp    [esp+10h+var_4]
0x6242BE: fld     dword ptr [esi+44h]
0x6242C1: fstp    dword ptr [esi+140h]
0x6242C7: fld     [esp+10h+var_4]
0x6242CB: fstp    dword ptr [esi+144h]
0x6242D1: fld     dword ptr ds:0A30634h
0x6242D7: fstp    dword ptr [esi+148h]
0x6242DD: fld     dword ptr [esi+44h]
0x6242E0: fsub    dword ptr [esi+14Ch]
0x6242E6: fld     dword ptr [esi+150h]
0x6242EC: fcompp
0x6242EE: fnstsw  ax
0x6242F0: test    ah, 5
0x6242F3: jnp     short loc_624300
0x6242F5: cmp     [esp+10h+arg_0], 0
0x6242FA: jz      loc_6243C2
0x624300: lea     ecx, [esi+15Ch]
0x624306: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x62430B: mov     eax, [esi+3Ch]
0x62430E: xor     ebx, ebx
0x624310: push    ebx
0x624311: push    eax
0x624312: mov     ecx, (offset qword_B3BB2C+284h)
0x624317: mov     [esi+178h], ebx
0x62431D: mov     [esi+17Ch], bl
0x624323: call    CombatGroupManager_BuildFriendlyEntryList; Builds temporary BSSimpleList of combat-group friendly entry pointers: same team byte, mount/rider equivalence, and shouldActorFight<=0. arg=0 disables process-level filter.
0x624328: mov     edi, eax
0x62432A: cmp     edi, ebx
0x62432C: mov     dword ptr [esp+10h+arg_0], edi
0x624330: jz      short loc_624392
0x624332: push    ebp
0x624333: mov     ebp, [edi]
0x624335: mov     edx, [ebp+0]
0x624338: mov     edi, [edi+4]
0x62433B: push    edx
0x62433C: mov     ecx, esi
0x62433E: call    CombatController_CacheAlly; Adds unique non-self actor to CombatController+0x15C ally cache and increments +0x178; caller supplies combat-group friendly entries.
0x624343: test    al, al
0x624345: jz      short loc_624375
0x624347: mov     ecx, [ebp+0]
0x62434A: mov     eax, [ecx]
0x62434C: mov     edx, [eax+330h]
0x624352: call    edx
0x624354: test    eax, eax
0x624356: jz      short loc_624375
0x624358: mov     ecx, [ebp+0]
0x62435B: mov     eax, [ecx]
0x62435D: mov     edx, [eax+330h]
0x624363: call    edx
0x624365: mov     eax, [eax+70h]
0x624368: cmp     eax, 2
0x62436B: jz      short loc_624372
0x62436D: cmp     eax, 4
0x624370: jnz     short loc_624375
0x624372: add     ebx, 1
0x624375: test    edi, edi
0x624377: jnz     short loc_624333
0x624379: mov     edi, dword ptr [esp+14h+arg_0]
0x62437D: mov     ecx, edi
0x62437F: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x624384: push    edi
0x624385: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x62438A: add     esp, 4
0x62438D: test    ebx, ebx
0x62438F: pop     ebp
0x624390: jnz     short loc_624399
0x624392: mov     byte ptr [esi+15Ah], 0
0x624399: fld     dword ptr ds:0B37280h; Cached allies refresh interval is live game setting fCombatCollectAlliesTimer (default 1.0 s).
0x62439F: fstp    dword ptr [esp+10h+arg_0]
0x6243A3: fld     dword ptr [esi+44h]
0x6243A6: fstp    dword ptr [esi+14Ch]
0x6243AC: fld     dword ptr [esp+10h+arg_0]
0x6243B0: fstp    dword ptr [esi+150h]
0x6243B6: fld     dword ptr ds:0A30634h
0x6243BC: fstp    dword ptr [esi+154h]
0x6243C2: pop     edi
0x6243C3: pop     ebx
0x6243C4: pop     esi
0x6243C5: pop     ecx
0x6243C6: retn    4

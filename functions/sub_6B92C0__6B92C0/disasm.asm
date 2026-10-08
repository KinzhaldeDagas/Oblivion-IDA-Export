0x6B92C0: push    ecx; Player-menu post-response transition. AddTopicList is unconditional for a processed INFO. Only INFOGENERAL/D7 without RunForRumors skips Goodbye handling and RunResult; INFOGENERAL always rebuilds from player known topics instead of following INFO links. The 0x40 flag has no effect on ordinary topics.
0x6B92C1: push    ebx
0x6B92C2: push    esi
0x6B92C3: mov     esi, ecx
0x6B92C5: mov     eax, [esi]
0x6B92C7: push    edi
0x6B92C8: xor     edi, edi
0x6B92CA: xor     bl, bl
0x6B92CC: test    eax, eax
0x6B92CE: mov     [esp+10h+var_2], 0
0x6B92D3: mov     [esp+10h+var_1], 0
0x6B92D8: jz      short loc_6B92F6
0x6B92DA: mov     ecx, [eax]
0x6B92DC: test    ecx, ecx
0x6B92DE: jz      short loc_6B92F6
0x6B92E0: cmp     [ecx+20h], bl; Recognize the MenuTopic as stock INFOGENERAL/Rumors (D7); only this topic type gives flag 0x40 RunForRumors special meaning.
0x6B92E3: jz      short loc_6B92F6
0x6B92E5: mov     ecx, [ecx+18h]
0x6B92E8: movzx   edx, byte ptr [ecx+25h]
0x6B92EC: shr     edx, 6
0x6B92EF: test    dl, 1
0x6B92F2: jnz     short loc_6B92F6
0x6B92F4: mov     bl, 1; skipInfoGeneralResult = INFOGENERAL && !RunForRumors. Natural completion still calls AddTopicList, but skips Goodbye/RunResult and returns false; AdvanceTopicResponse consequently clears closePending. A clicked Goodbye remains parked globally for eventual DialogMenu::Close.
0x6B92F6: cmp     [esp+10h+processCurrentInfo], 0
0x6B92FB: jz      short loc_6B9311
0x6B92FD: test    eax, eax
0x6B92FF: jz      short loc_6B9326
0x6B9301: mov     ecx, [eax]
0x6B9303: test    ecx, ecx
0x6B9305: jz      short loc_6B9311
0x6B9307: mov     edi, [ecx+18h]
0x6B930A: mov     cl, [ecx+8]
0x6B930D: mov     [esp+10h+var_2], cl
0x6B9311: test    eax, eax
0x6B9313: jz      short loc_6B9326
0x6B9315: mov     eax, [eax]
0x6B9317: test    eax, eax
0x6B9319: jz      short loc_6B9326
0x6B931B: cmp     byte ptr [eax+20h], 0
0x6B931F: jz      short loc_6B9326
0x6B9321: mov     [esp+10h+var_1], 1
0x6B9326: cmp     [esp+10h+clearAll], 0; clearAll=false preserves the head MenuTopic and removes later choices. Native callers use this mode; clearAll=true would remove the seed and prevent FillTopicList from repopulating the manager.
0x6B932B: mov     ecx, esi; this
0x6B932D: jz      short loc_6B9333
0x6B932F: push    1
0x6B9331: jmp     short loc_6B9335
0x6B9333: push    0; clearAll
0x6B9335: call    MenuTopicManager__ClearData; ClearData owns ordinary MenuTopics but deliberately does not destroy isInfoGeneralTopic entries. Those are actor-specific caches owned by ExtraInfoGeneralTopic (0x59).
0x6B933A: test    edi, edi
0x6B933C: jz      short loc_6B9369
0x6B933E: mov     ecx, edi; this
0x6B9340: call    TESTopicInfo__AddTopicList; Commit INFO.addedTopics before testing RunForRumors or Goodbye. Added topics enter PlayerCharacter.knownTopics even when INFOGENERAL without RunForRumors skips RunResult and normal continuation.
0x6B9345: test    bl, bl
0x6B9347: jnz     short loc_6B9369; INFOGENERAL without RunForRumors bypasses both Goodbye and RunResult during natural response completion. This does not cancel a Goodbye INFO parked by DoClick; close-time handling ignores RunForRumors.
0x6B9349: test    byte ptr [edi+25h], 1
0x6B934D: jnz     short loc_6B9360; Oblivion's player-menu close test here uses INFO flag Goodbye (bit 0x01), then returns to the caller's close path. Fallout additionally classifies stock D4/GOODBYE topic as natural goodbye in DialogMenu::SetGoodbyeState (x4y6:0x8252E850); no D4 topic-ID test occurs in this Oblivion decision.
0x6B934F: mov     edx, [esi+0Ch]
0x6B9352: push    edx; speaker
0x6B9353: mov     ecx, edi; this
0x6B9355: call    TESTopicInfo__RunResult; Oblivion's ordinary player-dialogue result call is reached after the current response list is exhausted. Fallout's manager has separate ProcessCurrentTopic/TIRS_BEGIN at selection time (x4y6:0x825E75A8) and a later TIRS_END call in DialogMenu::LoadNextScreen (x4y6:0x82530700). Oblivion RunResult has no phase argument; do not import those Fallout timing phases.
0x6B935A: test    byte ptr [edi+25h], 1
0x6B935E: jz      short loc_6B9369
0x6B9360: pop     edi
0x6B9361: pop     esi
0x6B9362: mov     al, 1
0x6B9364: pop     ebx
0x6B9365: pop     ecx
0x6B9366: retn    8
0x6B9369: cmp     [esp+10h+var_2], 0
0x6B936E: jz      short loc_6B937F
0x6B9370: cmp     [esp+10h+var_1], 0
0x6B9375: jnz     short loc_6B937F; After INFOGENERAL completion, always rebuild from PlayerCharacter.knownTopics, regardless of INFOGENERAL's linkedTo list. Ordinary selected topics with hasLinkedTopics instead use that INFO's linkedTo list.
0x6B9377: mov     eax, [edi+30h]
0x6B937A: add     eax, 8; Use TESTopicInfo linkedTopics when the entry exposes linked choices and a response has not already consumed the path.
0x6B937D: jmp     short loc_6B9389
0x6B937F: mov     eax, ds:0B333C4h
0x6B9384: add     eax, 5E4h; Known-topic source used for every INFOGENERAL/Rumors completion and for ordinary topics without linked choices.
0x6B9389: push    eax; topics
0x6B938A: mov     ecx, esi; this
0x6B938C: call    MenuTopicManager__FillTopicList; Oblivion appends eligible ordinary MenuTopics in input-list order and performs no topic-priority sort here. Fallout's corresponding FillTopicList (x4y6:0x825E8740) sorts non-choice lists with PrioritySort (0x825E7390) by TESTopic priority; choice lists keep authored order. In Oblivion, the known-topic source is already sorted by display name in PlayerCharacter::AddKnownTopics, while INFO.linkedTo retains its own list order.
0x6B9391: lea     eax, [esi+4]
0x6B9394: test    eax, eax
0x6B9396: mov     [esi], eax
0x6B9398: jz      short loc_6B939F
0x6B939A: mov     eax, [eax+4]
0x6B939D: mov     [esi], eax
0x6B939F: pop     edi
0x6B93A0: pop     esi
0x6B93A1: xor     al, al
0x6B93A3: pop     ebx
0x6B93A4: pop     ecx
0x6B93A5: retn    8

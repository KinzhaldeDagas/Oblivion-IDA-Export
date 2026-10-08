0x476380: push    esi; Processes playable queued-IDLE state. If +0xD0 exists it must be phase 1, then cleanup/promotion moves it to current +0xCC. Requires current phase 1, installs its KFModel, resolves the parsed encoded group, plays through ActorAnimData_PlayEncodedGroup using stored slot/type +0x0C, and attaches the returned sequence; failures mark phase 3.
0x476381: mov     esi, ecx
0x476383: mov     eax, [esi+0D0h]
0x476389: test    eax, eax
0x47638B: jz      short loc_47639B
0x47638D: cmp     dword ptr [eax], 1
0x476390: jnz     short loc_4763EB
0x476392: push    0
0x476394: push    0
0x476396: call    ActorAnimData_CleanupOrPromoteQueuedIdles; Owns current/queued idle retirement and promotion across ActorAnimData +0xCC/+0xD0/+0xD4/+0xD8. Depending on caller flags, stops a still-active sequence, moves stale holders into the two cleanup slots, destroys them when no slot is available or forced, or promotes queued +0xD0 into current +0xCC.
0x47639B: mov     eax, [esi+0CCh]
0x4763A1: test    eax, eax
0x4763A3: push    edi
0x4763A4: jz      short loc_476406
0x4763A6: cmp     dword ptr [eax], 1
0x4763A9: jnz     short loc_476406
0x4763AB: mov     edi, [eax+8]
0x4763AE: push    0
0x4763B0: push    edi
0x4763B1: mov     ecx, esi; this
0x4763B3: call    ActorAnimData_InstallKFModel; CustomAnimSupport decode: installs a parsed KFModel into ActorAnimData as AnimSequenceSingle/Multiple or defers it. Historical constructor-style name is not canonical.
0x4763B8: test    al, al
0x4763BA: jz      short loc_4763FA
0x4763BC: mov     eax, [esi+0CCh]
0x4763C2: mov     eax, [eax+0Ch]
0x4763C5: mov     ecx, [edi+8]
0x4763C8: push    eax
0x4763C9: call    TESAnimGroup_GetAnimationGroup; TESAnimGroup native group id accessor: byte at TESAnimGroup +0x08.
0x4763CE: push    eax
0x4763CF: mov     ecx, esi
0x4763D1: call    ActorAnimData_PlayEncodedGroup; CustomAnimSupport hook target: ActorAnimData_PlayEncodedGroup. Resolves encoded key in animsMap, selects single/multiple sequence, then forwards to ActorAnimData_PlaySequence.
0x4763D6: test    eax, eax
0x4763D8: mov     ecx, [esi+0CCh]
0x4763DE: jz      short loc_4763EF
0x4763E0: push    eax
0x4763E1: call    AnimIdle_AttachLoadedSequence; Attaches a played BSAnimGroupSequence to a ready AnimIdle. Requires phase +0x00 == 1, stores the sequence at +0x10, advances phase to 2 (active), and for dispatch mode +0x04 == 3 starts actor high-process action 0x0B.
0x4763E6: pop     edi
0x4763E7: mov     al, 1
0x4763E9: pop     esi
0x4763EA: retn
0x4763EB: xor     al, al
0x4763ED: pop     esi
0x4763EE: retn
0x4763EF: pop     edi
0x4763F0: mov     dword ptr [ecx], 3
0x4763F6: xor     al, al
0x4763F8: pop     esi
0x4763F9: retn
0x4763FA: mov     edx, [esi+0CCh]
0x476400: mov     dword ptr [edx], 3
0x476406: pop     edi
0x476407: xor     al, al
0x476409: pop     esi
0x47640A: retn

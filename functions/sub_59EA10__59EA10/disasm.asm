0x59EA10: push    esi; DialogMenu wrapper around LoadNextTopicList. Every native call site passes clearAll=false; processCurrentInfo is false only for the path that refreshes choices without committing the current INFO.
0x59EA11: push    edi
0x59EA12: mov     esi, ecx
0x59EA14: call    MenuTopicManager__GetSingleton
0x59EA19: cmp     byte ptr [esi+96h], 0
0x59EA20: mov     edi, eax
0x59EA22: jz      short loc_59EA33
0x59EA24: push    1; enableActions
0x59EA26: mov     ecx, esi; this
0x59EA28: mov     dword ptr [edi], 0
0x59EA2E: call    DialogMenu__RefreshActionAvailability; Refreshes DialogMenu topic/persuasion/service tile availability from the current speaker and package/service flags. Called when entering or leaving response display; it does not run TESTopicInfo results.
0x59EA33: mov     eax, dword ptr [esp+8+clearAll]
0x59EA37: mov     ecx, dword ptr [esp+8+processCurrentInfo]
0x59EA3B: push    eax; clearAll
0x59EA3C: push    ecx; processCurrentInfo
0x59EA3D: mov     ecx, edi; this
0x59EA3F: call    MenuTopicManager__LoadNextTopicList; Player-menu post-response transition. AddTopicList is unconditional for a processed INFO. Only INFOGENERAL/D7 without RunForRumors skips Goodbye handling and RunResult; INFOGENERAL always rebuilds from player known topics instead of following INFO links. The 0x40 flag has no effect on ordinary topics.
0x59EA44: mov     ecx, esi; this
0x59EA46: mov     [esi+88h], al
0x59EA4C: mov     byte ptr [esi+96h], 0
0x59EA53: call    DialogMenu__LoadTopicsList; Builds player topic-choice tiles by starting at MenuTopicManager::FirstTopic(skipGreeting=true), deliberately omitting the GREETING/current spoken head entry. Each rendered tile receives a zero-based choice index; the manager cursor is restored with FirstTopic(false) afterward.
0x59EA58: pop     edi
0x59EA59: pop     esi
0x59EA5A: retn    8

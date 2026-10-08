0x531270: call    TESTopicInfo__GetResponseList; Snapshot the current TESTopicInfo response stream by deep-cloning the shared lazy response cache into the caller's list. MenuTopic and DialogueItem then own independent TESResponse objects and strings; rebuilding the global cache for another INFO cannot invalidate existing runtime responses.
0x531275: mov     ecx, [esp+responseList]; this
0x531279: push    eax; source
0x53127A: call    TESResponseList__CloneFrom; Deep-clone every shared TESResponse into a caller-owned response list. TESResponse::CopyFrom copies all 16 TRDT bytes and duplicates responseText; callers clear their temporary list after constructing their own DialogueResponse objects.
0x53127F: retn    4

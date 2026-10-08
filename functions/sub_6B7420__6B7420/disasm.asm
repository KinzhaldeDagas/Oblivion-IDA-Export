0x6B7420: mov     edx, [esp+speaker]
0x6B7424: push    esi
0x6B7425: mov     esi, ecx
0x6B7427: mov     ecx, [esp+4+target]
0x6B742B: xor     eax, eax
0x6B742D: mov     [esi], eax
0x6B742F: mov     [esi+4], eax
0x6B7432: mov     [esi+8], eax
0x6B7435: mov     eax, [esp+4+startingTopic]
0x6B7439: push    eax; startingTopic
0x6B743A: push    esi; conversation
0x6B743B: push    ecx; target
0x6B743C: push    edx; speaker
0x6B743D: call    TESTopic__CreateConversation; Build an ambient NPC Conversation (maximum 100 DialogueItems). Null start resolves HELLO D2. INFO selection uses conversation links/ANY D3 and Random rules; selected linkedTo topics drive continuation. GOODBYE D4 is only a recovery topic after two failed item creations. NoRumors, INFOGENERAL caching, RunForRumors, and player-menu Goodbye closure are not consulted.
0x6B7442: add     esp, 10h
0x6B7445: mov     eax, esi
0x6B7447: pop     esi
0x6B7448: retn    10h

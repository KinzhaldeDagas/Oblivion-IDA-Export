0x59EA60: push    ebx; Player-dialogue entry wrapper. It initializes the GREETING/head MenuTopic, temporarily masks any Goodbye closePending result while rendering the initial choice list, then restores that flag. LoadTopicsList restores the manager cursor to the head, so the caller can still play the GREETING.
0x59EA61: push    esi
0x59EA62: mov     esi, ecx
0x59EA64: call    MenuTopicManager__GetSingleton
0x59EA69: mov     ecx, [esp+8+forcedGreeting]
0x59EA6D: mov     edx, [esi+60h]
0x59EA70: push    ecx; forcedGreeting
0x59EA71: push    edx; speaker
0x59EA72: mov     ecx, eax; this
0x59EA74: call    MenuTopicManager__Initialize; Player-dialogue initializer. Clears the manager, resolves an optional forced topic or stock GREETING 000000C8, selects its INFO without InfoRefusal substitution, and pushes it as the head seed. A Goodbye GREETING is pre-committed (AddTopicList then RunResult) and returns closePending=true, but DialogMenu still plays its responses before closing.
0x59EA79: mov     ecx, esi; this
0x59EA7B: mov     bl, al
0x59EA7D: mov     byte ptr [esi+88h], 0; Temporarily clear DialogMenu.closePending so an initial Goodbye GREETING does not close during the first choice-list build.
0x59EA84: call    DialogMenu__LoadTopicsList; Render choices starting after the GREETING; this call finishes by restoring MenuTopicManager.currentTopicNode to the head.
0x59EA89: mov     [esi+88h], bl; Restore Initialize's closePending result. For a Goodbye GREETING it remains set while the head responses play and is consumed by the post-response list reload/close path.
0x59EA8F: pop     esi
0x59EA90: pop     ebx
0x59EA91: retn    4

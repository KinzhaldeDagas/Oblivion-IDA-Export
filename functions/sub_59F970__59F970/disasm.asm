0x59F970: push    esi; External dialog-menu refresh callback: if menu 0x3F1 and its MenuTopicManager are live, processes the current info, rebuilds the topic list, then refreshes topic/service tile availability. It is not the per-response speech-completion callback.
0x59F971: push    3F1h
0x59F976: call    Menu_GetOpenMenuTile
0x59F97B: add     esp, 4
0x59F97E: mov     esi, eax
0x59F980: call    MenuTopicManager__GetSingleton
0x59F985: test    esi, esi
0x59F987: jz      short loc_59F9AE
0x59F989: test    eax, eax
0x59F98B: jz      short loc_59F9AE
0x59F98D: mov     ecx, esi
0x59F98F: call    Tile_GetParentMenu
0x59F994: mov     esi, eax
0x59F996: test    esi, esi
0x59F998: jz      short loc_59F9AE
0x59F99A: push    0; clearAll
0x59F99C: push    1; processCurrentInfo
0x59F99E: mov     ecx, esi; this
0x59F9A0: call    DialogMenu__AdvanceTopicList; DialogMenu wrapper around LoadNextTopicList. Every native call site passes clearAll=false; processCurrentInfo is false only for the path that refreshes choices without committing the current INFO.
0x59F9A5: push    1; enableActions
0x59F9A7: mov     ecx, esi; this
0x59F9A9: call    DialogMenu__RefreshActionAvailability; Refreshes DialogMenu topic/persuasion/service tile availability from the current speaker and package/service flags. Called when entering or leaving response display; it does not run TESTopicInfo results.
0x59F9AE: pop     esi
0x59F9AF: retn

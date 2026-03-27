0x46CC00: mov     eax, [esi]
0x46CC02: test    eax, eax
0x46CC04: jz      short TESLeveledList_AddForm___LevListLoop_next
0x46CC06: mov     cx, [esp+arg_10]
0x46CC0B: cmp     [eax], cx
0x46CC0E: ja      short TESLeveledList_AddForm___InsertEntry
0x46CC10: mov     ebx, esi

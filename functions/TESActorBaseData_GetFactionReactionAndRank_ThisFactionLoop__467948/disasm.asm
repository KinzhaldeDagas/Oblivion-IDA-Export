0x467948: mov     eax, [esp+arg_C]
0x46794C: mov     eax, [eax]
0x46794E: test    eax, eax
0x467950: jz      TESActorBaseData_GetFactionReactionAndRank___ReturnValues
0x467956: mov     esi, [esp+arg_20]
0x46795A: add     esi, 3Ch ; '<'
0x46795D: mov     ebp, [eax]
0x46795F: jz      short TESActorBaseData_GetFactionReactionAndRank___ThisFactionLoop_Next

0x4F71C0: mov     eax, ds:0B333C4h; GetPCInFaction_Eval is explicitly player-scoped: it calls GetInFaction_Eval(reference, param1, ...), ignoring the current condition subject.
0x4F71C5: mov     [esp+subject], eax; subject
0x4F71C9: jmp     GetInFaction_Eval; GetInFaction_Eval (index 71 / opcode 0x1047): the Faction parameter (typeID 0x11) is present when TESActorBaseData_GetFactionRank != -1. This returns a membership predicate, not the numeric rank.

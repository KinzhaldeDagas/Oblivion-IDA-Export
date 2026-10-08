0x4F71B0: mov     eax, ds:0B333C4h; GetPCIsSex_Eval is explicitly player-scoped: it calls GetIsSex_Eval(reference, param1, ...), ignoring the current condition subject.
0x4F71B5: mov     [esp+arg_0], eax
0x4F71B9: jmp     GetIsSex_Eval; GetIsSex_Eval (index 70 / opcode 0x1046): requires TESNPC BaseForm; Sex parameter (typeID 0x12) is compared with TESActorBase_IsFemale (0 male, 1 female), yielding numeric 1 or 0.

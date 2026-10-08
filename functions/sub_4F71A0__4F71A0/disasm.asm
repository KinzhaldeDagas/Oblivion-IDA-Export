0x4F71A0: mov     eax, ds:0B333C4h; GetPCIsRace_Eval is explicitly player-scoped: it calls GetIsRace_Eval(reference, param1, ...), ignoring the current condition subject.
0x4F71A5: mov     [esp+arg_0], eax
0x4F71A9: jmp     GetIsRace_Eval; GetIsRace_Eval (index 69 / opcode 0x1045): requires TESNPC BaseForm (type 0x23), then pointer-compares its actual race field at +0xE8 with the Race parameter (typeID 0x0F). Result is numeric 1 or 0.

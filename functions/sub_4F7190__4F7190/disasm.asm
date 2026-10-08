0x4F7190: mov     eax, ds:0B333C4h; GetPCIsClass_Eval is explicitly player-scoped: it calls GetIsClass_Eval(reference, param1, ...), ignoring the current condition subject.
0x4F7195: mov     [esp+arg_0], eax
0x4F7199: jmp     GetIsClass_Eval; GetIsClass_Eval (index 68 / opcode 0x1044): requires the subject BaseForm to be TESNPC (form type 0x23), then pointer-compares NPC class at +0x104 with the Class parameter (typeID 0x10). Result is numeric 1 or 0.

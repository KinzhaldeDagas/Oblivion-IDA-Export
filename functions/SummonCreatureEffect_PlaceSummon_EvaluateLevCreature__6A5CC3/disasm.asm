0x6A5CC3: lea     ecx, [esp+arg_10]
0x6A5CC7: call    TESContainer_constr
0x6A5CCC: lea     eax, [esp+arg_10]
0x6A5CD0: push    eax; int
0x6A5CD1: push    1
0x6A5CD3: mov     ecx, ebp
0x6A5CD5: mov     [esp+8+arg_28], 0
0x6A5CDD: call    Actor_GetLevel
0x6A5CE2: lea     ecx, [edi+24h]; this
0x6A5CE5: push    eax; int
0x6A5CE6: call    TESLeveledList_CalcLeveledForm
0x6A5CEB: push    0; int
0x6A5CED: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x6A5CF2: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A5CF7: push    0; int
0x6A5CF9: push    0; int
0x6A5CFB: lea     ecx, [esp+14h+arg_10]
0x6A5CFF: call    TESContainer_GetNthForm
0x6A5D04: push    eax; void *
0x6A5D05: call    OblivionDynamicCast
0x6A5D0A: add     esp, 14h
0x6A5D0D: lea     ecx, [esp+arg_10]
0x6A5D11: mov     ebx, eax
0x6A5D13: mov     [esp+arg_28], 0FFFFFFFFh
0x6A5D1B: call    TESContainer_destr
0x6A5D20: jmp     short SummonCreatureEffect_PlaceSummon___ValidateBaseObject

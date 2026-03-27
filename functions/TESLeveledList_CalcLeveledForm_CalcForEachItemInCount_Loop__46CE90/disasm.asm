0x46CE90: mov     edx, [esp+arg_10]
0x46CE94: push    ebx
0x46CE95: lea     eax, [esp+4+arg_14]
0x46CE99: push    eax
0x46CE9A: lea     ecx, [esp+8+arg_40]
0x46CE9E: push    ecx
0x46CE9F: push    edx
0x46CEA0: mov     ecx, ebp
0x46CEA2: mov     [esp+10h+arg_40], ebx
0x46CEA6: mov     [esp+10h+arg_14], ebx
0x46CEAA: call    TESLeveledList_SimpleCalcLeveledForm
0x46CEAF: mov     esi, [esp-8+arg_48]
0x46CEB3: cmp     esi, ebx
0x46CEB5: jz      short TESLeveledList_CalcLeveledForm___CalcForEachItemInCount_Loop_next
0x46CEB7: mov     edi, [esp-8+arg_1C]
0x46CEBB: cmp     di, bx
0x46CEBE: jz      short TESLeveledList_CalcLeveledForm___CalcForEachItemInCount_Loop_next
0x46CEC0: push    ebx; int
0x46CEC1: push    offset ??_R0?AVTESLeveledList@@@8; struct TypeDescriptor *
0x46CEC6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46CECB: push    ebx; int
0x46CECC: push    esi; void *
0x46CECD: call    OblivionDynamicCast
0x46CED2: add     esp, 14h
0x46CED5: cmp     eax, ebx
0x46CED7: jz      short loc_46CEED
0x46CED9: mov     edx, [esp-8+arg_44]
0x46CEDD: lea     ecx, [esp-8+arg_24]
0x46CEE1: push    ecx
0x46CEE2: push    edi; int
0x46CEE3: push    edx; int
0x46CEE4: mov     ecx, eax; this
0x46CEE6: call    TESLeveledList_CalcLeveledForm
0x46CEEB: jmp     short TESLeveledList_CalcLeveledForm___CalcForEachItemInCount_Loop_next
0x46CEED: push    ebx; int
0x46CEEE: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x46CEF3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46CEF8: push    ebx; int
0x46CEF9: push    esi; void *
0x46CEFA: call    OblivionDynamicCast
0x46CEFF: add     esp, 14h
0x46CF02: cmp     eax, ebx
0x46CF04: jz      short TESLeveledList_CalcLeveledForm___CalcForEachItemInCount_Loop_next
0x46CF06: movzx   ecx, di
0x46CF09: push    ebx; a4
0x46CF0A: push    ecx; a3
0x46CF0B: push    eax; a2
0x46CF0C: lea     ecx, [esp+4+arg_24]; this
0x46CF10: call    TESContainer_AddValidatedForm

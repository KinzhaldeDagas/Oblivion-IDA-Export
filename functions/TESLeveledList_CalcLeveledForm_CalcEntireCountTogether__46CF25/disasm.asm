0x46CF25: mov     ecx, [esp+arg_10]
0x46CF29: push    ebx
0x46CF2A: lea     edx, [esp+4+arg_14]
0x46CF2E: push    edx
0x46CF2F: lea     eax, [esp+8+arg_18]
0x46CF33: push    eax
0x46CF34: push    ecx
0x46CF35: mov     ecx, ebp
0x46CF37: mov     [esp+10h+arg_18], ebx
0x46CF3B: mov     [esp+10h+arg_14], ebx
0x46CF3F: call    TESLeveledList_SimpleCalcLeveledForm
0x46CF44: mov     esi, [esp-8+arg_20]
0x46CF48: cmp     esi, ebx
0x46CF4A: jz      short TESLeveledList_CalcLeveledForm___SetReturnValues
0x46CF4C: mov     edi, [esp-8+arg_1C]
0x46CF50: cmp     di, bx
0x46CF53: jz      short TESLeveledList_CalcLeveledForm___SetReturnValues
0x46CF55: push    ebx; int
0x46CF56: push    offset ??_R0?AVTESLeveledList@@@8; struct TypeDescriptor *
0x46CF5B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46CF60: push    ebx; int
0x46CF61: push    esi; void *
0x46CF62: call    OblivionDynamicCast
0x46CF67: add     esp, 14h
0x46CF6A: cmp     eax, ebx
0x46CF6C: jz      short loc_46CF82
0x46CF6E: mov     ecx, [esp-8+arg_44]
0x46CF72: lea     edx, [esp-8+arg_24]
0x46CF76: push    edx
0x46CF77: push    edi; int
0x46CF78: push    ecx; int
0x46CF79: mov     ecx, eax; this
0x46CF7B: call    TESLeveledList_CalcLeveledForm
0x46CF80: jmp     short loc_46CFAA
0x46CF82: push    ebx; int
0x46CF83: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x46CF88: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46CF8D: push    ebx; int
0x46CF8E: push    esi; void *
0x46CF8F: call    OblivionDynamicCast
0x46CF94: add     esp, 14h
0x46CF97: cmp     eax, ebx
0x46CF99: jz      short loc_46CFAA
0x46CF9B: movzx   edx, di
0x46CF9E: push    ebx; a4
0x46CF9F: push    edx; a3
0x46CFA0: push    eax; a2
0x46CFA1: lea     ecx, [esp+4+arg_24]; this
0x46CFA5: call    TESContainer_AddValidatedForm
0x46CFAA: movzx   eax, word ptr [esp-4+arg_44]
0x46CFAF: push    eax
0x46CFB0: lea     ecx, [esp+arg_20]
0x46CFB4: call    TESContainer_MultiplyContents

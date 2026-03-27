0x46CD58: mov     eax, [eax+4]
0x46CD5B: sub     edx, 1
0x46CD5E: cmp     eax, ebx
0x46CD60: jz      short TESLeveledList_SimpleCalcLeveledForm___Done_
0x46CD62: cmp     edx, ebx
0x46CD64: jnz     short TESLeveledList_SimpleCalcLeveledForm___FindRandomValidEntryLoop
0x46CD66: mov     eax, [eax]
0x46CD68: mov     esi, [eax+4]
0x46CD6B: movzx   edi, word ptr [eax+8]
0x46CD6F: push    ebx; int
0x46CD70: push    offset ??_R0?AVTESLeveledList@@@8; struct TypeDescriptor *
0x46CD75: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46CD7A: push    ebx; int
0x46CD7B: push    esi; void *
0x46CD7C: call    OblivionDynamicCast
0x46CD81: add     esp, 14h
0x46CD84: cmp     eax, ebx
0x46CD86: jz      short TESLeveledList_SimpleCalcLeveledForm___SetReturnValues
0x46CD88: mov     ecx, [esp+arg_20]
0x46CD8C: test    cl, cl
0x46CD8E: jz      short TESLeveledList_SimpleCalcLeveledForm___SetReturnValues
0x46CD90: push    ecx
0x46CD91: lea     ecx, [esp+4+arg_C]
0x46CD95: push    ecx
0x46CD96: mov     ecx, [esp+8+arg_14]
0x46CD9A: lea     edx, [esp+8+arg_20]
0x46CD9E: push    edx
0x46CD9F: push    ecx
0x46CDA0: mov     ecx, eax
0x46CDA2: mov     [esp+10h+arg_20], ebx
0x46CDA6: mov     [esp+10h+arg_C], ebx
0x46CDAA: call    TESLeveledList_SimpleCalcLeveledForm
0x46CDAF: mov     edx, [esp+10h]
0x46CDB3: mov     esi, [esp+10h+arg_10]
0x46CDB7: imul    edx, edi
0x46CDBA: movzx   edi, dx

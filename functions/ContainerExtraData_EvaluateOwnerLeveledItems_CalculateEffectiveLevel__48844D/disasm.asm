0x48844D: mov     ecx, [esi+4]; this
0x488450: test    ecx, ecx
0x488452: jz      short loc_48845B
0x488454: call    TESObjectREFR_GetContainer
0x488459: jmp     short loc_48845D
0x48845B: xor     eax, eax
0x48845D: push    7; a1
0x48845F: lea     ebp, [eax+8]
0x488462: xor     ebx, ebx
0x488464: call    TESForm_LookupByFormID
0x488469: push    ebx; int
0x48846A: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x48846F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x488474: push    ebx; int
0x488475: push    eax; void *
0x488476: call    OblivionDynamicCast
0x48847B: add     esp, 18h
0x48847E: lea     ecx, [eax+24h]
0x488481: call    TESActorBaseData_GetLevel
0x488486: mov     ecx, [esi+4]; this
0x488489: test    ecx, ecx
0x48848B: movzx   edi, ax
0x48848E: mov     [esp+arg_10], edi
0x488492: jz      short loc_48849B
0x488494: call    TESObjectREFR_GetContainer
0x488499: jmp     short loc_48849D
0x48849B: xor     eax, eax
0x48849D: push    0; int
0x48849F: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4884A4: push    offset ??_R0?AVTESContainer@@@8; struct _s_RTTICompleteObjectLocator *
0x4884A9: push    0; int
0x4884AB: push    eax; void *
0x4884AC: call    OblivionDynamicCast
0x4884B1: add     esp, 14h
0x4884B4: test    eax, eax
0x4884B6: jz      short loc_4884D5
0x4884B8: lea     esi, [eax+24h]
0x4884BB: mov     ecx, esi
0x4884BD: call    TESActorBaseData_GetLevel
0x4884C2: cmp     ax, di
0x4884C5: jge     short loc_4884D5
0x4884C7: mov     ecx, esi
0x4884C9: call    TESActorBaseData_GetLevel
0x4884CE: movzx   eax, ax
0x4884D1: mov     [esp+arg_10], eax
0x4884D5: test    ebp, ebp
0x4884D7: jz      ContainerExtraData_EvaluateOwnerLeveledItems___Done

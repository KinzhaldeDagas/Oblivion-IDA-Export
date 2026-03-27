0x469AD0: mov     eax, [edi]
0x469AD2: test    eax, eax
0x469AD4: jz      short TESContainer_GetBestWeapon___ContentLoop_Next
0x469AD6: mov     eax, [eax+4]
0x469AD9: push    0; int
0x469ADB: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x469AE0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x469AE5: push    0; int
0x469AE7: push    eax; void *
0x469AE8: call    OblivionDynamicCast
0x469AED: mov     esi, eax
0x469AEF: add     esp, 14h
0x469AF2: test    esi, esi
0x469AF4: jz      short TESContainer_GetBestWeapon___ContentLoop_Next
0x469AF6: push    esi
0x469AF7: mov     ecx, ebp
0x469AF9: call    TESActorBase_GetEquippableItemRating
0x469AFE: fstp    [esp+arg_14]
0x469B02: fld     [esp+arg_14]
0x469B06: fld     [esp+arg_C]
0x469B0A: fcomp   st(1)
0x469B0C: fnstsw  ax
0x469B0E: test    ah, 5
0x469B11: jp      short loc_469B1B
0x469B13: fstp    [esp+arg_C]
0x469B17: mov     ebx, esi
0x469B19: jmp     short TESContainer_GetBestWeapon___ContentLoop_Next
0x469B1B: fstp    st

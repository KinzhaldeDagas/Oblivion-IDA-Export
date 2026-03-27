0x4694A0: mov     eax, [esp+arg_0]
0x4694A4: push    esi
0x4694A5: push    0; int
0x4694A7: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4694AC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4694B1: push    0; int
0x4694B3: push    eax; void *
0x4694B4: call    OblivionDynamicCast
0x4694B9: mov     esi, eax
0x4694BB: add     esp, 14h
0x4694BE: test    esi, esi
0x4694C0: jnz     short loc_4694C4
0x4694C2: pop     esi
0x4694C3: retn
0x4694C4: mov     ecx, [esp+4+arg_4]; this
0x4694C8: test    ecx, ecx
0x4694CA: jnz     short loc_4694D1
0x4694CC: lea     eax, [esi+38h]
0x4694CF: pop     esi
0x4694D0: retn
0x4694D1: call    TESObjectREFR_GetOwner
0x4694D6: mov     ecx, eax
0x4694D8: xor     eax, eax
0x4694DA: test    ecx, ecx
0x4694DC: jz      short loc_4694E9
0x4694DE: cmp     byte ptr [ecx+4], 23h ; '#'
0x4694E2: jnz     short loc_4694E9
0x4694E4: call    TESActorBase_IsFemale
0x4694E9: push    eax
0x4694EA: mov     ecx, esi
0x4694EC: call    TESBipedModelForm_GetWorldModel
0x4694F1: pop     esi
0x4694F2: retn

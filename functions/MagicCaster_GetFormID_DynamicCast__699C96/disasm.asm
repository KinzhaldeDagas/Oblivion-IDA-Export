0x699C96: push    0; int
0x699C98: push    offset ??_R0?AVNonActorMagicCaster@@@8; struct TypeDescriptor *
0x699C9D: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x699CA2: push    0; int
0x699CA4: push    esi; void *
0x699CA5: call    OblivionDynamicCast
0x699CAA: add     esp, 14h
0x699CAD: test    edi, edi
0x699CAF: jz      short MagicCaster_GetFormID___BadParentForm_
0x699CB1: mov     eax, [edi+0Ch]
0x699CB4: pop     edi
0x699CB5: pop     esi
0x699CB6: retn

0x4BB810: push    ebx
0x4BB811: mov     ebx, [esp+4+arg_0]
0x4BB815: push    esi
0x4BB816: push    edi
0x4BB817: push    0; int
0x4BB819: push    offset ??_R0?AVTESSigilStone@@@8; struct TypeDescriptor *
0x4BB81E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BB823: push    0; int
0x4BB825: push    ebx; void *
0x4BB826: mov     edi, ecx
0x4BB828: call    OblivionDynamicCast
0x4BB82D: mov     esi, eax
0x4BB82F: add     esp, 14h
0x4BB832: test    esi, esi
0x4BB834: jz      short loc_4BB84A
0x4BB836: push    ebx
0x4BB837: mov     ecx, edi
0x4BB839: call    TESObjectMISC_CopyFrom
0x4BB83E: add     esi, 78h ; 'x'
0x4BB841: push    esi
0x4BB842: lea     ecx, [edi+78h]
0x4BB845: call    EffectItemList_CopyFrom
0x4BB84A: pop     edi
0x4BB84B: pop     esi
0x4BB84C: pop     ebx
0x4BB84D: retn    4

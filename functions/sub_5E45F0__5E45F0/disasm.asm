0x5E45F0: push    esi
0x5E45F1: mov     esi, [esp+4+arg_0]
0x5E45F5: mov     eax, [esi]
0x5E45F7: mov     edx, [eax+18h]
0x5E45FA: push    edi
0x5E45FB: mov     edi, ecx
0x5E45FD: mov     ecx, esi
0x5E45FF: call    edx
0x5E4601: cmp     eax, 7
0x5E4604: jz      short loc_5E4618
0x5E4606: mov     eax, [esi]
0x5E4608: mov     edx, [eax+18h]
0x5E460B: mov     ecx, esi
0x5E460D: call    edx
0x5E460F: cmp     eax, 8
0x5E4612: jnz     loc_5E46BB
0x5E4618: push    ebp
0x5E4619: push    0; int
0x5E461B: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x5E4620: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5E4625: push    0; int
0x5E4627: push    esi; void *
0x5E4628: call    OblivionDynamicCast
0x5E462D: add     esp, 14h
0x5E4630: cmp     [esp+0Ch+arg_4], 0
0x5E4635: mov     ebp, eax
0x5E4637: jz      short loc_5E4682
0x5E4639: mov     eax, [esi]
0x5E463B: mov     edx, [eax+18h]
0x5E463E: mov     ecx, esi
0x5E4640: call    edx
0x5E4642: cmp     eax, 7
0x5E4645: jnz     short loc_5E4670
0x5E4647: push    0; int
0x5E4649: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x5E464E: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5E4653: push    0; int
0x5E4655: push    esi; void *
0x5E4656: call    OblivionDynamicCast
0x5E465B: add     esp, 14h
0x5E465E: push    1
0x5E4660: push    0
0x5E4662: push    eax
0x5E4663: mov     ecx, edi
0x5E4665: call    Actor_ConsumePotion?
0x5E466A: pop     ebp
0x5E466B: pop     edi
0x5E466C: pop     esi
0x5E466D: retn    8
0x5E4670: push    1
0x5E4672: push    0
0x5E4674: push    ebp
0x5E4675: mov     ecx, edi
0x5E4677: call    Actor_EquipIngredient?
0x5E467C: pop     ebp
0x5E467D: pop     edi
0x5E467E: pop     esi
0x5E467F: retn    8
0x5E4682: mov     eax, [edi+5Ch]
0x5E4685: mov     edx, [eax+34h]
0x5E4688: push    ebx
0x5E4689: lea     ebx, [edi+5Ch]
0x5E468C: push    esi
0x5E468D: mov     ecx, ebx
0x5E468F: call    edx
0x5E4691: push    0
0x5E4693: mov     ecx, ebx
0x5E4695: call    MagicCaster_UseActiveMagicItem
0x5E469A: mov     eax, [edi]
0x5E469C: mov     edx, [eax+100h]
0x5E46A2: push    0
0x5E46A4: push    1
0x5E46A6: push    0
0x5E46A8: push    0
0x5E46AA: push    0
0x5E46AC: push    0
0x5E46AE: push    0
0x5E46B0: push    1
0x5E46B2: push    0
0x5E46B4: push    ebp
0x5E46B5: mov     ecx, edi
0x5E46B7: call    edx
0x5E46B9: pop     ebx
0x5E46BA: pop     ebp
0x5E46BB: pop     edi
0x5E46BC: pop     esi
0x5E46BD: retn    8

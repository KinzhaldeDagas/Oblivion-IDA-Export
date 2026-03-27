0x5F45B9: cmp     ebp, ds:0B333C4h
0x5F45BF: jnz     short Actor_MagicCaster_IsMagicItemUseable___CheckImmuneToSilence_
0x5F45C1: mov     ecx, [esp+arg_10]
0x5F45C5: mov     eax, [ecx]
0x5F45C7: mov     edx, [eax+18h]
0x5F45CA: call    edx
0x5F45CC: cmp     eax, 2
0x5F45CF: jz      short Actor_MagicCaster_IsMagicItemUseable___CheckImmuneToSilence_
0x5F45D1: mov     ecx, [esp+arg_10]
0x5F45D5: mov     eax, [ecx]
0x5F45D7: mov     edx, [eax+18h]
0x5F45DA: call    edx
0x5F45DC: cmp     eax, 3
0x5F45DF: jz      short Actor_MagicCaster_IsMagicItemUseable___CheckImmuneToSilence_
0x5F45E1: mov     ecx, edi
0x5F45E3: call    EffectItemList_GetSchoolAV
0x5F45E8: push    eax
0x5F45E9: mov     ecx, esi
0x5F45EB: call    Actor_GetSkillMasteryLevel
0x5F45F0: mov     esi, eax
0x5F45F2: mov     eax, [edi]
0x5F45F4: mov     edx, [eax+8]
0x5F45F7: mov     ecx, edi
0x5F45F9: call    edx
0x5F45FB: cmp     esi, eax
0x5F45FD: setnl   [esp+arg_F]

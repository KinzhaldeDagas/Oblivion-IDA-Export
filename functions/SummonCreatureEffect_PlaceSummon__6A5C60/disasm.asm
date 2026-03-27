0x6A5C60: push    0FFFFFFFFh
0x6A5C62: push    offset SummonCreatureEffect_PlaceSummon_SEH
0x6A5C67: mov     eax, large fs:0
0x6A5C6D: push    eax
0x6A5C6E: sub     esp, 10h
0x6A5C71: push    ebx
0x6A5C72: push    ebp
0x6A5C73: push    esi
0x6A5C74: push    edi
0x6A5C75: mov     eax, ds:0B30AACh
0x6A5C7A: xor     eax, esp
0x6A5C7C: push    eax
0x6A5C7D: lea     eax, [esp+30h+var_C]
0x6A5C81: mov     large fs:0, eax
0x6A5C87: mov     esi, ecx
0x6A5C89: mov     ecx, [esi+20h]; this
0x6A5C8C: test    ecx, ecx
0x6A5C8E: jz      SummonCreatureEffect_PlaceSummon___Done
0x6A5C94: call    MagicTarget_GetParentActor
0x6A5C99: mov     ebp, eax
0x6A5C9B: test    ebp, ebp
0x6A5C9D: jz      SummonCreatureEffect_PlaceSummon___Done
0x6A5CA3: mov     eax, [esi+38h]
0x6A5CA6: push    0; int
0x6A5CA8: push    offset ??_R0?AVTESLevCreature@@@8; struct TypeDescriptor *
0x6A5CAD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A5CB2: push    0; int
0x6A5CB4: push    eax; void *
0x6A5CB5: call    OblivionDynamicCast
0x6A5CBA: mov     edi, eax
0x6A5CBC: add     esp, 14h
0x6A5CBF: test    edi, edi
0x6A5CC1: jz      short SummonCreatureEffect_PlaceSummon___CastToBoundObj

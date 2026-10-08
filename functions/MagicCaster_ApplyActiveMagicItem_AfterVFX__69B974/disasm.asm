0x69B974: lea     ecx, [esp+arg_44]
0x69B978: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x69B97D: mov     eax, [esi]
0x69B97F: mov     edx, [eax+30h]
0x69B982: mov     ecx, esi
0x69B984: call    edx
0x69B986: mov     ecx, eax
0x69B988: add     ecx, 0Ch
0x69B98B: call    EffectItemList_HasOnTarget; True iff list has an EffectItem with range==2 (Target) and EffectSetting flag 0x400000 clear. Does not require hostile/detrimental.
0x69B990: test    al, al
0x69B992: jz      short MagicCaster_ApplyActiveMagicItem___ModCasterExperience
0x69B994: mov     ecx, esi
0x69B996: call    MagicCaster_CreateMagicProj??
0x69B99B: jmp     short MagicCaster_ApplyActiveMagicItem___UnkCleanup?

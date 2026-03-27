0x69B974: lea     ecx, [esp+arg_44]
0x69B978: call    BSSimpleList_Clear
0x69B97D: mov     eax, [esi]
0x69B97F: mov     edx, [eax+30h]
0x69B982: mov     ecx, esi
0x69B984: call    edx
0x69B986: mov     ecx, eax
0x69B988: add     ecx, 0Ch
0x69B98B: call    EffectItemList_HasOnTarget
0x69B990: test    al, al
0x69B992: jz      short MagicCaster_ApplyActiveMagicItem___ModCasterExperience
0x69B994: mov     ecx, esi
0x69B996: call    MagicCaster_CreateMagicProj??
0x69B99B: jmp     short MagicCaster_ApplyActiveMagicItem___UnkCleanup?

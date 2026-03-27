0x6A2000: mov     eax, [ecx]
0x6A2002: push    ebx
0x6A2003: push    ebp
0x6A2004: mov     ebp, [esp+8+arg_0]
0x6A2008: cmp     ebp, 1
0x6A200B: push    esi
0x6A200C: push    edi
0x6A200D: jnz     short loc_6A2088
0x6A200F: mov     edx, [eax+4]
0x6A2012: push    0; int
0x6A2014: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6A2019: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6A201E: push    0; int
0x6A2020: call    edx
0x6A2022: push    eax; void *
0x6A2023: call    OblivionDynamicCast
0x6A2028: mov     ebx, eax
0x6A202A: add     esp, 14h
0x6A202D: test    ebx, ebx
0x6A202F: jz      MagicTarget_RemoveMagicItemType?___Done
0x6A2035: push    0; a2
0x6A2037: mov     ecx, ebx; this
0x6A2039: call    Actor_GetActorBaseForm
0x6A203E: add     eax, 58h ; 'X'
0x6A2041: jz      MagicTarget_RemoveMagicItemType?___Done
0x6A2047: mov     edi, [eax+4]
0x6A204A: test    edi, edi
0x6A204C: jnz     short loc_6A2056
0x6A204E: cmp     [eax], edi
0x6A2050: jz      MagicTarget_RemoveMagicItemType?___Done
0x6A2056: mov     esi, [eax]
0x6A2058: test    esi, esi
0x6A205A: jz      short loc_6A206C
0x6A205C: mov     eax, [esi+18h]
0x6A205F: mov     edx, [eax+18h]
0x6A2062: lea     ecx, [esi+18h]
0x6A2065: call    edx
0x6A2067: cmp     eax, 1
0x6A206A: jz      short loc_6A2079
0x6A206C: test    edi, edi
0x6A206E: mov     eax, edi
0x6A2070: jnz     short loc_6A2047
0x6A2072: pop     edi
0x6A2073: pop     esi
0x6A2074: pop     ebp
0x6A2075: pop     ebx
0x6A2076: retn    4
0x6A2079: mov     eax, [ebx]
0x6A207B: mov     edx, [eax+2E0h]
0x6A2081: push    esi
0x6A2082: mov     ecx, ebx
0x6A2084: call    edx
0x6A2086: jmp     short loc_6A2035
0x6A2088: mov     edx, [eax+8]
0x6A208B: call    edx
0x6A208D: test    eax, eax
0x6A208F: jz      short MagicTarget_RemoveMagicItemType?___Done
0x6A2091: mov     edi, [eax+4]
0x6A2094: test    edi, edi
0x6A2096: jnz     short loc_6A209C
0x6A2098: cmp     [eax], edi
0x6A209A: jz      short MagicTarget_RemoveMagicItemType?___Done
0x6A209C: mov     esi, [eax]
0x6A209E: test    esi, esi
0x6A20A0: jz      short loc_6A20F4
0x6A20A2: cmp     byte ptr [esi+11h], 0
0x6A20A6: jnz     short loc_6A20F4
0x6A20A8: mov     eax, [esi+8]
0x6A20AB: push    0; int
0x6A20AD: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x6A20B2: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x6A20B7: push    0; int
0x6A20B9: push    eax; void *
0x6A20BA: call    OblivionDynamicCast
0x6A20BF: add     esp, 14h
0x6A20C2: test    eax, eax
0x6A20C4: jz      short loc_6A20D2
0x6A20C6: lea     ecx, [eax+30h]
0x6A20C9: call    EffectItemList_AllEffectsHostile
0x6A20CE: mov     bl, al
0x6A20D0: jmp     short loc_6A20D4
0x6A20D2: xor     bl, bl
0x6A20D4: mov     ecx, [esi+8]
0x6A20D7: mov     eax, [ecx]
0x6A20D9: mov     edx, [eax+18h]
0x6A20DC: call    edx
0x6A20DE: cmp     eax, ebp
0x6A20E0: jz      short loc_6A20EB
0x6A20E2: test    bl, bl
0x6A20E4: jz      short loc_6A20F4
0x6A20E6: cmp     ebp, 5
0x6A20E9: jnz     short loc_6A20F4
0x6A20EB: push    0
0x6A20ED: mov     ecx, esi
0x6A20EF: call    ActiveEffect_Base_Remove
0x6A20F4: test    edi, edi
0x6A20F6: mov     eax, edi
0x6A20F8: jnz     short loc_6A2091

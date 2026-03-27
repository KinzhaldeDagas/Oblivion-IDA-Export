0x69B5B2: call    TESObjectREFR_GetParentCell
0x69B5B7: mov     edx, [esi]
0x69B5B9: push    eax; int
0x69B5BA: mov     eax, [edx+30h]
0x69B5BD: push    edi; int
0x69B5BE: mov     ecx, esi
0x69B5C0: call    eax
0x69B5C2: push    eax; int
0x69B5C3: mov     ecx, esi
0x69B5C5: call    MagicCaster_ApplyAOE??
0x69B5CA: cmp     [esp-20h+arg_32], 0
0x69B5CF: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B5D1: mov     [esp-20h+arg_30], 0

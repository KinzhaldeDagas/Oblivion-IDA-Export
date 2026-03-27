0x69AFDF: mov     edx, [esi]
0x69AFE1: mov     eax, [edx+30h]
0x69AFE4: mov     ecx, esi
0x69AFE6: call    eax
0x69AFE8: mov     ecx, eax
0x69AFEA: add     ecx, 0Ch
0x69AFED: call    EffectItemList_HasTouchEffect
0x69AFF2: test    al, al
0x69AFF4: jnz     short MagicCaster_ApplyActiveMagicItem___GetTouchTarget
0x69AFF6: cmp     [esp+arg_11], bl
0x69AFFA: jz      MagicCaster_ApplyActiveMagicItem___CheckCasterNiNode??

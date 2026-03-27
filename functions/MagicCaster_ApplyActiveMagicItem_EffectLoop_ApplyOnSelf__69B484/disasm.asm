0x69B484: mov     edx, [esi]
0x69B486: mov     eax, [edx+28h]
0x69B489: push    edi
0x69B48A: mov     ecx, esi
0x69B48C: call    eax
0x69B48E: test    al, al
0x69B490: jz      MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B496: mov     [esp+arg_10], 1
0x69B49B: jmp     MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff

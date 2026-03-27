0x6A5BD6: mov     eax, esi
0x6A5BD8: test    eax, eax
0x6A5BDA: jnz     short SummonCreatureEffect_DispelOtherSummons___EffectLoop_Test
0x6A5BDC: test    ecx, ecx
0x6A5BDE: pop     esi
0x6A5BDF: jz      short SummonCreatureEffect_DispelOtherSummons___Done
0x6A5BE1: cmp     edi, ds:0B38280h
0x6A5BE7: jle     short SummonCreatureEffect_DispelOtherSummons___Done
0x6A5BE9: push    0
0x6A5BEB: call    ActiveEffect_Base_Remove

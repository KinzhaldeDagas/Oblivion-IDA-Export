0x69B129: mov     edx, [esi]
0x69B12B: mov     eax, [edx+24h]
0x69B12E: mov     ecx, esi
0x69B130: mov     [esp+arg_13], 0
0x69B135: call    eax
0x69B137: test    eax, eax
0x69B139: jz      short MagicCaster_ApplyActiveMagicItem___GetTargetREFR
0x69B13B: cmp     word ptr [eax+0B8h], 0
0x69B143: jbe     short MagicCaster_ApplyActiveMagicItem___GetTargetREFR
0x69B145: cmp     [esp+arg_78], 0
0x69B14A: jnz     short MagicCaster_ApplyActiveMagicItem___GetTargetREFR
0x69B14C: mov     [esp+arg_13], 1

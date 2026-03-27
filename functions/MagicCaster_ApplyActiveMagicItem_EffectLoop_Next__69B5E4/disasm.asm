0x69B5E4: mov     edx, [esi]
0x69B5E6: mov     eax, [edx+30h]
0x69B5E9: mov     ecx, esi
0x69B5EB: call    eax
0x69B5ED: mov     edx, [eax]
0x69B5EF: mov     ecx, eax
0x69B5F1: mov     eax, [edx+18h]
0x69B5F4: call    eax
0x69B5F6: cmp     eax, 8
0x69B5F9: jz      short MagicCaster_ApplyActiveMagicItem___GetVFXInfo
0x69B5FB: mov     eax, [edi+8]
0x69B5FE: test    eax, eax
0x69B600: jz      short MagicCaster_ApplyActiveMagicItem___GetVFXInfo
0x69B602: lea     edi, [eax-4]
0x69B605: test    edi, edi
0x69B607: mov     [esp+arg_30], edi
0x69B60B: jnz     MagicCaster_ApplyActiveMagicItem___EffectLoop_Body

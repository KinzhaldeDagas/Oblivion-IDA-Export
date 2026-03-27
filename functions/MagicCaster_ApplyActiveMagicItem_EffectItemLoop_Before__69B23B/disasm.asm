0x69B23B: mov     edx, [esi]
0x69B23D: mov     eax, [edx+30h]
0x69B240: mov     ecx, esi
0x69B242: call    eax
0x69B244: test    eax, eax
0x69B246: jz      MagicCaster_ApplyActiveMagicItem___GetVFXInfo
0x69B24C: add     eax, 0Ch
0x69B24F: mov     [esp+arg_30], eax
0x69B253: jz      MagicCaster_ApplyActiveMagicItem___GetVFXInfo
0x69B259: mov     edi, eax
0x69B25B: jmp     short MagicCaster_ApplyActiveMagicItem___EffectLoop_Body

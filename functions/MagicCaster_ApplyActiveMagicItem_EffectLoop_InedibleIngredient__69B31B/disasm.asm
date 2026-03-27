0x69B31B: mov     ecx, [edi+0Ch]
0x69B31E: fldz
0x69B320: mov     eax, [ecx+1Ch]
0x69B323: fst     [esp+arg_24]; int
0x69B327: fst     [esp+arg_20]; int
0x69B32B: mov     ecx, [eax+58h]
0x69B32E: mov     eax, ecx
0x69B330: shr     eax, 7
0x69B333: and     al, 1
0x69B335: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_T2InedbibleIngred
0x69B337: mov     edx, ecx
0x69B339: shr     edx, 8
0x69B33C: test    dl, 1
0x69B33F: jnz     short MagicCaster_ApplyActiveMagicItem___EffectLoop_T2InedbibleIngred

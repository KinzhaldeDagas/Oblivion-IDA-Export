0x69B000: mov     eax, [esp+arg_78]
0x69B004: test    eax, eax
0x69B006: jz      short loc_69B013
0x69B008: cmp     byte ptr [eax+4], 22h ; '"'
0x69B00C: setz    al
0x69B00F: test    al, al
0x69B011: jnz     short MagicCaster_ApplyActiveMagicItem___CheckTouchTargetRange
0x69B013: test    ebp, ebp
0x69B015: jnz     short loc_69B024
0x69B017: mov     edx, [esi]
0x69B019: mov     eax, [edx+38h]
0x69B01C: mov     ecx, esi
0x69B01E: call    eax
0x69B020: test    eax, eax
0x69B022: jnz     short MagicCaster_ApplyActiveMagicItem___CheckTouchTargetRange
0x69B024: mov     edx, [esi]
0x69B026: mov     eax, [edx+0Ch]
0x69B029: mov     ecx, esi
0x69B02B: call    eax
0x69B02D: mov     ebx, eax
0x69B02F: test    ebx, ebx
0x69B031: mov     [esp+arg_18], ebx
0x69B035: jnz     MagicCaster_ApplyActiveMagicItem___CheckCasterNiNode??

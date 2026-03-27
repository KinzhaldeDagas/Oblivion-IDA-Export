0x69B4A0: cmp     eax, 1
0x69B4A3: jz      short loc_69B4B3
0x69B4A5: test    cl, cl
0x69B4A7: jz      MagicCaster_ApplyActiveMagicItem___EffectLoop_DestroyActvEff
0x69B4AD: mov     eax, [esp+arg_34]
0x69B4B1: jmp     short loc_69B4C1
0x69B4B3: test    cl, cl
0x69B4B5: jz      short loc_69B4BD
0x69B4B7: mov     eax, [esp+arg_34]
0x69B4BB: jmp     short loc_69B4C1
0x69B4BD: mov     eax, [esp+arg_38]
0x69B4C1: cmp     ebp, eax
0x69B4C3: jz      short loc_69B4C9
0x69B4C5: or      dword ptr [edi+14h], 0Eh
0x69B4C9: cmp     [esp+arg_18], 0
0x69B4CE: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_ApplyOnTouch_NoTargetAOE
0x69B4D0: mov     edx, [esi]
0x69B4D2: mov     eax, [edx+30h]
0x69B4D5: mov     ecx, esi
0x69B4D7: call    eax
0x69B4D9: mov     ecx, [esp+arg_18]
0x69B4DD: mov     edx, [ecx]
0x69B4DF: push    0
0x69B4E1: push    edi
0x69B4E2: push    eax
0x69B4E3: mov     eax, [edx]
0x69B4E5: push    esi
0x69B4E6: call    eax
0x69B4E8: test    al, al
0x69B4EA: jz      short MagicCaster_ApplyActiveMagicItem___EffectLoop_ApplyOnTouch_TargetAOE
0x69B4EC: mov     byte ptr [esp+arg_10], 1

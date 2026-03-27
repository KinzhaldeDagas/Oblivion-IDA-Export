0x6A2B13: mov     esi, [ebx]
0x6A2B15: test    esi, esi
0x6A2B17: jz      short MagicTarget_AddEffect___TargetEffectLoop_Next
0x6A2B19: mov     eax, [esi+0Ch]
0x6A2B1C: mov     ecx, [ebp+0Ch]
0x6A2B1F: push    eax
0x6A2B20: push    ecx
0x6A2B21: call    Magic_BoundItemSlotOverlap
0x6A2B26: add     esp, 8
0x6A2B29: test    al, al
0x6A2B2B: jz      short MagicTarget_AddEffect___TargetEffectLoop_Next
0x6A2B2D: mov     eax, [esi+8]
0x6A2B30: push    esi
0x6A2B31: push    0
0x6A2B33: push    eax
0x6A2B34: mov     ecx, edi
0x6A2B36: call    MagicTarget_RemoveEffects

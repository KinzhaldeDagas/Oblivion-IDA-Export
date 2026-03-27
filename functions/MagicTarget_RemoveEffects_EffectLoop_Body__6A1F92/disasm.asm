0x6A1F92: mov     esi, [eax]
0x6A1F94: test    esi, esi
0x6A1F96: jz      short MagicTarget_RemoveEffects___EffectLoop_Next
0x6A1F98: cmp     byte ptr [esi+11h], 0
0x6A1F9C: jnz     short MagicTarget_RemoveEffects___EffectLoop_Next
0x6A1F9E: mov     eax, [esp+arg_10]
0x6A1FA2: cmp     [esi+8], eax
0x6A1FA5: jnz     short MagicTarget_RemoveEffects___EffectLoop_Next
0x6A1FA7: test    ebp, ebp
0x6A1FA9: jz      short loc_6A1FB7
0x6A1FAB: xor     eax, eax
0x6A1FAD: cmp     [esi+24h], ebp
0x6A1FB0: setz    al
0x6A1FB3: test    eax, eax
0x6A1FB5: jz      short MagicTarget_RemoveEffects___EffectLoop_Next
0x6A1FB7: test    ebx, ebx
0x6A1FB9: jz      short MagicTarget_RemoveEffects___RemoveEffect
0x6A1FBB: mov     ecx, [ebx+30h]
0x6A1FBE: xor     eax, eax
0x6A1FC0: cmp     ecx, [esi+30h]
0x6A1FC3: setz    al
0x6A1FC6: test    eax, eax
0x6A1FC8: jz      short MagicTarget_RemoveEffects___EffectLoop_Next
0x6A1FCA: mov     eax, [ebx+0Ch]
0x6A1FCD: mov     ecx, [esi+0Ch]
0x6A1FD0: push    eax
0x6A1FD1: call    EffectItem_CompareTo
0x6A1FD6: test    al, al
0x6A1FD8: jnz     short MagicTarget_RemoveEffects___EffectLoop_Next

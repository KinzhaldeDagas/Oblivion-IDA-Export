0x69AF9E: mov     edx, [esi]
0x69AFA0: mov     eax, [edx+30h]
0x69AFA3: xor     ebx, ebx
0x69AFA5: mov     ecx, esi
0x69AFA7: mov     [esp+arg_14], ebp
0x69AFAB: mov     [esp+arg_18], ebx
0x69AFAF: call    eax
0x69AFB1: mov     edx, [eax]
0x69AFB3: mov     ecx, eax
0x69AFB5: mov     eax, [edx+18h]
0x69AFB8: call    eax
0x69AFBA: cmp     eax, 7
0x69AFBD: jnz     short loc_69AFDB
0x69AFBF: mov     edx, [esi]
0x69AFC1: mov     eax, [edx+30h]
0x69AFC4: mov     ecx, esi
0x69AFC6: call    eax
0x69AFC8: mov     ecx, eax
0x69AFCA: add     ecx, 0Ch
0x69AFCD: call    EffectItemList_AllEffectsHostile
0x69AFD2: test    al, al
0x69AFD4: mov     [esp+arg_11], 1
0x69AFD9: jnz     short MagicCaster_ApplyActiveMagicItem___CheckIsOnTouch
0x69AFDB: mov     [esp+arg_11], bl

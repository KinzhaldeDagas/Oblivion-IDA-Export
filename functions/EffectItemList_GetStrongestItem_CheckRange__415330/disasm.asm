0x415330: mov     eax, [esp+arg_14]
0x415334: cmp     eax, 3
0x415337: jz      short loc_41533E
0x415339: cmp     [esi+10h], eax
0x41533C: jnz     short EffectItemList_GetStrongestItem___LoopContinue
0x41533E: mov     [esp+arg_C], esi
0x415342: mov     ebx, edi

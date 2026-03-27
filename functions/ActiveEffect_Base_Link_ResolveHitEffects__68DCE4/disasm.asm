0x68DCE4: mov     eax, ds:0B33B00h
0x68DCE9: cmp     byte ptr [eax+7Ch], 2Ah ; '*'
0x68DCED: jb      short ActiveEffect_Base_Link___Done
0x68DCEF: mov     esi, [edi+34h]
0x68DCF2: test    esi, esi
0x68DCF4: jz      short ActiveEffect_Base_Link___Done
0x68DCF6: push    ebx
0x68DCF7: mov     ebx, [esp+4+arg_8]
0x68DCFB: jmp     short ActiveEffect_Base_Link___LoopTest

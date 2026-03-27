0x68DF50: mov     eax, [esi]
0x68DF52: push    edi
0x68DF53: push    eax
0x68DF54: call    ActiveEffect_Base_Save
0x68DF59: add     [esp+8+arg_8], 1
0x68DF5E: mov     esi, [esi+4]
0x68DF61: add     esp, 8
0x68DF64: test    esi, esi
0x68DF66: jnz     short ActiveEffect_Base_SaveAEList___LoopTest

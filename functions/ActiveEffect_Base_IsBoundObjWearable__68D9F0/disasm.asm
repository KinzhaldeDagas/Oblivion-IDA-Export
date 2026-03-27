0x68D9F0: mov     eax, [ecx+30h]
0x68D9F3: test    eax, eax
0x68D9F5: jz      short ActiveEffect_Base_IsBoundObjWearable___Return_false
0x68D9F7: mov     al, [eax+4]
0x68D9FA: cmp     al, 14h
0x68D9FC: jz      short ActiveEffect_Base_IsBoundObjWearable___Return_true
0x68D9FE: cmp     al, 16h
0x68DA00: jnz     short ActiveEffect_Base_IsBoundObjWearable___Return_false

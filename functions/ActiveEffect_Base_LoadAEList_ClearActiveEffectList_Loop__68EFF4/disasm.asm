0x68EFF4: mov     eax, [ebx+4]
0x68EFF7: mov     esi, [eax+4]
0x68EFFA: push    eax
0x68EFFB: call    FormHeapFree
0x68F000: add     esp, 4
0x68F003: test    esi, esi
0x68F005: mov     [ebx+4], esi
0x68F008: jnz     short ActiveEffect_Base_LoadAEList?___ClearActiveEffectList_Loop

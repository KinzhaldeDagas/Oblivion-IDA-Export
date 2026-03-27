0x6A5D42: mov     ecx, [esi+0Ch]
0x6A5D45: mov     ecx, [ecx+1Ch]
0x6A5D48: lea     edx, [esp+arg_10]
0x6A5D4C: push    edx
0x6A5D4D: call    EffectSetting_GetName
0x6A5D52: mov     ecx, [eax+4]
0x6A5D55: mov     edx, [eax]
0x6A5D57: push    ecx
0x6A5D58: push    edx; ArgList
0x6A5D59: push    offset aSEffectHasNoAs; "%s effect has no associated creature."
0x6A5D5E: mov     [esp+0Ch+arg_28], 1
0x6A5D66: call    PrintError
0x6A5D6B: mov     eax, dword ptr [esp+0Ch+arg_10]
0x6A5D6F: push    eax
0x6A5D70: call    FormHeapFree
0x6A5D75: add     esp, 10h
0x6A5D78: jmp     SummonCreatureEffect_PlaceSummon___Done

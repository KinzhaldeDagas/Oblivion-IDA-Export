0x6A2353: fld     [esp+arg_14]
0x6A2357: push    ecx
0x6A2358: mov     ecx, esi
0x6A235A: fstp    [esp+4+var_4]
0x6A235D: call    ActiveEffect_Base_ProcessEffect
0x6A2362: cmp     byte ptr [esi+11h], 0
0x6A2366: jz      short MagicTarget_ProcessEffects___ActvEffLoop_Next

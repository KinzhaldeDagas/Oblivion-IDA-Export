0x6A2353: fld     [esp+arg_14]
0x6A2357: push    ecx
0x6A2358: mov     ecx, esi
0x6A235A: fstp    [esp+4+var_4]
0x6A235D: call    ActiveEffect_Base_ProcessEffect; Verified active-effect update loop: MagicTarget_ProcessEffects walks the target's active-effect list and calls ActiveEffect_Base_ProcessEffect for each eligible ActiveEffect, passing the effect-item/magic context and frame delta. If processing marks an effect removed, the loop unlinks it and invokes its virtual destructor.
0x6A2362: cmp     byte ptr [esi+11h], 0; Verified list lifecycle: after ActiveEffect_Base_ProcessEffect, MagicTarget_ProcessEffects checks bTerminated; terminated entries are unlinked from the active list and destroyed through their virtual destructor.
0x6A2366: jz      short MagicTarget_ProcessEffects___ActvEffLoop_Next

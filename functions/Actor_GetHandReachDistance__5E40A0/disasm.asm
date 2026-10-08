0x5E40A0: fld     dword ptr ds:0B36E90h; Returns the actor's hand-to-hand reach distance by converting the native hand-reach game setting through Calc_GetCombatDistance.
0x5E40A6: push    ecx
0x5E40A7: fstp    [esp+4+baseDistance]; baseDistance
0x5E40AA: call    Calc_GetCombatDistance; Converts a base reach/distance value to world combat distance using the Oblivion combat-distance game-setting multiplier.
0x5E40AF: add     esp, 4
0x5E40B2: retn

0x6D5440: fld     [esp+arg_0]
0x6D5444: push    esi
0x6D5445: push    ecx
0x6D5446: fstp    [esp+8+applicationTime]; applicationTime
0x6D5449: mov     esi, ecx
0x6D544B: call    NiTimeController_IsUpdateUnchanged; Return true only when an active NiTimeController can reuse its previous interpolation result. Active bit is NiTimeController.flags +0x08 bit 3. On an application-time change, computeScaledTimeOnUpdate +0x2C normally calls virtual ComputeScaledTime and refreshes cachedScaledTime +0x28; forceUpdate +0x38 forces one changed result and is cleared. If +0x2C is zero, report changed without recomputing +0x28.
0x6D5450: test    al, al
0x6D5452: jnz     short loc_6D5458
0x6D5454: mov     byte ptr [esi+54h], 1
0x6D5458: pop     esi
0x6D5459: retn    4

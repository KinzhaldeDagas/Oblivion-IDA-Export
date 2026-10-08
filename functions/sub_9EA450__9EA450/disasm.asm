0x9EA450: push    1; defaultValue
0x9EA452: push    offset aIcombatcastdra; "iCombatCastDrainMinimumValue"
0x9EA457: mov     ecx, 0B37270h; self
0x9EA45C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA461: push    offset sub_A1EC00; void (__cdecl *)()
0x9EA466: call    _atexit
0x9EA46B: pop     ecx
0x9EA46C: retn

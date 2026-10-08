0x9EA690: push    1Eh; defaultValue
0x9EA692: push    offset aIaicombatres_0; "iAICombatRestoreMagickaPercentage"
0x9EA697: mov     ecx, offset stru_B372D8; self
0x9EA69C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA6A1: push    offset sub_A1ECD0; void (__cdecl *)()
0x9EA6A6: call    _atexit
0x9EA6AB: pop     ecx
0x9EA6AC: retn

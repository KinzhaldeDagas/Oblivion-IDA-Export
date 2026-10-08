0x9EA670: push    1Eh; defaultValue
0x9EA672: push    offset aIaicombatresto; "iAICombatRestoreHealthPercentage"
0x9EA677: mov     ecx, offset stru_B372D0; self
0x9EA67C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA681: push    offset sub_A1ECC0; void (__cdecl *)()
0x9EA686: call    _atexit
0x9EA68B: pop     ecx
0x9EA68C: retn

0x9EDF20: push    2; defaultValue
0x9EDF22: push    offset aInumberactorsg; "iNumberActorsGoThroughLoadDoorInCombat"
0x9EDF27: mov     ecx, offset stru_B37D18; self
0x9EDF2C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDF31: push    offset sub_A20150; void (__cdecl *)()
0x9EDF36: call    _atexit
0x9EDF3B: pop     ecx
0x9EDF3C: retn

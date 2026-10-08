0x9F1100: push    offset aUnknownLocatio; "Unknown Location"
0x9F1105: push    offset aSmenudisplayun; "sMenuDisplayUnknownLocationString"
0x9F110A: mov     ecx, offset stru_B38728; self
0x9F110F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1114: push    offset sub_A21570; void (__cdecl *)()
0x9F1119: call    _atexit
0x9F111E: pop     ecx
0x9F111F: retn

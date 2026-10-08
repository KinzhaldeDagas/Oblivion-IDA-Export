0x9F1240: push    offset aStartNewGame?; "Start new game?"
0x9F1245: push    offset aSstartnewgame; "sStartNewGame"
0x9F124A: mov     ecx, offset stru_B38778; self
0x9F124F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1254: push    offset sub_A21610; void (__cdecl *)()
0x9F1259: call    _atexit
0x9F125E: pop     ecx
0x9F125F: retn

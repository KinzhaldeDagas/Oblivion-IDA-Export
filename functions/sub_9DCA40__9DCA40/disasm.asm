0x9DCA40: push    offset aContinueRunnin; "Continue Running Executable?"
0x9DCA45: push    offset aScontinuetext; "sContinueText"
0x9DCA4A: mov     ecx, 0B34DD4h; self
0x9DCA4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DCA54: push    offset sub_A18AD0; void (__cdecl *)()
0x9DCA59: call    _atexit
0x9DCA5E: pop     ecx
0x9DCA5F: retn

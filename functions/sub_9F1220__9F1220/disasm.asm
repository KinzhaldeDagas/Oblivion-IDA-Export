0x9F1220: push    offset aContinueFromYo; "Continue from your last saved game?"
0x9F1225: push    offset aScontinuelasts; "sContinueLastSave"
0x9F122A: mov     ecx, offset stru_B38770; self
0x9F122F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1234: push    offset sub_A21600; void (__cdecl *)()
0x9F1239: call    _atexit
0x9F123E: pop     ecx
0x9F123F: retn

0x9F6950: push    offset aGreen_0; "Green"
0x9F6955: push    offset aSgreen; "sGreen"
0x9F695A: mov     ecx, offset stru_B38FC8; self
0x9F695F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6964: push    offset sub_A226B0; void (__cdecl *)()
0x9F6969: call    _atexit
0x9F696E: pop     ecx
0x9F696F: retn

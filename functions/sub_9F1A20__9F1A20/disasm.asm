0x9F1A20: push    offset aStrike; "Strike"
0x9F1A25: push    offset aStouchrange; "sTouchRange"
0x9F1A2A: mov     ecx, offset stru_B38970; self
0x9F1A2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1A34: push    offset sub_A21A00; void (__cdecl *)()
0x9F1A39: call    _atexit
0x9F1A3E: pop     ecx
0x9F1A3F: retn

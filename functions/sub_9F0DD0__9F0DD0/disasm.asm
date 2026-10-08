0x9F0DD0: push    offset aAreYouSureYouW; "Are you sure you want to be a"
0x9F0DD5: push    offset aSconfirmchoice; "sConfirmChoice1"
0x9F0DDA: mov     ecx, offset stru_B38660; self
0x9F0DDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0DE4: push    offset sub_A213E0; void (__cdecl *)()
0x9F0DE9: call    _atexit
0x9F0DEE: pop     ecx
0x9F0DEF: retn

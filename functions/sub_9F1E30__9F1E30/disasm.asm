0x9F1E30: push    offset aYouCanNotDropO; "You can not drop objects while in the a"...
0x9F1E35: push    offset aSnojumpwarning; "sNoJumpWarning"
0x9F1E3A: mov     ecx, offset stru_B38A18; self
0x9F1E3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1E44: push    offset sub_A21B50; void (__cdecl *)()
0x9F1E49: call    _atexit
0x9F1E4E: pop     ecx
0x9F1E4F: retn

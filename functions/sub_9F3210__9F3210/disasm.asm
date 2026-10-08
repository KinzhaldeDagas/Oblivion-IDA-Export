0x9F3210: push    offset aThatButtonCann; "That button cannot be remapped"
0x9F3215: push    offset aSbuttonlocked; "sButtonLocked"
0x9F321A: mov     ecx, offset stru_B38ED8; self
0x9F321F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3224: push    offset sub_A224D0; void (__cdecl *)()
0x9F3229: call    _atexit
0x9F322E: pop     ecx
0x9F322F: retn

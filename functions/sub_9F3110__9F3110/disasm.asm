0x9F3110: push    offset aBecauseYourMag; "Because your Magicka is at maximum, the"...
0x9F3115: push    offset aSmagicalreadyf; "sMagicAlreadyFull"
0x9F311A: mov     ecx, offset stru_B38E98; self
0x9F311F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3124: push    offset sub_A22450; void (__cdecl *)()
0x9F3129: call    _atexit
0x9F312E: pop     ecx
0x9F312F: retn

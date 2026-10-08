0x9F8010: push    offset aMakeTheseYourD; "Make these your default settings?"
0x9F8015: push    offset aSmakedefaults; "sMakeDefaults"
0x9F801A: mov     ecx, 0B39500h; self
0x9F801F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F8024: push    offset sub_A23120; void (__cdecl *)()
0x9F8029: call    _atexit
0x9F802E: pop     ecx
0x9F802F: retn

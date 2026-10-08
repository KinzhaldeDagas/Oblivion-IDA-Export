0x9F3230: push    offset aPressThe; "Press the"
0x9F3235: push    offset aScontrolsmenui; "sControlsMenuInstructions1"
0x9F323A: mov     ecx, offset stru_B38EE0; self
0x9F323F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3244: push    offset sub_A224E0; void (__cdecl *)()
0x9F3249: call    _atexit
0x9F324E: pop     ecx
0x9F324F: retn

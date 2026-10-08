0x9F2980: push    offset aYouMustExitA_0; "You must exit and restart Oblivion for "...
0x9F2985: push    offset aSmustrestart; "sMustRestart"
0x9F298A: mov     ecx, offset stru_B38CE8; self
0x9F298F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2994: push    offset sub_A220F0; void (__cdecl *)()
0x9F2999: call    _atexit
0x9F299E: pop     ecx
0x9F299F: retn

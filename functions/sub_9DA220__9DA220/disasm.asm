0x9DA220: push    offset aRestoration; "Restoration"
0x9DA225: push    offset aSmagicschoolre; "sMagicSchoolRestoration"
0x9DA22A: mov     ecx, 0B335E4h; self
0x9DA22F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA234: push    offset sub_A176B0; void (__cdecl *)()
0x9DA239: call    _atexit
0x9DA23E: pop     ecx
0x9DA23F: retn

0x9DA180: push    offset aAlteration; "Alteration"
0x9DA185: push    offset aSmagicschoolal; "sMagicSchoolAlteration"
0x9DA18A: mov     ecx, 0B335BCh; self
0x9DA18F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA194: push    offset sub_A17660; void (__cdecl *)()
0x9DA199: call    _atexit
0x9DA19E: pop     ecx
0x9DA19F: retn

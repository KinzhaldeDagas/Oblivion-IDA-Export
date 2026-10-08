0x9F0530: push    offset aLockpicksBroke; "Lockpicks Broken: "
0x9F0535: push    offset aSmiscnumpicksb; "sMiscNumPicksBroken"
0x9F053A: mov     ecx, 0B38438h; self
0x9F053F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0544: push    offset sub_A20F90; void (__cdecl *)()
0x9F0549: call    _atexit
0x9F054E: pop     ecx
0x9F054F: retn

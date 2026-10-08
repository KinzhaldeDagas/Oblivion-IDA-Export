0x9F0770: push    offset aHoursSlept; "Hours Slept: "
0x9F0775: push    offset aSmischoursslep; "sMiscHoursSlept"
0x9F077A: mov     ecx, 0B384C8h; self
0x9F077F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0784: push    offset sub_A210B0; void (__cdecl *)()
0x9F0789: call    _atexit
0x9F078E: pop     ecx
0x9F078F: retn

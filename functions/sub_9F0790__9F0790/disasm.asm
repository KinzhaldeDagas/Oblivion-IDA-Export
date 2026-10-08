0x9F0790: push    offset aHoursWaited; "Hours Waited: "
0x9F0795: push    offset aSmischourswait; "sMiscHoursWaited"
0x9F079A: mov     ecx, offset stru_B384D0; self
0x9F079F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F07A4: push    offset sub_A210C0; void (__cdecl *)()
0x9F07A9: call    _atexit
0x9F07AE: pop     ecx
0x9F07AF: retn

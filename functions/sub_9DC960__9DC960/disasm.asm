0x9DC960: push    offset off_A3DAE8; defaultValue
0x9DC965: push    offset aSyestext; "sYesText"
0x9DC96A: mov     ecx, 0B34D9Ch; self
0x9DC96F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DC974: push    offset sub_A18A60; void (__cdecl *)()
0x9DC979: call    _atexit
0x9DC97E: pop     ecx
0x9DC97F: retn

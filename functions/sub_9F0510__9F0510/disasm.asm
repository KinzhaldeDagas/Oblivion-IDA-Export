0x9F0510: push    offset aHighestLockLev; "Highest Lock Level Picked: "
0x9F0515: push    offset aSmischighlockl; "sMiscHighLockLevel"
0x9F051A: mov     ecx, 0B38430h; self
0x9F051F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0524: push    offset sub_A20F80; void (__cdecl *)()
0x9F0529: call    _atexit
0x9F052E: pop     ecx
0x9F052F: retn

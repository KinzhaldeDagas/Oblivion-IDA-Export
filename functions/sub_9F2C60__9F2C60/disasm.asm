0x9F2C60: push    offset aOn_0; "On"
0x9F2C65: push    offset aSonbuttontext; "sOnButtonText"
0x9F2C6A: mov     ecx, 0B38DA0h; self
0x9F2C6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2C74: push    offset sub_A22260; void (__cdecl *)()
0x9F2C79: call    _atexit
0x9F2C7E: pop     ecx
0x9F2C7F: retn

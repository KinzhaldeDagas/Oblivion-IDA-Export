0x9F7030: push    offset aMouthLipsDefla; "Mouth lips deflated/inflated"
0x9F7035: push    offset aSmouthlipsdefl; "sMouthlipsdeflated"
0x9F703A: mov     ecx, offset stru_B39180; self
0x9F703F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7044: push    offset sub_A22A20; void (__cdecl *)()
0x9F7049: call    _atexit
0x9F704E: pop     ecx
0x9F704F: retn

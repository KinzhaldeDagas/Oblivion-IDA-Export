0x9F6F30: push    offset aForeheadTiltFo; "Forehead tilt forward/back"
0x9F6F35: push    offset aSforeheadtilt; "sForeheadtilt"
0x9F6F3A: mov     ecx, offset stru_B39140; self
0x9F6F3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6F44: push    offset sub_A229A0; void (__cdecl *)()
0x9F6F49: call    _atexit
0x9F6F4E: pop     ecx
0x9F6F4F: retn

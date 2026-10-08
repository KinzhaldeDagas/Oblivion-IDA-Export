0x9DA480: push    offset aSpray; "Spray"
0x9DA485: push    offset aSmagicprojec_1; "sMagicProjectileTypeSpray"
0x9DA48A: mov     ecx, 0B3367Ch; self
0x9DA48F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA494: push    offset sub_A177E0; void (__cdecl *)()
0x9DA499: call    _atexit
0x9DA49E: pop     ecx
0x9DA49F: retn

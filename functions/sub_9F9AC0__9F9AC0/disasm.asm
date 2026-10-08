0x9F9AC0: push    offset aEnergy; "Energy"
0x9F9AC5: push    offset aStraitnameener; "sTraitNameEnergy"
0x9F9ACA: mov     ecx, 0B3A14Ch; self
0x9F9ACF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9AD4: push    offset sub_A23AD0; void (__cdecl *)()
0x9F9AD9: call    _atexit
0x9F9ADE: pop     ecx
0x9F9ADF: retn

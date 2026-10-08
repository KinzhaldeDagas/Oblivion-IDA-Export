0x9F7650: push    offset aLipstickDarkBl; "Lipstick dark blue/light red"
0x9F7655: push    offset aSlipstickdarkb; "sLipstickdarkblue"
0x9F765A: mov     ecx, offset stru_B39308; self
0x9F765F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7664: push    offset sub_A22D30; void (__cdecl *)()
0x9F7669: call    _atexit
0x9F766E: pop     ecx
0x9F766F: retn

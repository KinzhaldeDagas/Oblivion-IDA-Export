0x9F7630: push    offset aLipstickDarkRe; "Lipstick dark red/light blue"
0x9F7635: push    offset aSlipstickdarkr; "sLipstickdarkred"
0x9F763A: mov     ecx, offset stru_B39300; self
0x9F763F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7644: push    offset sub_A22D20; void (__cdecl *)()
0x9F7649: call    _atexit
0x9F764E: pop     ecx
0x9F764F: retn

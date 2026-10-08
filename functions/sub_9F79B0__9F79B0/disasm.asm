0x9F79B0: push    36495Ch; defaultValue
0x9F79B5: push    offset aIhaircolor05; "iHairColor05"
0x9F79BA: mov     ecx, offset stru_B393E0; self
0x9F79BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F79C4: push    offset sub_A22EE0; void (__cdecl *)()
0x9F79C9: call    _atexit
0x9F79CE: pop     ecx
0x9F79CF: retn

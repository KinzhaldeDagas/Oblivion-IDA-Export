0x9E2970: push    1F4h; defaultValue
0x9E2975: push    offset aIsoullevelva_0; "iSoulLevelValueLesser"
0x9E297A: mov     ecx, offset stru_B35B54; self
0x9E297F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2984: push    offset sub_A1B770; void (__cdecl *)()
0x9E2989: call    _atexit
0x9E298E: pop     ecx
0x9E298F: retn

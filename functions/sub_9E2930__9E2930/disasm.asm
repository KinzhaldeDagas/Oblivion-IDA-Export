0x9E2930: push    0FAh ; 'ú'; defaultValue
0x9E2935: push    offset aIsoullevelvalu; "iSoulLevelValuePetty"
0x9E293A: mov     ecx, offset stru_B35B44; self
0x9E293F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2944: push    offset sub_A1B750; void (__cdecl *)()
0x9E2949: call    _atexit
0x9E294E: pop     ecx
0x9E294F: retn

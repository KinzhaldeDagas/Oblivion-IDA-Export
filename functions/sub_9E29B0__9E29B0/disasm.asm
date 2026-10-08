0x9E29B0: push    3E8h; defaultValue
0x9E29B5: push    offset aIsoullevelva_1; "iSoulLevelValueCommon"
0x9E29BA: mov     ecx, offset stru_B35B64; self
0x9E29BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E29C4: push    offset sub_A1B790; void (__cdecl *)()
0x9E29C9: call    _atexit
0x9E29CE: pop     ecx
0x9E29CF: retn

0x9F2B40: push    offset aChoose; "Choose"
0x9F2B45: push    offset aSchoose; "sChoose"
0x9F2B4A: mov     ecx, offset stru_B38D58; self
0x9F2B4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2B54: push    offset sub_A221D0; void (__cdecl *)()
0x9F2B59: call    _atexit
0x9F2B5E: pop     ecx
0x9F2B5F: retn

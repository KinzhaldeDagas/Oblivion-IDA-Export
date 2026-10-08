0x9F6ED0: push    offset aEyesTogetherAp; "Eyes together/apart"
0x9F6ED5: push    offset aSeyestogether; "sEyestogether"
0x9F6EDA: mov     ecx, offset stru_B39128; self
0x9F6EDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6EE4: push    offset sub_A22970; void (__cdecl *)()
0x9F6EE9: call    _atexit
0x9F6EEE: pop     ecx
0x9F6EEF: retn

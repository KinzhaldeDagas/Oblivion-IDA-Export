0x9F28A0: push    offset off_A60E30; defaultValue
0x9F28A5: push    offset aSbuy; "sBuy"
0x9F28AA: mov     ecx, offset stru_B38CB0; self
0x9F28AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F28B4: push    offset sub_A22080; void (__cdecl *)()
0x9F28B9: call    _atexit
0x9F28BE: pop     ecx
0x9F28BF: retn

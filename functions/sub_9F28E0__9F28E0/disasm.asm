0x9F28E0: push    offset aGiveAway; "Give away"
0x9F28E5: push    offset aSgiveaway; "sGiveAway"
0x9F28EA: mov     ecx, offset stru_B38CC0; self
0x9F28EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F28F4: push    offset sub_A220A0; void (__cdecl *)()
0x9F28F9: call    _atexit
0x9F28FE: pop     ecx
0x9F28FF: retn

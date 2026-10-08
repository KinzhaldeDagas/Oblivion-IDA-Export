0x9F2F90: push    2710h; defaultValue
0x9F2F95: push    offset aIbribeamountma; "iBribeAmountMax"
0x9F2F9A: mov     ecx, 0B38E50h; self
0x9F2F9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2FA4: push    offset sub_A223C0; void (__cdecl *)()
0x9F2FA9: call    _atexit
0x9F2FAE: pop     ecx
0x9F2FAF: retn

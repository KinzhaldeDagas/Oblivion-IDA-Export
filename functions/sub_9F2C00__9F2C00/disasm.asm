0x9F2C00: push    offset off_A61078; defaultValue
0x9F2C05: push    offset aSlow; "sLow"
0x9F2C0A: mov     ecx, offset stru_B38D88; self
0x9F2C0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2C14: push    offset sub_A22230; void (__cdecl *)()
0x9F2C19: call    _atexit
0x9F2C1E: pop     ecx
0x9F2C1F: retn

0x9F2A00: push    offset aCancel; "Cancel"
0x9F2A05: push    offset aScancel; "sCancel"
0x9F2A0A: mov     ecx, offset stru_B38D08; self
0x9F2A0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2A14: push    offset sub_A22130; void (__cdecl *)()
0x9F2A19: call    _atexit
0x9F2A1E: pop     ecx
0x9F2A1F: retn

0x9FCEC0: push    offset aIsTurnedOn; "is turned on"
0x9FCEC5: push    offset aSturnedon; "sTurnedOn"
0x9FCECA: mov     ecx, (offset dword_B3B744+14h); self
0x9FCECF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FCED4: push    offset sub_A25280; void (__cdecl *)()
0x9FCED9: call    _atexit
0x9FCEDE: pop     ecx
0x9FCEDF: retn

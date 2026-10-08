0x9F9590: push    2; defaultValue
0x9F9592: push    offset aIcollfreq; "iCollFreq"
0x9F9597: mov     ecx, 0B3A004h; self
0x9F959C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F95A1: push    offset sub_A23850; void (__cdecl *)()
0x9F95A6: call    _atexit
0x9F95AB: pop     ecx
0x9F95AC: retn

0x9FCEA0: push    offset aIsNotSupported; "is not supported when"
0x9FCEA5: push    offset aSnotsupported; "sNotSupported"
0x9FCEAA: mov     ecx, (offset dword_B3B744+0Ch); self
0x9FCEAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FCEB4: push    offset sub_A25270; void (__cdecl *)()
0x9FCEB9: call    _atexit
0x9FCEBE: pop     ecx
0x9FCEBF: retn

0x9EDCC0: push    22843h; defaultValue
0x9EDCC5: push    offset aIplayercustomc; "iPlayerCustomClass"
0x9EDCCA: mov     ecx, 0B37C88h; self
0x9EDCCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDCD4: push    offset sub_A20030; void (__cdecl *)()
0x9EDCD9: call    _atexit
0x9EDCDE: pop     ecx
0x9EDCDF: retn

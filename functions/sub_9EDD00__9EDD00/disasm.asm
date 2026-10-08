0x9EDD00: push    23787h; defaultValue
0x9EDD05: push    offset aIclasswarrior; "iClassWarrior"
0x9EDD0A: mov     ecx, 0B37C98h; self
0x9EDD0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDD14: push    offset sub_A20050; void (__cdecl *)()
0x9EDD19: call    _atexit
0x9EDD1E: pop     ecx
0x9EDD1F: retn

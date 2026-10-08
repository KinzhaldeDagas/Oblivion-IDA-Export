0x9F0910: push    offset aTimesCured; "Times Cured: "
0x9F0915: push    offset aSmisctimescure; "sMiscTimesCured"
0x9F091A: mov     ecx, offset stru_B38530; self
0x9F091F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0924: push    offset sub_A21180; void (__cdecl *)()
0x9F0929: call    _atexit
0x9F092E: pop     ecx
0x9F092F: retn

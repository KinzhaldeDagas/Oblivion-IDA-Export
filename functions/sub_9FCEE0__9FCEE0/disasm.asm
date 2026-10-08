0x9FCEE0: push    offset aAntiAliasing; "Anti-aliasing"
0x9FCEE5: push    offset aSantialiasing; "sAntiAliasing"
0x9FCEEA: mov     ecx, (offset dword_B3B744+1Ch); self
0x9FCEEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FCEF4: push    offset sub_A25290; void (__cdecl *)()
0x9FCEF9: call    _atexit
0x9FCEFE: pop     ecx
0x9FCEFF: retn

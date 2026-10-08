0x9E8140: push    0Ah; defaultValue
0x9E8142: push    offset aIactorkeepturn; "iActorKeepTurnDegree"
0x9E8147: mov     ecx, 0B36C18h; self
0x9E814C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8151: push    offset sub_A1DF50; void (__cdecl *)()
0x9E8156: call    _atexit
0x9E815B: pop     ecx
0x9E815C: retn

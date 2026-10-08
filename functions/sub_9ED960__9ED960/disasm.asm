0x9ED960: push    4; defaultValue
0x9ED962: push    offset aInpcbaseperlev; "iNPCBasePerLevelHealthMult"
0x9ED967: mov     ecx, 0B37BE0h; self
0x9ED96C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ED971: push    offset sub_A1FEE0; void (__cdecl *)()
0x9ED976: call    _atexit
0x9ED97B: pop     ecx
0x9ED97C: retn

0x9ED940: push    3; defaultValue
0x9ED942: push    offset aIlowlevelnpcma; "iLowLevelNPCMaxLevel"
0x9ED947: mov     ecx, 0B37BD8h; self
0x9ED94C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ED951: push    offset sub_A1FED0; void (__cdecl *)()
0x9ED956: call    _atexit
0x9ED95B: pop     ecx
0x9ED95C: retn

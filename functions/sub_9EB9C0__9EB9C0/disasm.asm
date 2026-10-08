0x9EB9C0: push    2; Initializes Oblivion iLevelUp04Mult; native default 2.
0x9EB9C2: push    offset aIlevelup04mult; "iLevelUp04Mult"
0x9EB9C7: mov     ecx, offset g_iLevelUp04Mult; self
0x9EB9CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB9D1: push    offset sub_A1F390; void (__cdecl *)()
0x9EB9D6: call    _atexit
0x9EB9DB: pop     ecx
0x9EB9DC: retn

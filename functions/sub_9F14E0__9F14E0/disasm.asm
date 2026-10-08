0x9F14E0: push    offset aTheGameMustRes; "The game must restart now because downl"...
0x9F14E5: push    offset aSrestartbecaus; "sRestartBecauseContentRemoved"
0x9F14EA: mov     ecx, offset stru_B38820; self
0x9F14EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F14F4: push    offset sub_A21760; void (__cdecl *)()
0x9F14F9: call    _atexit
0x9F14FE: pop     ecx
0x9F14FF: retn

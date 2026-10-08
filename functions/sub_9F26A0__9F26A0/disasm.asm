0x9F26A0: push    offset aOpenedTheConta; "Opened the container with a key."
0x9F26A5: push    offset aSopenedcontain; "sOpenedContainer"
0x9F26AA: mov     ecx, offset stru_B38C30; self
0x9F26AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F26B4: push    offset sub_A21F80; void (__cdecl *)()
0x9F26B9: call    _atexit
0x9F26BE: pop     ecx
0x9F26BF: retn

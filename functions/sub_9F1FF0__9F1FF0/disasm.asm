0x9F1FF0: push    1; defaultValue
0x9F1FF2: push    offset aIallowrecharge; "iAllowRechargeDuringCombat"
0x9F1FF7: mov     ecx, offset stru_B38A88; self
0x9F1FFC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2001: push    offset sub_A21C30; void (__cdecl *)()
0x9F2006: call    _atexit
0x9F200B: pop     ecx
0x9F200C: retn

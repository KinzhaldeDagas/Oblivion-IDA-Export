0x9F02D0: push    offset aYouNeedToFinis; "You need to finish distributing attribu"...
0x9F02D5: push    offset aSleveldonewarn; "sLevelDoneWarning"
0x9F02DA: mov     ecx, offset stru_B383A0; self
0x9F02DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F02E4: push    offset sub_A20E60; void (__cdecl *)()
0x9F02E9: call    _atexit
0x9F02EE: pop     ecx
0x9F02EF: retn

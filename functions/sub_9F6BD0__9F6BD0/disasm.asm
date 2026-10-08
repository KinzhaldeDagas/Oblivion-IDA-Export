0x9F6BD0: push    offset aLips; "Lips"
0x9F6BD5: push    offset aSlips; "sLips"
0x9F6BDA: mov     ecx, offset stru_B39068; self
0x9F6BDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6BE4: push    offset sub_A227F0; void (__cdecl *)()
0x9F6BE9: call    _atexit
0x9F6BEE: pop     ecx
0x9F6BEF: retn

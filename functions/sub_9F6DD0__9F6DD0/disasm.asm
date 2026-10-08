0x9F6DD0: push    offset aChinRetractedJ; "Chin retracted/jutting"
0x9F6DD5: push    offset aSchinretracted; "sChinretracted"
0x9F6DDA: mov     ecx, offset stru_B390E8; self
0x9F6DDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6DE4: push    offset sub_A228F0; void (__cdecl *)()
0x9F6DE9: call    _atexit
0x9F6DEE: pop     ecx
0x9F6DEF: retn

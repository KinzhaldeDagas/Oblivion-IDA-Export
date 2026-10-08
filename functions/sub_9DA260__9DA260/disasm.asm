0x9DA260: push    offset aAbility; "Ability"
0x9DA265: push    offset aSmagictypeabil; "sMagicTypeAbility"
0x9DA26A: mov     ecx, 0B335F4h; self
0x9DA26F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA274: push    offset sub_A176D0; void (__cdecl *)()
0x9DA279: call    _atexit
0x9DA27E: pop     ecx
0x9DA27F: retn

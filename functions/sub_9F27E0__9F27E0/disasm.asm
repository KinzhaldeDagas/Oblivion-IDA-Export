0x9F27E0: push    offset aLeaveIt; "Leave It"
0x9F27E5: push    offset aSleavemarker; "sLeaveMarker"
0x9F27EA: mov     ecx, offset stru_B38C80; self
0x9F27EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F27F4: push    offset sub_A22020; void (__cdecl *)()
0x9F27F9: call    _atexit
0x9F27FE: pop     ecx
0x9F27FF: retn

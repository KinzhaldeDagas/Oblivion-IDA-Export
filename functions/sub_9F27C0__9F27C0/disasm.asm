0x9F27C0: push    offset aMoveIt; "Move It"
0x9F27C5: push    offset aSmovemarker; "sMoveMarker"
0x9F27CA: mov     ecx, offset stru_B38C78; self
0x9F27CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F27D4: push    offset sub_A22010; void (__cdecl *)()
0x9F27D9: call    _atexit
0x9F27DE: pop     ecx
0x9F27DF: retn

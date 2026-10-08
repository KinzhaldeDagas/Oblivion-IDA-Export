0x9F2800: push    offset aRemoveIt; "Remove It"
0x9F2805: push    offset aSremovemarker; "sRemoveMarker"
0x9F280A: mov     ecx, offset stru_B38C88; self
0x9F280F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2814: push    offset sub_A22030; void (__cdecl *)()
0x9F2819: call    _atexit
0x9F281E: pop     ecx
0x9F281F: retn

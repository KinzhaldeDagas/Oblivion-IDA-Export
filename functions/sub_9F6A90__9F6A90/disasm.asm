0x9F6A90: push    offset aChin; "Chin"
0x9F6A95: push    offset aSchin; "sChin"
0x9F6A9A: mov     ecx, offset stru_B39018; self
0x9F6A9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6AA4: push    offset sub_A22750; void (__cdecl *)()
0x9F6AA9: call    _atexit
0x9F6AAE: pop     ecx
0x9F6AAF: retn

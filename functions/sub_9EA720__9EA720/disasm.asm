0x9EA720: push    offset aIsCalmedAndCan; "is calmed and cannot respond."
0x9EA725: push    offset aSactivatenpcca; "sActivateNPCCalmed"
0x9EA72A: mov     ecx, 0B372F8h; self
0x9EA72F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA734: push    offset sub_A1ED10; void (__cdecl *)()
0x9EA739: call    _atexit
0x9EA73E: pop     ecx
0x9EA73F: retn

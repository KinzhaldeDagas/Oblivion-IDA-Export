0x9F9C60: push    offset aHealthDescript; "Health Description"
0x9F9C65: push    offset aSderivedattr_3; "sDerivedAttributeDescHealth"
0x9F9C6A: mov     ecx, 0B3A1B4h; self
0x9F9C6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9C74: push    offset sub_A23BA0; void (__cdecl *)()
0x9F9C79: call    _atexit
0x9F9C7E: pop     ecx
0x9F9C7F: retn

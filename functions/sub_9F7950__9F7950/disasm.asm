0x9F7950: push    1F1F21h; defaultValue
0x9F7955: push    offset aIhaircolor02; "iHairColor02"
0x9F795A: mov     ecx, offset stru_B393C8; self
0x9F795F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7964: push    offset sub_A22EB0; void (__cdecl *)()
0x9F7969: call    _atexit
0x9F796E: pop     ecx
0x9F796F: retn

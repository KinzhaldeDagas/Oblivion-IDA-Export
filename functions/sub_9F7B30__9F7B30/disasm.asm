0x9F7B30: push    offset aEnterCharacter; "Enter character name."
0x9F7B35: push    offset aSentername; "sEnterName"
0x9F7B3A: mov     ecx, offset stru_B39440; self
0x9F7B3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7B44: push    offset sub_A22FA0; void (__cdecl *)()
0x9F7B49: call    _atexit
0x9F7B4E: pop     ecx
0x9F7B4F: retn

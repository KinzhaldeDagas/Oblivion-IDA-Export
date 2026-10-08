0x9F6C30: push    offset aFaceHeavyLight; "Face heavy/light"
0x9F6C35: push    offset aSfaceheavy; "sFaceheavy"
0x9F6C3A: mov     ecx, offset stru_B39080; self
0x9F6C3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6C44: push    offset sub_A22820; void (__cdecl *)()
0x9F6C49: call    _atexit
0x9F6C4E: pop     ecx
0x9F6C4F: retn

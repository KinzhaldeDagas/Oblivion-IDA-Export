0x9F6A30: push    offset aGeneralFace; "General(Face)"
0x9F6A35: push    offset aSgeneralface; "sGeneralFace"
0x9F6A3A: mov     ecx, offset stru_B39000; self
0x9F6A3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6A44: push    offset sub_A22720; void (__cdecl *)()
0x9F6A49: call    _atexit
0x9F6A4E: pop     ecx
0x9F6A4F: retn

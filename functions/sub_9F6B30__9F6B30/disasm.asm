0x9F6B30: push    offset aGeneralSkin; "General(Skin)"
0x9F6B35: push    offset aSgeneralskin; "sGeneralSkin"
0x9F6B3A: mov     ecx, offset stru_B39040; self
0x9F6B3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6B44: push    offset sub_A227A0; void (__cdecl *)()
0x9F6B49: call    _atexit
0x9F6B4E: pop     ecx
0x9F6B4F: retn

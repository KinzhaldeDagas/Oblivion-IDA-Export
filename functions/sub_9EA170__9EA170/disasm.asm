0x9EA170: push    offset aEffectsWilloth; "Effects\\willothewispBloodDecal.dds"
0x9EA175: push    offset aSbloodtextur_0; "sBloodTextureExtra2"
0x9EA17A: mov     ecx, offset stru_B371D8; self
0x9EA17F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA184: push    offset sub_A1EAD0; void (__cdecl *)()
0x9EA189: call    _atexit
0x9EA18E: pop     ecx
0x9EA18F: retn

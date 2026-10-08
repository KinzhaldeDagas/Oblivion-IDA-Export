0x9EA130: push    offset aEffectsBloodde; "Effects\\blooddecal.dds"
0x9EA135: push    offset aSbloodtextured; "sBloodTextureDefault"
0x9EA13A: mov     ecx, 0B371C8h; self
0x9EA13F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA144: push    offset sub_A1EAB0; void (__cdecl *)()
0x9EA149: call    _atexit
0x9EA14E: pop     ecx
0x9EA14F: retn

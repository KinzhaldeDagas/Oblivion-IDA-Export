0x9EA150: push    offset aEffectsLichb_0; "Effects\\lichBloodDecal.dds"
0x9EA155: push    offset aSbloodtexturee; "sBloodTextureExtra1"
0x9EA15A: mov     ecx, offset stru_B371D0; self
0x9EA15F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA164: push    offset sub_A1EAC0; void (__cdecl *)()
0x9EA169: call    _atexit
0x9EA16E: pop     ecx
0x9EA16F: retn

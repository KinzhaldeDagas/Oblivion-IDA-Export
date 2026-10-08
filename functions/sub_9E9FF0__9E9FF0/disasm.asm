0x9E9FF0: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleMetal default is Effects\DustCloud.NIF.
0x9E9FF5: push    offset aShitparticleme; "sHitParticleMetal"
0x9E9FFA: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4A0h); self
0x9E9FFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA004: push    offset sub_A1EA10; void (__cdecl *)()
0x9EA009: call    _atexit
0x9EA00E: pop     ecx
0x9EA00F: retn

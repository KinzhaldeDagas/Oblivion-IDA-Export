0x9EA050: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleWater default is Effects\DustCloud.NIF.
0x9EA055: push    offset aShitparticlewa; "sHitParticleWater"
0x9EA05A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4B8h); self
0x9EA05F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA064: push    offset sub_A1EA40; void (__cdecl *)()
0x9EA069: call    _atexit
0x9EA06E: pop     ecx
0x9EA06F: retn

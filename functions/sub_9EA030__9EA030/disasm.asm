0x9EA030: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleSkin default is Effects\DustCloud.NIF.
0x9EA035: push    offset aShitparticlesk; "sHitParticleSkin"
0x9EA03A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4B0h); self
0x9EA03F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA044: push    offset sub_A1EA30; void (__cdecl *)()
0x9EA049: call    _atexit
0x9EA04E: pop     ecx
0x9EA04F: retn

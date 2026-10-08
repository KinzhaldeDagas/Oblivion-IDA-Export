0x9E9F70: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleCloth default is Effects\DustCloud.NIF.
0x9E9F75: push    offset aShitparticlecl; "sHitParticleCloth"
0x9E9F7A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+480h); self
0x9E9F7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9F84: push    offset sub_A1E9D0; void (__cdecl *)()
0x9E9F89: call    _atexit
0x9E9F8E: pop     ecx
0x9E9F8F: retn

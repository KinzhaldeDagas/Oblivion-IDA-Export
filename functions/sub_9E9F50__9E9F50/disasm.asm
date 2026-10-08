0x9E9F50: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleStone default is Effects\DustCloud.NIF.
0x9E9F55: push    offset aShitparticlest; "sHitParticleStone"
0x9E9F5A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+478h); self
0x9E9F5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9F64: push    offset sub_A1E9C0; void (__cdecl *)()
0x9E9F69: call    _atexit
0x9E9F6E: pop     ecx
0x9E9F6F: retn

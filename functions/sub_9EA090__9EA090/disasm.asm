0x9EA090: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleChain default is Effects\DustCloud.NIF.
0x9EA095: push    offset aShitparticlech; "sHitParticleChain"
0x9EA09A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4C8h); self
0x9EA09F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA0A4: push    offset sub_A1EA60; void (__cdecl *)()
0x9EA0A9: call    _atexit
0x9EA0AE: pop     ecx
0x9EA0AF: retn

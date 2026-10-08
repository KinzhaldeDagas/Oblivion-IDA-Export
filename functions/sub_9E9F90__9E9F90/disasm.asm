0x9E9F90: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleDirt default is Effects\DustCloud.NIF.
0x9E9F95: push    offset aShitparticledi; "sHitParticleDirt"
0x9E9F9A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+488h); self
0x9E9F9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9FA4: push    offset sub_A1E9E0; void (__cdecl *)()
0x9E9FA9: call    _atexit
0x9E9FAE: pop     ecx
0x9E9FAF: retn

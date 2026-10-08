0x9E9FB0: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleGlass default is Effects\DustCloud.NIF.
0x9E9FB5: push    offset aShitparticlegl; "sHitParticleGlass"
0x9E9FBA: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+490h); self
0x9E9FBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9FC4: push    offset sub_A1E9F0; void (__cdecl *)()
0x9E9FC9: call    _atexit
0x9E9FCE: pop     ecx
0x9E9FCF: retn

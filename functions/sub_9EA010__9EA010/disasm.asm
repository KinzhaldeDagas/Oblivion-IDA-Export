0x9EA010: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleOrganic default is Effects\DustCloud.NIF.
0x9EA015: push    offset aShitparticleor; "sHitParticleOrganic"
0x9EA01A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4A8h); self
0x9EA01F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA024: push    offset sub_A1EA20; void (__cdecl *)()
0x9EA029: call    _atexit
0x9EA02E: pop     ecx
0x9EA02F: retn

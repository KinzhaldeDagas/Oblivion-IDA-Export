0x9EA070: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleWood default is Effects\DustCloud.NIF.
0x9EA075: push    offset aShitparticlewo; "sHitParticleWood"
0x9EA07A: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4C0h); self
0x9EA07F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA084: push    offset sub_A1EA50; void (__cdecl *)()
0x9EA089: call    _atexit
0x9EA08E: pop     ecx
0x9EA08F: retn

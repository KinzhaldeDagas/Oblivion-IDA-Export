0x9EA0B0: push    offset aEffectsDustclo; Verified game setting registration: sHitParticleSnow default is Effects\DustCloud.NIF.
0x9EA0B5: push    offset aShitparticlesn; "sHitParticleSnow"
0x9EA0BA: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+4D0h); self
0x9EA0BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA0C4: push    offset sub_A1EA70; void (__cdecl *)()
0x9EA0C9: call    _atexit
0x9EA0CE: pop     ecx
0x9EA0CF: retn

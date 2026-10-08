0x9EA0D0: push    offset aEffectsBloodsp; Verified game-setting registration: sBloodParticleDefault defaults to Effects\BloodSpray.nif at pointer index 0x136. Actor-base blood-particle getter returns this setting; creature override falls back here for null/empty per-creature path unless NoBloodSpray blocks it.
0x9EA0D5: push    offset aSbloodparticle; "sBloodParticleDefault"
0x9EA0DA: mov     ecx, 0B371B0h; self
0x9EA0DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA0E4: push    offset sub_A1EA80; void (__cdecl *)()
0x9EA0E9: call    _atexit
0x9EA0EE: pop     ecx
0x9EA0EF: retn

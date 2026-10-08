0x9EA110: push    offset aEffectsSkeleto; Verified sBloodParticleExtra2 default registration is Effects\skeletonBloodSpray.nif at string-setting slot 0x13A. The setting is inserted in g_GameSettingsByName and is reachable through generic name-keyed settings-file/SetGameSetting paths. No direct reference from the inspected Actor/TESCreature blood-particle resolution or particle-spawn callers was found; runtime selection/use remains Unknown.
0x9EA115: push    offset aSbloodpartic_1; "sBloodParticleExtra2"
0x9EA11A: mov     ecx, offset stru_B371C0; self
0x9EA11F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA124: push    offset sub_A1EAA0; void (__cdecl *)()
0x9EA129: call    _atexit
0x9EA12E: pop     ecx
0x9EA12F: retn

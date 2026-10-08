0x9EA0F0: push    offset aEffectsLichblo; Verified sBloodParticleExtra1 default registration is Effects\lichBloodSpray.nif at string-setting slot 0x138. The setting is inserted in g_GameSettingsByName and is reachable through generic name-keyed settings-file/SetGameSetting paths. No direct reference from the inspected Actor/TESCreature blood-particle resolution or particle-spawn callers was found; runtime selection/use remains Unknown.
0x9EA0F5: push    offset aSbloodpartic_0; "sBloodParticleExtra1"
0x9EA0FA: mov     ecx, offset stru_B371B8; self
0x9EA0FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA104: push    offset sub_A1EA90; void (__cdecl *)()
0x9EA109: call    _atexit
0x9EA10E: pop     ecx
0x9EA10F: retn

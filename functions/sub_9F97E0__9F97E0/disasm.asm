0x9F97E0: push    offset aArmorer; First of 21 sequential Oblivion skill-name setting constructors. Addresses 0x9F97E0..0x9F9A60 register Armorer through Speechcraft in SkillActorValue order.
0x9F97E5: push    offset aSskillnamearmo; "sSkillNameArmorer"
0x9F97EA: mov     ecx, offset g_sSkillNameArmorer; self
0x9F97EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F97F4: push    offset sub_A23960; void (__cdecl *)()
0x9F97F9: call    _atexit
0x9F97FE: pop     ecx
0x9F97FF: retn

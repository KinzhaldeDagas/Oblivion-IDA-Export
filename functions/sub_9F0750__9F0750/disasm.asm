0x9F0750: push    offset aSkillIncreases; "Skill Increases: "
0x9F0755: push    offset aSmiscskilladva; "sMiscSkillAdvances"
0x9F075A: mov     ecx, 0B384C0h; self
0x9F075F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0764: push    offset sub_A210A0; void (__cdecl *)()
0x9F0769: call    _atexit
0x9F076E: pop     ecx
0x9F076F: retn

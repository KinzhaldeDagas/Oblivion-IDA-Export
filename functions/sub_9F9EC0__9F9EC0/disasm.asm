0x9F9EC0: push    offset aLightArmorDesc; "Light Armor Description"
0x9F9EC5: push    offset aSskilldescligh; "sSkillDescLightArmor"
0x9F9ECA: mov     ecx, 0B3A24Ch; self
0x9F9ECF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9ED4: push    offset sub_A23CD0; void (__cdecl *)()
0x9F9ED9: call    _atexit
0x9F9EDE: pop     ecx
0x9F9EDF: retn

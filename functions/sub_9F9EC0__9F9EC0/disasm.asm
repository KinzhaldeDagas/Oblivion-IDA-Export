0x9F9EC0: push    offset aLightArmorDesc; "Light Armor Description"
0x9F9EC5: push    offset aSskilldescligh; "sSkillDescLightArmor"
0x9F9ECA: mov     ecx, offset sSkillDescLightArmor
0x9F9ECF: call    GameSetting_ConstrAndReg
0x9F9ED4: push    offset sub_A23CD0; void (__cdecl *)()
0x9F9ED9: call    _atexit
0x9F9EDE: pop     ecx
0x9F9EDF: retn

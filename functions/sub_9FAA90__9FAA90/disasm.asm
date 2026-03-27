0x9FAA90: push    offset aApprentice; "Apprentice"
0x9FAA95: push    offset aSskilllevelapp; "sSkillLevelApprentice"
0x9FAA9A: mov     ecx, offset sSkillLevelApprentice
0x9FAA9F: call    GameSetting_ConstrAndReg
0x9FAAA4: push    offset sub_A241E0; void (__cdecl *)()
0x9FAAA9: call    _atexit
0x9FAAAE: pop     ecx
0x9FAAAF: retn

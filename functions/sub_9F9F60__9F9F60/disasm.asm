0x9F9F60: push    offset aSpeechcraftDes; "Speechcraft Description"
0x9F9F65: push    offset aSskilldescspee; "sSkillDescSpeechcraft"
0x9F9F6A: mov     ecx, offset sSkillDescSpeechcraft
0x9F9F6F: call    GameSetting_ConstrAndReg
0x9F9F74: push    offset sub_A23D20; void (__cdecl *)()
0x9F9F79: call    _atexit
0x9F9F7E: pop     ecx
0x9F9F7F: retn

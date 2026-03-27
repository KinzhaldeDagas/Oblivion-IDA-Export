0x9F9EE0: push    offset aMarksmanDescri; "Marksman Description"
0x9F9EE5: push    offset aSskilldescmark; "sSkillDescMarksman"
0x9F9EEA: mov     ecx, offset sSkillDescMarksman
0x9F9EEF: call    GameSetting_ConstrAndReg
0x9F9EF4: push    offset sub_A23CE0; void (__cdecl *)()
0x9F9EF9: call    _atexit
0x9F9EFE: pop     ecx
0x9F9EFF: retn

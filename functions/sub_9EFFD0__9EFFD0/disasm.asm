0x9EFFD0: push    offset aNewTopic; "New topic"
0x9EFFD5: push    offset aStopicaddedtex; "sTopicAddedText"
0x9EFFDA: mov     ecx, offset sTopicAddedText
0x9EFFDF: call    GameSetting_ConstrAndReg
0x9EFFE4: push    offset sub_A20CE0; void (__cdecl *)()
0x9EFFE9: call    _atexit
0x9EFFEE: pop     ecx
0x9EFFEF: retn

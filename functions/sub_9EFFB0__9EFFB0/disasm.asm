0x9EFFB0: push    offset aQuestUpdated; "Quest updated"
0x9EFFB5: push    offset aSquestupdatedt; "sQuestUpdatedText"
0x9EFFBA: mov     ecx, offset sQuestUpdatedText
0x9EFFBF: call    GameSetting_ConstrAndReg
0x9EFFC4: push    offset sub_A20CD0; void (__cdecl *)()
0x9EFFC9: call    _atexit
0x9EFFCE: pop     ecx
0x9EFFCF: retn

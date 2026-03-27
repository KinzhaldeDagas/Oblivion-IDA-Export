0x9F0970: push    offset aQuestsComplete; "Quests Completed: "
0x9F0975: push    offset aSmiscquestscom; "sMiscQuestsCompleted"
0x9F097A: mov     ecx, offset sMiscQuestsCompleted
0x9F097F: call    GameSetting_ConstrAndReg
0x9F0984: push    offset sub_A211B0; void (__cdecl *)()
0x9F0989: call    _atexit
0x9F098E: pop     ecx
0x9F098F: retn

0x9F0970: push    offset aQuestsComplete; "Quests Completed: "
0x9F0975: push    offset aSmiscquestscom; "sMiscQuestsCompleted"
0x9F097A: mov     ecx, 0B38548h; self
0x9F097F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0984: push    offset sub_A211B0; void (__cdecl *)()
0x9F0989: call    _atexit
0x9F098E: pop     ecx
0x9F098F: retn

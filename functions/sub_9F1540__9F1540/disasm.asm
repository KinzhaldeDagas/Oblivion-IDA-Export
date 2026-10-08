0x9F1540: push    offset aLookingForCont; "Looking for content.  Please wait."
0x9F1545: push    offset aSfindingconten; "sFindingContentMessage"
0x9F154A: mov     ecx, offset stru_B38838; self
0x9F154F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1554: push    offset sub_A21790; void (__cdecl *)()
0x9F1559: call    _atexit
0x9F155E: pop     ecx
0x9F155F: retn

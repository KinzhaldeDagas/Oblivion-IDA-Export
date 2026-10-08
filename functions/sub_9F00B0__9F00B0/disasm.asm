0x9F00B0: push    offset aEverythingYouD; "Everything you do is just a bit easier,"...
0x9F00B5: push    offset aSlevelup5; "sLevelUp5"
0x9F00BA: mov     ecx, 0B38318h; self
0x9F00BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F00C4: push    offset sub_A20D50; void (__cdecl *)()
0x9F00C9: call    _atexit
0x9F00CE: pop     ecx
0x9F00CF: retn

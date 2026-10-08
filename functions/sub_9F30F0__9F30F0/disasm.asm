0x9F30F0: push    offset aYouMustCloseYo; "You must close your current game to cha"...
0x9F30F5: push    offset aScantchangeres; "sCantChangeResolution"
0x9F30FA: mov     ecx, offset stru_B38E90; self
0x9F30FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3104: push    offset sub_A22440; void (__cdecl *)()
0x9F3109: call    _atexit
0x9F310E: pop     ecx
0x9F310F: retn

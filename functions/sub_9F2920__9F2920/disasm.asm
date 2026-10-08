0x9F2920: push    offset aVideo; "Video"
0x9F2925: push    offset aSvideo; "sVideo"
0x9F292A: mov     ecx, offset stru_B38CD0; self
0x9F292F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2934: push    offset sub_A220C0; void (__cdecl *)()
0x9F2939: call    _atexit
0x9F293E: pop     ecx
0x9F293F: retn

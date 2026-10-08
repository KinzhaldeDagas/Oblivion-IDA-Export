0x9F0330: push    offset aYouShouldRestA; "You should rest and meditate on what yo"...
0x9F0335: push    offset aSmeditate; "sMeditate"
0x9F033A: mov     ecx, 0B383B8h; self
0x9F033F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0344: push    offset sub_A20E90; void (__cdecl *)()
0x9F0349: call    _atexit
0x9F034E: pop     ecx
0x9F034F: retn

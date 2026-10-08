0x9F05B0: push    offset aAssaults; "Assaults: "
0x9F05B5: push    offset aSmiscnumassaul; "sMiscNumAssaults"
0x9F05BA: mov     ecx, 0B38458h; self
0x9F05BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F05C4: push    offset sub_A20FD0; void (__cdecl *)()
0x9F05C9: call    _atexit
0x9F05CE: pop     ecx
0x9F05CF: retn

0x9F67B0: push    offset aTheElderScroll; "The Elder Scrolls"
0x9F67B5: push    offset aStheelderscrol; "sTheElderScrolls"
0x9F67BA: mov     ecx, offset stru_B38F60; self
0x9F67BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F67C4: push    offset sub_A225E0; void (__cdecl *)()
0x9F67C9: call    _atexit
0x9F67CE: pop     ecx
0x9F67CF: retn

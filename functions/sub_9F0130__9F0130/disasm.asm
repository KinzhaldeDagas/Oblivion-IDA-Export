0x9F0130: push    offset aSoThatSHowItWo; "So that's how it works. You plod along,"...
0x9F0135: push    offset aSlevelup9; "sLevelUp9"
0x9F013A: mov     ecx, offset stru_B38338; self
0x9F013F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0144: push    offset sub_A20D90; void (__cdecl *)()
0x9F0149: call    _atexit
0x9F014E: pop     ecx
0x9F014F: retn

0x9F75D0: push    offset aEyebrowsOuterL; "Eyebrows outer light/dark"
0x9F75D5: push    offset aSeyebrowsouter; "sEyebrowsouter"
0x9F75DA: mov     ecx, offset stru_B392E8; self
0x9F75DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F75E4: push    offset sub_A22CF0; void (__cdecl *)()
0x9F75E9: call    _atexit
0x9F75EE: pop     ecx
0x9F75EF: retn

0x9F74D0: push    offset aEyeshadowLight; "Eyeshadow light/dark"
0x9F74D5: push    offset aSeyeshadow; "sEyeshadow"
0x9F74DA: mov     ecx, offset stru_B392A8; self
0x9F74DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F74E4: push    offset sub_A22C70; void (__cdecl *)()
0x9F74E9: call    _atexit
0x9F74EE: pop     ecx
0x9F74EF: retn

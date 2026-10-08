0x9F7590: push    offset aEyebrowsVeryTh; "Eyebrows very thin/thick"
0x9F7595: push    offset aSeyebrowsvery; "sEyebrowsvery"
0x9F759A: mov     ecx, offset stru_B392D8; self
0x9F759F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F75A4: push    offset sub_A22CD0; void (__cdecl *)()
0x9F75A9: call    _atexit
0x9F75AE: pop     ecx
0x9F75AF: retn

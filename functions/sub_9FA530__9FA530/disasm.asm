0x9FA530: push    offset aAttack_0; "Attack"
0x9FA535: push    offset aScrimetypeatta; "sCrimeTypeAttack"
0x9FA53A: mov     ecx, offset stru_B3A3E8; self
0x9FA53F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA544: push    offset sub_A24000; void (__cdecl *)()
0x9FA549: call    _atexit
0x9FA54E: pop     ecx
0x9FA54F: retn

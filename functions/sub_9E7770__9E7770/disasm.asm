0x9E7770: push    3E8h; defaultValue
0x9E7775: push    offset aIcrimegoldatta; "iCrimeGoldAttackMin"
0x9E777A: mov     ecx, 0B36A60h; self
0x9E777F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E7784: push    offset sub_A1DBE0; void (__cdecl *)()
0x9E7789: call    _atexit
0x9E778E: pop     ecx
0x9E778F: retn

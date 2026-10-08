0x9F8030: push    offset aCharge_0; "Charge:"
0x9F8035: push    offset aSsigilstonecha; "sSigilStoneCharge"
0x9F803A: mov     ecx, offset stru_B39508; self
0x9F803F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F8044: push    offset sub_A23130; void (__cdecl *)()
0x9F8049: call    _atexit
0x9F804E: pop     ecx
0x9F804F: retn

0x9F0D50: push    offset aYouWillGain10I; Initializes Oblivion UI string setting sSpecialization. Its help text says '+10', but it is presentation data only; TESNPC_RecalculateAutoStats authoritatively executes a +5 specialization contribution at level 1 (plus 0.5*(level-1)).
0x9F0D55: push    offset aSspecializatio; "sSpecialization"
0x9F0D5A: mov     ecx, offset g_sSpecialization; self
0x9F0D5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0D64: push    offset sub_A213A0; void (__cdecl *)()
0x9F0D69: call    _atexit
0x9F0D6E: pop     ecx
0x9F0D6F: retn

0x9EBBC0: push    5; defaultValue
0x9EBBC2: push    offset aIcrimegoldtres; "iCrimeGoldTresspass"
0x9EBBC7: mov     ecx, offset g_iCrimeGoldTresspass_Value; self
0x9EBBCC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBBD1: push    offset sub_A1F470; void (__cdecl *)()
0x9EBBD6: call    _atexit
0x9EBBDB: pop     ecx
0x9EBBDC: retn

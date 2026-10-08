0x9DA160: push    0Ah; defaultValue
0x9DA162: push    offset aImagicmaxsummo; "iMagicMaxSummonedCreatureTypes"
0x9DA167: mov     ecx, 0B33554h; self
0x9DA16C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA171: push    offset sub_A17650; void (__cdecl *)()
0x9DA176: call    _atexit
0x9DA17B: pop     ecx
0x9DA17C: retn

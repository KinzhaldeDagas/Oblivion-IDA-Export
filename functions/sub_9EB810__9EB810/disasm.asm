0x9EB810: push    0FFFFFFFFh; defaultValue
0x9EB812: push    offset aIbarterdisposi; "iBarterDispositionPenalty"
0x9EB817: mov     ecx, 0B375E0h; self
0x9EB81C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB821: push    offset sub_A1F2E0; void (__cdecl *)()
0x9EB826: call    _atexit
0x9EB82B: pop     ecx
0x9EB82C: retn

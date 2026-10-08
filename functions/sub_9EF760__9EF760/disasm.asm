0x9EF760: push    8; defaultValue
0x9EF762: push    offset aIshocknumbolts; "iShockNumBolts"
0x9EF767: mov     ecx, (offset flt_B37ED0+278h); self
0x9EF76C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF771: push    offset sub_A209B0; void (__cdecl *)()
0x9EF776: call    _atexit
0x9EF77B: pop     ecx
0x9EF77C: retn

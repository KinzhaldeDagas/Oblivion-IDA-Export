0x9E0770: push    32h ; '2'; defaultValue
0x9E0772: push    offset aIaidefaultdo_0; "iAIDefaultDodgeLeftRightChance"
0x9E0777: mov     ecx, offset stru_B355A0; self
0x9E077C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0781: push    offset sub_A1AA70; void (__cdecl *)()
0x9E0786: call    _atexit
0x9E078B: pop     ecx
0x9E078C: retn

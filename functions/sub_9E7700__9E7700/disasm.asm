0x9E7700: push    32h ; '2'; defaultValue
0x9E7702: push    offset aIalertagressio; "iAlertAgressionMin"
0x9E7707: mov     ecx, (offset flt_B36778+2D0h); self
0x9E770C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E7711: push    offset sub_A1DBB0; void (__cdecl *)()
0x9E7716: call    _atexit
0x9E771B: pop     ecx
0x9E771C: retn

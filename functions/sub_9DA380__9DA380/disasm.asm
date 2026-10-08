0x9DA380: push    offset aWeapon; "Weapon"
0x9DA385: push    offset aSmagiccastwhen; "sMagicCastWhenStrikes"
0x9DA38A: mov     ecx, 0B3363Ch; self
0x9DA38F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA394: push    offset sub_A17760; void (__cdecl *)()
0x9DA399: call    _atexit
0x9DA39E: pop     ecx
0x9DA39F: retn

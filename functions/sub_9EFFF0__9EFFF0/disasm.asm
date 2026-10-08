0x9EFFF0: push    offset aMakeThisMyActi; "Make this my active quest"
0x9EFFF5: push    offset aSswitch; "sSwitch"
0x9EFFFA: mov     ecx, offset stru_B382E8; self
0x9EFFFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0004: push    offset sub_A20CF0; void (__cdecl *)()
0x9F0009: call    _atexit
0x9F000E: pop     ecx
0x9F000F: retn

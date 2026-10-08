0x9DA140: push    offset aYouCannotCastR; "You cannot cast ranged spells underwate"...
0x9DA145: push    offset aSmagiccastrang; "sMagicCastRangedUnderwater"
0x9DA14A: mov     ecx, 0B3354Ch; self
0x9DA14F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA154: push    offset sub_A17640; void (__cdecl *)()
0x9DA159: call    _atexit
0x9DA15E: pop     ecx
0x9DA15F: retn

0x9F9780: push    offset aMagicka; "Magicka"
0x9F9785: push    offset aSderivedattr_0; "sDerivedAttributeNameMagicka"
0x9F978A: mov     ecx, 0B3A07Ch; self
0x9F978F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9794: push    offset sub_A23930; void (__cdecl *)()
0x9F9799: call    _atexit
0x9F979E: pop     ecx
0x9F979F: retn

0x9F9C80: push    offset aMagickaDescrip; "Magicka Description"
0x9F9C85: push    offset aSderivedattr_4; "sDerivedAttributeDescMagicka"
0x9F9C8A: mov     ecx, 0B3A1BCh; self
0x9F9C8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9C94: push    offset sub_A23BB0; void (__cdecl *)()
0x9F9C99: call    _atexit
0x9F9C9E: pop     ecx
0x9F9C9F: retn

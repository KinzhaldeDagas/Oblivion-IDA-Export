0x9E41A0: push    offset aMagic_1; "Magic"
0x9E41A5: push    offset aSspecnamemagic; "sSpecNameMagic"
0x9E41AA: mov     ecx, offset stru_B364F0; self
0x9E41AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E41B4: push    offset sub_A1C4B0; void (__cdecl *)()
0x9E41B9: call    _atexit
0x9E41BE: pop     ecx
0x9E41BF: retn

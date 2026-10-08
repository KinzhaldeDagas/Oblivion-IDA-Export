0x9F9CC0: push    offset aEncumbranceDes; "Encumbrance Description"
0x9F9CC5: push    offset aSderivedattr_6; "sDerivedAttributeDescEncumbrance"
0x9F9CCA: mov     ecx, 0B3A1CCh; self
0x9F9CCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9CD4: push    offset sub_A23BD0; void (__cdecl *)()
0x9F9CD9: call    _atexit
0x9F9CDE: pop     ecx
0x9F9CDF: retn

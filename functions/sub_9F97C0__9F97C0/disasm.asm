0x9F97C0: push    offset aEncumbrance; "Encumbrance"
0x9F97C5: push    offset aSderivedattr_2; "sDerivedAttributeNameEncumbrance"
0x9F97CA: mov     ecx, 0B3A08Ch; self
0x9F97CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F97D4: push    offset sub_A23950; void (__cdecl *)()
0x9F97D9: call    _atexit
0x9F97DE: pop     ecx
0x9F97DF: retn

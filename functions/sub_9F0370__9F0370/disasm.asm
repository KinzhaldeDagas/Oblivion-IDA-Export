0x9F0370: push    offset aGoverningAttri; "Governing Attribute: "
0x9F0375: push    offset aSgoverningattr; "sGoverningAttribute"
0x9F037A: mov     ecx, offset stru_B383C8; self
0x9F037F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0384: push    offset sub_A20EB0; void (__cdecl *)()
0x9F0389: call    _atexit
0x9F038E: pop     ecx
0x9F038F: retn

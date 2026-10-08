0x9EA270: push    offset aYourAttackHasN; "Your attack has no effect."
0x9EA275: push    offset aSnormalweapons; "sNormalWeaponsResisted"
0x9EA27A: mov     ecx, 0B37208h; self
0x9EA27F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA284: push    offset sub_A1EB30; void (__cdecl *)()
0x9EA289: call    _atexit
0x9EA28E: pop     ecx
0x9EA28F: retn

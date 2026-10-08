0x9F1E70: push    offset aYouCannotCha_0; "You cannot change armor while attacking"...
0x9F1E75: push    offset aSanimationca_0; "sAnimationCanNotEquipArmor"
0x9F1E7A: mov     ecx, offset stru_B38A28; self
0x9F1E7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1E84: push    offset sub_A21B70; void (__cdecl *)()
0x9F1E89: call    _atexit
0x9F1E8E: pop     ecx
0x9F1E8F: retn

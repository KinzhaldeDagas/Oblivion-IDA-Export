0x9F1E50: push    offset aYouCannotChang; "You cannot change weapons while attacki"...
0x9F1E55: push    offset aSanimationcann; "sAnimationCanNotEquipWeapon"
0x9F1E5A: mov     ecx, offset stru_B38A20; self
0x9F1E5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1E64: push    offset sub_A21B60; void (__cdecl *)()
0x9F1E69: call    _atexit
0x9F1E6E: pop     ecx
0x9F1E6F: retn

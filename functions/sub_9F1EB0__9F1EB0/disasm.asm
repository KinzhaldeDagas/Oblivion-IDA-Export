0x9F1EB0: push    offset aYouCannotChang; "You cannot change weapons while attacki"...
0x9F1EB5: push    offset aSanimationca_1; "sAnimationCanNotUnequip"
0x9F1EBA: mov     ecx, offset stru_B38A38; self
0x9F1EBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1EC4: push    offset sub_A21B90; void (__cdecl *)()
0x9F1EC9: call    _atexit
0x9F1ECE: pop     ecx
0x9F1ECF: retn

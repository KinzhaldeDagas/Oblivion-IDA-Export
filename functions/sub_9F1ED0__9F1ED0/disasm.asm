0x9F1ED0: push    offset aYouCannotUnequ; "You cannot unequip this item."
0x9F1ED5: push    offset aScantunequipge; "sCantUnequipGeneric"
0x9F1EDA: mov     ecx, offset TESObjectREFR
0x9F1EDF: call    GameSetting_ConstrAndReg
0x9F1EE4: push    offset sub_A21BA0; void (__cdecl *)()
0x9F1EE9: call    _atexit
0x9F1EEE: pop     ecx
0x9F1EEF: retn

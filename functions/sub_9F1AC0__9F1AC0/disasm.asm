0x9F1AC0: push    offset aYouMustAddAtLe; "You must add at least one effect in ord"...
0x9F1AC5: push    offset aSaddaneffect; "sAddAnEffect"
0x9F1ACA: mov     ecx, offset stru_B38998; self
0x9F1ACF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1AD4: push    offset sub_A21A50; void (__cdecl *)()
0x9F1AD9: call    _atexit
0x9F1ADE: pop     ecx
0x9F1ADF: retn

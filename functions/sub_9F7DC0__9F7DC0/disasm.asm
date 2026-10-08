0x9F7DC0: push    offset aCustomColor; "Custom color"
0x9F7DC5: push    offset aScustomcolor; "sCustomColor"
0x9F7DCA: mov     ecx, offset stru_B394D8; self
0x9F7DCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7DD4: push    offset sub_A230D0; void (__cdecl *)()
0x9F7DD9: call    _atexit
0x9F7DDE: pop     ecx
0x9F7DDF: retn

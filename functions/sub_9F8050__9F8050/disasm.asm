0x9F8050: push    offset aConstantEffe_0; "Constant effect."
0x9F8055: push    offset aSsigilstonecon; "sSigilStoneConstantEffect"
0x9F805A: mov     ecx, offset stru_B39510; self
0x9F805F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F8064: push    offset sub_A23140; void (__cdecl *)()
0x9F8069: call    _atexit
0x9F806E: pop     ecx
0x9F806F: retn

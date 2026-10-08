0x9F74B0: push    offset aEyelinerLightD; "Eyeliner light/dark"
0x9F74B5: push    offset aSeyeliner; "sEyeliner"
0x9F74BA: mov     ecx, offset stru_B392A0; self
0x9F74BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F74C4: push    offset sub_A22C60; void (__cdecl *)()
0x9F74C9: call    _atexit
0x9F74CE: pop     ecx
0x9F74CF: retn

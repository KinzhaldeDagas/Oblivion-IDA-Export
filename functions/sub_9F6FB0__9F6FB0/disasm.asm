0x9F6FB0: push    offset aJawlineConcave; "Jawline concave/convex"
0x9F6FB5: push    offset aSjawline; "sJawline"
0x9F6FBA: mov     ecx, offset stru_B39160; self
0x9F6FBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6FC4: push    offset sub_A229E0; void (__cdecl *)()
0x9F6FC9: call    _atexit
0x9F6FCE: pop     ecx
0x9F6FCF: retn

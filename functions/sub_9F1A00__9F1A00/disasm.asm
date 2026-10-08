0x9F1A00: push    offset aTarget_0; "Target"
0x9F1A05: push    offset aStargetrange; "sTargetRange"
0x9F1A0A: mov     ecx, offset stru_B38968; self
0x9F1A0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1A14: push    offset sub_A219F0; void (__cdecl *)()
0x9F1A19: call    _atexit
0x9F1A1E: pop     ecx
0x9F1A1F: retn

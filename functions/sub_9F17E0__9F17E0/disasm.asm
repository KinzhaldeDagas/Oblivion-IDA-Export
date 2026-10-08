0x9F17E0: push    offset aYourPotionFail; "Your potion failed and your ingredients"...
0x9F17E5: push    offset aSpotionfailed; "sPotionFailed"
0x9F17EA: mov     ecx, 0B388E0h; self
0x9F17EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F17F4: push    offset sub_A218E0; void (__cdecl *)()
0x9F17F9: call    _atexit
0x9F17FE: pop     ecx
0x9F17FF: retn

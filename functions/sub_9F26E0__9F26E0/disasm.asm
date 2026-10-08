0x9F26E0: push    offset aYouCannotPlace; "You cannot place items in a container w"...
0x9F26E5: push    offset aSinvalidpickpo; "sInvalidPickpocket"
0x9F26EA: mov     ecx, offset stru_B38C40; self
0x9F26EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F26F4: push    offset sub_A21FA0; void (__cdecl *)()
0x9F26F9: call    _atexit
0x9F26FE: pop     ecx
0x9F26FF: retn

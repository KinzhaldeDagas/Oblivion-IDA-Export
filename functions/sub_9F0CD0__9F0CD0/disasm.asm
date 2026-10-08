0x9F0CD0: push    offset aYouHaveAlready; "You have already made the maximum numbe"...
0x9F0CD5: push    offset aSslotsfull; "sSlotsFull"
0x9F0CDA: mov     ecx, offset stru_B38620; self
0x9F0CDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0CE4: push    offset sub_A21360; void (__cdecl *)()
0x9F0CE9: call    _atexit
0x9F0CEE: pop     ecx
0x9F0CEF: retn

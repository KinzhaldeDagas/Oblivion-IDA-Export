0x9F7610: push    offset aLipsFlushedPal; "Lips flushed/pale"
0x9F7615: push    offset aSlipsflushed; "sLipsflushed"
0x9F761A: mov     ecx, offset stru_B392F8; self
0x9F761F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7624: push    offset sub_A22D10; void (__cdecl *)()
0x9F7629: call    _atexit
0x9F762E: pop     ecx
0x9F762F: retn

0x9F6970: push    offset aBlue_0; "Blue"
0x9F6975: push    offset aSblue; "sBlue"
0x9F697A: mov     ecx, offset stru_B38FD0; self
0x9F697F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6984: push    offset sub_A226C0; void (__cdecl *)()
0x9F6989: call    _atexit
0x9F698E: pop     ecx
0x9F698F: retn

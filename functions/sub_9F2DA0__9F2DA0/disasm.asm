0x9F2DA0: push    offset aYouHaveCapture; "You have captured a soul!"
0x9F2DA5: push    offset aSsoulcaptured; "sSoulCaptured"
0x9F2DAA: mov     ecx, 0B38DF0h; self
0x9F2DAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2DB4: push    offset sub_A22300; void (__cdecl *)()
0x9F2DB9: call    _atexit
0x9F2DBE: pop     ecx
0x9F2DBF: retn

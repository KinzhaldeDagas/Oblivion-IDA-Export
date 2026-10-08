0x9DA2C0: push    offset aPower; "Power"
0x9DA2C5: push    offset aSmagictypepowe; "sMagicTypePower"
0x9DA2CA: mov     ecx, 0B3360Ch; self
0x9DA2CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA2D4: push    offset sub_A17700; void (__cdecl *)()
0x9DA2D9: call    _atexit
0x9DA2DE: pop     ecx
0x9DA2DF: retn

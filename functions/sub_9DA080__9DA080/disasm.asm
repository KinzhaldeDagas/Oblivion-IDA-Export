0x9DA080: push    offset EmptyString; defaultValue
0x9DA085: push    offset aSmagiccastokte; "sMagicCastOKText"
0x9DA08A: mov     ecx, 0B3351Ch; self
0x9DA08F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA094: push    offset sub_A175E0; void (__cdecl *)()
0x9DA099: call    _atexit
0x9DA09E: pop     ecx
0x9DA09F: retn

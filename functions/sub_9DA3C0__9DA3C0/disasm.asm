0x9DA3C0: push    offset aApparel; "Apparel"
0x9DA3C5: push    offset aSmagiccastcons; "sMagicCastConstant"
0x9DA3CA: mov     ecx, 0B3364Ch; self
0x9DA3CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA3D4: push    offset sub_A17780; void (__cdecl *)()
0x9DA3D9: call    _atexit
0x9DA3DE: pop     ecx
0x9DA3DF: retn

0x9F21B0: push    offset aYouCannotWai_2; "You cannot wait when enemies are near b"...
0x9F21B5: push    offset aSnowaithostila; "sNoWaitHostilActorsNear"
0x9F21BA: mov     ecx, offset stru_B38AF8; self
0x9F21BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F21C4: push    offset sub_A21D10; void (__cdecl *)()
0x9F21C9: call    _atexit
0x9F21CE: pop     ecx
0x9F21CF: retn

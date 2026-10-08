0x9F2170: push    offset aYouCannotWai_0; "You cannot wait while trespassing."
0x9F2175: push    offset aSnowaittrespas; "sNoWaitTrespass"
0x9F217A: mov     ecx, offset stru_B38AE8; self
0x9F217F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2184: push    offset sub_A21CF0; void (__cdecl *)()
0x9F2189: call    _atexit
0x9F218E: pop     ecx
0x9F218F: retn

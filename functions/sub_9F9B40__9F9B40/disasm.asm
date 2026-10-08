0x9F9B40: push    offset aInfamy_0; "Infamy"
0x9F9B45: push    offset aSvirtuenameinf; "sVirtueNameInfamy"
0x9F9B4A: mov     ecx, 0B3A16Ch; self
0x9F9B4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9B54: push    offset sub_A23B10; void (__cdecl *)()
0x9F9B59: call    _atexit
0x9F9B5E: pop     ecx
0x9F9B5F: retn

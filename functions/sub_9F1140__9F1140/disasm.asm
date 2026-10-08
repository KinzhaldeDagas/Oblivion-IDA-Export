0x9F1140: push    offset aNoneOfTheMaste; "None of the master files used in this s"...
0x9F1145: push    offset aSsavegamenomas; "sSaveGameNoMasterFilesFound"
0x9F114A: mov     ecx, offset stru_B38738; self
0x9F114F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1154: push    offset sub_A21590; void (__cdecl *)()
0x9F1159: call    _atexit
0x9F115E: pop     ecx
0x9F115F: retn

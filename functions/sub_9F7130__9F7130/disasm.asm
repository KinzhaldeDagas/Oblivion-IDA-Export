0x9F7130: push    offset aNoseBridgeShor; "Nose bridge short/long"
0x9F7135: push    offset aSnosebridgesho; "sNosebridgeshort"
0x9F713A: mov     ecx, offset stru_B391C0; self
0x9F713F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7144: push    offset sub_A22AA0; void (__cdecl *)()
0x9F7149: call    _atexit
0x9F714E: pop     ecx
0x9F714F: retn

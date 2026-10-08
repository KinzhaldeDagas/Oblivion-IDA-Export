0x9F72B0: push    offset aNoseTiltDownUp; "Nose tilt down/up"
0x9F72B5: push    offset aSnosetilt; "sNosetilt"
0x9F72BA: mov     ecx, offset stru_B39220; self
0x9F72BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F72C4: push    offset sub_A22B60; void (__cdecl *)()
0x9F72C9: call    _atexit
0x9F72CE: pop     ecx
0x9F72CF: retn

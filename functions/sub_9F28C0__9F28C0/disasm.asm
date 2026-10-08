0x9F28C0: push    offset aSell; "Sell"
0x9F28C5: push    offset aSsell; "sSell"
0x9F28CA: mov     ecx, offset stru_B38CB8; self
0x9F28CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F28D4: push    offset sub_A22090; void (__cdecl *)()
0x9F28D9: call    _atexit
0x9F28DE: pop     ecx
0x9F28DF: retn

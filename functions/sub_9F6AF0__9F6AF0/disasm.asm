0x9F6AF0: push    offset aMouth; "Mouth"
0x9F6AF5: push    offset aSmouth; "sMouth"
0x9F6AFA: mov     ecx, offset stru_B39030; self
0x9F6AFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6B04: push    offset sub_A22780; void (__cdecl *)()
0x9F6B09: call    _atexit
0x9F6B0E: pop     ecx
0x9F6B0F: retn

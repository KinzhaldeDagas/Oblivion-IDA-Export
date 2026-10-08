0x9F19A0: push    offset aArea; "Area"
0x9F19A5: push    offset aSareatext; "sAreaText"
0x9F19AA: mov     ecx, 0B38950h; self
0x9F19AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F19B4: push    offset sub_A219C0; void (__cdecl *)()
0x9F19B9: call    _atexit
0x9F19BE: pop     ecx
0x9F19BF: retn

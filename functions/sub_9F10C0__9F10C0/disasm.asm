0x9F10C0: push    offset aAutosave_0; "Autosave"
0x9F10C5: push    offset aSmenudisplayau; "sMenuDisplayAutosaveName"
0x9F10CA: mov     ecx, offset stru_B38718; self
0x9F10CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F10D4: push    offset sub_A21550; void (__cdecl *)()
0x9F10D9: call    _atexit
0x9F10DE: pop     ecx
0x9F10DF: retn

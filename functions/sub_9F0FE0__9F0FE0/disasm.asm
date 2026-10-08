0x9F0FE0: push    offset aSavingContent_; "Saving content. Please don't turn off y"...
0x9F0FE5: push    offset aSmenudisplayxb; "sMenuDisplayXBoxSaveMessage"
0x9F0FEA: mov     ecx, offset stru_B386E0; self
0x9F0FEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0FF4: push    offset sub_A214E0; void (__cdecl *)()
0x9F0FF9: call    _atexit
0x9F0FFE: pop     ecx
0x9F0FFF: retn

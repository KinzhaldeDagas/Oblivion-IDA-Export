0x9F7B50: push    offset aResetFace?; "Reset face?"
0x9F7B55: push    offset aSresetface; "sResetFace"
0x9F7B5A: mov     ecx, offset g_sResetFace; self
0x9F7B5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7B64: push    offset sub_A22FB0; void (__cdecl *)()
0x9F7B69: call    _atexit
0x9F7B6E: pop     ecx
0x9F7B6F: retn

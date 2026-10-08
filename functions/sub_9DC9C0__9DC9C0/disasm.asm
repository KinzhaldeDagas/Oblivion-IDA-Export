0x9DC9C0: push    offset aAbort; "Abort"
0x9DC9C5: push    offset aSaborttext; "sAbortText"
0x9DC9CA: mov     ecx, 0B34DB4h; self
0x9DC9CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DC9D4: push    offset sub_A18A90; void (__cdecl *)()
0x9DC9D9: call    _atexit
0x9DC9DE: pop     ecx
0x9DC9DF: retn

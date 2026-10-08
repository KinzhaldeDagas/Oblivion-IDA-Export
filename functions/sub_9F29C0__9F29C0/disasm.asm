0x9F29C0: push    offset off_A3DAE8; defaultValue
0x9F29C5: push    offset aSyes; "sYes"
0x9F29CA: mov     ecx, 0B38CF8h; self
0x9F29CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F29D4: push    offset sub_A22110; void (__cdecl *)()
0x9F29D9: call    _atexit
0x9F29DE: pop     ecx
0x9F29DF: retn

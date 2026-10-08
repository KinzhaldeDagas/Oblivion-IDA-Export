0x9F0FA0: push    offset aSDoesNotHaveSu; "%s does not have sufficent disk space a"...
0x9F0FA5: push    offset aSsavegameoutof; "sSaveGameOutOfDiskSpace"
0x9F0FAA: mov     ecx, offset stru_B386D0; self
0x9F0FAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0FB4: push    offset sub_A214C0; void (__cdecl *)()
0x9F0FB9: call    _atexit
0x9F0FBE: pop     ecx
0x9F0FBF: retn

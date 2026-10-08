0x9F26C0: push    offset aContainerIsLoc; "Container is locked.  You need the key "...
0x9F26C5: push    offset aSlockedcontain; "sLockedContainer"
0x9F26CA: mov     ecx, offset stru_B38C38; self
0x9F26CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F26D4: push    offset sub_A21F90; void (__cdecl *)()
0x9F26D9: call    _atexit
0x9F26DE: pop     ecx
0x9F26DF: retn

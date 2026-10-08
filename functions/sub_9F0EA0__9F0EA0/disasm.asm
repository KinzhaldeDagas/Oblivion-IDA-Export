0x9F0EA0: push    offset aThisLockCannot; "This lock cannot be picked. It requires"...
0x9F0EA5: push    offset aSimpossibleloc; "sImpossibleLock"
0x9F0EAA: mov     ecx, offset stru_B38690; self
0x9F0EAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0EB4: push    offset sub_A21440; void (__cdecl *)()
0x9F0EB9: call    _atexit
0x9F0EBE: pop     ecx
0x9F0EBF: retn

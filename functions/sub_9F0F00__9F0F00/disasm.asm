0x9F0F00: push    offset aDoorIsLockedAn; "Door is locked and you don't have a loc"...
0x9F0F05: push    offset aSnolockpick; "sNoLockPick"
0x9F0F0A: mov     ecx, offset stru_B386A8; self
0x9F0F0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0F14: push    offset sub_A21470; void (__cdecl *)()
0x9F0F19: call    _atexit
0x9F0F1E: pop     ecx
0x9F0F1F: retn

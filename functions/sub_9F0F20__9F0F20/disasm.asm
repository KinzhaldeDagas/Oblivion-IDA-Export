0x9F0F20: push    offset aYouCanTPickALo; "You can't pick a lock while being pursu"...
0x9F0F25: push    offset aSnolockpickifc; "sNoLockPickIfCrimeAlert"
0x9F0F2A: mov     ecx, offset stru_B386B0; self
0x9F0F2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0F34: push    offset sub_A21480; void (__cdecl *)()
0x9F0F39: call    _atexit
0x9F0F3E: pop     ecx
0x9F0F3F: retn

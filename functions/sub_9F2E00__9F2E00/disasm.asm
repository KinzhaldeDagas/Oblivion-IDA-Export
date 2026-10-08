0x9F2E00: push    offset aIsBeingDrained; "is being drained"
0x9F2E05: push    offset aSattributedrai; "sAttributeDrained"
0x9F2E0A: mov     ecx, 0B38E08h; self
0x9F2E0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2E14: push    offset sub_A22330; void (__cdecl *)()
0x9F2E19: call    _atexit
0x9F2E1E: pop     ecx
0x9F2E1F: retn

0x9F2DE0: push    offset aHasBeenDamaged; "has been damaged"
0x9F2DE5: push    offset aSattributedama; "sAttributeDamaged"
0x9F2DEA: mov     ecx, 0B38E00h; self
0x9F2DEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2DF4: push    offset sub_A22320; void (__cdecl *)()
0x9F2DF9: call    _atexit
0x9F2DFE: pop     ecx
0x9F2DFF: retn

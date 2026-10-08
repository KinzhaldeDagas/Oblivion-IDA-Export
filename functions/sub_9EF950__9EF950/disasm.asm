0x9EF950: push    1; defaultValue
0x9EF952: push    offset aIshocksubsegme; "iShockSubSegments"
0x9EF957: mov     ecx, (offset flt_B37ED0+2D0h); self
0x9EF95C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF961: push    offset sub_A20A60; void (__cdecl *)()
0x9EF966: call    _atexit
0x9EF96B: pop     ecx
0x9EF96C: retn

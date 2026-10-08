0x9E0710: push    14h; defaultValue
0x9E0712: push    offset aImaxarrowsinqu; "iMaxArrowsInQuiver"
0x9E0717: mov     ecx, 0B35588h; self
0x9E071C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0721: push    offset sub_A1AA40; void (__cdecl *)()
0x9E0726: call    _atexit
0x9E072B: pop     ecx
0x9E072C: retn

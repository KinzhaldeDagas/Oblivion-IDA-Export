0x9E28F0: push    offset aThisDoorLeadsN; "This door leads nowhere."
0x9E28F5: push    offset aSrandomdoortel; "sRandomDoorTeleportFailureMessage"
0x9E28FA: mov     ecx, offset stru_B35B34; self
0x9E28FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2904: push    offset sub_A1B730; void (__cdecl *)()
0x9E2909: call    _atexit
0x9E290E: pop     ecx
0x9E290F: retn

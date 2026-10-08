0x9DC1C0: push    offset aIconsWeaponsHa; "Icons\\Weapons\\HandToHand.dds"
0x9DC1C5: push    offset aShandtohandico; "sHandToHandIcon"
0x9DC1CA: mov     ecx, offset stru_B33D84; self
0x9DC1CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DC1D4: push    offset sub_A18650; void (__cdecl *)()
0x9DC1D9: call    _atexit
0x9DC1DE: pop     ecx
0x9DC1DF: retn

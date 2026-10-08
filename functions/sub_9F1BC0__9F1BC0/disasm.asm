0x9F1BC0: push    offset aTheEnchantedIt; "The enchanted item does not have enough"...
0x9F1BC5: push    offset aSnocharge; "sNoCharge"
0x9F1BCA: mov     ecx, 0B389D8h; self
0x9F1BCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1BD4: push    offset sub_A21AD0; void (__cdecl *)()
0x9F1BD9: call    _atexit
0x9F1BDE: pop     ecx
0x9F1BDF: retn

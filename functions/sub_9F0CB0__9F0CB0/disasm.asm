0x9F0CB0: push    offset aMenusLevel_u_2; "Menus\\Level_up\\class_creation\\class_"...
0x9F0CB5: push    offset aSstealthimage; "sStealthImage"
0x9F0CBA: mov     ecx, offset stru_B38618; self
0x9F0CBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0CC4: push    offset sub_A21350; void (__cdecl *)()
0x9F0CC9: call    _atexit
0x9F0CCE: pop     ecx
0x9F0CCF: retn

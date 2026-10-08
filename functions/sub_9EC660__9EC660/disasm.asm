0x9EC660: push    19h; defaultValue
0x9EC662: push    offset aIpersuasionmid; "iPersuasionMiddle"
0x9EC667: mov     ecx, 0B37890h; self
0x9EC66C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC671: push    offset sub_A1F840; void (__cdecl *)()
0x9EC676: call    _atexit
0x9EC67B: pop     ecx
0x9EC67C: retn

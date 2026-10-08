0x9E0910: push    1Eh; defaultValue
0x9E0912: push    offset aIaidefaultbloc; "iAIDefaultBlockChance"
0x9E0917: mov     ecx, 0B355E8h; self
0x9E091C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0921: push    offset sub_A1AB00; void (__cdecl *)()
0x9E0926: call    _atexit
0x9E092B: pop     ecx
0x9E092C: retn

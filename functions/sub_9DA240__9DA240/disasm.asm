0x9DA240: push    offset aSpell; "Spell"
0x9DA245: push    offset aSmagictypespel; "sMagicTypeSpell"
0x9DA24A: mov     ecx, 0B335ECh; self
0x9DA24F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA254: push    offset sub_A176C0; void (__cdecl *)()
0x9DA259: call    _atexit
0x9DA25E: pop     ecx
0x9DA25F: retn

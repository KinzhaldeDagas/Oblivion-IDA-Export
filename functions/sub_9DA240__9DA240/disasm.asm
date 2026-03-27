0x9DA240: push    offset aSpell; "Spell"
0x9DA245: push    offset aSmagictypespel; "sMagicTypeSpell"
0x9DA24A: mov     ecx, offset sMagicTypeSpell
0x9DA24F: call    GameSetting_ConstrAndReg
0x9DA254: push    offset sub_A176C0; void (__cdecl *)()
0x9DA259: call    _atexit
0x9DA25E: pop     ecx
0x9DA25F: retn

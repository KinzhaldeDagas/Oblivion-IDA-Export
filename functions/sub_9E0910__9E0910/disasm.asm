0x9E0910: push    1Eh
0x9E0912: push    offset aIaidefaultbloc; "iAIDefaultBlockChance"
0x9E0917: mov     ecx, offset iAIDefaultBlockChance
0x9E091C: call    GameSetting_ConstrAndReg
0x9E0921: push    offset sub_A1AB00; void (__cdecl *)()
0x9E0926: call    _atexit
0x9E092B: pop     ecx
0x9E092C: retn

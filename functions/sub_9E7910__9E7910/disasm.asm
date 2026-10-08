0x9E7910: fld     ds:flt_A5793C; Registers Oblivion GameSetting fAItalktoNPCtimer = 60.0 seconds. It is the ambient conversation-scan retry cooldown: the first trigger resets it after any start attempt, while the second resets it only after a successful start.
0x9E7916: push    ecx
0x9E7917: fstp    [esp+4+var_4]; float
0x9E791A: push    offset aFaitalktonpcti; "fAItalktoNPCtimer"
0x9E791F: mov     ecx, (offset flt_B36A88+28h)
0x9E7924: call    GameSetting_ConstrAndReg_float
0x9E7929: push    offset sub_A1DC80; void (__cdecl *)()
0x9E792E: call    _atexit
0x9E7933: pop     ecx
0x9E7934: retn

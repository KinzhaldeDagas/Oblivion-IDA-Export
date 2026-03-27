0x9E8090: fld     ds:flt_A57F50
0x9E8096: push    ecx
0x9E8097: fstp    [esp+4+var_4]; float
0x9E809A: push    offset aFpcturnanimdel; "fPCTurnAnimDeltaThreshold"
0x9E809F: mov     ecx, offset unk_B36BF8
0x9E80A4: call    GameSetting_ConstrAndReg_float
0x9E80A9: push    offset sub_A1DF10; void (__cdecl *)()
0x9E80AE: call    _atexit
0x9E80B3: pop     ecx
0x9E80B4: retn

0x9E97B0: fld     ds:flt_A31E2C
0x9E97B6: push    ecx
0x9E97B7: fstp    [esp+4+var_4]; float
0x9E97BA: push    offset aFfatigueblocks; "fFatigueBlockSkillBase"
0x9E97BF: mov     ecx, offset fFatigueBlockSkillBase
0x9E97C4: call    GameSetting_ConstrAndReg_float
0x9E97C9: push    offset sub_A1E720; void (__cdecl *)()
0x9E97CE: call    _atexit
0x9E97D3: pop     ecx
0x9E97D4: retn

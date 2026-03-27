0x9E86C0: fld     ds:flt_A31E2C
0x9E86C6: push    ecx
0x9E86C7: fstp    [esp+4+var_4]; float
0x9E86CA: push    offset aFairangedweapo; "fAIRangedWeaponMult"
0x9E86CF: mov     ecx, offset unk_B36D18
0x9E86D4: call    GameSetting_ConstrAndReg_float
0x9E86D9: push    offset sub_A1E150; void (__cdecl *)()
0x9E86DE: call    _atexit
0x9E86E3: pop     ecx
0x9E86E4: retn

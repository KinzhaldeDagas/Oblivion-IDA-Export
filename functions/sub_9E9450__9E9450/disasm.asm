0x9E9450: fld     ds:fConstant_2
0x9E9456: push    ecx
0x9E9457: fstp    [esp+4+var_4]; float
0x9E945A: push    offset aFcombatbetween; "fCombatBetweenAdvanceTimer"
0x9E945F: mov     ecx, offset flt_B36F70
0x9E9464: call    GameSetting_ConstrAndReg_float
0x9E9469: push    offset sub_A1E600; void (__cdecl *)()
0x9E946E: call    _atexit
0x9E9473: pop     ecx
0x9E9474: retn

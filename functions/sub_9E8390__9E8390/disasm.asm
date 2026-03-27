0x9E8390: fld1
0x9E8392: push    ecx
0x9E8393: fstp    [esp+4+var_4]; float
0x9E8396: mov     ecx, offset flt_B36C88
0x9E839B: push    offset aFreequiparmort; "fReEquipArmorTime"
0x9E83A0: call    GameSetting_ConstrAndReg_float
0x9E83A5: push    offset sub_A1E030; void (__cdecl *)()
0x9E83AA: call    _atexit
0x9E83AF: pop     ecx
0x9E83B0: retn

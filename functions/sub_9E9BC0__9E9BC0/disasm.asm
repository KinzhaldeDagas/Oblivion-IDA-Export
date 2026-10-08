0x9E9BC0: fld     ds:flt_A59098
0x9E9BC6: push    ecx
0x9E9BC7: fstp    [esp+4+var_4]; float
0x9E9BCA: push    offset aFarrowfovtimes; "fArrowFOVTimeStart"
0x9E9BCF: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+3D8h)
0x9E9BD4: call    GameSetting_ConstrAndReg_float
0x9E9BD9: push    offset sub_A1E880; void (__cdecl *)()
0x9E9BDE: call    _atexit
0x9E9BE3: pop     ecx
0x9E9BE4: retn

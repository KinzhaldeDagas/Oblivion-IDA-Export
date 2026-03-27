0x9FA000: push    offset aMenusStatsSt_3; "Menus\\Stats\\stat_pop_icon_speed.dds"
0x9FA005: push    offset aSattributeic_3; "sAttributeIconSpeed"
0x9FA00A: mov     ecx, offset unk_B3A29C
0x9FA00F: call    GameSetting_ConstrAndReg
0x9FA014: push    offset sub_A23D70; void (__cdecl *)()
0x9FA019: call    _atexit
0x9FA01E: pop     ecx
0x9FA01F: retn

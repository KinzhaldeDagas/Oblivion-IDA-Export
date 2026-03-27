0x9E74C0: fldz
0x9E74C2: push    ecx
0x9E74C3: fstp    [esp+4+var_4]; float
0x9E74C6: mov     ecx, offset unk_B369E8
0x9E74CB: push    offset aFpicklevelbase; "fPickLevelBase"
0x9E74D0: call    GameSetting_ConstrAndReg_float
0x9E74D5: push    offset sub_A1DAF0; void (__cdecl *)()
0x9E74DA: call    _atexit
0x9E74DF: pop     ecx
0x9E74E0: retn

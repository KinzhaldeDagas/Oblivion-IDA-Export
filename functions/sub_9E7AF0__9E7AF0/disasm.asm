0x9E7AF0: fld     ds:flt_A57F50
0x9E7AF6: push    ecx
0x9E7AF7: fstp    [esp+4+var_4]; float
0x9E7AFA: push    offset aFdialogspeachd; "fDialogSpeachDelay"
0x9E7AFF: mov     ecx, offset unk_B36B00
0x9E7B04: call    GameSetting_ConstrAndReg_float
0x9E7B09: push    offset sub_A1DD20; void (__cdecl *)()
0x9E7B0E: call    _atexit
0x9E7B13: pop     ecx
0x9E7B14: retn

0x9E93C0: fld     ds:flt_A2FAAC
0x9E93C6: push    ecx
0x9E93C7: fstp    [esp+4+var_4]; float
0x9E93CA: push    offset aFcombatspeak_0; "fCombatSpeakHitThreshold"
0x9E93CF: mov     ecx, offset unk_B36F58
0x9E93D4: call    GameSetting_ConstrAndReg_float
0x9E93D9: push    offset sub_A1E5D0; void (__cdecl *)()
0x9E93DE: call    _atexit
0x9E93E3: pop     ecx
0x9E93E4: retn

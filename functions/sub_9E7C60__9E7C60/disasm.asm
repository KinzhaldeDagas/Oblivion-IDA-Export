0x9E7C60: fld     ds:flt_A41304
0x9E7C66: push    ecx
0x9E7C67: fstp    [esp+4+var_4]; float
0x9E7C6A: push    offset aFaiconversatio; "fAIConversationExploreTime"
0x9E7C6F: mov     ecx, offset unk_B36B40
0x9E7C74: call    GameSetting_ConstrAndReg_float
0x9E7C79: push    offset sub_A1DDA0; void (__cdecl *)()
0x9E7C7E: call    _atexit
0x9E7C83: pop     ecx
0x9E7C84: retn

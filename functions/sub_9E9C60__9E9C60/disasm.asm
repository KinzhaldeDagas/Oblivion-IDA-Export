0x9E9C60: push    0Fh; defaultValue
0x9E9C62: push    offset aIarrowmaxrefco; "iArrowMaxRefCount"
0x9E9C67: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+3F8h); self
0x9E9C6C: call    GameSetting_ConstrAndReg; Register integer game setting iArrowMaxRefCount with default value 15. This pass does not yet assign its exact pruning caller.
0x9E9C71: push    offset sub_A1E8C0; void (__cdecl *)()
0x9E9C76: call    _atexit
0x9E9C7B: pop     ecx
0x9E9C7C: retn

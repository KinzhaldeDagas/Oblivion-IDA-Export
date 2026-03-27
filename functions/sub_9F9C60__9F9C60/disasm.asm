0x9F9C60: push    offset aHealthDescript; "Health Description"
0x9F9C65: push    offset aSderivedattr_3; "sDerivedAttributeDescHealth"
0x9F9C6A: mov     ecx, offset sDerivedAttributeDescHealth
0x9F9C6F: call    GameSetting_ConstrAndReg
0x9F9C74: push    offset sub_A23BA0; void (__cdecl *)()
0x9F9C79: call    _atexit
0x9F9C7E: pop     ecx
0x9F9C7F: retn

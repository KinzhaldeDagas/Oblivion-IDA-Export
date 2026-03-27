0x9F9760: push    offset aHealth; "Health"
0x9F9765: push    offset aSderivedattrib; "sDerivedAttributeNameHealth"
0x9F976A: mov     ecx, offset sDerivedAttributeNameHealth
0x9F976F: call    GameSetting_ConstrAndReg
0x9F9774: push    offset sub_A23920; void (__cdecl *)()
0x9F9779: call    _atexit
0x9F977E: pop     ecx
0x9F977F: retn

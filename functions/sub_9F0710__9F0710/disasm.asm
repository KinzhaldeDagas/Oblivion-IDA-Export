0x9F0710: push    offset aMasterSkills; "Master Skills: "
0x9F0715: push    offset aSmiscmasterski; "sMiscMasterSkills"
0x9F071A: mov     ecx, offset unk_B384B0
0x9F071F: call    GameSetting_ConstrAndReg
0x9F0724: push    offset sub_A21080; void (__cdecl *)()
0x9F0729: call    _atexit
0x9F072E: pop     ecx
0x9F072F: retn

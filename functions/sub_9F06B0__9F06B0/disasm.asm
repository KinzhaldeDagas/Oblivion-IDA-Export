0x9F06B0: push    offset aApprenticeSkil; "Apprentice Skills: "
0x9F06B5: push    offset aSmiscapprentic; "sMiscApprenticeSkills"
0x9F06BA: mov     ecx, offset sMiscApprenticeSkills
0x9F06BF: call    GameSetting_ConstrAndReg
0x9F06C4: push    offset sub_A21050; void (__cdecl *)()
0x9F06C9: call    _atexit
0x9F06CE: pop     ecx
0x9F06CF: retn

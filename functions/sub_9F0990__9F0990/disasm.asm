0x9F0990: push    offset aArtifactsFound; "Artifacts Found: "
0x9F0995: push    offset aSmiscartifacts; "sMiscArtifactsFound"
0x9F099A: mov     ecx, offset sMiscArtifactsFound
0x9F099F: call    GameSetting_ConstrAndReg
0x9F09A4: push    offset sub_A211C0; void (__cdecl *)()
0x9F09A9: call    _atexit
0x9F09AE: pop     ecx
0x9F09AF: retn

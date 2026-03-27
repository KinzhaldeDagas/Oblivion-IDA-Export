0x9E2930: push    0FAh ; 'ú'
0x9E2935: push    offset aIsoullevelvalu; "iSoulLevelValuePetty"
0x9E293A: mov     ecx, offset dword_B35B44
0x9E293F: call    GameSetting_ConstrAndReg
0x9E2944: push    offset sub_A1B750; void (__cdecl *)()
0x9E2949: call    _atexit
0x9E294E: pop     ecx
0x9E294F: retn

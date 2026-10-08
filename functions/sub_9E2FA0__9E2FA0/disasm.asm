0x9E2FA0: push    offset aWilderness; "Wilderness"
0x9E2FA5: push    offset aSdefaultcellna; "sDefaultCellName"
0x9E2FAA: mov     ecx, 0B35C0Ch; self
0x9E2FAF: call    GameSetting_ConstrAndReg; 3DTheft decode: Oblivion registers sDefaultCellName as "Wilderness". For plugin wilderness checks, unnamed exterior cells should be treated as wilderness rather than using worldspace fallback names.
0x9E2FB4: push    offset sub_A1BAD0; void (__cdecl *)()
0x9E2FB9: call    _atexit
0x9E2FBE: pop     ecx
0x9E2FBF: retn

0x9F2DC0: push    offset aYouHaveContrac; "You have contracted"
0x9F2DC5: push    offset aScontracteddis; "sContractedDisease"
0x9F2DCA: mov     ecx, offset sContractedDisease
0x9F2DCF: call    GameSetting_ConstrAndReg
0x9F2DD4: push    offset sub_A22310; void (__cdecl *)()
0x9F2DD9: call    _atexit
0x9F2DDE: pop     ecx
0x9F2DDF: retn

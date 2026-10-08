0x9F68B0: push    offset aComplexion; "Complexion"
0x9F68B5: push    offset aScomplexion; "sComplexion"
0x9F68BA: mov     ecx, offset g_gameSetting_sComplexion; self
0x9F68BF: call    GameSetting_ConstrAndReg; Registers UI label sComplexion. In this menu the control is backed by FaceGen control index 1 (sex-morph delta); it is distinct from TESNPC::hairLength.
0x9F68C4: push    offset sub_A22660; void (__cdecl *)()
0x9F68C9: call    _atexit
0x9F68CE: pop     ecx
0x9F68CF: retn

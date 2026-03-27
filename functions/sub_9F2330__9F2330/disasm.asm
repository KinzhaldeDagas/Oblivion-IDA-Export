0x9F2330: push    offset aYouCanTFastTra; "You can't fast travel while taking heal"...
0x9F2335: push    offset aSfasttravelnot; "sFastTravelNoTravelHealthDamage"
0x9F233A: mov     ecx, offset dword_B38B58
0x9F233F: call    GameSetting_ConstrAndReg
0x9F2344: push    offset sub_A21DD0; void (__cdecl *)()
0x9F2349: call    _atexit
0x9F234E: pop     ecx
0x9F234F: retn

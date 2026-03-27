0x9F0630: push    offset aPlacesDiscover; "Places Discovered: "
0x9F0635: push    offset aSmiscnumplaces; "sMiscNumPlacesDiscovered"
0x9F063A: mov     ecx, offset sMiscNumPlacesDiscovered
0x9F063F: call    GameSetting_ConstrAndReg
0x9F0644: push    offset sub_A21010; void (__cdecl *)()
0x9F0649: call    _atexit
0x9F064E: pop     ecx
0x9F064F: retn

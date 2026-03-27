0x9EC640: push    32h ; '2'
0x9EC642: push    offset aIpersuasionout; "iPersuasionOuter"
0x9EC647: mov     ecx, offset iPersuasionOuter
0x9EC64C: call    GameSetting_ConstrAndReg
0x9EC651: push    offset sub_A1F830; void (__cdecl *)()
0x9EC656: call    _atexit
0x9EC65B: pop     ecx
0x9EC65C: retn

0x9F1320: push    offset aFileDoesNotExi; "File does not exist"
0x9F1325: push    offset aSfilenotfound; "sFileNotFound"
0x9F132A: mov     ecx, offset dword_B387B0
0x9F132F: call    GameSetting_ConstrAndReg
0x9F1334: push    offset sub_A21680; void (__cdecl *)()
0x9F1339: call    _atexit
0x9F133E: pop     ecx
0x9F133F: retn

0x9F0910: push    offset aTimesCured; "Times Cured: "
0x9F0915: push    offset aSmisctimescure; "sMiscTimesCured"
0x9F091A: mov     ecx, offset unk_B38530
0x9F091F: call    GameSetting_ConstrAndReg
0x9F0924: push    offset sub_A21180; void (__cdecl *)()
0x9F0929: call    _atexit
0x9F092E: pop     ecx
0x9F092F: retn

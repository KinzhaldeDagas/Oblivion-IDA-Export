0x983468: push    0Ah; Radix
0x98346A: push    0; EndPtr
0x98346C: push    [esp+8+Str]; Str
0x983470: call    _strtol
0x983475: add     esp, 0Ch
0x983478: retn

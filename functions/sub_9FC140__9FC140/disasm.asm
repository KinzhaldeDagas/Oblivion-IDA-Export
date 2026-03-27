0x9FC140: fld     ds:flt_A57F50
0x9FC146: push    ecx
0x9FC147: fstp    [esp+4+var_4]; float
0x9FC14A: push    offset aFsubtitlespeac; "fSubtitleSpeachDelay"
0x9FC14F: mov     ecx, offset unk_B3B3D0
0x9FC154: call    GameSetting_ConstrAndReg_float
0x9FC159: push    offset sub_A24B80; void (__cdecl *)()
0x9FC15E: call    _atexit
0x9FC163: pop     ecx
0x9FC164: retn

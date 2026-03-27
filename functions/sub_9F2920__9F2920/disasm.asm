0x9F2920: push    offset aVideo; "Video"
0x9F2925: push    offset aSvideo; "sVideo"
0x9F292A: mov     ecx, offset unk_B38CD0
0x9F292F: call    GameSetting_ConstrAndReg
0x9F2934: push    offset sub_A220C0; void (__cdecl *)()
0x9F2939: call    _atexit
0x9F293E: pop     ecx
0x9F293F: retn

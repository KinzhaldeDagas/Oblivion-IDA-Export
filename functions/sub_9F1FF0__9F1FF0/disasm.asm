0x9F1FF0: push    1
0x9F1FF2: push    offset aIallowrecharge; "iAllowRechargeDuringCombat"
0x9F1FF7: mov     ecx, offset dword_B38A88
0x9F1FFC: call    GameSetting_ConstrAndReg
0x9F2001: push    offset sub_A21C30; void (__cdecl *)()
0x9F2006: call    _atexit
0x9F200B: pop     ecx
0x9F200C: retn

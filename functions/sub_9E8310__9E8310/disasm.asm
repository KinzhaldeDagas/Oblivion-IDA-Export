0x9E8310: push    32h ; '2'
0x9E8312: push    offset aIcurrenttarget; "iCurrentTargetBonus"
0x9E8317: mov     ecx, offset dword_B36C70
0x9E831C: call    GameSetting_ConstrAndReg
0x9E8321: push    offset sub_A1E000; void (__cdecl *)()
0x9E8326: call    _atexit
0x9E832B: pop     ecx
0x9E832C: retn

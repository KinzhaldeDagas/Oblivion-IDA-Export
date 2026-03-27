0x9F2700: push    offset aYouHaveRunOu_0; "You have run out of lockpicks."
0x9F2705: push    offset aSoutoflockpick; "sOutOfLockpicks"
0x9F270A: mov     ecx, offset dword_B38C48
0x9F270F: call    GameSetting_ConstrAndReg
0x9F2714: push    offset sub_A21FB0; void (__cdecl *)()
0x9F2719: call    _atexit
0x9F271E: pop     ecx
0x9F271F: retn

0x9F0FC0: push    offset aThatSaveIsNoLo; "That save is no longer available."
0x9F0FC5: push    offset aSsavenotavaila; "sSaveNotAvailable"
0x9F0FCA: mov     ecx, offset dword_B386D8
0x9F0FCF: call    GameSetting_ConstrAndReg
0x9F0FD4: push    offset sub_A214D0; void (__cdecl *)()
0x9F0FD9: call    _atexit
0x9F0FDE: pop     ecx
0x9F0FDF: retn

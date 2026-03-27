0x9F0F00: push    offset aDoorIsLockedAn; "Door is locked and you don't have a loc"...
0x9F0F05: push    offset aSnolockpick; "sNoLockPick"
0x9F0F0A: mov     ecx, offset dword_B386A8
0x9F0F0F: call    GameSetting_ConstrAndReg
0x9F0F14: push    offset sub_A21470; void (__cdecl *)()
0x9F0F19: call    _atexit
0x9F0F1E: pop     ecx
0x9F0F1F: retn

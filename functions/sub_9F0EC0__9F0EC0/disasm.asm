0x9F0EC0: push    offset aDoorIsLockedYo; "Door is locked you don't have the key o"...
0x9F0EC5: push    offset aSnolockpickkey; "sNoLockPickKey"
0x9F0ECA: mov     ecx, offset dword_B38698
0x9F0ECF: call    GameSetting_ConstrAndReg
0x9F0ED4: push    offset sub_A21450; void (__cdecl *)()
0x9F0ED9: call    _atexit
0x9F0EDE: pop     ecx
0x9F0EDF: retn

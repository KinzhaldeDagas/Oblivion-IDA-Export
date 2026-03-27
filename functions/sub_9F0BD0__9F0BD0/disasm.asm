0x9F0BD0: push    offset aMagic_1; "Magic"
0x9F0BD5: push    offset aSmagicname; "sMagicName"
0x9F0BDA: mov     ecx, offset dword_B385E0
0x9F0BDF: call    GameSetting_ConstrAndReg
0x9F0BE4: push    offset sub_A212E0; void (__cdecl *)()
0x9F0BE9: call    _atexit
0x9F0BEE: pop     ecx
0x9F0BEF: retn
